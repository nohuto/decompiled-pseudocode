/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x18004C600
 * Callers:
 *     ?OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18000AA20 (-OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180013CD0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18002B860.c)
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180047960 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C23C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2)
{
  CTaskWindow *v3; // rcx
  void (__fastcall *v4)(CTaskWindow *); // rax
  __int64 (__fastcall *v5)(__int64, GUID *, struct IImmersiveApplication **); // rax
  char *v6; // rcx
  int v7; // eax
  CFrameApplicationPresentation *v8; // rcx
  __int64 (__fastcall *v9)(CFrameApplicationPresentation *, struct IImmersiveApplication *); // rax
  struct IImmersiveApplication *v10; // rcx
  struct IImmersiveApplication *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
              (CImmersiveApp *)((char *)this + 152),
              a2,
              (unsigned __int64 *)&v11) >= 0 )
  {
    v3 = *(CTaskWindow **)(*((_QWORD *)this + 38) + 8LL * (_QWORD)v11);
    v4 = *(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v3 + 152LL);
    if ( v4 == CTaskWindow::UpdateTitle )
      CTaskWindow::UpdateTitle(v3);
    else
      v4(v3);
  }
  v11 = 0LL;
  v5 = (__int64 (__fastcall *)(__int64, GUID *, struct IImmersiveApplication **))**((_QWORD **)this - 14);
  v6 = (char *)this - 112;
  if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface )
    v7 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface(
           (__int64)v6,
           &GUID_8b14e88b_5663_4caf_b196_c31479262831,
           &v11);
  else
    v7 = v5((__int64)v6, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v11);
  if ( v7 >= 0 )
  {
    v8 = (CFrameApplicationPresentation *)*((_QWORD *)this + 36);
    v9 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IImmersiveApplication *))(*(_QWORD *)v8 + 152LL);
    if ( v9 == CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons )
      CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(v8, v11);
    else
      v9(v8, v11);
  }
  v10 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
