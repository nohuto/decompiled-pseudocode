/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430
 * Callers:
 *     _lambda_05ef3d001510803ebef5a2ea2d6a24c1_::operator() @ 0x180004EF0 (_lambda_05ef3d001510803ebef5a2ea2d6a24c1_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x18000AD70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::Run @ 0x180019810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___--Run.c)
 *     ?GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAI@Z @ 0x18001F390 (-GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEA.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180020EA0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18002A520 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_323d14d606b14d2939124d398e1f4aa2___::Run @ 0x18003BD80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_323d14d606b14d2939124d398e1f4aa2___--Run.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180061150 (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b79c7714d956adb4f9412b6016faa448___::Run @ 0x18008F320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b79c7714d956adb4f9412b6016faa448___--Run.c)
 *     _lambda_74326b6c5464fd33f98787e73af58621_::operator() @ 0x18013AA18 (_lambda_74326b6c5464fd33f98787e73af58621_--operator().c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18013B5C0 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18013D070 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18013D160 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18013EE70 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002BD10 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIA.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  HWND v4; // rbx
  int v6; // esi
  struct IApplicationView *v7; // rdi
  unsigned int v8; // r12d
  void *i; // r15
  __int64 (__fastcall *v10)(CWin32ApplicationView *, struct _GUID *, void **); // rdx
  volatile signed __int64 *v11; // r14
  __int64 (__fastcall *v12)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  void *v15; // r8
  int v16; // r11d
  int CanCastTo; // ebx
  void *v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  int v22; // r11d
  void *v23; // r8
  __int64 v24; // r8
  int v25; // r11d
  __int64 v26; // rax
  char v27; // bl
  void *v28; // rcx
  void *v29; // rcx
  struct IApplicationView **v30; // rbx
  void *v31; // rcx
  __int64 (__fastcall *v32)(char *, GUID *, void **); // rax
  __int64 v33; // r8
  char *v34; // r14
  char *v35; // r14
  int v36; // r10d
  _QWORD *v37; // rbx
  __int64 (__fastcall *v38)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  __int64 v39; // rcx
  int v40; // eax
  _QWORD *v41; // rbx
  __int64 (__fastcall *v42)(CImmersiveApp *__hidden, HWND, int *); // rax
  __int64 v43; // rcx
  _QWORD *v44; // rcx
  void *v46; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v47; // [rsp+28h] [rbp-40h] BYREF
  __int64 v48; // [rsp+30h] [rbp-38h] BYREF
  struct IApplicationView *v49; // [rsp+38h] [rbp-30h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-28h]
  __int64 v51; // [rsp+48h] [rbp-20h]
  HWND v52; // [rsp+50h] [rbp-18h] BYREF
  __int64 v53; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  BOOL v55; // [rsp+B0h] [rbp+48h] BYREF
  HWND v56; // [rsp+B8h] [rbp+50h]
  struct IApplicationView **v57; // [rsp+C0h] [rbp+58h]
  void *v58; // [rsp+C8h] [rbp+60h] BYREF

  v57 = a3;
  v56 = a2;
  v51 = -2LL;
  v4 = a2;
  SRWLock = this + 48;
  AcquireSRWLockShared(this + 48);
  *a3 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v49 = 0LL;
  v8 = -2147319765;
  for ( i = 0LL; ; i = (char *)i + 1 )
  {
    v10 = CWin32ApplicationView::QueryInterface;
    if ( v7 || i >= this[50].Ptr )
      break;
    v11 = (volatile signed __int64 *)*((_QWORD *)this[49].Ptr + (_QWORD)i);
    v55 = 0;
    v58 = 0LL;
    v46 = 0LL;
    v12 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v11;
    if ( v12 == CWin32ApplicationView::QueryInterface )
    {
      v58 = 0LL;
      if ( *(_QWORD *)&GUID_f3527610_c76d_4316_ac8e_28651acf3df3.Data1 == *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1
        && *(_QWORD *)GUID_f3527610_c76d_4316_ac8e_28651acf3df3.Data4 == *(_QWORD *)GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data4 )
      {
        v13 = *((_QWORD *)v11 + 25);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64(v11 + 25, v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_13;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v13 + 16));
LABEL_13:
        v58 = (void *)v11;
        v7 = v49;
        goto LABEL_46;
      }
      v58 = 0LL;
      if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
        goto LABEL_26;
      if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1) )
      {
        v58 = v15;
        CanCastTo = 0;
      }
      else if ( InlineIsEqualGUID(
                  &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                  &GUID_979cde28_2164_437c_b963_55e5d4ac1d02) )
      {
        v58 = v18;
        CanCastTo = 0;
      }
      else if ( InlineIsEqualGUID(
                  &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                  &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0) )
      {
        v58 = (void *)(v19 + 8);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = v16;
      }
      if ( CanCastTo != v16 )
        goto LABEL_28;
      CanCastTo = 0;
      if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_00000038_0000_0000_c000_000000000046) )
        v58 = (void *)v20;
      else
        v58 = (void *)(v20 + 8);
    }
    else
    {
      if ( (char *)v12 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
      {
        CanCastTo = v12((CWin32ApplicationView *)v11, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v58);
        goto LABEL_44;
      }
      v58 = 0LL;
      if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        v58 = (void *)v11;
        (*(void (__fastcall **)(volatile signed __int64 *))(v21 + 8))(v11);
        CanCastTo = 0;
        goto LABEL_44;
      }
      if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
      {
LABEL_26:
        v58 = (void *)v11;
        goto LABEL_27;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                    (__int64)(v11 + 1),
                    (int *)&GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                    &v58);
      if ( CanCastTo != v22 )
        goto LABEL_28;
      if ( !InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        if ( InlineIsEqualGUID(&GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387) )
        {
          v58 = (void *)v24;
LABEL_27:
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (Microsoft::WRL::FtmBase *)(v24 + 8),
                        &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                        &v58);
          if ( CanCastTo == v25 )
            CanCastTo = v25;
        }
LABEL_28:
        if ( CanCastTo < 0 )
          goto LABEL_63;
        goto LABEL_29;
      }
      v58 = v23;
      CanCastTo = 0;
    }
LABEL_29:
    (*(void (__fastcall **)(void *))(*(_QWORD *)v58 + 8LL))(v58);
LABEL_44:
    if ( CanCastTo < 0 )
    {
LABEL_63:
      v31 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = **(__int64 (__fastcall ***)(char *, GUID *, void **))v11;
      if ( (char *)v32 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
      {
        v46 = 0LL;
        if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_00000000_0000_0000_c000_000000000046)
          || InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
        {
          v46 = (void *)v11;
          (*(void (__fastcall **)(volatile signed __int64 *))(v33 + 8))(v11);
        }
        else
        {
          if ( InlineIsEqualGUID(&GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
          {
            v46 = (void *)v11;
LABEL_77:
            if ( v6 < 0 )
              goto LABEL_97;
          }
          else
          {
            v6 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                   (__int64)(v11 + 1),
                   (int *)&GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                   &v46);
            if ( v6 != -2147467262 )
              goto LABEL_77;
            v34 = (char *)(v11 + 17);
            if ( !InlineIsEqualGUID(
                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                    &GUID_00000038_0000_0000_c000_000000000046) )
            {
              v35 = v34 + 8;
              if ( InlineIsEqualGUID(
                     &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                     &GUID_e99a73b1_cde0_477b_91b8_e995fa037387) )
              {
                v46 = v35;
                v6 = 0;
              }
              else
              {
                v6 = Microsoft::WRL::FtmBase::CanCastTo(
                       (Microsoft::WRL::FtmBase *)(v35 + 8),
                       &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                       &v46);
                if ( v6 == v36 )
                  v6 = v36;
              }
              goto LABEL_77;
            }
            v46 = v34;
            v6 = 0;
          }
          (*(void (__fastcall **)(void *))(*(_QWORD *)v46 + 8LL))(v46);
        }
      }
      else
      {
        v6 = v32((char *)v11, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v46);
      }
      if ( v6 < 0 )
      {
LABEL_97:
        v6 = 0;
        goto LABEL_98;
      }
      v6 = 0;
      v47 = 0LL;
      v37 = v46;
      v38 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v46 + 24LL);
      if ( v38 == CWinRTApplicationView::GetApplication )
      {
        v39 = *((_QWORD *)v46 + 7);
        if ( !v39 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x256,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
            (const char *)0x8007139FLL,
            (int)v46);
          v40 = -2147019873;
          goto LABEL_87;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
        v41 = (_QWORD *)v37[7];
        v47 = v41;
        v40 = 0;
      }
      else
      {
        v40 = v38((CWinRTApplicationView *)v46, (struct IImmersiveApplication **)&v47);
LABEL_87:
        v41 = v47;
      }
      if ( v40 >= 0 )
      {
        v42 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, HWND, int *))(*v41 + 96LL);
        if ( v42 == CImmersiveApp::IsEqualByHwnd )
        {
          AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
          v52 = v56;
          v53 = 0LL;
          v55 = (*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v41[3] + 296LL))(v41 + 3, &v52, 2LL) != 0;
          v43 = v53;
          if ( v53 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          }
          ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        }
        else
        {
          v42((CImmersiveApp *)v41, v56, &v55);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
          (const char *)(unsigned int)v40,
          (int)v46);
      }
      v44 = v47;
      if ( v47 )
      {
        v47 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      }
      goto LABEL_98;
    }
    v4 = v56;
LABEL_46:
    if ( *(__int64 (__fastcall **)(CWin32ApplicationView *, HWND *))(*(_QWORD *)v58 + 24LL) == CWin32ApplicationView::GetWindow )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(CWin32ApplicationView *, struct _GUID *, void **)))(**((_QWORD **)v58 + 8) + 24LL))(
              *((_QWORD *)v58 + 8),
              v10);
      v48 = v26;
LABEL_50:
      if ( v4 == (HWND)v26 )
      {
        v55 = 1;
        v27 = 1;
        goto LABEL_54;
      }
      v55 = 0;
LABEL_53:
      v27 = 0;
      goto LABEL_54;
    }
    if ( (*(int (__fastcall **)(void *, __int64 *))(*(_QWORD *)v58 + 24LL))(v58, &v48) >= 0 )
    {
      v26 = v48;
      goto LABEL_50;
    }
LABEL_98:
    if ( !v55 )
      goto LABEL_53;
    v27 = 1;
LABEL_54:
    v28 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( v27 )
    {
      v30 = (struct IApplicationView **)((char *)this[49].Ptr + 8 * (_QWORD)i);
      v7 = *v30;
      if ( *v30 )
      {
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 8LL))(*v30);
        v7 = *v30;
      }
      v49 = v7;
      v8 = 0;
    }
    v4 = v56;
  }
  *v57 = v7;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v8;
}
