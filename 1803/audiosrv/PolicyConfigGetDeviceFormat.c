/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180043DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180049610 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, const unsigned __int16 *a2, unsigned int a3, _QWORD *a4)
{
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int (*v9)(CPolicyConfig *__hidden, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rax
  int DeviceFormat; // eax
  int v11; // ebx
  void *v12; // rax
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+78h] [rbp+10h] BYREF

  Src = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormat");
  *a4 = 0LL;
  v9 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig
                                                                                                  + 32LL);
  if ( v9 == CPolicyConfig::GetDeviceFormat )
    DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, a2, a3, (struct tWAVEFORMATEX **)&Src);
  else
    DeviceFormat = ((__int64 (__fastcall *)(CPolicyConfig *, const unsigned __int16 *, _QWORD, void **))v9)(
                     g_PolicyConfig,
                     a2,
                     a3,
                     &Src);
  v11 = DeviceFormat;
  if ( DeviceFormat >= 0 )
  {
    v12 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v12;
    if ( v12 )
      memcpy_0(v12, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v11 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 0x19E0u, v11);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v11;
}
