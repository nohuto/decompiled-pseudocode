/*
 * XREFs of ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0
 * Callers:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000A04C (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18000A8B0 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x18000AD70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___--Run.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003EE20 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x18003F97C (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180040A10 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180060CA0 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     _lambda_ea68e4127058bb6a1a7a73048de55176_::operator() @ 0x18013AB2C (_lambda_ea68e4127058bb6a1a7a73048de55176_--operator().c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180028120 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002BD10 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIA.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::GetViewForApplication(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IApplicationView **a3)
{
  int CanCastTo; // esi
  struct IApplicationView *v7; // rdi
  unsigned int v8; // r12d
  void *i; // r14
  __int64 (__fastcall *v10)(CWin32ApplicationView *, struct _GUID *, void **); // rdx
  void *v11; // r11
  __int64 (__fastcall *v12)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  void *v15; // r11
  void *v16; // r8
  void *v17; // r8
  __int64 v18; // r8
  void *v19; // r11
  void *v20; // r11
  void *v21; // r11
  void *v22; // r11
  __int64 v23; // r11
  _QWORD *v24; // rbx
  __int64 (__fastcall *v25)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  __int64 v26; // rcx
  struct IImmersiveApplication *v27; // rcx
  int v28; // eax
  int v29; // ebx
  struct IApplicationView **v30; // rbx
  __int64 v31; // rcx
  void *v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+28h] [rbp-28h] BYREF
  __int64 v36; // [rsp+30h] [rbp-20h] BYREF
  struct IApplicationView *v37; // [rsp+38h] [rbp-18h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-10h]
  __int64 v39; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v41; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView **v42; // [rsp+A0h] [rbp+50h]
  void *v43; // [rsp+A8h] [rbp+58h] BYREF

  v42 = a3;
  v39 = -2LL;
  SRWLock = this + 48;
  AcquireSRWLockShared(this + 48);
  CanCastTo = 0;
  *a3 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v8 = -2147319765;
  for ( i = 0LL; ; i = (char *)i + 1 )
  {
    v10 = CWin32ApplicationView::QueryInterface;
    if ( v7 || i >= this[50].Ptr )
      break;
    v43 = 0LL;
    v11 = (void *)*((_QWORD *)this[49].Ptr + (_QWORD)i);
    v12 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v11;
    if ( v12 == CWin32ApplicationView::QueryInterface )
    {
      v43 = 0LL;
      if ( *(_QWORD *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data1 == *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1
        && *(_QWORD *)GUID_e99a73b1_cde0_477b_91b8_e995fa037387.Data4 == *(_QWORD *)GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data4 )
      {
        v13 = *((_QWORD *)v11 + 25);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 25, v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_13;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v13 + 16));
LABEL_13:
        v43 = v11;
        v7 = v37;
        goto LABEL_47;
      }
      v43 = 0LL;
      if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
      {
        v43 = v15;
      }
      else
      {
        if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1) )
        {
          v43 = v16;
        }
        else if ( InlineIsEqualGUID(
                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                    &GUID_979cde28_2164_437c_b963_55e5d4ac1d02) )
        {
          v43 = v17;
        }
        else if ( InlineIsEqualGUID(
                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                    &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0) )
        {
          v43 = (void *)(v18 + 8);
        }
        else
        {
          CanCastTo = -2147467262;
        }
        if ( CanCastTo == -2147467262 )
        {
          if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_00000038_0000_0000_c000_000000000046) )
          {
            v43 = v19;
            CanCastTo = 0;
            goto LABEL_42;
          }
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                        (__int64)v19 + 16,
                        (int *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                        &v43);
        }
      }
      if ( CanCastTo < 0 )
        goto LABEL_72;
      goto LABEL_42;
    }
    if ( (char *)v12 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    {
      CanCastTo = v12(
                    *((CWin32ApplicationView **)this[49].Ptr + (_QWORD)i),
                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                    &v43);
      goto LABEL_45;
    }
    v43 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v43 = v20;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
      goto LABEL_45;
    }
    if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
    {
      v43 = v21;
LABEL_41:
      if ( CanCastTo < 0 )
        goto LABEL_72;
LABEL_42:
      (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 8LL))(v43);
      goto LABEL_45;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                  (__int64)v21 + 8,
                  (int *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                  &v43);
    if ( CanCastTo != -2147467262 )
      goto LABEL_41;
    if ( !InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387) )
      {
        v43 = (void *)v23;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v23 + 8),
                      &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                      &v43);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      goto LABEL_41;
    }
    v43 = v22;
    CanCastTo = 0;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 8LL))(v22);
LABEL_45:
    if ( CanCastTo < 0 )
    {
LABEL_72:
      CanCastTo = 0;
      goto LABEL_73;
    }
    CanCastTo = 0;
LABEL_47:
    v34 = 0LL;
    v24 = v43;
    v25 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v43 + 24LL);
    if ( v25 == CWinRTApplicationView::GetApplication )
    {
      v26 = *((_QWORD *)v43 + 7);
      if ( !v26 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x256,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
          (const char *)0x8007139FLL,
          v34);
        goto LABEL_70;
      }
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(CWin32ApplicationView *, struct _GUID *, void **)))(*(_QWORD *)v26 + 8LL))(
        v26,
        v10);
      v34 = v24[7];
    }
    else if ( (int)v25((CWinRTApplicationView *)v43, (struct IImmersiveApplication **)&v34) < 0 )
    {
      goto LABEL_70;
    }
    if ( *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *))(*(_QWORD *)v34
                                                                                                  + 104LL) == CImmersiveApp::IsEqualByApp )
    {
      v27 = (struct IImmersiveApplication *)(v34 - 88);
      if ( v34 == 88 || !a2 )
        goto LABEL_62;
      if ( v27 == a2 )
      {
        v28 = 1;
        v41 = 1;
        goto LABEL_66;
      }
      v36 = 0LL;
      v35 = 0LL;
      if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))v27)(
             v27,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v36) < 0 )
        goto LABEL_62;
      v29 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
              a2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v35);
      if ( v29 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      if ( v29 < 0 || (v28 = 1, v36 != v35) )
LABEL_62:
        v28 = 0;
      v41 = v28;
LABEL_66:
      if ( v28 )
      {
        v30 = (struct IApplicationView **)((char *)this[49].Ptr + 8 * (_QWORD)i);
        v7 = *v30;
        if ( *v30 )
        {
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 8LL))(*v30);
          v7 = *v30;
        }
        v37 = v7;
        v8 = 0;
      }
      goto LABEL_70;
    }
    if ( (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v34 + 104LL))(v34, a2, &v41) >= 0 )
    {
      v28 = v41;
      goto LABEL_66;
    }
LABEL_70:
    v31 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
LABEL_73:
    v32 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  *v42 = v7;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v8;
}
