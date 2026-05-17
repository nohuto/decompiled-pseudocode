/*
 * XREFs of sub_1800877B0 @ 0x1800877B0
 * Callers:
 *     sub_180082248 @ 0x180082248 (sub_180082248.c)
 * Callees:
 *     ZwCompareSigningLevels @ 0x18009BDF0 (ZwCompareSigningLevels.c)
 *     ZwGetCachedSigningLevel @ 0x18009C7D0 (ZwGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x18009DAD0 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall sub_1800877B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // rdi
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int CachedSigningLevel; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  v5 = (_BYTE *)(a2 + 284);
  v6 = a5;
  *a5 = 0;
  CachedSigningLevel = ZwGetCachedSigningLevel(a1, a3, a2 + 284, 0LL, 0LL, 0LL);
  if ( CachedSigningLevel < 0 || (LOBYTE(v8) = *v5, LOBYTE(v7) = 12, (int)ZwCompareSigningLevels(v8, v7) < 0) )
  {
    LOBYTE(v7) = 12;
    CachedSigningLevel = ZwSetCachedSigningLevel(4LL, v7, &v11);
    if ( CachedSigningLevel < 0 )
      *v6 = 1;
    else
      *v5 = 12;
  }
  return (unsigned int)CachedSigningLevel;
}
