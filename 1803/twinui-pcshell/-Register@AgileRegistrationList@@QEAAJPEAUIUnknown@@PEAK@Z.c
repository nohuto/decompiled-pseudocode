/*
 * XREFs of ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18004E6B0
 * Callers:
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18002E3D0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x18010A050 (-Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x180117DC0 (-Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x180117DD0 (-Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18013DF00 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 *     ?Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z @ 0x1801AFBF0 (-Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z.c)
 * Callees:
 *     ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x180095BA8 (--$emplace_back@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$allocator.c)
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x180095E38 (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  int Ptr; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v12; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = a2;
  try
  {
    *a3 = 0;
    Ptr = 1;
    v10 = 0LL;
    v5 = (__int64 *)wil::com_agile_query<IUnknown * &>(&v13, &v12);
    v6 = *v5;
    *v5 = 0LL;
    v10 = v6;
    if ( v13 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 2))(v13);
    AcquireSRWLockExclusive(this + 3);
    v13 = this + 3;
    Ptr = (int)this[4].Ptr;
    std::vector<AgileRegistrationList::Item>::emplace_back<AgileRegistrationList::Item>(this, &Ptr);
    *a3 = LODWORD(this[4].Ptr)++;
    if ( this != (RTL_SRWLOCK *)-24LL )
      ReleaseSRWLockExclusive(this + 3);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v7);
  }
  return result;
}
