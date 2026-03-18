/*
 * XREFs of PspSendWakeNotification @ 0x14055FC4C
 * Callers:
 *     PspChargeJobWakeCounter @ 0x140478790 (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x14055FBD8 (PspDispatchWakeNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     PspRequestDeferredJobNotification @ 0x14012B8EC (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x14070B48C (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && ((*a3 & (1 << a2)) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObject(Object);
  if ( (xmmword_1403E4010 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObject(Object);
  return 1;
}
