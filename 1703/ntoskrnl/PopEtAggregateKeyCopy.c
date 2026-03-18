/*
 * XREFs of PopEtAggregateKeyCopy @ 0x1406D0C00
 * Callers:
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406D0C80 (PopEtAggregateKeyCopyFromProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PopEtAggregateKeyCopy(__int64 *a1, _OWORD *a2)
{
  __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *(_OWORD *)a1 = *a2;
  *((_OWORD *)a1 + 1) = a2[1];
  v2 = *a1;
  if ( *a1 && (unsigned __int16)*(_DWORD *)(v2 + 24) )
  {
    _m_prefetchw((const void *)(v2 + 16));
    v3 = *(_QWORD *)(v2 + 16);
    while ( (unsigned __int64)(v3 + 1) > 1 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 16), v3 + 1, v3);
      if ( v4 == v3 )
        goto LABEL_6;
    }
    if ( v3 )
      __fastfail(0xEu);
  }
LABEL_6:
  v5 = a1[1];
  if ( v5 )
  {
    _m_prefetchw((const void *)(v5 + 16));
    v6 = *(_QWORD *)(v5 + 16);
    while ( (unsigned __int64)(v6 + 1) > 1 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), v6 + 1, v6);
      if ( v7 == v6 )
        return;
    }
    if ( v6 )
      __fastfail(0xEu);
  }
}
