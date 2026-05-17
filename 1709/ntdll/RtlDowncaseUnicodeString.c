/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1800799A0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  unsigned int v10; // eax
  __int64 StringRoutine; // rax

  v5 = 0;
  if ( a3 )
  {
    v10 = *a2;
    *(_WORD *)(a1 + 2) = v10;
    StringRoutine = NtdllpAllocateStringRoutine(v10);
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( *a2 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v6 = *a2 >> 1;
  v7 = Nls844UnicodeLowercaseTable;
  while ( v5 < v6 )
  {
    v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v5);
    if ( v8 >= 0x41u )
    {
      if ( v8 <= 0x5Au )
        v8 += 32;
      else
        v8 += *(_WORD *)(v7
                       + 2LL
                       * ((v8 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((v8 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v7
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v8 >> 8))))));
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v5++) = v8;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
