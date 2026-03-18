/*
 * XREFs of ?GetMessageSessionNoRef@CIndependentRefreshRateScheduler@@UEBAPEAUIMessageSession@@XZ @ 0x1800CCFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMessageSession *__fastcall CIndependentRefreshRateScheduler::GetMessageSessionNoRef(
        CIndependentRefreshRateScheduler *this)
{
  return (struct IMessageSession *)*((_QWORD *)this + 25);
}
