/*
 * XREFs of ?FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801859F0
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180065100 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::FocusNavigate(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 80LL))(*(_QWORD *)(a1 + 96));
  return 0LL;
}
