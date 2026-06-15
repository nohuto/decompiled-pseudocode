/*
 * XREFs of AudioVolumeConnect @ 0x180008720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180008FB0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioVolumeConnect(__int64 a1, const unsigned __int16 *a2, struct IVolumeStrip **a3)
{
  struct _TP_TIMER *v5; // rcx
  void *v6; // rbx
  __int64 v7; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 (__fastcall *v9)(CVolumeProvider *__hidden, const unsigned __int16 *, struct IVolumeStrip **); // rax
  int DeviceVolumeStrip; // eax
  unsigned int v11; // ebx
  struct IVolumeStrip *v12; // rax
  struct IVolumeStrip *v13; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-50h] BYREF
  int v16; // [rsp+28h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-40h]
  PTP_TIMER pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v20; // [rsp+50h] [rbp-20h]
  void *v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  WINBOOL fPending; // [rsp+A8h] [rbp+38h] BYREF
  struct IVolumeStrip *v26; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+48h] BYREF

  v17 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v16 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&pftDueTime);
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v5;
  CurrentThreadId = GetCurrentThreadId();
  v20 = L"AudioVolumeConnect";
  v21 = v6;
  v22 = 0;
  v23 = 0;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_47f4b705a74e3dc9170912854ed06807_Traceguids, a2);
  }
  *a3 = 0LL;
  v26 = 0LL;
  v9 = *(__int64 (__fastcall **)(CVolumeProvider *__hidden, const unsigned __int16 *, struct IVolumeStrip **))(*(_QWORD *)g_pVolumeProvider + 48LL);
  if ( v9 == CVolumeProvider::GetDeviceVolumeStrip )
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, &v26);
  else
    DeviceVolumeStrip = v9(g_pVolumeProvider, a2, &v26);
  v11 = DeviceVolumeStrip;
  if ( DeviceVolumeStrip < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)(unsigned int)DeviceVolumeStrip,
      pftDueTime.dwLowDateTime);
    v13 = v26;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_47f4b705a74e3dc9170912854ed06807_Traceguids, v26);
    }
    v12 = v26;
    v13 = 0LL;
    v26 = 0LL;
    *a3 = v12;
    v11 = 0;
  }
  if ( v13 )
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v22 && v21 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 8LL))(v21);
  return v11;
}
