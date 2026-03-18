/*
 * XREFs of xxxMenuDraw @ 0x1C000D438
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000D23C (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0203198 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C021640C (xxxMenuBarDraw.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000D3A0 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C000D3E0 (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C000DE2C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C000E26C (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v4; // rdi
  int v7; // esi
  int TextAlign; // eax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  int v16; // r12d
  int v17; // ecx
  int v18; // ecx
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  int v21; // [rsp+38h] [rbp-31h]
  int v22; // [rsp+3Ch] [rbp-2Dh]
  int v23; // [rsp+40h] [rbp-29h]
  int v24; // [rsp+44h] [rbp-25h]
  int v25; // [rsp+48h] [rbp-21h]
  int v26; // [rsp+4Ch] [rbp-1Dh]
  int v27; // [rsp+50h] [rbp-19h]
  int v28; // [rsp+54h] [rbp-15h]
  int v29; // [rsp+58h] [rbp-11h]
  int v30; // [rsp+5Ch] [rbp-Dh]
  __int64 v31; // [rsp+60h] [rbp-9h]
  __int64 v32; // [rsp+68h] [rbp-1h]
  _QWORD v33[10]; // [rsp+70h] [rbp+7h] BYREF
  int v34; // [rsp+E8h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  v34 = 0;
  v7 = *(_DWORD *)(a2 + 56) & 1;
  v31 = gptiCurrent;
  v25 = v7;
  v20 = 0LL;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 88);
  GreGetDCPoint(a1, 4LL, &v20);
  GetDPIMETRICS((struct tagWND *)v4);
  v32 = GreSelectFontInternal(a1);
  TextAlign = GreGetTextAlign(a1);
  v10 = *(_DWORD **)(a2 + 96);
  v26 = TextAlign;
  if ( v10 && (*v10 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v11 = gptiCurrent;
  v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v33;
  v33[1] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  if ( *(_QWORD *)(a2 + 128) )
    goto LABEL_15;
  if ( gihmodUserApiHook >= 0 && v7 )
  {
    if ( v4 && (unsigned int)xxxSendUAHInitMenuMessage(v4, a2, (__int64)a1) )
    {
      xxxSendUAHMenuMessage(v4, 145LL, a2, (__int64)a1);
LABEL_15:
      v3 = GreSetBkMode(a1);
      v34 = v3;
      goto LABEL_17;
    }
    v4 = *(_QWORD *)(a2 + 88);
    ThreadLockExchange(v4, v33);
  }
LABEL_17:
  if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
  {
    v12 = *(unsigned int *)(a2 + 136);
    if ( (_DWORD)v12 == -1 || (unsigned int)v12 >= *(_DWORD *)(a2 + 68) )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(a2 + 96) + 152 * v12;
    GreSetViewportOrg(a1);
    v14 = *(_DWORD *)(a2 + 136);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 96);
    v14 = 0;
  }
  v15 = 0;
  if ( v14 < *(_DWORD *)(a2 + 68) )
  {
    v16 = v25;
    while ( 1 )
    {
      if ( !v13 )
      {
LABEL_52:
        v3 = v34;
        goto LABEL_53;
      }
      if ( (*(_DWORD *)v13 & 0x20) != 0 && v16 )
      {
        if ( (*(_DWORD *)v13 & 0x2000) != 0 && v14 )
          v17 = *(_DWORD *)(v13 - 80);
        else
          v17 = *(_DWORD *)(v13 + 72);
        v22 = 0;
        v21 = v17 - 3;
        v23 = v17 - 1;
        v24 = *(_DWORD *)(a2 + 76);
        DrawEdge(a1);
      }
      if ( (*(_DWORD *)v13 & 0x800) != 0
        && ((*(_DWORD *)v13 & 0x100) == 0 || *(_WORD *)(v31 + 552) < 0x400u)
        && !(unsigned int)MNIsUAHMenu(a2) )
      {
        break;
      }
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 304) & 0x10000000) != 0 )
          GetWindowDpiLastNotify(v4);
      }
      else
      {
        W32GetCurrentThreadDpiAwarenessContext();
      }
      xxxDrawMenuItem(a1, 0, v4);
      if ( (unsigned int)MNGetpItemIndex(a2, v13) != -1 )
        goto LABEL_42;
LABEL_44:
      if ( ++v14 == -1 || v14 >= *(_DWORD *)(a2 + 68) )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(a2 + 96) + 152LL * v14;
      if ( v14 >= *(_DWORD *)(a2 + 68) )
        goto LABEL_52;
    }
    v18 = *(_DWORD *)(v13 + 72);
    v28 = (*(_DWORD *)(v13 + 84) >> 1) - 1 + *(_DWORD *)(v13 + 76);
    v27 = v18 + 1;
    v29 = *(_DWORD *)(v13 + 80) - 1 + v18;
    v30 = v28 + 2;
    DrawEdge(a1);
    MNDrawInsertionBar(a1, (struct tagITEM *)v13);
LABEL_42:
    if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
    {
      v15 += *(_DWORD *)(v13 + 84);
      if ( v15 > *(_DWORD *)(a2 + 76) )
        goto LABEL_52;
    }
    goto LABEL_44;
  }
LABEL_53:
  ThreadUnlock1(v11, v9);
  if ( v3 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFontInternal(a1);
}
