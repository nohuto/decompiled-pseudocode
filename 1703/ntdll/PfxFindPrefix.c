/*
 * XREFs of PfxFindPrefix @ 0x1800E4DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180065CB0 (RtlSplay.c)
 *     sub_1800E4BB0 @ 0x1800E4BB0 (sub_1800E4BB0.c)
 *     sub_1800E4D34 @ 0x1800E4D34 (sub_1800E4D34.c)
 */

__int64 __fastcall PfxFindPrefix(__int64 a1, unsigned __int16 *a2)
{
  __int16 v4; // ax
  __int64 i; // rdi
  __int64 j; // rsi
  __int64 v7; // r14
  int v8; // eax
  __int64 v10; // rbx

  v4 = sub_1800E4D34(a2);
  for ( i = *(_QWORD *)(a1 + 8); *(__int16 *)(i + 2) > v4; i = *(_QWORD *)(i + 8) )
    a1 = i;
LABEL_12:
  if ( *(__int16 *)(i + 2) <= 0 )
    return 0LL;
  for ( j = i + 16; ; j = *(_QWORD *)(j + 16) )
  {
    while ( 1 )
    {
      if ( !j )
      {
        a1 = i;
        i = *(_QWORD *)(i + 8);
        goto LABEL_12;
      }
      v7 = j - 16;
      v8 = sub_1800E4BB0(*(unsigned __int16 **)(j - 16 + 40), a2);
      if ( v8 != 3 )
        break;
      j = *(_QWORD *)(j + 8);
    }
    if ( v8 )
      break;
  }
  if ( *(_WORD *)v7 == 514 )
  {
    v10 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    *(_WORD *)i = 514;
    v7 = RtlSplay(j) - 16;
    *(_WORD *)v7 = 513;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(v7 + 8) = v10;
  }
  return v7;
}
