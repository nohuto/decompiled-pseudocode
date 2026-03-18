/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1400E6130
 * Callers:
 *     RtlIsNameInExpression @ 0x1400E5A80 (RtlIsNameInExpression.c)
 *     RtlAreNamesEqual @ 0x1401021D0 (RtlAreNamesEqual.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID PoolWithTag; // rax
  unsigned int v6; // ebx
  __int64 i; // r10
  unsigned __int16 v8; // ax

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x67727453u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v6 = *a2 >> 1;
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = *(_WORD *)(2 * i + *((_QWORD *)a2 + 1));
    if ( v8 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v8 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v8 >> 8)]]];
      else
        v8 -= 32;
    }
    *(_WORD *)(2 * i + *(_QWORD *)(a1 + 8)) = v8;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
