/*
 * XREFs of xxxMenuDraw @ 0x1C007D26C
 * Callers:
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0204B8C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C007D214 (xxxSendUAHInitMenuMessage.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     DrawEdge @ 0x1C007EBC4 (DrawEdge.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C007FCA8 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0080D50 (xxxSendUAHMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C0080E74 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdi
  int v7; // r12d
  int v8; // esi
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v10; // r8
  int TextAlign; // eax
  _DWORD *v12; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // r15d
  int v18; // r12d
  __int64 v19; // r8
  __int64 v21; // rax
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-39h] BYREF
  int v26; // [rsp+38h] [rbp-31h]
  int v27; // [rsp+3Ch] [rbp-2Dh]
  int v28; // [rsp+40h] [rbp-29h]
  int v29; // [rsp+44h] [rbp-25h]
  int v30; // [rsp+48h] [rbp-21h]
  int v31; // [rsp+4Ch] [rbp-1Dh]
  int v32; // [rsp+50h] [rbp-19h]
  int v33; // [rsp+54h] [rbp-15h]
  int v34; // [rsp+58h] [rbp-11h]
  int v35; // [rsp+5Ch] [rbp-Dh]
  __int64 v36; // [rsp+60h] [rbp-9h]
  __int64 v37; // [rsp+68h] [rbp-1h]
  _QWORD v38[10]; // [rsp+70h] [rbp+7h] BYREF
  int v39; // [rsp+E8h] [rbp+7Fh]

  v3 = 0;
  v4 = a3;
  v39 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(a2 + 56) & 1;
  v36 = gptiCurrent;
  v30 = v8;
  v25 = 0LL;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 88);
  GreGetDCPoint(a1, 4LL, &v25);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v4);
  v37 = GreSelectFont(a1, *(_QWORD *)DPIMETRICS, v10);
  TextAlign = GreGetTextAlign(a1);
  v12 = *(_DWORD **)(a2 + 96);
  v31 = TextAlign;
  if ( v12 && (*v12 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  v15 = (__int64)v38;
  *(_QWORD *)(ThreadWin32Thread + 392) = v38;
  v38[1] = v4;
  if ( v4 )
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
  if ( *(_QWORD *)(a2 + 128) )
    goto LABEL_36;
  if ( gihmodUserApiHook >= 0 && v8 )
  {
    if ( !v4 || !(unsigned int)xxxSendUAHInitMenuMessage(v4, a2, (__int64)a1) )
    {
      v4 = *(_QWORD *)(a2 + 88);
      ThreadLockExchange(v4, v38);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v4, 145LL, a2, a1);
LABEL_36:
    v7 = GreSetBkMode(a1);
    v39 = v7;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
  {
    v21 = *(unsigned int *)(a2 + 136);
    if ( (_DWORD)v21 == -1 || (unsigned int)v21 >= *(_DWORD *)(a2 + 68) )
      v16 = 0LL;
    else
      v16 = *(_QWORD *)(a2 + 96) + 152 * v21;
    GreSetViewportOrg(a1);
    v17 = *(_DWORD *)(a2 + 136);
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 96);
    v17 = 0;
  }
  if ( v17 < *(_DWORD *)(a2 + 68) )
  {
    v18 = v30;
    while ( 1 )
    {
      if ( !v16 )
      {
LABEL_28:
        v7 = v39;
        goto LABEL_29;
      }
      if ( (*(_DWORD *)v16 & 0x20) != 0 && v18 )
      {
        if ( (*(_DWORD *)v16 & 0x2000) != 0 && v17 )
          v22 = *(_DWORD *)(v16 - 80);
        else
          v22 = *(_DWORD *)(v16 + 72);
        v27 = 0;
        v26 = v22 - 3;
        v28 = v22 - 1;
        v29 = *(_DWORD *)(a2 + 76);
        DrawEdge(a1);
      }
      if ( (*(_DWORD *)v16 & 0x800) != 0 )
      {
        if ( (*(_DWORD *)v16 & 0x100) == 0 || (v15 = 1024LL, *(_WORD *)(v36 + 608) < 0x400u) )
        {
          if ( !(unsigned int)MNIsUAHMenu(a2) )
            break;
        }
      }
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 304) & 0x10000000) != 0 )
          GetWindowDpiLastNotify(v4);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14) & 0xF) != 0 )
      {
        PsGetCurrentProcessWin32Process(v24);
      }
      xxxDrawMenuItem(a1, 0, v4);
      if ( (unsigned int)MNGetpItemIndex(a2, v16) != -1 )
        goto LABEL_23;
LABEL_24:
      if ( ++v17 == -1 || v17 >= *(_DWORD *)(a2 + 68) )
        v16 = 0LL;
      else
        v16 = *(_QWORD *)(a2 + 96) + 152LL * v17;
      if ( v17 >= *(_DWORD *)(a2 + 68) )
        goto LABEL_28;
    }
    v23 = *(_DWORD *)(v16 + 72);
    v33 = (*(_DWORD *)(v16 + 84) >> 1) - 1 + *(_DWORD *)(v16 + 76);
    v32 = v23 + 1;
    v34 = *(_DWORD *)(v16 + 80) - 1 + v23;
    v35 = v33 + 2;
    DrawEdge(a1);
    MNDrawInsertionBar(a1, (struct tagITEM *)v16);
LABEL_23:
    if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
    {
      v3 += *(_DWORD *)(v16 + 84);
      if ( v3 > *(_DWORD *)(a2 + 76) )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
LABEL_29:
  ThreadUnlock1(v15, v14);
  if ( v7 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFont(a1, v37, v19);
}
