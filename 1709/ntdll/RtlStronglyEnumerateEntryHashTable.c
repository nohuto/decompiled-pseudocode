/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x180072B84 (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  __int64 v4; // r11
  _QWORD *result; // rax
  _QWORD *v6; // rdx

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = a1;
  if ( v2 < *(_DWORD *)(a1 + 8) )
  {
    while ( 2 )
    {
      if ( v2 == *(_DWORD *)(v3 + 32) )
      {
        result = *(_QWORD **)v3;
        v6 = *(_QWORD **)(v3 + 24);
      }
      else
      {
        result = (_QWORD *)RtlpGetChainHead(v4, v2);
        v6 = result;
      }
      while ( (_QWORD *)*result != v6 )
      {
        result = (_QWORD *)*result;
        if ( result[2] )
        {
          *(_DWORD *)(v3 + 32) = v2;
          *(_QWORD *)(v3 + 24) = v6;
          *(_QWORD *)v3 = result;
          return result;
        }
      }
      if ( ++v2 < *(_DWORD *)(v4 + 8) )
        continue;
      break;
    }
  }
  return 0LL;
}
