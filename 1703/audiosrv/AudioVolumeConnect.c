/*
 * XREFs of AudioVolumeConnect @ 0x18002E690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18001E170 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeConnect(__int64 a1, const unsigned __int16 *a2, struct CVolumeStrip **a3)
{
  __int64 (__fastcall *v5)(CVolumeProvider *, const unsigned __int16 *, struct IUnknown **); // rax
  int DeviceVolumeStrip; // eax
  unsigned int v7; // ebx
  struct CVolumeStrip *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, a2);
  }
  *a3 = 0LL;
  v9 = 0LL;
  v5 = *(__int64 (__fastcall **)(CVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(*(_QWORD *)g_pVolumeProvider
                                                                                                 + 48LL);
  if ( v5 == CVolumeProvider::GetDeviceVolumeStrip )
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, (struct IUnknown **)&v9);
  else
    DeviceVolumeStrip = v5(g_pVolumeProvider, a2, (struct IUnknown **)&v9);
  v7 = DeviceVolumeStrip;
  if ( DeviceVolumeStrip < 0 )
  {
    AudSrvTraceLoggingErrorHelper("AudioVolumeConnect", 0x187u, DeviceVolumeStrip);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, v9);
    }
    *a3 = v9;
  }
  return v7;
}
