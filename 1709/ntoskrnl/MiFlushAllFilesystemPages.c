/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140218D3C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x14012069C (MiMakeSystemAddressValidSystemWs.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x14011BF90 (CcForEachPartition.c)
 *     MiIsWorkingSetTrimThread @ 0x140126894 (MiIsWorkingSetTrimThread.c)
 *     MiEmptyAllWorkingSets @ 0x14021D424 (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140388B10);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_14038A3C4);
          result = qword_14038B9F0;
          if ( qword_14038B980 != qword_14038B9F0 )
          {
            v4 = dword_14038A35C;
            do
            {
              KeSetEvent(&stru_14038A3C8, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_14038B9F0;
              if ( qword_14038B980 == qword_14038B9F0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_14038A35C;
              if ( v4 != dword_14038A35C )
              {
                v4 = dword_14038A35C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_14038A3C4);
        }
      }
    }
  }
  return result;
}
