/*
 * XREFs of PepPerfCheckComplete @ 0x1C00039C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 */

void __fastcall PepPerfCheckComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( !PepSkipPerfCheckNotification )
  {
    v3 = a2;
    v2 = PoFxProcessorNotification(a1, 33LL, &v3);
    if ( v2 < 0 )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x13u,
        (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids,
        v2);
      PepSkipPerfCheckNotification = 1;
    }
  }
}
