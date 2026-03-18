/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x1406715E4
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E0544 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14066D4DC (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58 (CmpStartKeyNodeStackFromKcbStack.c)
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
