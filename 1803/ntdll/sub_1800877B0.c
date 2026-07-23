/*
 * XREFs of sub_1800877B0 @ 0x1800877B0
 * Callers:
 *     sub_180082248 @ 0x180082248 (sub_180082248.c)
 * Callees:
 *     ZwCompareSigningLevels @ 0x18009BDF0 (ZwCompareSigningLevels.c)
 *     ZwGetCachedSigningLevel @ 0x18009C7D0 (ZwGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x18009DAD0 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall sub_1800877B0(void *a1, __int64 a2, ULONG *a3, __int64 a4, _BYTE *a5)
{
  SE_SIGNING_LEVEL *v5; // rdi
  _BYTE *v6; // rsi
  NTSTATUS CachedSigningLevel; // ebx
  HANDLE SourceFiles; // [rsp+40h] [rbp+8h] BYREF

  SourceFiles = a1;
  v5 = (SE_SIGNING_LEVEL *)(a2 + 284);
  v6 = a5;
  *a5 = 0;
  CachedSigningLevel = ZwGetCachedSigningLevel(a1, a3, (PSE_SIGNING_LEVEL)(a2 + 284), 0LL, 0LL, 0LL);
  if ( CachedSigningLevel < 0 || ZwCompareSigningLevels(*v5, 0xCu) < 0 )
  {
    CachedSigningLevel = ZwSetCachedSigningLevel(4u, 0xCu, &SourceFiles, 1u, SourceFiles);
    if ( CachedSigningLevel < 0 )
      *v6 = 1;
    else
      *v5 = 12;
  }
  return (unsigned int)CachedSigningLevel;
}
