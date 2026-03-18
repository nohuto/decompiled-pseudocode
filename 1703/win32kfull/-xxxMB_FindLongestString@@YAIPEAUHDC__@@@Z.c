/*
 * XREFs of ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C000CAC4
 * Callers:
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxMB_FindLongestString(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // rsi
  signed int v6; // edi
  __int64 ThreadWin32Thread; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  unsigned int v12; // r10d
  struct tagSIZE v14; // [rsp+58h] [rbp+10h] BYREF
  struct tagSIZE v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = L" ";
  v14 = 0LL;
  v6 = 0;
  v15 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( !gbGreTextReady )
    return 0LL;
  v8 = 11LL;
  v9 = gpsi + 916LL;
  do
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
    v11 = (unsigned __int16 *)v9;
    if ( (int)v10 <= v6 )
      v11 = v4;
    v9 += 40LL;
    v4 = v11;
    if ( (int)v10 <= v6 )
      LODWORD(v10) = v6;
    v6 = v10;
    --v8;
  }
  while ( v8 );
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread, v9) )
    xxxClientGetTextExtentPointW(a1);
  else
    GreGetTextExtentW(a1, L"0", v12, &v14, v12);
  xxxPSMGetTextExtent(a1, v4, v6, &v15);
  return (unsigned int)(v15.cx + 2 * v14.cx);
}
