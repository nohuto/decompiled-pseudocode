/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180042770
 * Callers:
 *     <none>
 * Callees:
 *     ??_E?$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800037F0 (--_E-$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18000B110 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x18000B180 (CDelayIAMOperations--AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___.c)
 *     ??_G?$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001D470 (--_G-$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_E?$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001DA30 (--_E-$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180047D90 (-IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??_E?$CTaskWrapper@V_lambda_212ff9793df855e45456e1ed2b184a0d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180054700 (--_E-$CTaskWrapper@V_lambda_212ff9793df855e45456e1ed2b184a0d_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800547E0 (--_E-$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEAU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800899E4 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEAU_GU.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CApplicationManager::OnMessage(CApplicationManager *this, int a2, HWND a3, int a4, bool *a5)
{
  HWND v6; // r14
  char v9; // r15
  struct CDelayIAMOperations::COperation *v10; // rax
  struct CDelayIAMOperations::COperation *v11; // rbx
  struct CDelayIAMOperations::COperation *v12; // rbx
  int IsWindowServiceSupported; // eax
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // r12
  int v18; // ebx
  _QWORD *v19; // r15
  __int64 (__fastcall *v20)(_QWORD *, HWND *, __int64); // rax
  unsigned __int64 v21; // r14
  CTaskWindow *v22; // rcx
  __int64 v23; // rax
  __int64 (*v24)(void); // rax
  __int64 v25; // rsi
  _QWORD *v26; // rbx
  __int64 (__fastcall *v27)(ViewWrapperBase *__hidden, unsigned int *); // rax
  RTL_SRWLOCK *v28; // rdi
  __int64 (*v29)(void); // rax
  __int64 v30; // rax
  int v31; // ebx
  _QWORD *v32; // rcx
  char v33; // al
  bool (__fastcall *v34)(CTaskWindow *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  bool IsEqualByView; // al
  HWND *v36; // rcx
  bool (__fastcall *v37)(HWND *, HWND); // rax
  bool v38; // al
  char v39; // al
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v40; // rcx
  _QWORD *v41; // rcx
  int v42; // eax
  int (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall ***v44)(_QWORD, GUID *, HWND *); // rcx
  HWND (__fastcall *v45)(CImmersiveApp *__hidden); // rax
  HWND v46; // rbx
  CTaskWindow *v47; // rcx
  HWND NativeWindow; // rax
  HWND v49; // r15
  int v50; // edi
  int CallbackArray; // eax
  struct IObjectArray *v52; // r14
  char *v53; // rax
  const struct std::nothrow_t *v54; // rdx
  char *v55; // r15
  __int64 v56; // rbx
  __int64 v57; // r12
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r13
  __int64 v61; // rcx
  char *v62; // rdi
  _QWORD *v63; // rbx
  _QWORD *v64; // rax
  _QWORD *v65; // rsi
  void (*v66)(void); // rax
  void (__fastcall *v67)(_QWORD *); // rax
  __int64 (__fastcall *v68)(void *); // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 (__fastcall *v73)(_QWORD); // rax
  HWND v74; // rcx
  unsigned int v75; // eax
  __int64 v76; // rcx
  bool v78; // [rsp+31h] [rbp-CFh]
  char *v79; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C0h] BYREF
  struct IObjectArray *v81; // [rsp+48h] [rbp-B8h] BYREF
  HWND v82; // [rsp+50h] [rbp-B0h] BYREF
  int v83; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v84; // [rsp+60h] [rbp-A0h] BYREF
  HWND v85; // [rsp+68h] [rbp-98h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v86; // [rsp+70h] [rbp-90h]
  _QWORD *v87; // [rsp+78h] [rbp-88h] BYREF
  int v88; // [rsp+80h] [rbp-80h] BYREF
  int v89; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int Ptr; // [rsp+88h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-70h] BYREF
  __int64 v92; // [rsp+98h] [rbp-68h]
  int v93; // [rsp+A0h] [rbp-60h]
  void *v94; // [rsp+A8h] [rbp-58h]
  int v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h]
  __int64 v97; // [rsp+C0h] [rbp-40h]
  _QWORD *v98; // [rsp+C8h] [rbp-38h]
  bool *v99; // [rsp+D0h] [rbp-30h]
  __int128 v100; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-18h]
  __int64 v102; // [rsp+F0h] [rbp-10h]
  __int64 v103; // [rsp+F8h] [rbp-8h]
  __int64 v104; // [rsp+100h] [rbp+0h]
  RTL_SRWLOCK *v105; // [rsp+108h] [rbp+8h]
  char *v106; // [rsp+110h] [rbp+10h]
  GUID iid; // [rsp+118h] [rbp+18h] BYREF
  WCHAR Buffer[40]; // [rsp+130h] [rbp+30h] BYREF

  v101 = -2LL;
  v6 = a3;
  v82 = a3;
  v99 = a5;
  v9 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister == a2 || CApplicationManager::_uMsgWindowServiceUnregister == a2 )
  {
    if ( !GlobalGetAtomNameW(a4, Buffer, 40) )
    {
      v9 = 1;
      goto LABEL_155;
    }
    if ( IIDFromString(Buffer, &iid) < 0
      || !(unsigned int)GetWindowBand(v6, &v88)
      || (v88 != 1 && v88 != 8 || v88 == 1)
      && (!(unsigned int)GetWindowBand(v6, &v89)
       || (v89 != 1 && v89 != 8 || v89 == 1) && (v89 != 1 || !(unsigned int)IsShellManagedWindow(v6))) )
    {
      goto LABEL_154;
    }
    if ( GetWindow(v6, 4u) )
      goto LABEL_154;
    IsWindowServiceSupported = CoreIsWindowServiceSupported(v6, &iid);
    v78 = CApplicationManager::_uMsgWindowServiceRegister == a2;
    if ( IsWindowServiceSupported >= 0 != (CApplicationManager::_uMsgWindowServiceRegister == a2) )
      goto LABEL_154;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v14 = (char *)this - 200;
    v79 = (char *)this - 200;
    v80 = 0LL;
    v102 = 0LL;
    v15 = 0LL;
    v81 = 0LL;
    v16 = 0LL;
    if ( *((_QWORD *)this + 54) )
    {
      v103 = 0LL;
      while ( 1 )
      {
        v17 = *(_QWORD *)(*((_QWORD *)v14 + 78) + 8 * v16);
        v96 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        v18 = -1;
        v84 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v17)(
               v17,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v84) >= 0 )
        {
          v85 = v6;
          v86 = 0LL;
          v19 = v84;
          v20 = *(__int64 (__fastcall **)(_QWORD *, HWND *, __int64))(*v84 + 296LL);
          if ( (char *)v20 == (char *)CImmersiveApp::MatchByWindow )
          {
            v104 = 0LL;
            v21 = 0LL;
            if ( v84[39] )
            {
              do
              {
                v22 = *(CTaskWindow **)(v19[38] + 8 * v21);
                v23 = *(_QWORD *)v22;
                if ( v85 )
                {
                  v24 = *(__int64 (**)(void))(v23 + 32);
                  if ( (char *)v24 == (char *)CTaskWindow::GetNativeWindow )
                  {
                    v25 = *((_QWORD *)v22 + 4);
                    if ( !v25 )
                    {
                      v87 = 0LL;
                      (***((void (__fastcall ****)(__int64, GUID *, _QWORD **))v22 + 6))(
                        *((_QWORD *)v22 + 6),
                        &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
                        &v87);
                      v26 = v87;
                      v27 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*v87 + 48LL);
                      if ( v27 == ViewWrapperBase::get_ClientWindow )
                      {
                        v28 = (RTL_SRWLOCK *)(v87[17] + 296LL);
                        AcquireSRWLockShared(v28);
                        v105 = v28;
                        v29 = *(__int64 (**)(void))(*(v26 - 3) + 648LL);
                        if ( (char *)v29 == (char *)ViewWrapperBase::GetWindow )
                          v30 = v26[29];
                        else
                          LODWORD(v30) = v29();
                        v83 = v30;
                        v31 = 0;
                        if ( !(_DWORD)v30 )
                          v31 = -2147023728;
                        if ( v28 )
                          ReleaseSRWLockShared(v28);
                      }
                      else
                      {
                        v31 = v27((ViewWrapperBase *)v87, (unsigned int *)&v83);
                      }
                      if ( v31 >= 0 )
                        v25 = v83;
                      v32 = v87;
                      if ( v87 )
                      {
                        v87 = 0LL;
                        (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
                      }
                    }
                  }
                  else
                  {
                    v25 = v24();
                  }
                  if ( (HWND)v25 == v85 )
                  {
LABEL_49:
                    v33 = 1;
                    v14 = v79;
                    goto LABEL_57;
                  }
                }
                else
                {
                  v34 = *(bool (__fastcall **)(CTaskWindow *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(v23 + 48);
                  if ( v34 == CTaskWindow::IsEqualByView )
                    IsEqualByView = CTaskWindow::IsEqualByView(v22, v86);
                  else
                    IsEqualByView = v34(v22, v86);
                  if ( IsEqualByView )
                    goto LABEL_49;
                }
                ++v21;
              }
              while ( v21 < v19[39] );
              v14 = v79;
            }
            v33 = 0;
LABEL_57:
            if ( v33
              || v85
              && ((v36 = (HWND *)v19[36],
                   v37 = (bool (__fastcall *)(HWND *, HWND))*((_QWORD *)*v36 + 20),
                   v37 != CFrameApplicationPresentation::IsPresentationLayerWindow)
                ? (v38 = v37(v36, v85))
                : (v38 = v85 == v36[16]),
                  v38) )
            {
              v39 = 1;
              v6 = v82;
            }
            else
            {
              v39 = 0;
              v6 = v82;
            }
          }
          else
          {
            v39 = v20(v84, &v85, 2LL);
          }
          v18 = (v39 != 0) - 1;
          v40 = v86;
          if ( v86 )
          {
            v86 = 0LL;
            (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
        v41 = v84;
        if ( v84 )
        {
          v84 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
        }
        v96 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( !v18 )
          break;
        if ( ++v16 >= *((_QWORD *)v14 + 79) )
        {
          v15 = (unsigned __int64)v81;
          goto LABEL_73;
        }
      }
      v15 = v16;
      v42 = 0;
    }
    else
    {
LABEL_73:
      v42 = -2147319765;
    }
    if ( v42 < 0
      || (v43 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v14 + 78) + 8 * v15),
          (**v43)(v43, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v80) < 0) )
    {
      if ( !GetPropW(v6, L"DelayServiceAvailabilityChangedOperationId") )
      {
        *(_QWORD *)&v100 = v14;
        *((_QWORD *)&v100 + 1) = v6;
        v75 = CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(*((int **)v14 + 99), &v100);
        if ( v75 )
          SetPropW(v6, L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v75);
      }
      goto LABEL_151;
    }
    v44 = (void (__fastcall ***)(_QWORD, GUID *, HWND *))v80;
    v45 = *(HWND (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v80 + 384LL);
    if ( v45 != CImmersiveApp::GetNativeWindow )
      goto LABEL_82;
    v46 = 0LL;
    if ( (*(_BYTE *)(v80 + 424) & 1) == 0 || !*(_QWORD *)(v80 + 312) )
    {
LABEL_84:
      v82 = 0LL;
      (**v44)(v44, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v82);
      v49 = v82;
      v50 = v78 | 6;
      if ( v46 != v6 )
        v50 = v78 | 4;
      v81 = 0LL;
      CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(v79 + 432), &v81);
      v52 = v81;
      if ( CallbackArray < 0 )
        goto LABEL_142;
      SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(&v91, v49, v81, 1LL, &iid, v50);
      v53 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v55 = v53;
      if ( v53 )
      {
        *((_QWORD *)v53 + 1) = 0LL;
        *((_QWORD *)v53 + 2) = 0LL;
        v56 = v91;
        v57 = 0LL;
        v91 = 0LL;
        v58 = *((_QWORD *)v53 + 1);
        if ( v58 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        *((_QWORD *)v55 + 1) = v56;
        v59 = v92;
        v60 = 0LL;
        v92 = 0LL;
        v61 = *((_QWORD *)v55 + 2);
        if ( v61 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
        *((_QWORD *)v55 + 2) = v59;
        *((_DWORD *)v55 + 10) = v95;
        *((_DWORD *)v55 + 6) = v93;
        *((_QWORD *)v55 + 4) = v94;
        v94 = 0LL;
        v95 = 0;
        *(_QWORD *)v55 = &CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::`vftable';
        *((_DWORD *)v55 + 12) = 0;
      }
      else
      {
        v55 = 0LL;
        v60 = v92;
        v57 = v91;
      }
      v106 = v55;
      if ( !v55 )
      {
LABEL_136:
        if ( v55 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v55 + 16LL))(v55);
        operator delete(v94, v54);
        if ( v60 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
        if ( v57 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
LABEL_142:
        if ( v52 )
          ((void (__fastcall *)(struct IObjectArray *))v52->lpVtbl->Release)(v52);
        v74 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(HWND))(*(_QWORD *)v74 + 16LL))(v74);
        }
LABEL_151:
        v76 = v80;
        if ( v80 )
        {
          v80 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
LABEL_154:
        v9 = 1;
        goto LABEL_155;
      }
      (*(void (__fastcall **)(char *))(*(_QWORD *)v55 + 8LL))(v55);
      v62 = v55;
      v79 = v55;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v55 + 8LL))(v55);
      Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
      v63 = 0LL;
      v97 = 0LL;
      v64 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v65 = v64;
      if ( v64 )
      {
        *v64 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
        *((_DWORD *)v64 + 3) = 1;
        *v64 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v66 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
          if ( (char *)v66 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          {
            _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
            v52 = v81;
            v60 = v92;
            v57 = v91;
            v62 = v79;
          }
          else
          {
            v66();
          }
        }
        *v65 = off_18031EB08;
        v65[2] = 0LL;
        if ( v65 + 2 != &v79 )
        {
          v65[2] = v55;
          v62 = 0LL;
          v79 = 0LL;
        }
        v63 = v65;
      }
      v98 = v63;
      v97 = 0LL;
      Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, Ptr);
      if ( v63 )
      {
        v98 = 0LL;
        v67 = *(void (__fastcall **)(_QWORD *))(*v63 + 16LL);
        if ( (char *)v67 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        {
          if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
                  (Microsoft::WRL::Details *)((char *)v63 + 12),
                  (volatile int *)v54) )
          {
            v68 = *(__int64 (__fastcall **)(void *))(*v63 + 32LL);
            if ( (char *)v68 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_323d14d606b14d2939124d398e1f4aa2_>::`scalar deleting destructor' )
            {
              v69 = v63[2];
              if ( v69 )
              {
                v63[2] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
              }
              *((_DWORD *)v63 + 3) = -1073741823;
              operator delete(v63, (const struct std::nothrow_t *)0x20);
              goto LABEL_131;
            }
            if ( (char *)v68 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_33ae1f57d3bf46c1270e08142e9d9c0c_>::`vector deleting destructor' )
            {
              v70 = v63[3];
              if ( v70 )
              {
                v63[3] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
              }
            }
            else
            {
              if ( (char *)v68 != (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac4863598604ec72e89080dc7a8a9967_>::`vector deleting destructor' )
              {
                if ( (char *)v68 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor' )
                {
                  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor'(
                    v63,
                    1);
                }
                else if ( v68 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_212ff9793df855e45456e1ed2b184a0d_>::`vector deleting destructor' )
                {
                  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_212ff9793df855e45456e1ed2b184a0d_>::`vector deleting destructor'(v63);
                }
                else if ( (char *)v68 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c35d5355421e51b91e1b7dc40faf7951_>::`scalar deleting destructor' )
                {
                  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c35d5355421e51b91e1b7dc40faf7951_>::`scalar deleting destructor'(
                    v63,
                    1);
                }
                else if ( v68 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor' )
                {
                  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(v63);
                }
                else if ( (char *)v68 == (char *)Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor' )
                {
                  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_379fb6251cfae0942258739af0295e77_>::`vector deleting destructor'(
                    v63,
                    1);
                }
                else
                {
                  ((void (__fastcall *)(_QWORD *, __int64))v68)(v63, 1LL);
                }
LABEL_131:
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                {
                  v73 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
                  v54 = (const struct std::nothrow_t *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount;
                  if ( v73 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
                    v52 = v81;
                    v60 = v92;
                    v57 = v91;
                    v62 = v79;
                  }
                  else
                  {
                    ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (__fastcall *)(_QWORD)))v73)(
                      Microsoft::WRL::Details::ModuleBase::module_,
                      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount);
                  }
                }
                goto LABEL_134;
              }
              v71 = v63[4];
              if ( v71 )
              {
                v63[4] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
              }
              v72 = v63[2];
              if ( v72 )
              {
                v63[2] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
              }
            }
            *((_DWORD *)v63 + 3) = -1073741823;
            operator delete(v63, (const struct std::nothrow_t *)0x28);
            goto LABEL_131;
          }
        }
        else
        {
          v67(v63);
        }
      }
LABEL_134:
      if ( v62 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v62 + 16LL))(v62);
      goto LABEL_136;
    }
    v47 = **(CTaskWindow ***)(v80 + 304);
    v45 = *(HWND (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v47 + 32LL);
    if ( v45 == CTaskWindow::GetNativeWindow )
      NativeWindow = CTaskWindow::GetNativeWindow(v47);
    else
LABEL_82:
      NativeWindow = (HWND)((__int64 (*)(void))v45)();
    v46 = NativeWindow;
    v44 = (void (__fastcall ***)(_QWORD, GUID *, HWND *))v80;
    goto LABEL_84;
  }
  if ( a2 == 1025 )
  {
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 74), a4);
    v11 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v10 + 8LL))(v10);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v11)(v11, 1LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else if ( a2 == 1026 )
  {
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v12 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 74), a4);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v12 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v12 + 8LL))(v12);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v12)(v12, 1LL);
    }
  }
LABEL_155:
  *v99 = v9;
  return 0LL;
}
