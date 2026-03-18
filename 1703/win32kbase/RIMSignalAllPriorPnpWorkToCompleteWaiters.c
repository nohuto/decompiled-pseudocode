/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00940C4
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 */

int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  int result; // eax
  LONG v3; // r8d

  result = WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x13u,
             0x26u,
             (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
             a1);
  v3 = *(_DWORD *)(a1 + 1024);
  if ( v3 )
  {
    result = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1016), 0, v3, 0);
    *(_DWORD *)(a1 + 1024) = 0;
  }
  return result;
}
