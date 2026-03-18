/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C000B52C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  LONG result; // eax
  LONG v3; // r8d

  result = WPP_RECORDER_SF_q(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             19,
             38,
             (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
             a1);
  v3 = *(_DWORD *)(a1 + 1024);
  if ( v3 )
  {
    result = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1016), 0, v3, 0);
    *(_DWORD *)(a1 + 1024) = 0;
  }
  return result;
}
