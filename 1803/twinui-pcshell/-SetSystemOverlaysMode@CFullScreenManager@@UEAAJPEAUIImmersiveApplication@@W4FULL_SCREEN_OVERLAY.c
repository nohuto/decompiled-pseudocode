/*
 * XREFs of ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180150E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F348 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014F8A0 (--1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1801513D4 (-StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplicati.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151598 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 */

__int64 __fastcall CFullScreenManager::SetSystemOverlaysMode(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C0h]
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"FSMSetSystemOverlaysMode");
  v13[0] = &FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::`vftable';
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::StartActivity(v13, a2, a3);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = a3;
    v11 = 3;
    v8 = (*(__int64 (__fastcall **)(__int64, void *, __int16 *))(*(_QWORD *)v7 + 48LL))(
           v7,
           &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
           &v11);
    v6 = v8;
    if ( v8 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::~FSMSetSystemOverlaysMode((FullScreenManagerTelemetry::FSMSetSystemOverlaysMode *)v13);
  return v6;
}
