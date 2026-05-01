/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x1800682F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qd @ 0x180006DCC (WPP_SF_qd.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4___ @ 0x18006C198 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4___.c)
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18006F7EC (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180070A9C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_180070A9C.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct ITaskWindow *a2)
{
  int v4; // ebx
  bool v5; // r14
  HWND v6; // r15
  __int64 v7; // rax
  HWND *v8; // rbx
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v12; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v13[4]; // [rsp+198h] [rbp+90h] BYREF
  int v14; // [rsp+1B8h] [rbp+B0h]
  int *v15; // [rsp+1C0h] [rbp+B8h]
  int *v16; // [rsp+1C8h] [rbp+C0h]
  int v17; // [rsp+1D0h] [rbp+C8h] BYREF
  char v18; // [rsp+1D4h] [rbp+CCh]
  int v19; // [rsp+1F8h] [rbp+F0h] BYREF
  const char *v20; // [rsp+200h] [rbp+F8h]
  __int64 v21; // [rsp+208h] [rbp+100h]
  char v22; // [rsp+210h] [rbp+108h]
  __int64 v23; // [rsp+218h] [rbp+110h]
  _BYTE v24[144]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v25; // [rsp+2B0h] [rbp+1A8h]
  __int64 v26; // [rsp+2B8h] [rbp+1B0h]
  __int64 v27; // [rsp+2C0h] [rbp+1B8h]
  __int64 v28; // [rsp+2C8h] [rbp+1C0h]

  v4 = SHIsSameObject(
         (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
         **((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 14));
  v5 = v4 != 0;
  v6 = (HWND)(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( !v4 || v6 != **((HWND **)this + 15) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids,
        v7,
        *((_DWORD *)this + 14));
    }
    v8 = (HWND *)*((_QWORD *)this + 15);
    v13[1] = 0LL;
    v13[2] = v13;
    v13[3] = 0LL;
    v14 = 0;
    v15 = &v19;
    v16 = &v17;
    v17 = 0;
    v18 = 0;
    v22 = 0;
    v19 = 0;
    v20 = "PresentWindow";
    v21 = 0LL;
    v23 = 1LL;
    v25 = 0LL;
    v26 = 0LL;
    memset(v24, 0, sizeof(v24));
    v27 = 0LL;
    v28 = 0LL;
    v13[0] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFramePresentationTelemetry::PresentWindow::StartActivity(
      (CFramePresentationTelemetry::PresentWindow *)v13,
      *((_DWORD *)this + 14),
      *v8,
      v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 536LL))(*((_QWORD *)this + 72));
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 208LL))(
      a2,
      *((_QWORD *)this + 17),
      3LL);
    v9 = **((_QWORD **)this + 14);
    if ( v9 && !v5 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 208LL))(v9, *((_QWORD *)this + 17), 1LL);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v11[0] = a2;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v11[1] = this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v12,
      v13);
    v12 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4___(this, v11);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    v13[0] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  }
  return 0LL;
}
