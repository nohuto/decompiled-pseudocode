/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1800953C8 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z @ 0x18009D9F0 (--_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x1800A9300 (--_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z.c)
 *     ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x1800A9E90 (--_EImeNotificationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x1800AADF0 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECPeopleBarFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1800AD1E0 (--_ECPeopleBarFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1800B0F20 (--_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_GCPeopleTestExperienceManager@@UEAAPEAXI@Z @ 0x1800B2A70 (--_GCPeopleTestExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x1800B3DF0 (--_GCShoulderTapExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1800B6014 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1800BCC84 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??_ECQuickConnectExperienceManager@@UEAAPEAXI@Z @ 0x1800C4370 (--_ECQuickConnectExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x1800CA650 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1801EB0AC (_CPeopleBarFlyoutExperienceManager--_scalar_deleting_destructor__--_1_--dtor$3.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D27B4 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 v2; // rcx
  struct _TP_TIMER *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 14));
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 23) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 23));
  WindowsDeleteString(*((HSTRING *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 19), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v3, 1);
    CloseThreadpoolTimer(v3);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
