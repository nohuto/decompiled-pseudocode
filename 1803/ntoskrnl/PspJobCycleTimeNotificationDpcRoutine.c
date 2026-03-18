/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x1400CFD50
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x14008B2DC (PspRequestDeferredJobNotification.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(DeferredContext, 1953261124LL) )
  {
    if ( !PspRequestDeferredJobNotification((signed __int64)DeferredContext, 0x20000u) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
