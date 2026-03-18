/*
 * XREFs of ACPICMExperienceButtonHandleEvent @ 0x1C0016F58
 * Callers:
 *     ACPICMButtonNotify @ 0x1C0016464 (ACPICMButtonNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPISetDeviceWorker @ 0x1C0042E9C (ACPISetDeviceWorker.c)
 */

__int64 __fastcall ACPICMExperienceButtonHandleEvent(_QWORD *a1, int a2)
{
  char v3; // r11
  __int64 v4; // rdx
  int v5; // eax
  char v6; // al
  void *v7; // r8
  void *v8; // r10
  __int64 v9; // r9

  v3 = a2;
  v4 = 2LL;
  v5 = a2 - 2;
  if ( !v5 )
    return ACPISetDeviceWorker(a1, v4);
  if ( v5 == 126 )
  {
    v4 = 1LL;
    return ACPISetDeviceWorker(a1, v4);
  }
  v6 = 0;
  v7 = &unk_1C005B1F0;
  v8 = &unk_1C005B1F0;
  if ( a1 )
  {
    v9 = a1[1];
    v6 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)a1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)a1[71];
    }
  }
  return WPP_RECORDER_SF_Dqss(
           WPP_GLOBAL_Control->DeviceExtension,
           2,
           17,
           25,
           (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
           v3,
           v6,
           (__int64)v7,
           (__int64)v8);
}
