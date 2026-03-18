/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00022C4
 * Callers:
 *     ?FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C000A7D0 (-FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // r8
  int v5; // ebx
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 == a1 + 24 )
    return 0LL;
  v4 = (_QWORD *)(v2 - 8);
  if ( v4 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL);
    do
    {
      if ( *(_DWORD *)(v4[11] + 24LL) == v5 && *(_DWORD *)(v4[12] + 24LL) == *(_DWORD *)(*(_QWORD *)(a2 + 96) + 24LL) )
        break;
      v7 = v4[1];
      v4 = (_QWORD *)(v7 - 8);
      if ( v7 == a1 + 24 )
        v4 = 0LL;
    }
    while ( v4 );
  }
  return v4;
}
