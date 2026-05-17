/*
 * XREFs of RtlDelete @ 0x1800693C0
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180068EA0 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x18008FDD4 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800E49C0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x180069508 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x180069650 (RtlSubtreePredecessor.c)
 */

_QWORD *__fastcall RtlDelete(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  if ( a1[1] && a1[2] )
  {
    v2 = RtlSubtreePredecessor();
    SwapSplayLinks(v2, a1);
  }
  result = (_QWORD *)a1[1];
  if ( result || (result = (_QWORD *)a1[2]) != 0LL )
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *result = result;
    }
    else
    {
      v7 = 1LL;
      if ( (_QWORD *)v6[1] != a1 )
        v7 = 2LL;
      v6[v7] = result;
      v8 = (_QWORD *)*a1;
      *result = *a1;
      return RtlSplay(v8);
    }
  }
  else
  {
    v4 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      return 0LL;
    }
    else
    {
      v5 = 1LL;
      if ( (_QWORD *)v4[1] != a1 )
        v5 = 2LL;
      v4[v5] = 0LL;
      return RtlSplay(v4);
    }
  }
  return result;
}
