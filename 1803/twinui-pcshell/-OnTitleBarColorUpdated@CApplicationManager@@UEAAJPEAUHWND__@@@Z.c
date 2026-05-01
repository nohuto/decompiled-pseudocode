/*
 * XREFs of ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180047D90 (-IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4961db4a7d0ddaf4082e4af01c6297c2__&___ptr64_ @ 0x18009C9D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_4961db4a7d0ddaf4082e4af01c6297c2__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EFB90 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CApplicationManager::OnTitleBarColorUpdated(CApplicationManager *this, HWND a2)
{
  HWND v2; // r14
  CApplicationManager *v3; // rsi
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // ebx
  _QWORD *v10; // rbx
  __int64 (__fastcall *v11)(_QWORD *, HWND *, _QWORD); // rax
  unsigned __int64 v12; // r12
  CTaskWindow *v13; // rcx
  __int64 v14; // rax
  __int64 (*v15)(void); // rax
  __int64 v16; // r15
  _QWORD *v17; // rsi
  __int64 (__fastcall *v18)(ViewWrapperBase *__hidden, unsigned int *); // rax
  RTL_SRWLOCK *v19; // r14
  __int64 (*v20)(void); // rax
  __int64 v21; // rax
  int v22; // esi
  _QWORD *v23; // rcx
  char v24; // al
  bool (__fastcall *v25)(CTaskWindow *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  bool IsEqualByView; // al
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v27; // rcx
  _QWORD *v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, GUID *, _QWORD **); // rcx
  CFrameApplicationPresentation *v30; // rcx
  __int64 (__fastcall *v31)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v39; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v40; // [rsp+28h] [rbp-41h] BYREF
  _QWORD *v41; // [rsp+30h] [rbp-39h] BYREF
  HWND v42; // [rsp+38h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v43; // [rsp+40h] [rbp-29h]
  __int64 v44; // [rsp+48h] [rbp-21h]
  __int64 v45; // [rsp+50h] [rbp-19h]
  __int64 v46; // [rsp+58h] [rbp-11h]
  __int64 v47; // [rsp+60h] [rbp-9h]
  __int64 v48; // [rsp+68h] [rbp-1h]
  __int64 v49; // [rsp+70h] [rbp+7h]
  RTL_SRWLOCK *v50; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  CApplicationManager *v52; // [rsp+D0h] [rbp+67h] BYREF
  HWND v53; // [rsp+D8h] [rbp+6Fh]
  int v54; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v55; // [rsp+E8h] [rbp+7Fh] BYREF

  v53 = a2;
  v52 = this;
  v45 = -2LL;
  v2 = a2;
  v3 = this;
  v4 = -2147467261;
  v39 = 0LL;
  if ( !*((_QWORD *)this + 32) )
    goto LABEL_65;
  v55 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  v55 = 0LL;
  v46 = 0LL;
  v6 = 0LL;
  v44 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)v3 + 36) )
  {
    v47 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)v3 + 35) + 8 * v7);
      v48 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = -1;
      v40 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v8)(
             v8,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v40) >= 0 )
      {
        v42 = v2;
        v43 = 0LL;
        v10 = v40;
        v11 = *(__int64 (__fastcall **)(_QWORD *, HWND *, _QWORD))(*v40 + 296LL);
        if ( (char *)v11 == (char *)CImmersiveApp::MatchByWindow )
        {
          v49 = 0LL;
          v12 = 0LL;
          if ( v40[39] )
          {
            do
            {
              v13 = *(CTaskWindow **)(v10[38] + 8 * v12);
              v14 = *(_QWORD *)v13;
              if ( v42 )
              {
                v15 = *(__int64 (**)(void))(v14 + 32);
                if ( (char *)v15 == (char *)CTaskWindow::GetNativeWindow )
                {
                  v16 = *((_QWORD *)v13 + 4);
                  if ( !v16 )
                  {
                    v41 = 0LL;
                    (***((void (__fastcall ****)(__int64, GUID *, _QWORD **))v13 + 6))(
                      *((_QWORD *)v13 + 6),
                      &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
                      &v41);
                    v17 = v41;
                    v18 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*v41 + 48LL);
                    if ( v18 == ViewWrapperBase::get_ClientWindow )
                    {
                      v19 = (RTL_SRWLOCK *)(v41[17] + 296LL);
                      AcquireSRWLockShared(v19);
                      v50 = v19;
                      v20 = *(__int64 (**)(void))(*(v17 - 3) + 648LL);
                      if ( (char *)v20 == (char *)ViewWrapperBase::GetWindow )
                        v21 = v17[29];
                      else
                        LODWORD(v21) = v20();
                      v54 = v21;
                      v22 = 0;
                      if ( !(_DWORD)v21 )
                        v22 = -2147023728;
                      if ( v19 )
                        ReleaseSRWLockShared(v19);
                    }
                    else
                    {
                      v22 = v18((ViewWrapperBase *)v41, (unsigned int *)&v54);
                    }
                    if ( v22 >= 0 )
                      v16 = v54;
                    v23 = v41;
                    if ( v41 )
                    {
                      v41 = 0LL;
                      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
                    }
                  }
                }
                else
                {
                  v16 = v15();
                }
                if ( (HWND)v16 == v42 )
                {
LABEL_29:
                  v24 = 1;
                  v3 = v52;
                  v2 = v53;
                  goto LABEL_38;
                }
              }
              else
              {
                v25 = *(bool (__fastcall **)(CTaskWindow *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(v14 + 48);
                if ( v25 == CTaskWindow::IsEqualByView )
                  IsEqualByView = CTaskWindow::IsEqualByView(v13, v43);
                else
                  IsEqualByView = v25(v13, v43);
                if ( IsEqualByView )
                  goto LABEL_29;
              }
              ++v12;
            }
            while ( v12 < v10[39] );
            v3 = v52;
            v2 = v53;
          }
          v24 = 0;
        }
        else
        {
          v24 = v11(v40, &v42, 0LL);
        }
LABEL_38:
        v9 = (v24 != 0) - 1;
        v27 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      v28 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( !v9 )
        break;
      if ( (unsigned __int64)++v7 >= *((_QWORD *)v3 + 36) )
      {
        v6 = v44;
        goto LABEL_45;
      }
    }
    v6 = v7;
    v4 = 0;
  }
  else
  {
LABEL_45:
    v4 = -2147319765;
  }
  if ( v4 >= 0 )
  {
    v29 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))(*((_QWORD *)v3 + 35) + 8 * v6);
    v4 = (**v29)(v29, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v55);
    v30 = (CFrameApplicationPresentation *)v55;
    if ( v4 >= 0 )
    {
      v31 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*v55 + 496LL);
      if ( v31 == CImmersiveApp::GetFrameInternal )
      {
        v32 = v55[36];
        v31 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v32 + 128LL);
        if ( v31 == CFrameApplicationPresentation::GetFrame )
        {
          if ( *(_DWORD *)(v32 + 56) == 2 )
          {
            v4 = -2147019873;
          }
          else
          {
            v33 = *(_QWORD *)(v32 + 120);
            if ( v33 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
              v33 = *(_QWORD *)(v32 + 120);
            }
            v39 = v33;
            v4 = 0;
          }
          goto LABEL_58;
        }
        v30 = (CFrameApplicationPresentation *)v55[36];
      }
      v4 = v31(v30, (struct IApplicationFrameProxy **)&v39);
    }
  }
LABEL_58:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v34 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
  }
  if ( v4 >= 0 )
  {
    v52 = (CApplicationManager *)v39;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v52);
    v36 = Windows::Internal::ComTaskPool::QueueTask__lambda_4961db4a7d0ddaf4082e4af01c6297c2______ptr64_(v35, &v52);
    v4 = v36;
    if ( v36 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F39,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v36,
        v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v52);
    goto LABEL_66;
  }
LABEL_65:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F31,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v4,
    v39);
LABEL_66:
  v37 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return (unsigned int)v4;
}
