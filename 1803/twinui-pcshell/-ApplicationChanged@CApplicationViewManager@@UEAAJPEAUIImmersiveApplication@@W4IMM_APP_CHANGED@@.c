/*
 * XREFs of ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18002CB00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z @ 0x180024FB0 (-RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810 (-IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::ApplicationChanged(
        RTL_SRWLOCK *a1,
        struct IImmersiveApplication *a2,
        int a3)
{
  char *v6; // rbx
  int v7; // esi
  void *i; // r15
  __int64 (__fastcall *v9)(CWin32ApplicationView *, struct _GUID *, void **); // rdx
  CWin32ApplicationView *v10; // rcx
  __int64 (__fastcall *v11)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  int Interface; // eax
  CWinRTApplicationView *v13; // rcx
  __int64 (__fastcall *v14)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  __int64 (__fastcall *v16)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *); // rax
  int v17; // eax
  __int64 *v18; // rbx
  __int64 v19; // rcx
  void (*v20)(void); // rax
  CImmersiveApp *v21; // rcx
  __int64 (__fastcall *v22)(char *, GUID *, CApplicationViewBase **); // rax
  int v23; // eax
  __int64 (__fastcall *v24)(RTL_SRWLOCK *, char); // rax
  __int64 (__fastcall *v25)(RTL_SRWLOCK *, char); // rdx
  int refreshed; // eax
  CApplicationViewBase *v27; // rcx
  __int64 (__fastcall *v28)(CWinRTApplicationView *); // rax
  __int64 v29; // rdx
  CWinRTApplicationView *v30; // [rsp+20h] [rbp-40h] BYREF
  CImmersiveApp *v31; // [rsp+28h] [rbp-38h] BYREF
  CApplicationViewBase *v32; // [rsp+30h] [rbp-30h] BYREF
  char *v33; // [rsp+38h] [rbp-28h]
  char *v34; // [rsp+40h] [rbp-20h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-18h]
  __int64 v36; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v38; // [rsp+A0h] [rbp+40h] BYREF

  v36 = -2LL;
  if ( a3 != 8 )
    return 0LL;
  SRWLock = a1 + 42;
  AcquireSRWLockShared(a1 + 42);
  v34 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = -2147319765;
  for ( i = 0LL; ; i = (char *)i + 1 )
  {
    v9 = CWin32ApplicationView::QueryInterface;
    if ( v6 || i >= a1[44].Ptr )
      break;
    v30 = 0LL;
    v10 = (CWin32ApplicationView *)*((_QWORD *)a1[43].Ptr + (_QWORD)i);
    v11 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v10;
    if ( v11 == CWin32ApplicationView::QueryInterface )
    {
      Interface = CWin32ApplicationView::QueryInterface(v10, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, (void **)&v30);
    }
    else if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                    (char *)v10,
                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                    &v30);
    }
    else
    {
      Interface = v11(v10, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, (void **)&v30);
    }
    if ( Interface >= 0 )
    {
      v31 = 0LL;
      v14 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v30 + 24LL);
      if ( v14 == CWinRTApplicationView::GetApplication )
        Application = CWinRTApplicationView::GetApplication(v30, &v31);
      else
        Application = v14(v30, &v31);
      if ( Application >= 0 )
      {
        v16 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *))(*(_QWORD *)v31 + 104LL);
        v17 = v16 == CImmersiveApp::IsEqualByApp ? CImmersiveApp::IsEqualByApp(v31, a2, &v38) : v16(v31, a2, &v38);
        if ( v17 >= 0 && v38 )
        {
          v18 = (__int64 *)((char *)a1[43].Ptr + 8 * (_QWORD)i);
          v19 = *v18;
          if ( *v18 )
          {
            v20 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
            if ( (char *)v20 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef(v19);
            else
              v20();
          }
          v6 = (char *)*v18;
          v33 = v6;
          v7 = 0;
        }
      }
      v21 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v13 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v34 = v6;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( v7 >= 0 )
  {
    v32 = 0LL;
    v22 = **(__int64 (__fastcall ***)(char *, GUID *, CApplicationViewBase **))v6;
    if ( (char *)v22 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
      v23 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
              v6,
              &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
              &v32);
    else
      v23 = v22(v6, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v32);
    v7 = v23;
    if ( v23 < 0 )
    {
      v29 = 769LL;
    }
    else
    {
      v24 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, char))(*(_QWORD *)v32 + 40LL);
      v25 = CApplicationViewBase::RefreshEnterpriseId;
      LOBYTE(v25) = 1;
      if ( v24 == CApplicationViewBase::RefreshEnterpriseId )
        refreshed = CApplicationViewBase::RefreshEnterpriseId((RTL_SRWLOCK *)v32, 1);
      else
        refreshed = v24((RTL_SRWLOCK *)v32, (char)v25);
      v7 = refreshed;
      if ( refreshed >= 0 )
      {
LABEL_36:
        v27 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(CApplicationViewBase *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_38;
      }
      v29 = 770LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7,
      (int)v30);
    goto LABEL_36;
  }
LABEL_38:
  if ( v6 )
  {
    v28 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v6 + 16LL);
    if ( v28 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release((CWinRTApplicationView *)v6);
    else
      ((void (__fastcall *)(char *, __int64 (__fastcall *)(CWin32ApplicationView *, struct _GUID *, void **)))v28)(
        v6,
        v9);
  }
  return (unsigned int)v7;
}
