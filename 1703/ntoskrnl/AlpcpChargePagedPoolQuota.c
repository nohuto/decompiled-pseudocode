/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14047C5A0
 * Callers:
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x14043D038 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140526170 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(&a1[2].Affinity.Bitmap[12]);
  while ( 1 )
  {
    v2 = a1[2].Affinity.Bitmap[12];
    if ( v2 < a2 )
      break;
    v3 = a1[2].Affinity.Bitmap[12];
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2].Affinity.Bitmap[12], v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota(a1, a2);
}
