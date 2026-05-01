/*
 * XREFs of ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180023278
 * Callers:
 *     ??1?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800233F4 (--1-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x1800234E0 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x1800238B4 (-StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180023A00 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180023DBC (-StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180025C50 (-NotifyFailure@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800261F4 (-Stop@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026670 (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ?ReportStopActivity@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800267B4 (-ReportStopActivity@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTa.c)
 * Callees:
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     atexit @ 0x18002916C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *TileDataLayerItemWrappersLogging::Provider(void)
{
  _QWORD *v0; // rbx
  PVOID v1; // r8
  ULONGLONG *v2; // r9
  GUID v3; // xmm0
  WINBOOL v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-30h] BYREF
  GUID ProviderId; // [rsp+30h] [rbp-28h] BYREF

  InitOnceBeginInitialize(&`TileDataLayerItemWrappersLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6);
  if ( v5 )
  {
    v6 = &qword_18003BCE0;
    qword_18003BCE0 = (__int64)&wil::TraceLoggingProvider::`vftable';
    CallbackContext = &`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_512f5c3e3add62dd1009c3f0e0a916f8_::_lambda_invoker_cdecl_);
    v0 = CallbackContext;
    qword_18003BCE8 = (__int64)CallbackContext;
    byte_18003BCF0 = 1;
    v1 = CallbackContext;
    v2 = (ULONGLONG *)((char *)CallbackContext + 32);
    v3 = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
    *((_QWORD *)CallbackContext + 5) = 0LL;
    v0[6] = 0LL;
    ProviderId = v3;
    if ( !EventRegister(&ProviderId, TlgEnableCallback, v1, v2) )
      EventSetInformation(v0[4], 2LL, v0[1], *(unsigned __int16 *)v0[1]);
    dword_18003BCF4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18003BCE0 + 8))(&qword_18003BCE0);
    InitOnceComplete(&`TileDataLayerItemWrappersLogging::Instance'::`2'::wrapper, 0, &qword_18003BCE0);
  }
  return (const struct _TlgProvider_t *)v6[1];
}
