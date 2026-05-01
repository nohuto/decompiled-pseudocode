/*
 * XREFs of ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1800F91C8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18012D83C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18012EEA0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18012F660 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180132104 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x180047B90 (-EnsurePositionOffset@CTaskWindow@@UEAAJXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C444 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE5C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     WPP_SF_Sd @ 0x180132780 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  CTaskWindow *v2; // rcx
  void (*v3)(void); // rax
  _DWORD *v4; // rcx
  __int64 (__fastcall *v5)(_DWORD *, unsigned int); // rax
  __int64 v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  struct IAsyncCallback *v11; // rbx
  volatile int *v12; // rdx
  _QWORD *v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rcx
  LPUNKNOWN v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  CFrameApplicationPresentation *v19; // rcx
  __int64 (__fastcall *v20)(CFrameApplicationPresentation *, struct IAsyncCallback *); // rax
  int v21; // eax
  signed __int64 v22; // rax
  unsigned int v23; // ecx
  signed __int64 v24; // rtt
  signed __int64 v25; // rax
  unsigned int v26; // ecx
  signed __int64 v27; // rtt
  LPUNKNOWN ppunkMarshal; // [rsp+90h] [rbp+30h] BYREF
  signed __int64 v29; // [rsp+A0h] [rbp+40h]
  signed __int64 v30; // [rsp+A8h] [rbp+48h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      (unsigned int)&WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
      *(_QWORD *)(*((_QWORD *)this + 18) + 544LL),
      *(_DWORD *)(*((_QWORD *)this + 18) + 552LL));
  if ( *((_DWORD *)this + 48) == 2 )
    *((_DWORD *)this + 48) = 0;
  if ( *((_QWORD *)this + 20) )
  {
    v2 = (CTaskWindow *)**((_QWORD **)this + 19);
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 72LL);
    if ( (char *)v3 == (char *)CTaskWindow::EnsurePositionOffset )
      CTaskWindow::EnsurePositionOffset(v2);
    else
      v3();
  }
  v4 = (_DWORD *)*((_QWORD *)this + 17);
  v5 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v4 + 40LL);
  if ( v5 == CFrameApplicationPresentation::SetSystemVisual )
    CFrameApplicationPresentation::SetSystemVisual(v4, 0);
  else
    v5(v4, 0);
  CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
  CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
  v6 = *((_QWORD *)this + 29);
  if ( *(_BYTE *)(v6 + 128) != 1 )
  {
    *(_BYTE *)(v6 + 128) = 1;
    v7 = *(_QWORD *)(v6 + 64);
    v29 = v7;
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_20;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v7 + 16));
LABEL_20:
    v9 = *(_QWORD *)(v6 + 64);
    v30 = v9;
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_26;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v9 + 16));
LABEL_26:
    v11 = 0LL;
    v13 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v13 )
    {
      v13[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v14 = v13 + 4;
      v13[4] = 0LL;
      ppunkMarshal = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v15 = *v14;
        if ( *v14 )
        {
          *v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
          ppunkMarshal,
          &GUID_00000003_0000_0000_c000_000000000046,
          v13 + 4);
      }
      v16 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v16->lpVtbl->Release)(v16);
      }
      *((_DWORD *)v13 + 11) = 1;
      *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
      v13[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v13[6] = v6;
      v17 = *(_QWORD *)(v6 + 64);
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v17 + 1, v17);
          if ( v18 != v17 )
            continue;
        }
        goto LABEL_41;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
LABEL_41:
      *v13 = off_18031F160;
      v13[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v11 = (struct IAsyncCallback *)v13;
    }
    if ( v11 )
    {
      v19 = *(CFrameApplicationPresentation **)(v6 + 120);
      v20 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IAsyncCallback *))(*(_QWORD *)v19 + 200LL);
      v21 = v20 == CFrameApplicationPresentation::QueueAsyncCallback
          ? CFrameApplicationPresentation::QueueAsyncCallback(v19, v11)
          : v20(v19, v11);
      if ( v21 >= 0 )
        *(_BYTE *)(v6 + 129) = 1;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v11 + 16LL))(v11);
    v22 = *(_QWORD *)(v6 + 64);
    while ( v22 >= 0 )
    {
      if ( (_DWORD)v22 == 0x7FFFFFFF )
        goto LABEL_59;
      v23 = v22 - 1;
      v24 = v22;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v22 - 1, v22);
      if ( v24 == v22 )
        goto LABEL_56;
    }
    v23 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v12);
LABEL_56:
    if ( !v23 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
LABEL_59:
    v25 = *(_QWORD *)(v6 + 64);
    while ( v25 >= 0 )
    {
      if ( (_DWORD)v25 == 0x7FFFFFFF )
        return;
      v26 = v25 - 1;
      v27 = v25;
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v25 - 1, v25);
      if ( v27 == v25 )
        goto LABEL_65;
    }
    v26 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v25 + 16), v12);
LABEL_65:
    if ( !v26 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
