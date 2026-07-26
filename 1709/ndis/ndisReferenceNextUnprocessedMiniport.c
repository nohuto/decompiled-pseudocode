/*
 * XREFs of ndisReferenceNextUnprocessedMiniport @ 0x1C010B7E4
 * Callers:
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisIsMiniportReady @ 0x1C004F438 (ndisIsMiniportReady.c)
 */

__int64 __fastcall ndisReferenceNextUnprocessedMiniport(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x43u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  while ( v3 )
  {
    if ( ndisIsMiniportReady((_DWORD *)v3) )
    {
      _m_prefetchw((const void *)(v3 + 4456));
      v5 = *(_DWORD *)(v3 + 4456);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4456), v5, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x80) == 0 && ndisReferenceMiniport(v3) )
      {
        _InterlockedOr((volatile signed __int32 *)(v3 + 4456), 0x80u);
        break;
      }
    }
    v3 = *(_QWORD *)(v3 + 8);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x44u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1);
  return v3;
}
