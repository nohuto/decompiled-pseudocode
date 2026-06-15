/*
 * XREFs of ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180012210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::DelayedInteractivityNotificationTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD **a2,
        struct _TP_TIMER *a3)
{
  int v4; // edi
  _QWORD *v5; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, struct _TP_TIMER *))(*a2[63] + 16LL))(a2[63], a2, a3);
  if ( v4 < 0 )
  {
    v5 = a2[63];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  else
  {
    a2[63] = 0LL;
  }
  a2[63] = 0LL;
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v4);
    }
    AudPolicyLogError("CApplication::DelayedInteractivityNotificationTimerExpiredCallback", 1591, v4);
  }
}
