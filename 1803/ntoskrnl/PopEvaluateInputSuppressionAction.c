/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x140613CE0
 * Callers:
 *     PopBroadcastInputSuppressionCallback @ 0x140613C70 (PopBroadcastInputSuppressionCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x140655D30 (PopExternalMonitorUpdatedWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopBroadcastSessionInfo @ 0x14064E8EC (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x14076A11C (PopTraceInputSuppressionActionUpdate.c)
 */

void PopEvaluateInputSuppressionAction()
{
  char v0; // bp
  bool v1; // di
  bool v2; // si
  bool v3; // r14
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v10; // [rsp+48h] [rbp-40h] BYREF
  BOOL v11; // [rsp+58h] [rbp-30h]

  if ( PopPlatformAoAc )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
    PopAcquirePolicyLock();
    v0 = PopConsoleExternalDisplayConnected;
    v1 = PopLidOpened == 0;
    v2 = dword_1403AAA2C == 1;
    v3 = PopConsoleDisplayState == 0;
    if ( PopErrataReportingIncorrectLidState
      || PopLidOpened
      || dword_1403AAA2C != 1
      || PopConsoleExternalDisplayConnected
      || (v4 = 1, PopConsoleDisplayState) )
    {
      v4 = 0;
    }
    if ( !PopEnableInputSuppression && v4 == 1 )
      v4 = 2;
    PopReleasePolicyLock();
    if ( PopInputSuppressionRequired != v4 )
    {
      LOBYTE(v8) = v3;
      PopInputSuppressionRequired = v4;
      LOBYTE(v7) = v0;
      LOBYTE(v5) = v2;
      LOBYTE(v6) = v1;
      PopTraceInputSuppressionActionUpdate(v6, v5, v7, v8);
      ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
      if ( PopEnableInputSuppression )
      {
        Buffer = PopInputSuppressionRequired == 1;
        ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
        v11 = Buffer;
        v10 = GUID_INPUT_SUPPRESS_REQUESTED;
        PopBroadcastSessionInfo(0LL, 20LL, &v10);
      }
    }
    PopReleaseRwLock((ULONG_PTR)&PopInputSuppressionLock);
  }
}
