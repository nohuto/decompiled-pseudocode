/*
 * XREFs of ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180025B60
 * Callers:
 *     ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x18000BE00 (-Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x1800324E0 (-Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x180032510 (-Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180075AF0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18007B5A0 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 *     ?Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z @ 0x1800FD0A0 (-Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z.c)
 * Callees:
 *     ??$emplace_back@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAX$$QEAUItem@AgileRegistrationList@@@Z @ 0x1800259D4 (--$emplace_back@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$allocator.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AgileRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  int AgileReference; // eax
  bool v6; // r8
  const char *v7; // r9
  __int64 result; // rax
  int Ptr; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  try
  {
    *a3 = 0;
    Ptr = 1;
    v10 = 0LL;
    v12 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, a2, &v12);
    if ( AgileReference < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x60C,
        (unsigned int)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)AgileReference,
        -2);
    v10 = v12;
    AcquireSRWLockExclusive(this + 3);
    Ptr = (int)this[4].Ptr;
    std::vector<AgileRegistrationList::Item>::emplace_back<AgileRegistrationList::Item>(
      (__int64 *)this,
      (__int64)&Ptr,
      v6);
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
