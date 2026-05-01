/*
 * XREFs of ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800A2448
 * Callers:
 *     ?Reset@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1800A22E4 (-Reset@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z @ 0x1800A24A0 (-ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 5) = 0LL;
  if ( *((_DWORD *)this + 14) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
    *((_DWORD *)this + 14) = 0;
  }
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
