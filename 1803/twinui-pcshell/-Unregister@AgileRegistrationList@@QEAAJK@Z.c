/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18010E6B8
 * Callers:
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x18010E7C0 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x180118C40 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180118C60 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x18013CF90 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x18013E180 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x1801B1180 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@@Z @ 0x180111954 (-erase@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK v5; // r8
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h]

  try
  {
    v10 = 0LL;
    v4 = this + 3;
    AcquireSRWLockExclusive(this + 3);
    v11 = v4;
    for ( v5.Ptr = this->Ptr; v5.Ptr != this[1].Ptr && *(_DWORD *)v5.Ptr != a2; v5.Ptr = (char *)v5.Ptr + 16 )
      ;
    if ( v5.Ptr == this[1].Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        43LL,
        (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x80070057LL);
    v6 = *((_QWORD *)v5.Ptr + 1);
    *((_QWORD *)v5.Ptr + 1) = 0LL;
    std::vector<AgileRegistrationList::Item>::erase(this, &v10);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31,
                           (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v7);
  }
  return result;
}
