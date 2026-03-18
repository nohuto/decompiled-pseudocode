/*
 * XREFs of CalcSBStuff @ 0x1C00D7700
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00D5FF8 (xxxDrawScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00D74A4 (xxxGetScrollBarInfo.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020E008 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020E1C8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020E480 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C020EF98 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     CalcSBStuff2 @ 0x1C00D7834 (CalcSBStuff2.c)
 *     _InitPwSB @ 0x1C00D79B4 (_InitPwSB.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  int v7; // edi
  bool v8; // zf
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // r14d
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  int v17; // [rsp+24h] [rbp-1Ch]
  int v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+2Ch] [rbp-14h]
  int v20[2]; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+38h] [rbp-8h]
  int v22; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v20, 33);
  if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - v21;
    v6 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - v20[0];
  }
  else
  {
    v6 = v21;
    v7 = v20[0];
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 65) & 0x40) != 0 )
    {
      v8 = (*(_BYTE *)(a1 + 56) & 2) == 0;
      v16 = v7;
      v18 = v7;
      if ( !v8 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          v15 = *(_DWORD *)(gpsi + 1888LL);
        else
          v15 = *(_DWORD *)(gpsi + 2276LL);
        v16 = v7 - v15;
      }
    }
    else
    {
      v8 = (*(_BYTE *)(a1 + 56) & 2) == 0;
      v16 = v6;
      v18 = v6;
      if ( !v8 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          v9 = *(_DWORD *)(gpsi + 1888LL);
        else
          v9 = *(_DWORD *)(gpsi + 2276LL);
        v18 = v6 + v9;
      }
    }
    v17 = v20[1];
    v19 = v22;
  }
  else
  {
    v8 = (*(_BYTE *)(a1 + 56) & 4) == 0;
    v13 = v22;
    v17 = v22;
    v19 = v22;
    if ( !v8 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v14 = *(_DWORD *)(gpsi + 1892LL);
      else
        v14 = *(_DWORD *)(gpsi + 2280LL);
      v19 = v13 + v14;
    }
    v16 = v7;
    v18 = v6;
  }
  result = InitPwSB(a1);
  if ( result )
  {
    v11 = *(_QWORD *)(a1 + 192);
    if ( a3 )
      v12 = v11 + 20;
    else
      v12 = v11 + 4;
    return CalcSBStuff2(a2, &v16, v12, a3);
  }
  return result;
}
