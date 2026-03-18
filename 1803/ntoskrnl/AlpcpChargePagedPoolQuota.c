/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x1404D44BC
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404CD870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140553CB0 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 1640));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 1640);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 1640);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1640), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota();
}
