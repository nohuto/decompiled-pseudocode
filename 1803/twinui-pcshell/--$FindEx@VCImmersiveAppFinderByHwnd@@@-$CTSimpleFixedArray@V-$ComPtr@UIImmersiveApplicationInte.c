/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180070500
 * Callers:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003C194 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180044830 (-GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180047D90 (-IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F8F08 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  __int64 *v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // esi
  unsigned int v13; // ecx
  _QWORD *v14; // r12
  bool (__fastcall *v15)(_QWORD *, HWND *, char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)); // rax
  void *v16; // r8
  unsigned __int64 v17; // rsi
  CTaskWindow *v18; // rcx
  __int64 v19; // rax
  __int64 (*v20)(void); // rax
  __int64 v21; // r15
  _QWORD *v22; // r14
  __int64 (__fastcall *v23)(ViewWrapperBase *, unsigned int *); // rax
  RTL_SRWLOCK *v24; // rsi
  __int64 (*v25)(void); // rax
  __int64 v26; // rax
  int v27; // r14d
  _QWORD *v28; // rcx
  char v29; // al
  char v30; // al
  _QWORD *v31; // r8
  bool (__fastcall *v32)(HWND *, HWND); // rax
  bool v33; // al
  char v34; // al
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // rcx
  _QWORD *v36; // rcx
  char (__fastcall *v38)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *); // rax
  char IsEqualByView; // al
  bool v40; // si
  _QWORD *v41; // [rsp+30h] [rbp-51h] BYREF
  HWND v42; // [rsp+38h] [rbp-49h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v43; // [rsp+40h] [rbp-41h]
  _QWORD *v44; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-31h] BYREF
  __int64 v46; // [rsp+58h] [rbp-29h]
  _QWORD v47[14]; // [rsp+60h] [rbp-21h] BYREF
  int v51; // [rsp+F8h] [rbp+77h] BYREF

  v47[1] = -2LL;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  *a4 = 0LL;
  v9 = 0LL;
  v46 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  do
  {
    v10 = *v6;
    v47[2] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(_QWORD *)(*v8 + 8 * v9);
    v47[3] = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = -1;
    v41 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v11)(
           v11,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v41) < 0 )
      goto LABEL_40;
    v42 = *(HWND *)v7;
    v43 = 0LL;
    v13 = *(_DWORD *)(v7 + 8);
    a5 = v13;
    v14 = v41;
    v15 = *(bool (__fastcall **)(_QWORD *, HWND *, char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)))(*v41 + 296LL);
    v16 = CImmersiveApp::MatchByWindow;
    if ( (char *)v15 != (char *)CImmersiveApp::MatchByWindow )
    {
      v34 = v15(
              v41,
              &v42,
              (char (__fastcall *)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))v13);
      goto LABEL_37;
    }
    v47[4] = 0LL;
    v17 = 0LL;
    v45 = 0LL;
    if ( !v41[39] )
    {
LABEL_27:
      v29 = 0;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v18 = *(CTaskWindow **)(v14[38] + 8 * v17);
      v19 = *(_QWORD *)v18;
      if ( v42 )
        break;
      v38 = *(char (__fastcall **)(CTaskWindow *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(v19 + 48);
      if ( v38 == CTaskWindow::IsEqualByView )
        IsEqualByView = CTaskWindow::IsEqualByView(v18, v43);
      else
        IsEqualByView = v38(v18, v43);
      if ( IsEqualByView )
        goto LABEL_49;
LABEL_25:
      v45 = ++v17;
      if ( v17 >= v14[39] )
      {
        v9 = v46;
        v8 = a1;
        goto LABEL_27;
      }
    }
    v20 = *(__int64 (**)(void))(v19 + 32);
    v16 = CTaskWindow::GetNativeWindow;
    if ( (char *)v20 == (char *)CTaskWindow::GetNativeWindow )
    {
      v21 = *((_QWORD *)v18 + 4);
      if ( !v21 )
      {
        v44 = 0LL;
        (***((void (__fastcall ****)(__int64, GUID *, _QWORD **))v18 + 6))(
          *((_QWORD *)v18 + 6),
          &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
          &v44);
        v22 = v44;
        v23 = *(__int64 (__fastcall **)(ViewWrapperBase *, unsigned int *))(*v44 + 48LL);
        if ( v23 == ViewWrapperBase::get_ClientWindow )
        {
          v24 = (RTL_SRWLOCK *)(v44[17] + 296LL);
          AcquireSRWLockShared(v24);
          v47[0] = v24;
          v25 = *(__int64 (**)(void))(*(v22 - 3) + 648LL);
          if ( (char *)v25 == (char *)ViewWrapperBase::GetWindow )
            v26 = v22[29];
          else
            LODWORD(v26) = v25();
          v51 = v26;
          v27 = 0;
          if ( !(_DWORD)v26 )
            v27 = -2147023728;
          if ( v24 )
            ReleaseSRWLockShared(v24);
          v17 = v45;
        }
        else
        {
          v27 = v23((ViewWrapperBase *)v44, (unsigned int *)&v51);
        }
        if ( v27 >= 0 )
          v21 = v51;
        v28 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
        }
      }
    }
    else
    {
      v21 = v20();
    }
    if ( (HWND)v21 != v42 )
      goto LABEL_25;
LABEL_49:
    v29 = 1;
    v9 = v46;
    v8 = a1;
LABEL_28:
    if ( v29 )
      goto LABEL_36;
    v30 = a5;
    if ( (a5 & 1) == 0 )
      goto LABEL_30;
    v45 = 0LL;
    v40 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                 v14 + 49,
                 &v42,
                 v16,
                 v47) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    if ( v40 )
      goto LABEL_36;
    v30 = a5;
LABEL_30:
    if ( (v30 & 2) != 0
      && v42
      && ((v31 = (_QWORD *)v14[36],
           v32 = *(bool (__fastcall **)(HWND *, HWND))(*v31 + 160LL),
           v32 != CFrameApplicationPresentation::IsPresentationLayerWindow)
        ? (v33 = v32((HWND *)v14[36], v42))
        : (v33 = v42 == (HWND)v31[16]),
          v33) )
    {
LABEL_36:
      v34 = 1;
    }
    else
    {
      v34 = 0;
    }
LABEL_37:
    v12 = (v34 != 0) - 1;
    v35 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v7 = a2;
LABEL_40:
    v36 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v12 )
    {
      *a4 = v9;
      return 0LL;
    }
    v46 = ++v9;
    v6 = a3;
  }
  while ( v9 < v8[1] );
  return 2147647531LL;
}
