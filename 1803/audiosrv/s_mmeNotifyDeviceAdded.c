/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x1800DC700
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1800DC1B8 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800DC450 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceAdded(__int64 a1, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  DWORD LastError; // ebx
  struct _TP_TIMER **v5; // rax
  __int64 v6; // r8
  void *v7; // rdx
  void *v8; // rcx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF

  LastError = 0;
  if ( !(unsigned int)IsMmeNotifyDeviceAddedSupported() )
    return 1LL;
  v5 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v3,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v5[1], v6, (struct _TP_TIMER *)L"s_mmeNotifyDeviceAdded");
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v8, v7, &v11) )
  {
    if ( !v11 || (MmeOnDeviceAdded(a2), !v11) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
