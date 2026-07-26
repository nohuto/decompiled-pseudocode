/*
 * XREFs of ndisReferenceNextUnprocessedMiniport @ 0x1C010D76C
 * Callers:
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisIsMiniportReady @ 0x1C004FD7C (ndisIsMiniportReady.c)
 */

__int64 __fastcall ndisReferenceNextUnprocessedMiniport(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x43u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x44u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
  return v3;
}
