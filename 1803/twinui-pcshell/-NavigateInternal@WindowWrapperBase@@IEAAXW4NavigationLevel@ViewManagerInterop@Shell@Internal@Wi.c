/*
 * XREFs of ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F27B0
 * Callers:
 *     _lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator() @ 0x1801EDFF0 (_lambda_458208d6a7ae0bd08cfee5104eefb8a5_--operator().c)
 *     ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801EE6C0 (-v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 168LL))(*(_QWORD *)(a1 + 312));
  if ( a2 != *(_DWORD *)(a1 + 468) )
  {
    *(_DWORD *)(a1 + 468) = a2;
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 312) + 112LL))(
                     *(_QWORD *)(a1 + 312),
                     &v9);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(
           *v5,
           *(unsigned int *)(a1 + 208),
           a2);
    v7 = 0;
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2308LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v9);
    LOBYTE(v7) = a2 - 4 <= 1;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 184LL))(a1, 0LL, v7);
  }
  return result;
}
