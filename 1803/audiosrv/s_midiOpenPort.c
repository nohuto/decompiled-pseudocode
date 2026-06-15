/*
 * XREFs of s_midiOpenPort @ 0x1800C7410
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800C71D8 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x1801077A8 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 */

__int64 __fastcall s_midiOpenPort(RPC_BINDING_HANDLE BindingHandle, unsigned __int16 *a2, HANDLE *a3)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rsi
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  signed int v10; // ebx
  int KsMidiDeviceInfo; // eax
  unsigned int v12; // edx
  int v13; // eax
  char *v14; // r14
  HRESULT v15; // eax
  RPC_STATUS v16; // eax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  unsigned __int16 *v20; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE FilterHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-B0h] BYREF
  void *ConnectionHandle; // [rsp+58h] [rbp-A8h] BYREF
  $58C2C1BF6568EE28BD9B872E6BA03976 Connect; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+A8h] [rbp-58h]
  GUID v26; // [rsp+B8h] [rbp-48h]
  GUID v27; // [rsp+C8h] [rbp-38h]
  GUID v28; // [rsp+D8h] [rbp-28h]
  struct _TP_TIMER *pv[6]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+160h] [rbp+60h] BYREF
  unsigned int Pid; // [rsp+168h] [rbp+68h] BYREF

  v4 = -1LL;
  v5 = 0LL;
  FilterHandle = (HANDLE)-1LL;
  v20 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)BindingHandle,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"s_midiOpenPort");
  if ( a3 )
  {
    KsMidiDeviceInfo = GetKsMidiDeviceInfo(a2, &v20, &v30);
    v5 = v20;
    v10 = KsMidiDeviceInfo;
    if ( KsMidiDeviceInfo >= 0 )
    {
      v13 = FilterInstantiate2(v20, v12, &FilterHandle);
      v14 = (char *)FilterHandle;
      v10 = v13;
      if ( v13 >= 0 )
      {
        memset_0(&Connect, 0, 0x88uLL);
        *(&Connect.Interface.Alignment + 2) = 0LL;
        *(&Connect.Medium.Alignment + 2) = 0LL;
        Connect.PinToHandle = 0LL;
        Connect.Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        Connect.PinId = v30;
        Connect.Priority.PriorityClass = 0x40000000;
        Connect.Priority.PrioritySubClass = 0x40000000;
        Connect.Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        v25 = 64;
        v27 = GUID_1d262760_e957_11cf_a5d6_28db04c10000;
        v26 = GUID_e725d360_62cc_11cf_a5d6_28db04c10000;
        v28 = GUID_0f6417d6_c318_11d0_a43f_00a0c9223196;
        v15 = KsCreatePin2(v14, &Connect, 0xC0000000, &ConnectionHandle);
        v10 = v15;
        if ( v15 > 0 )
          v10 = (unsigned __int16)v15 | 0x80070000;
        if ( v10 >= 0 )
        {
          v16 = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
          if ( v16 )
          {
            if ( v16 > 0 )
              v10 = (unsigned __int16)v16 | 0x80070000;
            else
              v10 = v16;
          }
          else if ( !RpcImpersonateClient(BindingHandle) )
          {
            v4 = (__int64)OpenProcess(0x40u, 0, Pid);
            if ( v4
              && (CurrentProcess = GetCurrentProcess(),
                  DuplicateHandle(CurrentProcess, ConnectionHandle, (HANDLE)v4, &TargetHandle, 0xC0000000, 0, 1u)) )
            {
              *a3 = TargetHandle;
            }
            else
            {
              LastError = GetLastError();
              v10 = LastError;
              if ( LastError > 0 )
                v10 = (unsigned __int16)LastError | 0x80070000;
            }
            RpcRevertToSelf();
          }
        }
      }
      if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v14);
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle((HANDLE)v4);
    }
  }
  else
  {
    v10 = -2147467261;
  }
  CoTaskMemFree(v5);
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("s_midiOpenPort", 216, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
