/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18002577C
 * Callers:
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18000BE10 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x1800324F0 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180032520 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x180075BB0 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x18007B640 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x1800FD0E0 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // r15
  RTL_SRWLOCK v5; // rbx
  const char *v6; // r9
  __int64 v7; // r14
  _QWORD *Ptr; // r12
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v4 = this + 3;
    AcquireSRWLockExclusive(this + 3);
    for ( v5.Ptr = this->Ptr; v5.Ptr != this[1].Ptr && *(_DWORD *)v5.Ptr != a2; v5.Ptr = (char *)v5.Ptr + 16 )
      ;
    if ( v5.Ptr == this[1].Ptr )
    {
      v5.Ptr = (PVOID)2147942487LL;
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2B,
        (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x80070057LL,
        -2);
    }
    v7 = *((_QWORD *)v5.Ptr + 1);
    *((_QWORD *)v5.Ptr + 1) = 0LL;
    Ptr = this[1].Ptr;
    if ( (_QWORD *)v5.Ptr + 2 != Ptr )
    {
      v9 = (char *)v5.Ptr + 24;
      do
      {
        *((_DWORD *)v9 - 6) = *((_DWORD *)v9 - 2);
        v10 = *v9;
        *v9 = 0LL;
        v11 = *(v9 - 2);
        *(v9 - 2) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v9 += 2;
      }
      while ( v9 - 1 != Ptr );
    }
    v12 = *((_QWORD *)this[1].Ptr - 1);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    this[1].Ptr = (char *)this[1].Ptr - 16;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v6);
  }
  return result;
}
