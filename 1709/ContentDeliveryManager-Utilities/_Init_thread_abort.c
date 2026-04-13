/*
 * XREFs of _Init_thread_abort @ 0x1800B4008
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$7 @ 0x1800B9AEA (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_18015D820);
  *a1 = 0;
  LeaveCriticalSection(&stru_18015D820);
  return Init_thread_notify();
}
