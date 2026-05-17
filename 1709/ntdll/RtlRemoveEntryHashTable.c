/*
 * XREFs of RtlRemoveEntryHashTable @ 0x180080580
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x180072A38 (RtlpPopulateContext.c)
 */

char __fastcall RtlRemoveEntryHashTable(_DWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // r9

  v4 = a2[2];
  --a1[5];
  if ( *a2 == a2[1] )
    --a1[6];
  v5 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v6 = (_QWORD *)a2[1], (_QWORD *)*v6 != a2) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( a3 && !*a3 )
    RtlpPopulateContext(a1, (__int64)a3, v4);
  return 1;
}
