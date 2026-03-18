/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x1407781CC
 * Callers:
 *     ViKeLowerIrqlSanityChecks @ 0x1407784A0 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViExAcquireFastMutexCommon @ 0x140780168 (ViExAcquireFastMutexCommon.c)
 *     ViExReleaseFastMutexCommon @ 0x140780278 (ViExReleaseFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1407802B8 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     <none>
 */

char *__fastcall VfKeIrqlTransitionReserveLogEntry(char a1, char a2)
{
  char *v2; // r8

  v2 = 0LL;
  if ( ViTrackIrqlQueue )
  {
    if ( ViKeTrackIrqlDisabled )
    {
      _InterlockedIncrement(&ViKeTrackIrqlSkipped);
    }
    else
    {
      v2 = (char *)ViTrackIrqlQueue
         + 56 * (_InterlockedIncrement(&ViTrackIrqlIndex) & (unsigned int)(ViTrackIrqlQueueLength - 1));
      v2[8] = a1;
      v2[9] = a2;
      *((_WORD *)v2 + 5) = KeGetPcr()->Prcb.Number;
    }
  }
  return v2;
}
