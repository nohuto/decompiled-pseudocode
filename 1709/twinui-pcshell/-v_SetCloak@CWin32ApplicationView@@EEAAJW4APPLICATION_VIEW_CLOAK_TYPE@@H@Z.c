/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007D4B0 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18007E4E0 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180080868 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180081560 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180084534 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // r12
  int *v7; // rdi
  int v8; // r13d
  int v9; // r15d
  void *v10; // rcx
  __int64 v11; // rbx
  int v12; // ebx
  __int64 (*v13)(void); // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  HWND v16; // rax
  DWORD WindowThreadProcessId; // r12d
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  HWND v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rax
  HWND v28; // rdi
  int v29; // ebx
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35[3]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v36[4]; // [rsp+48h] [rbp-28h] BYREF
  int v37; // [rsp+4Ch] [rbp-24h]
  int v38; // [rsp+50h] [rbp-20h]
  LPVOID pv; // [rsp+58h] [rbp-18h] BYREF
  __int64 v40; // [rsp+60h] [rbp-10h]
  __int64 v41; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  BOOL v43; // [rsp+C0h] [rbp+50h]
  __int64 *v44; // [rsp+C8h] [rbp+58h] BYREF

  v35[1] = -2LL;
  v6 = (RTL_SRWLOCK *)(a1 + 40);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 40));
  v35[2] = (__int64)v6;
  v7 = (int *)(a1 + 240);
  v8 = *(_DWORD *)(a1 + 240);
  if ( a3 )
    *v7 |= a2;
  else
    *v7 &= ~a2;
  v9 = *v7;
  v43 = *v7 != 0;
  v10 = 0LL;
  pv = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( v8 != v9 )
  {
    v40 = -1LL;
    v41 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 8), (unsigned __int16 **)&pv) >= 0 )
    {
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(v35);
      v11 = v35[0];
      if ( v35[0] )
      {
        v38 = *v7;
        *(_DWORD *)v36 = 4;
        v37 = 1129590832;
        ApplicationViewManagement::CPersistence::_PersistData(
          (ApplicationViewManagement::CPersistence *)(v35[0] + 48),
          (const unsigned __int16 *)pv,
          L"CloakType",
          v36,
          0xCu);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 44), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35[0] + 72LL))(v35[0], 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        &pv,
        a1 + 240);
    }
    v10 = pv;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    pv = 0LL;
  }
  v40 = 0LL;
  v41 = 0LL;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (v9 != 0) == (v8 != 0) && v9 )
    return 0LL;
  ApplicationViewManagement::CGlobals::GetCwm((__int64 *)&v44);
  if ( v44 )
  {
    v13 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 192) + 24LL);
    if ( v9 )
    {
      v14 = a1 + 208;
      v15 = v13();
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        a1 + 208,
        v15);
    }
    else
    {
      v16 = (HWND)v13();
      v14 = a1 + 208;
      WindowThreadProcessId = GetWindowThreadProcessId(v16, 0LL);
      if ( WindowThreadProcessId )
      {
        v18 = *(_QWORD *)(a1 + 216);
        if ( v18 )
        {
          v19 = v18 - 1;
          do
          {
            if ( GetWindowThreadProcessId(*(HWND *)(*(_QWORD *)v14 + 8 * v19), 0LL) != WindowThreadProcessId )
            {
              v20 = *(_QWORD *)(a1 + 216);
              if ( v19 < v20 )
              {
                if ( v19 != v20 - 1 )
                  memmove(
                    (void *)(*(_QWORD *)v14 + 8 * v19),
                    (const void *)(*(_QWORD *)v14 + 8 * v19 + 8),
                    8 * (v20 - v19) - 8);
                --*(_QWORD *)(a1 + 216);
              }
            }
            --v19;
            --v18;
          }
          while ( v18 );
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
    v21 = (__int64)v44;
    v22 = *v44;
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(*(_QWORD *)(a1 + 192));
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, BOOL, __int64))(v22 + 24))(v21, v23, v43, 1LL);
    if ( v12 == -2147024809 )
    {
      if ( !v9 )
      {
        v24 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(*(_QWORD *)(a1 + 192));
        if ( GetWindow(v24, 4u) )
        {
          if ( *(_QWORD *)(a1 + 216) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x136,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL);
          v12 = 0;
          goto LABEL_40;
        }
      }
      goto LABEL_39;
    }
    if ( v12 < 0 )
    {
LABEL_39:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13C,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_40;
    }
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(*(_QWORD *)(a1 + 192));
    v28 = (HWND)GhostWindowFromHungWindow(v27);
    if ( v28 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64 *, HWND, BOOL, _QWORD))(*v44 + 24))(v44, v28, v43, 0LL);
      if ( (v29 != -2147024809 || v9 || !GetWindow(v28, 4u)) && v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x151,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
          (const char *)(unsigned int)v29);
    }
    v30 = *(_QWORD **)v14;
    v31 = *(_QWORD *)(v14 + 8);
    v32 = 0LL;
    v33 = (unsigned __int64)(8 * v31 + 7) >> 3;
    if ( *(_QWORD *)v14 > (unsigned __int64)(*(_QWORD *)v14 + 8 * v31) )
      v33 = 0LL;
    if ( v33 )
    {
      do
      {
        (*(void (__fastcall **)(__int64 *, _QWORD, BOOL, _QWORD))(*v44 + 24))(v44, *v30++, v43, 0LL);
        ++v32;
      }
      while ( v32 != v33 );
    }
    if ( !v9 )
    {
      if ( *(_QWORD *)v14 )
      {
        CoTaskMemFree(*(LPVOID *)v14);
        *(_QWORD *)v14 = 0LL;
      }
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    v34 = (__int64)v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    return 0LL;
  }
  v12 = -2147024884;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10E,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x8007000CLL);
LABEL_40:
  v25 = (__int64)v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v12;
}
