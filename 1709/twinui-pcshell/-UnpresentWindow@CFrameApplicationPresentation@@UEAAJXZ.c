/*
 * XREFs of ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800689F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67___ @ 0x18006C380 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67___.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x18006F66C (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180070A9C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_180070A9C.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::UnpresentWindow(CFrameApplicationPresentation *this)
{
  HWND *v2; // rbx
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+40h] [rbp-C8h] BYREF
  void **v6; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v7[4]; // [rsp+188h] [rbp+80h] BYREF
  int v8; // [rsp+1A8h] [rbp+A0h]
  int *v9; // [rsp+1B0h] [rbp+A8h]
  int *v10; // [rsp+1B8h] [rbp+B0h]
  int v11; // [rsp+1C0h] [rbp+B8h] BYREF
  char v12; // [rsp+1C4h] [rbp+BCh]
  int v13; // [rsp+1E8h] [rbp+E0h] BYREF
  const char *v14; // [rsp+1F0h] [rbp+E8h]
  __int64 v15; // [rsp+1F8h] [rbp+F0h]
  char v16; // [rsp+200h] [rbp+F8h]
  __int64 v17; // [rsp+208h] [rbp+100h]
  _BYTE v18[144]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v19; // [rsp+2A0h] [rbp+198h]
  __int64 v20; // [rsp+2A8h] [rbp+1A0h]
  __int64 v21; // [rsp+2B0h] [rbp+1A8h]
  __int64 v22; // [rsp+2B8h] [rbp+1B0h]

  if ( **((_QWORD **)this + 14) )
  {
    v2 = (HWND *)*((_QWORD *)this + 15);
    v7[1] = 0LL;
    v7[2] = v7;
    v7[3] = 0LL;
    v8 = 0;
    v9 = &v13;
    v10 = &v11;
    v11 = 0;
    v12 = 0;
    v16 = 0;
    v13 = 0;
    v14 = "UnpresentWindow";
    v15 = 0LL;
    v17 = 1LL;
    v19 = 0LL;
    v20 = 0LL;
    memset(v18, 0, sizeof(v18));
    v21 = 0LL;
    v22 = 0LL;
    v7[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFramePresentationTelemetry::UnpresentWindow::StartActivity(
      (CFramePresentationTelemetry::UnpresentWindow *)v7,
      *((_DWORD *)this + 14),
      *v2);
    v3 = **((_QWORD **)this + 14);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v5[0] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v5[1] = this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v6,
      v7);
    v6 = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67___(this, v5);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v7[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  }
  return 0LL;
}
