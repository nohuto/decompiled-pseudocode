/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035300
 * Callers:
 *     wWinMain @ 0x14001BB30 (wWinMain.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x14001B9EC (-InternalRelease@-$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     TraceLoggingRegisterEx @ 0x14001BFBC (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x140035CDC (-WriteSqmInfo@CAudioDGModule@@AEAAXXZ.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rdi
  HRESULT v3; // ebx
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  unsigned int v6; // eax
  char *v7; // rcx
  CAudioDGModule *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  TLG_PENABLECALLBACK v11; // rdx
  PVOID v12; // r8
  const struct _TlgProvider_t *v13; // rcx
  _QWORD *v14; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+3Ch] [rbp-35h] BYREF
  int v18; // [rsp+40h] [rbp-31h] BYREF
  int v19; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  int *v22; // [rsp+78h] [rbp+7h]
  int v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  int *v25; // [rsp+88h] [rbp+17h]
  int v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+94h] [rbp+23h]
  int *v28; // [rsp+98h] [rbp+27h]
  int v29; // [rsp+A0h] [rbp+2Fh]
  int v30; // [rsp+A4h] [rbp+33h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
  }
  v2 = qword_14008A020;
  v3 = 0;
  v4 = qword_14008A028;
  while ( v2 < v4 && !v3 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 40LL);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = qword_14008A028;
      }
    }
    v2 += 8LL;
  }
  if ( *((_BYTE *)this + 96) )
    Sleep(*((_DWORD *)this + 23));
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    NtDeleteWnfStateName(g_hSqmSession.Data4);
    g_DeviceGraphWnfStateNameCreated = 0;
    *(_QWORD *)g_hSqmSession.Data4 = 0LL;
  }
  if ( fRpcStarted )
  {
    v6 = RpcServerUnregisterIfEx(&unk_140066750, 0LL, 1);
    if ( v6
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids, v6);
    }
    fRpcStarted = 0;
  }
  v7 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  CleanupDeviceAPI();
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease((volatile signed __int32 **)&qword_140089FB8);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  fPending = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &fPending, 4LL, 0LL);
  CAudioDGModule::WriteSqmInfo(v8);
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    qword_14008A160 = (__int64)qword_14008A170;
    byte_14008A168 = 1;
    TraceLoggingRegisterEx(qword_14008A170, v11, v12);
    dword_14008A16C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_14008A158 + 8))(&qword_14008A158);
    InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_14008A158);
  }
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 4u )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v17 = g_EndpointStatistics;
    v22 = &v17;
    v18 = *(&g_EndpointStatistics + 1);
    v25 = &v18;
    v19 = dword_140089F10;
    v28 = &v19;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    TlgWrite(v13, &unk_1400721EA, v9, v10, 5u, &pData);
  }
  CoUninitialize();
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
    v14 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v14 != &WPP_GLOBAL_Control && (*((_DWORD *)v14 + 7) & 0x40000) != 0 && *((_BYTE *)v14 + 25) >= 2u )
      WPP_SF_D(v14[2], 31LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids, (unsigned int)v3);
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PostMessageLoop", 0x243u, v3);
  }
  return (unsigned int)v3;
}
