/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x1800DC840
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1800DC1B8 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x1800DC518 (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x1800FC6B8 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  __int64 v5; // rcx
  DWORD LastError; // ebx
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  void *v9; // rdx
  void *v10; // rcx
  DynamicAudioEndpointManager *v11; // rcx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  LastError = 0;
  if ( !(unsigned int)IsMmeNotifyDeviceStateChangedSupported() )
    return 1LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v5,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"s_mmeNotifyDeviceStateChanged");
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v10, v9, &v14) )
  {
    if ( !v14 || (MmeOnDeviceStateChanged(a2), DynamicAudioEndpointManager::OnDeviceStateChanged(v11, a2, a3), !v14) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
