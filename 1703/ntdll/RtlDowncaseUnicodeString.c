/*
 * XREFs of RtlDowncaseUnicodeString @ 0x18007DB80
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // r11
  unsigned __int16 v10; // r8
  __int16 v11; // cx

  v5 = 0;
  if ( a3 )
  {
    v6 = *a2;
    *(_WORD *)(a1 + 2) = v6;
    v7 = sub_180043FE0(v6);
    *(_QWORD *)(a1 + 8) = v7;
    if ( !v7 )
      return 3221225495LL;
  }
  else if ( *a2 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v8 = *a2 >> 1;
  v9 = qword_18015A1E8;
  while ( v5 < v8 )
  {
    v10 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v5);
    if ( v10 < 0x41u )
    {
      v11 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v5);
    }
    else if ( v10 <= 0x5Au )
    {
      v11 = v10 + 32;
    }
    else
    {
      v11 = v10
          + *(_WORD *)(v9
                     + 2
                     * ((v10 & 0xF)
                      + (unsigned __int64)*(unsigned __int16 *)(v9
                                                              + 2LL
                                                              * (((unsigned __int8)v10 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v9 + 2 * ((unsigned __int64)v10 >> 8))))));
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v5++) = v11;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
