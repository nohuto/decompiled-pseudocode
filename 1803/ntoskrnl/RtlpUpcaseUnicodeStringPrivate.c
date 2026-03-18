/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x140044568
 * Callers:
 *     RtlIsNameInExpression @ 0x140043EC0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140043F50 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlAreNamesEqual @ 0x1400A6930 (RtlAreNamesEqual.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID PoolWithTag; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  unsigned __int16 v8; // r10

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x67727453u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  v6 = 0;
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = *a2 >> 1;
  while ( v6 < v7 )
  {
    v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v8 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v8 >> 8)]]];
      else
        v8 -= 32;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v8;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
