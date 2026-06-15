/*
 * XREFs of ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800318E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

void __fastcall CAudioDGProcess::OnADGInactivityTimerFiredHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        struct _TP_TIMER *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
  }
  CAudioDGProcess::OnADGInactivityTimerFired(a2);
}
