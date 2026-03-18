/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1402114A0
 * Callers:
 *     MiMakeSystemAddressValidSystemWs @ 0x140004860 (MiMakeSystemAddressValidSystemWs.c)
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x14002FDA4 (CcNotifyWriteBehindInternal.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiEmptyAllWorkingSets @ 0x140214E74 (MiEmptyAllWorkingSets.c)
 */

unsigned __int64 __fastcall MiFlushAllFilesystemPages(int a1)
{
  __int64 (__fastcall *Flink)(__int64); // rdx
  unsigned __int64 result; // rax
  int v3; // edi
  unsigned int i; // ebx

  Flink = (__int64 (__fastcall *)(__int64))KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = (unsigned __int64)KeBalanceSetManager;
    if ( (char *)Flink != (char *)KeBalanceSetManager )
    {
      result = (unsigned __int64)MiPartitionWorkingSetManager;
      if ( (char *)Flink != (char *)MiPartitionWorkingSetManager )
      {
        result = (unsigned __int64)MiModifiedPageWriter;
        if ( (char *)Flink != (char *)MiModifiedPageWriter )
        {
          result = (unsigned __int64)MiMappedPageWriter;
          if ( Flink != MiMappedPageWriter )
          {
            if ( a1 == 1 )
            {
              result = (unsigned int)_InterlockedIncrement(&dword_14036C918);
              if ( (_DWORD)result != 1 )
                return result;
              MiEmptyAllWorkingSets(&MiSystemPartition);
            }
            _InterlockedIncrement(&dword_140380534);
            result = qword_140381A70;
            if ( qword_140381A00 != qword_140381A70 )
            {
              v3 = dword_1403804CC;
              for ( i = 0; i < 0xFF; ++i )
              {
                KeSetEvent(&stru_140380538, 0, 0);
                CcNotifyWriteBehindInternal((struct _KEVENT *)&CcSystemPartition, 2);
                result = qword_140381A70;
                if ( qword_140381A00 == qword_140381A70 )
                  break;
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
                result = (unsigned int)dword_1403804CC;
                if ( v3 != dword_1403804CC )
                {
                  v3 = dword_1403804CC;
                  i = -1;
                }
              }
            }
            _InterlockedDecrement(&dword_140380534);
          }
        }
      }
    }
  }
  return result;
}
