/*
 * XREFs of MiFreeRegistryPageRange @ 0x1408B2D58
 * Callers:
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiFreeRegistryPageRange(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  _BYTE *v6; // rsi
  char v7; // al

  result = MiMakeDemandZeroPte(4);
  v5 = result;
  if ( a2 )
  {
    v6 = (_BYTE *)(48 * v4 - 0x57FFFFFFFDELL);
    do
    {
      MiLockPageAtDpcInline((__int64)(v6 - 34));
      v7 = *v6 | 0x10;
      *(_QWORD *)(v6 - 18) = v5;
      *v6 = v7;
      MiDecrementShareCount((__int64)(v6 - 34));
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v6 - 10), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 48;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
