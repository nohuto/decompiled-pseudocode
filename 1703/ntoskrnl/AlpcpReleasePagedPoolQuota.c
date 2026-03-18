/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14047A170
 * Callers:
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x14043D038 (AlpcpCaptureMessageData.c)
 *     AlpcSecurityDestroyProcedure @ 0x14047A0F0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcMessageDestroyProcedure @ 0x14047EF00 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140526170 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     <none>
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
