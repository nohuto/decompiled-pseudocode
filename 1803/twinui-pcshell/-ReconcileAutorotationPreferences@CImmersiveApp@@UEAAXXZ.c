/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x18004BED0
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002EB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18002EB00.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EB60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18002EB60.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180070990 (-QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 (__fastcall *v3)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v4; // rcx
  volatile int *v5; // rdx
  CRotationManagerSync *v6; // rcx
  void (*v7)(void); // rax
  __int64 (__fastcall *v8)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  CRotationManagerSync *v9; // rcx
  __int64 (__fastcall *v10)(__int64, GUID *, CImmersiveWindowManager **); // rax
  int v11; // eax
  volatile int *v12; // rdx
  int v13; // ebx
  __int64 (__fastcall *v14)(CImmersiveWindowManager *__hidden, const struct _GUID *, const struct _GUID *, void **); // rax
  int Object; // eax
  CImmersiveWindowManager *v16; // rcx
  bool v17; // bl
  void *v18; // rcx
  void (*v19)(void); // rax
  void (*v20)(void); // rax
  CRotationManagerSync *v21; // rcx
  CImmersiveWindowManager *v22; // [rsp+70h] [rbp+30h] BYREF
  CRotationManagerSync *v23; // [rsp+78h] [rbp+38h] BYREF
  void *v24; // [rsp+80h] [rbp+40h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this - 64);
  v23 = 0LL;
  LODWORD(v22) = 2;
  v3 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this - 8) + 32LL);
  v4 = (RTL_SRWLOCK *)((char *)this - 64);
  if ( v3 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v4, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v23);
  else
    v3(v4, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v23);
  v6 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release(
        (__int64)v6,
        v5);
    else
      v7();
    if ( (*((_BYTE *)this + 424) & 2) != 0 )
    {
      v23 = 0LL;
      v24 = 0LL;
      LODWORD(v22) = 9;
      v8 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v2->Ptr + 4);
      if ( v8 == CWRLObjectWithGITSite::GetSite )
        CWRLObjectWithGITSite::GetSite(v2, &GUID_00000000_0000_0000_c000_000000000046, &v24);
      else
        v8(v2, &GUID_00000000_0000_0000_c000_000000000046, &v24);
      v9 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v23 = 0LL;
      v22 = 0LL;
      v10 = **(__int64 (__fastcall ***)(__int64, GUID *, CImmersiveWindowManager **))v24;
      if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::QueryInterface )
        v11 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::QueryInterface(
                (__int64)v24,
                &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
                &v22);
      else
        v11 = v10((__int64)v24, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, &v22);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v14 = *(__int64 (__fastcall **)(CImmersiveWindowManager *__hidden, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v22 + 24LL);
        if ( v14 == CImmersiveWindowManager::QueryObject )
          Object = CImmersiveWindowManager::QueryObject(
                     v22,
                     &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                     &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                     (void **)&v23);
        else
          Object = v14(
                     v22,
                     &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                     &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                     (void **)&v23);
        v13 = Object;
      }
      v16 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(CImmersiveWindowManager *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = v13 >= 0;
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        v19 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
        if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::Release(
            (__int64)v18,
            v12);
        else
          v19();
      }
      if ( v17 )
      {
        v20 = *(void (**)(void))(*(_QWORD *)v23 + 32LL);
        if ( (char *)v20 == (char *)CRotationManagerSync::ReconcileModernOrientationPreferences )
          CRotationManagerSync::ReconcileModernOrientationPreferences(v23);
        else
          v20();
      }
      v21 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
}
