/*
 * XREFs of PepNotifyPerfSetState @ 0x1C000DED0
 * Callers:
 *     PepPerfStateControlHandler @ 0x1C000E010 (PepPerfStateControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyPerfSetState(__int64 a1, char a2, char a3, char a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]
  char v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+49h] [rbp+11h]
  char v10; // [rsp+4Ah] [rbp+12h]

  v10 = a2;
  v8 = a3;
  v9 = a4;
  v4 = PoFxProcessorNotification(a1, 43LL, &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x26u,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      v7);
  }
  return v5;
}
