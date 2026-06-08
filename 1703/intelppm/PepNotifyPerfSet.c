/*
 * XREFs of PepNotifyPerfSet @ 0x1C000D918
 * Callers:
 *     PepPerfControlHandler @ 0x1C000D9B0 (PepPerfControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyPerfSet(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+28h] [rbp-30h]
  _DWORD v10[6]; // [rsp+30h] [rbp-28h] BYREF

  v10[4] = a5;
  v10[0] = a2;
  v10[1] = a3;
  v10[3] = a6;
  v10[2] = a4;
  v6 = PoFxProcessorNotification(a1, 13LL, v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x17u,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids,
      v9);
  }
  return v7;
}
