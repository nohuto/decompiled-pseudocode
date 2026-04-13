/*
 * XREFs of _Init_thread_abort @ 0x1800C0EF0
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800C6B80 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_18017BBC0);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_18017BBC0);
  WakeAllConditionVariable(&ConditionVariable);
}
