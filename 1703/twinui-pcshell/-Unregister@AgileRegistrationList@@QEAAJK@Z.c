/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x180024DF8
 * Callers:
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18000BC10 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x180030D30 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180030D60 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x180072F80 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x180078A50 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x1800D9950 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x1800039D8 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Unregister(AgileRegistrationList *this, int a2)
{
  __int64 i; // rbx
  const char *v5; // r9
  __int64 v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+18h] BYREF

  try
  {
    wil::srwlock::lock_exclusive((char *)this + 24, &SRWLock);
    for ( i = *(_QWORD *)this; i != *((_QWORD *)this + 1) && *(_DWORD *)i != a2; i += 16LL )
      ;
    if ( i == *((_QWORD *)this + 1) )
    {
      i = 2147942487LL;
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2B,
        (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x80070057LL,
        -2);
    }
    v6 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    v7 = (_QWORD *)*((_QWORD *)this + 1);
    if ( (_QWORD *)(i + 16) != v7 )
    {
      v8 = (_QWORD *)(i + 24);
      do
      {
        *((_DWORD *)v8 - 6) = *((_DWORD *)v8 - 2);
        v9 = *v8;
        *v8 = 0LL;
        v10 = *(v8 - 2);
        *(v8 - 2) = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v8 += 2;
      }
      while ( v8 - 1 != v7 );
    }
    v11 = *(_QWORD *)(*((_QWORD *)this + 1) - 8LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 1) -= 16LL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v5);
  }
  return result;
}
