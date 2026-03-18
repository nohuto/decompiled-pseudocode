/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1404D7B54
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x1404CC100 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404CD870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404D7AD0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[2].Affinity.Bitmap[12];
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2].Affinity.Bitmap[12], a2);
  }
  return result;
}
