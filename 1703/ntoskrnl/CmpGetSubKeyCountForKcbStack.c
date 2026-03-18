/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x14067011C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpCleanupKeyNodeStack @ 0x14066D4DC (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406701AC (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int started; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int16 v9[40]; // [rsp+20h] [rbp-68h] BYREF

  CmpInitializeKeyNodeStack(v9);
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
