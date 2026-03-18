/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x140827410
 * Callers:
 *     ViKeLowerIrqlSanityChecks @ 0x1408276E8 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 *     ViExAcquireFastMutexCommon @ 0x14082F6B4 (ViExAcquireFastMutexCommon.c)
 *     ViExReleaseFastMutexCommon @ 0x14082F7D8 (ViExReleaseFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x14082F818 (ViExTryToAcquireFastMutexCommon.c)
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
