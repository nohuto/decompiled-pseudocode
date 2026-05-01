/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18002ADA0
 * Callers:
 *     ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800252D0 (-SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ @ 0x180005770 (-GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ.c)
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180006680 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x18000C204 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___ @ 0x18008FA70 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_ee3e0a0da20eb1cf2fabc.c)
 *     ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800937B4 (-ValidateGatheredWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationVi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18013E708 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x18013E834 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18013F58C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // r15
  int v7; // r14d
  unsigned int v8; // edi
  int v9; // ebx
  unsigned __int16 *v10; // rcx
  BOOL v11; // r12d
  CClassicWindowExternal *v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 Window; // rax
  _QWORD *v15; // r15
  CClassicWindowExternal *v16; // rcx
  __int64 v17; // r14
  __int64 (*v18)(void); // rax
  __int64 v19; // rax
  volatile int *v20; // rdx
  __int64 (__fastcall *v21)(__int64, volatile int *, int, char); // rax
  int v22; // eax
  unsigned int v23; // r14d
  CClassicWindowExternal *v24; // rcx
  __int64 (*v25)(void); // rax
  __int64 v26; // rax
  HWND v27; // rsi
  _QWORD *v28; // r14
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v34; // rax
  HWND v35; // rax
  int v36; // r14d
  int v37; // [rsp+20h] [rbp-50h]
  _QWORD v38[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v39; // [rsp+50h] [rbp-20h] BYREF
  __int64 v40; // [rsp+58h] [rbp-18h]
  __int64 v41; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  RTL_SRWLOCK *v43; // [rsp+A0h] [rbp+30h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v43 = v6;
  v7 = *(_DWORD *)(a1 + 256);
  v8 = 0;
  if ( a3 )
    v9 = a2 | v7;
  else
    v9 = v7 & ~a2;
  *(_DWORD *)(a1 + 256) = v9;
  v10 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( v7 != v9 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
    v40 = -1LL;
    v41 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v39) >= 0 )
    {
      v38[0] = &v39;
      v38[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(v38);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        &v39,
        a1 + 256);
    }
    v10 = v39;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v39 = 0LL;
  }
  v40 = 0LL;
  v41 = 0LL;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v11 = v9 != 0;
  if ( v11 == (v7 != 0) && v9 )
    return 0LL;
  v43 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___(&v43);
  if ( v43 )
  {
    v12 = *(CClassicWindowExternal **)(a1 + 208);
    v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 24LL);
    if ( v9 )
    {
      v15 = (_QWORD *)(a1 + 224);
      v34 = v13();
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        a1 + 224,
        v34);
    }
    else
    {
      if ( (char *)v13 == (char *)CClassicWindowExternal::GetWindow )
        Window = CClassicWindowExternal::GetWindow(v12);
      else
        Window = v13();
      v15 = (_QWORD *)(a1 + 224);
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        a1 + 224,
        Window);
    }
    v16 = *(CClassicWindowExternal **)(a1 + 208);
    v17 = (__int64)v43;
    v18 = *(__int64 (**)(void))(*(_QWORD *)v16 + 24LL);
    if ( (char *)v18 == (char *)CClassicWindowExternal::GetWindow )
      v19 = CClassicWindowExternal::GetWindow(v16);
    else
      v19 = v18();
    v20 = (volatile int *)v19;
    v21 = *(__int64 (__fastcall **)(__int64, volatile int *, int, char))(*(_QWORD *)v17 + 24LL);
    if ( v21 == CClassicWindowManager::SetCloak )
      v22 = CClassicWindowManager::SetCloak(v17, v20, v11, 1);
    else
      v22 = v21(v17, v20, v9 != 0, 1);
    v23 = v22;
    if ( v22 == -2147024809 )
    {
      if ( !v9 )
      {
        v35 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 24LL))(*(_QWORD *)(a1 + 208));
        if ( GetWindow(v35, 4u) )
        {
          if ( *(_QWORD *)(a1 + 232) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x136,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL,
              v37);
          goto LABEL_46;
        }
      }
    }
    else if ( v22 >= 0 )
    {
      v24 = *(CClassicWindowExternal **)(a1 + 208);
      v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 24LL);
      if ( (char *)v25 == (char *)CClassicWindowExternal::GetWindow )
        v26 = CClassicWindowExternal::GetWindow(v24);
      else
        v26 = v25();
      v27 = (HWND)GhostWindowFromHungWindow(v26);
      if ( v27 )
      {
        v36 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, HWND, bool, _QWORD))v43->Ptr + 3))(v43, v27, v9 != 0, 0LL);
        if ( (v36 != -2147024809 || v9 || !GetWindow(v27, 4u)) && v36 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x151,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)v36,
            v37);
      }
      v28 = (_QWORD *)*v15;
      v29 = v15[1];
      v30 = 0LL;
      v31 = (unsigned __int64)(8 * v29 + 7) >> 3;
      if ( *v15 > (unsigned __int64)(*v15 + 8 * v29) )
        v31 = 0LL;
      if ( v31 )
      {
        do
        {
          (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, bool, _QWORD))v43->Ptr + 3))(v43, *v28++, v9 != 0, 0LL);
          ++v30;
        }
        while ( v30 != v31 );
      }
      if ( !v9 )
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)v15);
      v32 = (__int64)v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v23,
      v37);
    v8 = v23;
  }
  else
  {
    v8 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x8007000CLL,
      v37);
  }
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
  return v8;
}
