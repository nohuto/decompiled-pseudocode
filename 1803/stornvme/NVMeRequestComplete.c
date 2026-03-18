/*
 * XREFs of NVMeRequestComplete @ 0x1C00028FC
 * Callers:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0005284 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C000B2C0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     NVMeCompletionDpcRoutine @ 0x1C00117F0 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
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

  v2 = a1 + 600;
  if ( a2 != a1 + 600 )
  {
    v5 = 0;
    while ( 1 )
    {
      result = 104LL * v5 + a1 + 704;
      if ( a2 == result )
        break;
      if ( ++v5 >= 4 )
        return StorPortNotification(0LL, a1, a2, a1);
    }
  }
  if ( a2 == v2 )
  {
    v7 = (_DWORD *)(a1 + 592);
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      result = 104LL * v8 + a1 + 704;
      if ( a2 == result )
        break;
      if ( ++v8 >= 4 )
        return result;
    }
    result = v8;
    v7 = (_DWORD *)(104LL * v8 + a1 + 696);
  }
  if ( v7 )
    *v7 = 0;
  return result;
}
