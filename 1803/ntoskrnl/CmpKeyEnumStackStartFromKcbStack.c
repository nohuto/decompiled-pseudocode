/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x1406FFE44
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406FB048 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x1406FFED4 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int started; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v11[40]; // [rsp+20h] [rbp-78h] BYREF

  CmpInitializeKeyNodeStack((char *)v11);
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
