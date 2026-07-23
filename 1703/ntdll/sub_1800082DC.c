/*
 * XREFs of sub_1800082DC @ 0x1800082DC
 * Callers:
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 * Callees:
 *     sub_180008378 @ 0x180008378 (sub_180008378.c)
 */

PSLIST_ENTRY __fastcall sub_1800082DC(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v2; // rdi
  __int64 v3; // rbp
  ULONGLONG Alignment; // rsi
  __int64 v6; // r14
  __int64 v7; // r15

  v2 = a1 + 12;
  v3 = 129LL;
  do
  {
    if ( (v2->Alignment & 1) == 0 )
    {
      Alignment = v2->Alignment;
      if ( *(_BYTE *)(v2->Alignment + 2) )
      {
        v6 = 0LL;
        v7 = *(unsigned __int8 *)(v2->Alignment + 2);
        do
        {
          sub_180008378(a1, *(_QWORD *)(v6 + *(_QWORD *)(Alignment + 104)));
          v6 += 8LL;
          --v7;
        }
        while ( v7 );
      }
      sub_180008378(a1, Alignment);
    }
    v2 = (_SLIST_HEADER *)((char *)v2 + 8);
    --v3;
  }
  while ( v3 );
  return sub_1800064D4(a1 + 5, (unsigned __int64)a1, 1u);
}
