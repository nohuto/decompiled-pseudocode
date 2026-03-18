/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01AAE10
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01AACAC (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C01AB0D4 (-TestRectBogus@@YAHUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(int a1, int a2, int a3, int a4)
{
  __int64 v8; // r15
  unsigned int v9; // ebx
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF

  v8 = *(_QWORD *)(GetDispInfo() + 88);
  v11 = (struct tagRECT)*GetMonitorWorkRect(&v12, v8);
  v9 = 0;
  if ( (unsigned int)TestRectBogus(&v11, a1, a2, a3, a4) )
    return 1;
  v11 = (struct tagRECT)*GetMonitorRect(&v13, v8);
  if ( (unsigned int)TestRectBogus(&v11, a1, a2, a3, a4) )
    return 1;
  return v9;
}
