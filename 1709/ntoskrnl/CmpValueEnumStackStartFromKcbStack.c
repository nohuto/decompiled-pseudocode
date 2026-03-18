/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14069C654
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E46A4 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140697B4C (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140697F6C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int started; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int16 v9[40]; // [rsp+20h] [rbp-68h] BYREF

  CmpInitializeKeyNodeStack(v9);
  started = CmpStartKeyNodeStackFromKcbStack(v9, a2);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v9);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v9, v4, v6, v7);
  return (unsigned int)started;
}
