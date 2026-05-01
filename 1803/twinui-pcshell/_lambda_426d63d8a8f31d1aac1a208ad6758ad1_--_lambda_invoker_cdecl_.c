/*
 * XREFs of _lambda_426d63d8a8f31d1aac1a208ad6758ad1_::_lambda_invoker_cdecl_ @ 0x180094410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_426d63d8a8f31d1aac1a208ad6758ad1_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_TIMER Timer,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // ebx

  v5 = (unsigned int)Context;
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(0LL, 0LL, (void *)v5, 0, a5);
}
