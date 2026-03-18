/*
 * XREFs of NVMeRequestComplete @ 0x1C0002980
 * Callers:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0005200 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C000AEC0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     NVMeCompletionDpcRoutine @ 0x1C0011320 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v5; // ecx
  __int64 result; // rax
  _DWORD *v7; // r9
  unsigned int v8; // edx

  v2 = a1 + 568;
  if ( a2 != a1 + 568 )
  {
    v5 = 0;
    while ( 1 )
    {
      result = 104LL * v5 + a1 + 672;
      if ( a2 == result )
        break;
      if ( ++v5 >= 4 )
        return StorPortNotification(0LL, a1, a2, a1);
    }
  }
  if ( a2 == v2 )
  {
    v7 = (_DWORD *)(a1 + 560);
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      result = 104LL * v8 + a1 + 672;
      if ( a2 == result )
        break;
      if ( ++v8 >= 4 )
        return result;
    }
    result = v8;
    v7 = (_DWORD *)(104LL * v8 + a1 + 664);
  }
  if ( v7 )
    *v7 = 0;
  return result;
}
