/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x14003BA00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x14012B8EC (PspRequestDeferredJobNotification.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(DeferredContext, 1953261124LL) )
  {
    if ( !(unsigned __int8)PspRequestDeferredJobNotification(DeferredContext, 0x20000LL) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
