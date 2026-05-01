/*
 * XREFs of ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006FE70
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800F0D9C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180105E60 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?GetGlomId@CImmersiveApp@@UEBAKXZ @ 0x1800499E0 (-GetGlomId@CImmersiveApp@@UEBAKXZ.c)
 *     ?GetApplicationId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004D0C0 (-GetApplicationId@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18006FD14 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x18010A3A8 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K0@Z @ 0x18010F38C (-_EnsureCapacity@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPP.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18011CC0C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
        CActivationBasedAppAndGlomCollection *this,
        CImmersiveApp **a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, CWinRTApplicationView **))
{
  CActivationBasedAppAndGlomCollection *v5; // r13
  CImmersiveApp *v6; // rcx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v7; // r15
  int GlomCollection; // ebx
  HRESULT (__fastcall *v9)(LPCWSTR *, unsigned __int16 **); // rax
  HRESULT ApplicationId; // eax
  CImmersiveApp *v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  CImmersiveApp **v18; // rdx
  CImmersiveApp *v19; // rcx
  __int64 (*v20)(void); // rax
  unsigned int GlomId; // eax
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  CImmersiveApp **v24; // rdx
  CImmersiveApp *v25; // rcx
  CWinRTApplicationView *v26; // r14
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // r12
  PSRWLOCK v30; // rdi
  PVOID Ptr; // rbx
  CWinRTApplicationView *v32; // r13
  _DWORD *v33; // rdi
  volatile int *v34; // rdx
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  void (*v37)(void); // rax
  void (__fastcall *v38)(_QWORD *); // rax
  CWinRTApplicationView *v39; // rcx
  __int64 v40; // rcx
  int v42[2]; // [rsp+20h] [rbp-A9h] BYREF
  CImmersiveApp *v43; // [rsp+28h] [rbp-A1h] BYREF
  unsigned __int64 v44; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-91h]
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v46; // [rsp+40h] [rbp-89h] BYREF
  __int64 v47; // [rsp+48h] [rbp-81h]
  LPVOID pv; // [rsp+50h] [rbp-79h] BYREF
  __int64 v49; // [rsp+58h] [rbp-71h]
  __int64 v50; // [rsp+60h] [rbp-69h]
  _DWORD *v51; // [rsp+68h] [rbp-61h]
  PVOID v52; // [rsp+70h] [rbp-59h]
  PVOID v53; // [rsp+78h] [rbp-51h] BYREF
  __int64 v54; // [rsp+80h] [rbp-49h] BYREF
  CWinRTApplicationView *v55; // [rsp+88h] [rbp-41h] BYREF
  PVOID v56; // [rsp+90h] [rbp-39h] BYREF
  __int64 v57; // [rsp+98h] [rbp-31h]
  CWinRTApplicationView *v58; // [rsp+A0h] [rbp-29h]
  __int64 v59; // [rsp+A8h] [rbp-21h]
  __int64 v60; // [rsp+B0h] [rbp-19h]
  __int128 v61; // [rsp+B8h] [rbp-11h]
  int v62; // [rsp+C8h] [rbp-1h]
  __int64 v63; // [rsp+D0h] [rbp+7h]
  __int64 v64; // [rsp+D8h] [rbp+Fh]
  _QWORD *v65; // [rsp+E0h] [rbp+17h]
  __int64 v66; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]
  unsigned int v69; // [rsp+138h] [rbp+6Fh]
  CWinRTApplicationView *v70; // [rsp+148h] [rbp+7Fh] BYREF

  v63 = -2LL;
  v5 = this;
  v6 = *a2;
  v7 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  GlomCollection = (**(__int64 (__fastcall ***)(CImmersiveApp *, GUID *, CImmersiveApp **))v6)(
                     v6,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     &v43);
  if ( GlomCollection >= 0 )
  {
    pv = 0LL;
    v49 = -1LL;
    v50 = -1LL;
    v9 = *(HRESULT (__fastcall **)(LPCWSTR *, unsigned __int16 **))(*(_QWORD *)v43 + 32LL);
    if ( v9 == CImmersiveApp::GetApplicationId )
      ApplicationId = CImmersiveApp::GetApplicationId((LPCWSTR *)v43, (unsigned __int16 **)&pv);
    else
      ApplicationId = v9((LPCWSTR *)v43, (unsigned __int16 **)&pv);
    GlomCollection = ApplicationId;
    if ( ApplicationId >= 0 )
    {
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                         v5,
                         (const unsigned __int16 *)pv,
                         &v46,
                         &v44);
      v45 = v44;
      v7 = v46;
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v49 = 0LL;
    v50 = 0LL;
  }
  v11 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( GlomCollection < 0 )
  {
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 2;
    v45 = 0LL;
    v44 = 0LL;
    v12 = 0;
    v13 = *((_QWORD *)v5 + 6);
    if ( v13 != *((_QWORD *)v5 + 8)
      || (v12 = CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::_EnsureCapacity(
                  (char *)v5 + 40,
                  v13 + 1),
          v12 >= 0) )
    {
      v14 = ++*((_QWORD *)v5 + 6);
      v15 = *((_QWORD *)v5 + 5) + 40 * (v14 - 1);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 16) = 0LL;
        v59 = 0LL;
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 24) = 0LL;
        *(_DWORD *)(v15 + 32) = 2;
        v14 = *((_QWORD *)v5 + 6);
      }
      v45 = v14 - 1;
      v44 = v14 - 1;
      v7 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)v5 + 5) + 40 * (v14 - 1));
      v46 = v7;
    }
    v60 = 0LL;
    *((_QWORD *)&v61 + 1) = 0LL;
    if ( v12 < 0 )
      goto LABEL_90;
  }
  v16 = *((_QWORD *)v7 + 1);
  v12 = 0;
  if ( v16 + 1 <= *((_QWORD *)v7 + 3)
    || (v12 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                v7,
                v16 + 1),
        v12 >= 0) )
  {
    v17 = *((_QWORD *)v7 + 1);
    if ( v16 < v17 )
      memmove((void *)(*(_QWORD *)v7 + 8 * v16 + 8), (const void *)(*(_QWORD *)v7 + 8 * v16), 8 * (v17 - v16));
    *((_QWORD *)v7 + 1) = v16 + 1;
    v18 = (CImmersiveApp **)(*(_QWORD *)v7 + 8 * v16);
    if ( v18 )
    {
      v19 = *a2;
      *v18 = *a2;
      if ( v19 )
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    v20 = *(__int64 (**)(void))(*(_QWORD *)*a2 + 160LL);
    if ( (char *)v20 == (char *)CImmersiveApp::GetGlomId )
      GlomId = CImmersiveApp::GetGlomId(*a2);
    else
      GlomId = v20();
    if ( GlomId >= *((_DWORD *)v7 + 8) )
      *((_DWORD *)v7 + 8) = GlomId + 1;
  }
  if ( v12 < 0 )
    goto LABEL_90;
  v22 = 0LL;
  v12 = 0;
  v23 = *((_QWORD *)v5 + 2);
  if ( v23 != *((_QWORD *)v5 + 4)
    || (v12 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                (char *)v5 + 8,
                v23 + 1),
        v12 >= 0) )
  {
    v24 = (CImmersiveApp **)(*((_QWORD *)v5 + 1) + 8 * (*((_QWORD *)v5 + 2))++);
    if ( v24 )
    {
      v25 = *a2;
      *v24 = *a2;
      if ( v25 )
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  if ( v12 < 0 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v7,
      *((_QWORD *)v7 + 1) - 1LL);
    goto LABEL_76;
  }
  *(_QWORD *)v42 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(CImmersiveApp *, GUID *, int *))*a2)(
          *a2,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          v42);
  if ( v12 < 0 )
  {
LABEL_74:
    v40 = *(_QWORD *)v42;
    if ( *(_QWORD *)v42 )
    {
      *(_QWORD *)v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
LABEL_76:
    if ( v12 >= 0 )
      return (unsigned int)v12;
LABEL_90:
    if ( v7 )
    {
      if ( !*((_QWORD *)v7 + 1) )
        CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
          (char *)v5 + 40,
          v45);
    }
    return (unsigned int)v12;
  }
  v26 = 0LL;
  v70 = 0LL;
  if ( !a3 )
  {
LABEL_39:
    v29 = *(_QWORD *)v42;
    v57 = *(_QWORD *)v42;
    if ( *(_QWORD *)v42 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v42 + 8LL))(*(_QWORD *)v42);
      v26 = v70;
    }
    v58 = v26;
    if ( v26 )
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v26 + 8LL))(v26);
    v30 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v56 = Ptr;
    if ( Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v52 = Ptr;
      v53 = Ptr;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v47 = v29;
      v54 = v29;
      v29 = 0LL;
      v57 = 0LL;
      v32 = v26;
      v55 = v26;
      v26 = 0LL;
      v58 = 0LL;
      v69 = (unsigned int)v30[15].Ptr;
      v64 = 0LL;
      v33 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v34 = 0LL;
      v35 = 0LL;
      v51 = 0LL;
      v36 = 0LL;
      if ( v33 )
      {
        *(_QWORD *)v33 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
        v33[3] = 1;
        *(_QWORD *)v33 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v37 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
          if ( (char *)v37 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
          else
            v37();
          v34 = 0LL;
        }
        *(_QWORD *)v33 = off_180319208;
        *((_QWORD *)v33 + 2) = 0LL;
        if ( v33 + 4 != (_DWORD *)&v53 )
        {
          *((_QWORD *)v33 + 2) = Ptr;
          v52 = 0LL;
          v53 = 0LL;
        }
        *((_QWORD *)v33 + 3) = 0LL;
        if ( v33 + 6 != (_DWORD *)&v54 )
        {
          *((_QWORD *)v33 + 3) = v47;
          v47 = 0LL;
          v54 = 0LL;
        }
        *((_QWORD *)v33 + 4) = 0LL;
        if ( v33 + 8 != (_DWORD *)&v55 )
        {
          *((_QWORD *)v33 + 4) = v32;
          v32 = 0LL;
          v55 = 0LL;
        }
        v22 = v33;
        v35 = v33;
        v51 = v33;
        v36 = v33;
      }
      v65 = v22;
      if ( v35 )
      {
        v66 = 0LL;
        v12 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0, 2u, v69);
        v36 = v51;
      }
      else
      {
        v12 = -2147024882;
      }
      if ( v36 )
      {
        v38 = *(void (__fastcall **)(_QWORD *))(*v22 + 16LL);
        if ( (char *)v38 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
            v22,
            v34);
        else
          v38(v22);
      }
      if ( v32 )
        (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v32 + 16LL))(v32);
      if ( v47 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      if ( v52 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v52 + 16LL))(v52);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      v5 = this;
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
      v12 = -2147023728;
    }
    if ( v26 )
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v39 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    goto LABEL_74;
  }
  v27 = (**a3)(a3, &GUID_00000000_0000_0000_c000_000000000046, &v70);
  v28 = v27;
  if ( v27 >= 0 )
  {
    v26 = v70;
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A5,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v27,
    v42[0]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v42);
  return v28;
}
