/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x14069B25C
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpCleanupKeyNodeStack @ 0x140697B4C (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140697F6C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14069B2EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int started; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v11[40]; // [rsp+20h] [rbp-78h] BYREF

  CmpInitializeKeyNodeStack(v11);
  started = CmpStartKeyNodeStackFromKcbStack(v11, a2);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKeyNodeStack(a1, v11, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v11, v6, v8, v9);
  return (unsigned int)started;
}
