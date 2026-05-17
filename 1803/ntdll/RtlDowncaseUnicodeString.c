/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180078190
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int16 v9; // r8

  v5 = *a2;
  v6 = 0;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v5;
    v7 = sub_18003B5E0(v5);
    *(_QWORD *)(a1 + 8) = v7;
    if ( !v7 )
      return 3221225495LL;
    v5 = *a2;
  }
  else if ( v5 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v8 = qword_18015B228;
  while ( v6 < v5 >> 1 )
  {
    v9 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v9 >= 0x41u )
    {
      if ( v9 <= 0x5Au )
        v9 += 32;
      else
        v9 += *(_WORD *)(v8
                       + 2LL
                       * ((v9 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v8
                                                            + 2LL
                                                            * (((v9 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v8
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v9 >> 8))))));
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v9;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
