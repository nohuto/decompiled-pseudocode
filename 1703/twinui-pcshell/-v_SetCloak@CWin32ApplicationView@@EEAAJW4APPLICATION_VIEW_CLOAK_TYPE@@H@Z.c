/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007BB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800260C4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007A750 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18007B850 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18007D878 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18007E574 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800815CC (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  int *v6; // rdi
  int v7; // r12d
  int v8; // r15d
  void *v9; // rcx
  volatile signed __int32 *v10; // rbx
  int v11; // ebx
  __int64 (*v12)(void); // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  HWND v15; // rax
  DWORD WindowThreadProcessId; // edi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  HWND v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rax
  HWND v26; // rdi
  int v27; // ebx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned __int8 v33[4]; // [rsp+38h] [rbp-28h] BYREF
  int v34; // [rsp+3Ch] [rbp-24h]
  int v35; // [rsp+40h] [rbp-20h]
  LPVOID pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  volatile signed __int32 *v40; // [rsp+A0h] [rbp+40h] BYREF
  PSRWLOCK SRWLock; // [rsp+B8h] [rbp+58h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 32), &SRWLock);
  v6 = (int *)(a1 + 216);
  v7 = *(_DWORD *)(a1 + 216);
  if ( a3 )
    *v6 |= a2;
  else
    *v6 &= ~a2;
  v8 = *v6;
  v9 = 0LL;
  pv = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( v7 != v8 )
  {
    v37 = -1LL;
    v38 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 8), (unsigned __int16 **)&pv) >= 0 )
    {
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v40);
      v10 = v40;
      if ( v40 )
      {
        v35 = *v6;
        *(_DWORD *)v33 = 4;
        v34 = 1129590832;
        ApplicationViewManagement::CPersistence::_PersistData(
          (ApplicationViewManagement::CPersistence *)(v40 + 8),
          (const unsigned __int16 *)pv,
          L"CloakType",
          v33,
          0xCu);
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
      }
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(&pv);
    }
    v9 = pv;
  }
  if ( v9 )
  {
    CoTaskMemFree(v9);
    pv = 0LL;
  }
  v37 = 0LL;
  v38 = 0LL;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( (v8 != 0) == (v7 != 0) && v8 )
    return 0LL;
  ApplicationViewManagement::CGlobals::GetCwm((__int64 *)&v40);
  if ( v40 )
  {
    v12 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 168) + 24LL);
    if ( v8 )
    {
      v13 = a1 + 184;
      v14 = v12();
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        a1 + 184,
        v14);
    }
    else
    {
      v15 = (HWND)v12();
      v13 = a1 + 184;
      WindowThreadProcessId = GetWindowThreadProcessId(v15, 0LL);
      if ( WindowThreadProcessId )
      {
        v17 = *(_QWORD *)(a1 + 192);
        while ( v17 )
        {
          --v17;
          if ( GetWindowThreadProcessId(*(HWND *)(*(_QWORD *)v13 + 8 * v17), 0LL) != WindowThreadProcessId )
          {
            v18 = *(_QWORD *)(a1 + 192);
            if ( v17 < v18 )
            {
              if ( v17 != v18 - 1 )
                memmove(
                  (void *)(*(_QWORD *)v13 + 8 * v17),
                  (const void *)(*(_QWORD *)v13 + 8 * v17 + 8),
                  8 * (v18 - v17) - 8);
              --*(_QWORD *)(a1 + 192);
            }
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AF,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
          (const char *)0x80070578LL);
      }
    }
    v19 = (__int64)v40;
    v20 = *(_QWORD *)v40;
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168));
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, bool, __int64))(v20 + 24))(v19, v21, v8 != 0, 1LL);
    if ( v11 == -2147024809 )
    {
      if ( !v8 )
      {
        v22 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168));
        if ( GetWindow(v22, 4u) )
        {
          if ( *(_QWORD *)(a1 + 192) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x136,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL);
          v11 = 0;
          goto LABEL_37;
        }
      }
      goto LABEL_36;
    }
    if ( v11 < 0 )
    {
LABEL_36:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13C,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_37;
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168));
    v26 = (HWND)GhostWindowFromHungWindow(v25);
    if ( v26 )
    {
      v27 = (*(__int64 (__fastcall **)(volatile signed __int32 *, HWND, bool, _QWORD))(*(_QWORD *)v40 + 24LL))(
              v40,
              v26,
              v8 != 0,
              0LL);
      if ( (v27 != -2147024809 || v8 || !GetWindow(v26, 4u)) && v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x151,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
          (const char *)(unsigned int)v27);
    }
    v28 = *(_QWORD **)v13;
    v29 = *(_QWORD *)(v13 + 8);
    v30 = 0LL;
    v31 = (unsigned __int64)(8 * v29 + 7) >> 3;
    if ( *(_QWORD *)v13 > (unsigned __int64)(*(_QWORD *)v13 + 8 * v29) )
      v31 = 0LL;
    if ( v31 )
    {
      do
      {
        (*(void (__fastcall **)(volatile signed __int32 *, _QWORD, bool, _QWORD))(*(_QWORD *)v40 + 24LL))(
          v40,
          *v28++,
          v8 != 0,
          0LL);
        ++v30;
      }
      while ( v30 != v31 );
    }
    if ( !v8 )
    {
      if ( *(_QWORD *)v13 )
      {
        CoTaskMemFree(*(LPVOID *)v13);
        *(_QWORD *)v13 = 0LL;
      }
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    v32 = (__int64)v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return 0LL;
  }
  v11 = -2147024884;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10E,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x8007000CLL);
LABEL_37:
  v23 = (__int64)v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v11;
}
