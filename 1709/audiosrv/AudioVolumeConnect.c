/*
 * XREFs of AudioVolumeConnect @ 0x180008FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800091D0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AudioVolumeConnect(__int64 a1, const unsigned __int16 *a2, struct IVolumeStrip **a3)
{
  DWORD v5; // edi
  void *v6; // rcx
  __int64 (__fastcall *v7)(CVolumeProvider *__hidden, const unsigned __int16 *, struct IVolumeStrip **); // rax
  int DeviceVolumeStrip; // eax
  unsigned int v9; // ebx
  struct IVolumeStrip *v10; // rax
  struct IVolumeStrip *v11; // rcx
  DWORD DueTime; // [rsp+20h] [rbp-50h]
  void *phNewTimer[2]; // [rsp+40h] [rbp-30h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-20h]
  const wchar_t *v16; // [rsp+58h] [rbp-18h]
  void *v17; // [rsp+60h] [rbp-10h]
  char v18; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  WINBOOL fPending; // [rsp+A8h] [rbp+38h] BYREF
  struct IVolumeStrip *v21; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+48h] BYREF

  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = (void *)*((_QWORD *)Context + 1);
  phNewTimer[0] = 0LL;
  phNewTimer[1] = v6;
  v17 = g_AudioHealthMonitor;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioVolumeConnect";
  v18 = 0;
  if ( v5 >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, v5, 0, 0x20u);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids, a2);
  }
  *a3 = 0LL;
  v21 = 0LL;
  v7 = *(__int64 (__fastcall **)(CVolumeProvider *__hidden, const unsigned __int16 *, struct IVolumeStrip **))(*(_QWORD *)g_pVolumeProvider + 48LL);
  if ( v7 == CVolumeProvider::GetDeviceVolumeStrip )
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, &v21);
  else
    DeviceVolumeStrip = v7(g_pVolumeProvider, a2, &v21);
  v9 = DeviceVolumeStrip;
  if ( DeviceVolumeStrip < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)(unsigned int)DeviceVolumeStrip,
      DueTime);
    v11 = v21;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids, v21);
    }
    v10 = v21;
    v11 = 0LL;
    v21 = 0LL;
    v9 = 0;
    *a3 = v10;
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v11 + 16LL))(v11);
  CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)phNewTimer);
  return v9;
}
