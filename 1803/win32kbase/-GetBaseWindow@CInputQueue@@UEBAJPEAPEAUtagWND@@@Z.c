/*
 * XREFs of ?GetBaseWindow@CInputQueue@@UEBAJPEAPEAUtagWND@@@Z @ 0x1C006E900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::GetBaseWindow(CInputQueue *this, struct tagWND **a2)
{
  *a2 = (struct tagWND *)*((_QWORD *)this + 3);
  return 0LL;
}
