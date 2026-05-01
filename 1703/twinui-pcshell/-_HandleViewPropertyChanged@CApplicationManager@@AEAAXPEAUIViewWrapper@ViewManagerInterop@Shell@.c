/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180012C88
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011910 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800189BC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  bool v9; // bl
  __int64 v10; // rcx
  __int64 *v11; // rcx
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  __int64 *v15; // rcx
  int First; // ebx
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // edi
  IUnknown **GITSitePtr; // rbx
  void *v26; // rcx
  HRESULT v27; // ebx
  __int64 v28; // rcx
  void *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 *v34; // [rsp+38h] [rbp-49h] BYREF
  INT32 result; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-3Dh] BYREF
  void *ppvOut; // [rsp+48h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+50h] [rbp-31h] BYREF
  __int64 v39; // [rsp+58h] [rbp-29h] BYREF
  __int64 v40; // [rsp+60h] [rbp-21h] BYREF
  __int64 v41; // [rsp+68h] [rbp-19h] BYREF
  __int64 v42; // [rsp+70h] [rbp-11h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v43; // [rsp+78h] [rbp-9h]
  __int64 v44; // [rsp+80h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF

  v44 = -2LL;
  v36 = 0;
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string1) >= 0 )
  {
    string = 0LL;
    v6 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
    if ( v6 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
      __debugbreak();
    }
    if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
    {
      string = 0LL;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v34 = 0LL;
      v42 = 0LL;
      v43 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      hstringHeader.Reserved.Reserved1 = 0LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 0;
      v9 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                  this,
                  &hstringHeader,
                  &v34,
                  0LL) >= 0;
      v10 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[8];
      if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
      {
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v9 )
        (*(void (__fastcall **)(__int64 *))(*v34 + 208))(v34);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v11 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
      }
    }
    string = 0LL;
    v12 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
      __debugbreak();
    }
    if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
    {
      string = 0LL;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v15 = 0LL;
      v34 = 0LL;
      v42 = 0LL;
      v43 = a2;
      if ( a2 )
      {
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
        v15 = v34;
      }
      hstringHeader.Reserved.Reserved1 = 0LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
      if ( a2 )
      {
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
        v15 = v34;
      }
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 0;
      if ( v15 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
      }
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                this,
                &hstringHeader,
                &v34,
                0LL);
      v17 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[8];
      if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
      {
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
      v41 = 0LL;
      if ( First >= 0 )
      {
        v18 = v34;
        v19 = *v34;
        v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v41);
        First = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64))(v19 + 352))(
                  v18,
                  2LL,
                  &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
                  v20);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( First >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v41 + 48LL))(
             v41,
             a2) )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64 *, GUID *, __int64 *))*v34)(
          v34,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          &v40);
        v39 = 0LL;
        if ( (*(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                              + 56LL))(
               CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
               v40,
               &v39) >= 0 )
        {
          v36 = 0;
          string = 0LL;
          v21 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
          if ( v21 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
          if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 360LL))(
                 a2,
                 string,
                 &v36) >= 0 )
          {
            v24 = v36;
            ppvOut = 0LL;
            GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this + 40, &v42);
            v26 = ppvOut;
            if ( ppvOut )
            {
              ppvOut = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
            }
            v27 = IUnknown_QueryService(
                    *GITSitePtr,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                    &ppvOut);
            v28 = v42;
            if ( v42 )
            {
              v42 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            if ( v27 >= 0 )
              (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v39, v24);
            v29 = ppvOut;
            if ( ppvOut )
            {
              ppvOut = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
            }
          }
        }
        v30 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v31 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
      v32 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      v33 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
      }
    }
  }
  WindowsDeleteString(string1);
}
