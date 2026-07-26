/*
 * XREFs of ndisUnprocessAllMiniports @ 0x1C010B8CC
 * Callers:
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // dl
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x45u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1);
  while ( 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
    v3 = *(_QWORD *)(a1 + 16);
    v4 = v2;
    while ( v3 )
    {
      _m_prefetchw((const void *)(v3 + 4456));
      v5 = *(_DWORD *)(v3 + 4456);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4456), v5, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x80) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 4456), 0xFFFFFF7F);
        break;
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
    if ( !v3 )
      break;
    ndisDereferenceMiniport(v3, 0x52u);
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x46u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, a1);
}
