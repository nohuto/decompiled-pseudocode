/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x1406FF3C8
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406FB048 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406FF458 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int started; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int16 v9[40]; // [rsp+20h] [rbp-68h] BYREF

  CmpInitializeKeyNodeStack((char *)v9);
  started = CmpStartKeyNodeStackFromKcbStack(v9, a1);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v9, a2);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v9, v4, v6, v7);
  return (unsigned int)started;
}
