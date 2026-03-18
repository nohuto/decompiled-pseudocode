/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140255BA8
 * Callers:
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140004490 (CcForEachPartition.c)
 *     MiIsWorkingSetTrimThread @ 0x1400C7D38 (MiIsWorkingSetTrimThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiEmptyAllWorkingSets @ 0x1402597C0 (MiEmptyAllWorkingSets.c)
 */

__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // rdx
  int v2; // r8d
  unsigned int v3; // ebx
  int v4; // edi

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    v3 = 0;
    if ( !(_DWORD)result )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)v1 != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( v1 != MiMappedPageWriter )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_1403CBDA8);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_1403CE244);
          result = qword_1403CFCB0;
          if ( qword_1403CFC40 != qword_1403CFCB0 )
          {
            v4 = dword_1403CE1DC;
            do
            {
              KeSetEvent(&stru_1403CE248, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_1403CFCB0;
              if ( qword_1403CFC40 == qword_1403CFCB0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_1403CE1DC;
              if ( v4 != dword_1403CE1DC )
              {
                v4 = dword_1403CE1DC;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_1403CE244);
        }
      }
    }
  }
  return result;
}
