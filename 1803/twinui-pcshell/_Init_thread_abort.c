/*
 * XREFs of _Init_thread_abort @ 0x180098338
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$2 @ 0x18024ACCF (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
