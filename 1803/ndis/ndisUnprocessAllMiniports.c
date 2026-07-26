/*
 * XREFs of ndisUnprocessAllMiniports @ 0x1C010D854
 * Callers:
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // dl
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x45u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
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
    ndisDereferenceMiniport(v3, 0x52u, v7, v8);
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x46u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
}
