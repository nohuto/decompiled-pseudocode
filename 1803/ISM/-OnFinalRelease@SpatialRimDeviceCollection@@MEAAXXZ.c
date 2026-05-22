/*
 * XREFs of ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180070FF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18006D864 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18006FD8C (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180070404 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     GetHolographicInputSession @ 0x180070758 (GetHolographicInputSession.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x18007197C (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::OnFinalRelease(SpatialRimDeviceCollection *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  const struct TraceSessionConfig *HolographicInputSession; // rax
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7[6]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v8[7]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v9[24]; // [rsp+A8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 )
    {
      RawInputProvidersTracing::Instance();
      v3 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
        TlgWrite((TraceLoggingHProvider)v3, &unk_18010F32B, 0LL, 0LL, 2u, &pData);
    }
  }
  SpatialRimDeviceCollection::DisableHeadEventHandler(this);
  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v7);
  v5 = TracingSessionHelper::StartOrStop(HolographicInputSession, 0);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v5);
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(v9);
  std::wstring::_Tidy_deallocate(v8);
  std::wstring::_Tidy_deallocate(v7);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 347) + 24LL))(*((_QWORD *)this + 347));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
  RIMDeviceCollection::Close(this);
}
