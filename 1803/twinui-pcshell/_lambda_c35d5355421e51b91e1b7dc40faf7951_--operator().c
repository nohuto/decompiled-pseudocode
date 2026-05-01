/*
 * XREFs of _lambda_c35d5355421e51b91e1b7dc40faf7951_::operator() @ 0x18001DBC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___::Run @ 0x18001D4F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c35d5355421e51b91e1b7dc40faf7951___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800098C4 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18001EA70 (-GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     McTemplateU0zqtq @ 0x18001F1A0 (McTemplateU0zqtq.c)
 *     ?RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z @ 0x180024FB0 (-RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810 (-IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_c35d5355421e51b91e1b7dc40faf7951_::operator()(char *a1)
{
  char *v1; // r15
  unsigned __int64 v2; // r13
  LPCWSTR *v3; // rcx
  __int64 (__fastcall *v4)(CImmersiveApp *__hidden, unsigned __int16 **); // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  struct IUnknown **v8; // rdi
  NTSTATUS v9; // eax
  signed int v10; // eax
  int v11; // edx
  bool v12; // sf
  AgileRegistrationList::AgileCallbackArray *v13; // rcx
  __int64 (__fastcall *v14)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int *); // rax
  __int64 v15; // rax
  unsigned int v16; // r14d
  AgileRegistrationList::AgileCallbackArray *v17; // rcx
  __int64 (__fastcall *v18)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int, const struct _GUID *, void **); // rax
  int v19; // eax
  __int64 v20; // r8
  struct IImmersiveApplication *v21; // r12
  _QWORD *v22; // rbx
  __int64 (__fastcall *v23)(__int64, struct IUnknown *, unsigned int, struct IUnknown *); // rax
  void *v24; // rcx
  LPWSTR v25; // rcx
  CWinRTApplicationView *v26; // rdi
  CWin32ApplicationView *v27; // rcx
  __int64 (__fastcall *v28)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  CWinRTApplicationView *v30; // rcx
  int v31; // eax
  __int64 (__fastcall *v32)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  __int64 (__fastcall *v34)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *); // rax
  int v35; // eax
  CWinRTApplicationView **v36; // rdi
  CWinRTApplicationView *v37; // rcx
  void (*v38)(void); // rax
  CImmersiveApp *v39; // rcx
  __int64 (__fastcall *v40)(CWinRTApplicationView *, GUID *, CApplicationViewBase **); // rax
  int v41; // eax
  __int64 (__fastcall *v42)(CApplicationViewBase *__hidden, bool); // rax
  __int64 (__fastcall *v43)(CApplicationViewBase *__hidden, bool); // rdx
  int refreshed; // eax
  CApplicationViewBase *v45; // rcx
  __int64 (__fastcall *v46)(CWinRTApplicationView *); // rax
  int v47; // [rsp+20h] [rbp-69h]
  void *v48; // [rsp+30h] [rbp-59h] BYREF
  CWinRTApplicationView *v49; // [rsp+38h] [rbp-51h] BYREF
  CApplicationViewBase *v50; // [rsp+40h] [rbp-49h] BYREF
  int v51; // [rsp+48h] [rbp-41h]
  unsigned int v52; // [rsp+4Ch] [rbp-3Dh]
  CImmersiveApp *v53; // [rsp+50h] [rbp-39h] BYREF
  LPWSTR ppwsz; // [rsp+58h] [rbp-31h] BYREF
  struct IUnknown **v55; // [rsp+60h] [rbp-29h]
  CWinRTApplicationView *v56; // [rsp+68h] [rbp-21h] BYREF
  __int64 v57; // [rsp+70h] [rbp-19h]
  __int64 v58; // [rsp+78h] [rbp-11h]
  char v59[8]; // [rsp+80h] [rbp-9h] BYREF
  CWinRTApplicationView *v60; // [rsp+88h] [rbp-1h]
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+7h]
  __int64 v62; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  int v65; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v66; // [rsp+100h] [rbp+77h] BYREF
  int v67; // [rsp+108h] [rbp+7Fh] BYREF

  v62 = -2LL;
  v1 = a1;
  v2 = 0LL;
  ppwsz = 0LL;
  v3 = *(LPCWSTR **)(*(_QWORD *)a1 + 24LL);
  v4 = (__int64 (__fastcall *)(CImmersiveApp *__hidden, unsigned __int16 **))*((_QWORD *)*v3 + 4);
  if ( v4 == CImmersiveApp::GetApplicationId )
    SHStrDupW(v3[57], &ppwsz);
  else
    v4((CImmersiveApp *)v3, &ppwsz);
  v5 = 0LL;
  v57 = 0LL;
  v6 = *(_QWORD *)v1;
  if ( *(_QWORD *)(*(_QWORD *)v1 + 16LL) )
  {
    v7 = 0LL;
    v58 = 0LL;
    while ( 1 )
    {
      v8 = (struct IUnknown **)(v7 + *(_QWORD *)(v6 + 8));
      v55 = v8;
      v65 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v65 = 0;
        v47 = 0;
        v9 = RtlQueryWnfStateData(v59, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &v65);
        v10 = RtlNtStatusToDosError(v9);
        v12 = v10 < 0;
        if ( v10 > 0 )
        {
          v10 = (unsigned __int16)v10 | 0x80070000;
          v12 = v10 < 0;
        }
        if ( v12 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30,
            (unsigned int)"internal\\onecoreuapshell\\private\\inc\\tabletmodehelpers.h",
            (const char *)(unsigned int)v10,
            0);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0zqtq((unsigned __int8)v1[8], v11, (_DWORD)ppwsz, *(_DWORD *)v8, v1[8], v65);
      }
      v13 = *(AgileRegistrationList::AgileCallbackArray **)(*(_QWORD *)v1 + 32LL);
      v14 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int *))(*(_QWORD *)v13 + 24LL);
      if ( v14 == AgileRegistrationList::AgileCallbackArray::GetCount )
        break;
      if ( (int)v14(v13, &v66) >= 0 )
      {
        LODWORD(v15) = v66;
LABEL_14:
        v16 = 0;
        v52 = 0;
        if ( (_DWORD)v15 )
        {
          do
          {
            v48 = 0LL;
            v17 = *(AgileRegistrationList::AgileCallbackArray **)(*(_QWORD *)v1 + 32LL);
            v18 = *(__int64 (__fastcall **)(AgileRegistrationList::AgileCallbackArray *__hidden, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v17 + 32LL);
            if ( v18 == AgileRegistrationList::AgileCallbackArray::GetAt )
              v19 = AgileRegistrationList::AgileCallbackArray::GetAt(
                      v17,
                      v16,
                      &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
                      &v48);
            else
              v19 = v18(v17, v16, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v48);
            if ( v19 >= 0 )
            {
              v20 = *(unsigned int *)v8;
              v21 = *(struct IImmersiveApplication **)(*(_QWORD *)v1 + 24LL);
              v22 = v48;
              v23 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, unsigned int, struct IUnknown *))(*(_QWORD *)v48 + 24LL);
              if ( (char *)v23 == (char *)&CApplicationViewManager::ApplicationChanged )
              {
                if ( (_DWORD)v20 == 8 )
                {
                  SRWLock = (PSRWLOCK)((char *)v48 + 336);
                  AcquireSRWLockShared((PSRWLOCK)v48 + 42);
                  v56 = 0LL;
                  v26 = 0LL;
                  v60 = 0LL;
                  v51 = -2147319765;
                  while ( !v26 && v2 < v22[44] )
                  {
                    v49 = 0LL;
                    v27 = *(CWin32ApplicationView **)(v22[43] + 8 * v2);
                    v28 = **(__int64 (__fastcall ***)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))v27;
                    if ( v28 == CWin32ApplicationView::QueryInterface )
                    {
                      Interface = CWin32ApplicationView::QueryInterface(
                                    v27,
                                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                                    (void **)&v49);
                    }
                    else if ( (char *)v28 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
                    {
                      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                                    v27,
                                    &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                                    &v49);
                    }
                    else
                    {
                      Interface = v28(v27, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, (void **)&v49);
                    }
                    if ( Interface >= 0 )
                    {
                      v53 = 0LL;
                      v32 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v49 + 24LL);
                      if ( v32 == CWinRTApplicationView::GetApplication )
                        Application = CWinRTApplicationView::GetApplication(v49, &v53);
                      else
                        Application = v32(v49, &v53);
                      if ( Application >= 0 )
                      {
                        v34 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveApplication *, int *))(*(_QWORD *)v53 + 104LL);
                        v35 = v34 == CImmersiveApp::IsEqualByApp
                            ? CImmersiveApp::IsEqualByApp(v53, v21, &v67)
                            : v34(v53, v21, &v67);
                        if ( v35 >= 0 && v67 )
                        {
                          v36 = (CWinRTApplicationView **)(v22[43] + 8 * v2);
                          v37 = *v36;
                          if ( *v36 )
                          {
                            v38 = *(void (**)(void))(*(_QWORD *)v37 + 8LL);
                            if ( (char *)v38 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
                              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef(v37);
                            else
                              v38();
                          }
                          v26 = *v36;
                          v60 = v26;
                          v51 = 0;
                        }
                      }
                      v39 = v53;
                      if ( v53 )
                      {
                        v53 = 0LL;
                        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v39 + 16LL))(v39);
                      }
                    }
                    v30 = v49;
                    if ( v49 )
                    {
                      v49 = 0LL;
                      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v30 + 16LL))(v30);
                    }
                    ++v2;
                  }
                  v56 = v26;
                  v16 = v52;
                  v1 = a1;
                  if ( SRWLock )
                    ReleaseSRWLockShared(SRWLock);
                  if ( v51 < 0 )
                  {
                    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v56);
                    v8 = v55;
                    v2 = 0LL;
                  }
                  else
                  {
                    v2 = 0LL;
                    v50 = 0LL;
                    v40 = **(__int64 (__fastcall ***)(CWinRTApplicationView *, GUID *, CApplicationViewBase **))v26;
                    if ( (char *)v40 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
                      v41 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                              v26,
                              &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
                              &v50);
                    else
                      v41 = v40(v26, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v50);
                    if ( v41 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x301,
                        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
                        (const char *)(unsigned int)v41,
                        v47);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
                      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v56);
                      v8 = v55;
                    }
                    else
                    {
                      v42 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, bool))(*(_QWORD *)v50 + 40LL);
                      v43 = CApplicationViewBase::RefreshEnterpriseId;
                      LOBYTE(v43) = 1;
                      if ( v42 == CApplicationViewBase::RefreshEnterpriseId )
                        refreshed = CApplicationViewBase::RefreshEnterpriseId(v50, 1);
                      else
                        refreshed = v42(v50, (bool)v43);
                      if ( refreshed < 0 )
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x302,
                          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
                          (const char *)(unsigned int)refreshed,
                          v47);
                      v45 = v50;
                      if ( v50 )
                      {
                        v50 = 0LL;
                        (*(void (__fastcall **)(CApplicationViewBase *))(*(_QWORD *)v45 + 16LL))(v45);
                      }
                      v46 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v26 + 16LL);
                      if ( v46 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
                        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v26);
                      else
                        v46(v26);
                      v8 = v55;
                    }
                  }
                }
              }
              else if ( v23 == CAppViewManager::ApplicationChanged )
              {
                if ( (unsigned int)v20 <= 0xF )
                {
                  v31 = 33088;
                  if ( _bittest(&v31, v20) )
                    CAppViewManager::_InvokePresentedWindowCallbackTriggers(
                      (__int64)v48 - 48,
                      *(struct IUnknown **)(*(_QWORD *)v1 + 24LL),
                      v20,
                      v8[1]);
                }
              }
              else
              {
                v23((__int64)v48, *(struct IUnknown **)(*(_QWORD *)v1 + 24LL), v20, v8[1]);
              }
            }
            v24 = v48;
            if ( v48 )
            {
              v48 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
            }
            v52 = ++v16;
          }
          while ( v16 < v66 );
          v5 = v57;
          v7 = v58;
        }
      }
      v57 = ++v5;
      v7 += 16LL;
      v58 = v7;
      v6 = *(_QWORD *)v1;
      if ( v5 >= *(_QWORD *)(*(_QWORD *)v1 + 16LL) )
        goto LABEL_26;
    }
    v15 = (__int64)(*((_QWORD *)v13 + 7) - *((_QWORD *)v13 + 6)) >> 3;
    v66 = v15;
    goto LABEL_14;
  }
LABEL_26:
  v25 = ppwsz;
  ppwsz = 0LL;
  CoTaskMemFree(v25);
}
