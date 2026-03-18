/*
 * XREFs of PspSendWakeNotification @ 0x14053764C
 * Callers:
 *     PspDispatchWakeNotification @ 0x140530B5C (PspDispatchWakeNotification.c)
 *     PspChargeJobWakeCounter @ 0x140536740 (PspChargeJobWakeCounter.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x14008B2DC (PspRequestDeferredJobNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     EtwTraceWakeEvent @ 0x1407A81B8 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && ((*a3 & (1 << a2)) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_14044C2D0 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}
