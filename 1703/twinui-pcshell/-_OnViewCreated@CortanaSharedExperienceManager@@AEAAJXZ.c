/*
 * XREFs of ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BCD08
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800BC960 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@VCPeopleBarJumpViewExperienceManager@@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVCPeopleBarJumpViewExperienceManager@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@5678@@Z@Z @ 0x1800A3EF0 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?_UnregisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BD978 (-_UnregisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDA98 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDDA0 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800BF32C (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@CortanaShar.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800BF404 (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaS.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaSharedExperienceManager::_OnViewCreated(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v6; // r9
  struct _TP_TIMER *v7; // rcx
  int LastError; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  __int64 v16; // rcx
  struct _FILETIME v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v23; // [rsp+60h] [rbp+20h] BYREF
  struct _FILETIME pftDueTime; // [rsp+68h] [rbp+28h] BYREF

  *((_BYTE *)this + 504) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 104LL))(*((_QWORD *)this + 59), 3LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x417,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer(this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x419,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  pftDueTime = (struct _FILETIME)-1200000000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      lambda_e4030f021b3ea92efb30b4fc18581bc0_::_lambda_invoker_cdecl_,
                      (PVOID)*((unsigned int *)this + 106),
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 54,
    ThreadpoolTimer);
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 54);
  if ( !v7 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x52B,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
                  v6);
    goto LABEL_17;
  }
  SetThreadpoolTimer(v7, &pftDueTime, 0, 0);
  v23 = 0LL;
  v9 = CortanaSharedExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         this,
         &v23);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 1327LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 80LL))(v23, 1LL);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 1329LL;
    goto LABEL_13;
  }
LABEL_14:
  v12 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  LastError = 0;
LABEL_17:
  if ( LastError < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)LastError);
  v13 = CortanaSharedExperienceManager::_UnregisterViewPresentationChanged(this);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_33;
  }
  v23 = 0LL;
  v15 = CortanaSharedExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
          this,
          &v23);
  v14 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_23:
    v16 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    goto LABEL_33;
  }
  *(_QWORD *)&v21 = CortanaSharedExperienceManager::_OnClientWindowReadyForPresentationChangedHandler;
  DWORD2(v21) = 0;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CPeopleBarJumpViewExperienceManager,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>(
    &pftDueTime,
    (__int64)this,
    &v21);
  v17 = pftDueTime;
  v18 = (*(__int64 (__fastcall **)(__int64, struct _FILETIME, char *))(*(_QWORD *)v23 + 80LL))(
          v23,
          pftDueTime,
          (char *)this + 416);
  v14 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4DB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
    if ( v17 )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v17 + 16LL))(v17);
    goto LABEL_23;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v17 + 16LL))(v17);
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v14 = 0;
LABEL_33:
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x41C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
