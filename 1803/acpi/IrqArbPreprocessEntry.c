/*
 * XREFs of IrqArbPreprocessEntry @ 0x1C0090B20
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall IrqArbPreprocessEntry(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rdi

  *(_BYTE *)(a2 + 66) = *(_BYTE *)(a2 + 66) & 0xCF | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL) & 1) != 0
                                                    ? 32
                                                    : 16);
  if ( (*(_BYTE *)(a2 + 64) & 0x10) == 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x28uLL);
    *(_WORD *)(a2 + 64) |= 0x10u;
    *(_QWORD *)(a2 + 72) = v4;
  }
  return 0LL;
}
