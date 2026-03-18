/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x140462248
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140461E3C (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404A17F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateReserve @ 0x140571730 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1404610A0 (PsChargeProcessPagedPoolQuota.c)
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
