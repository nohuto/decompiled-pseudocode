/*
 * XREFs of xxxDrawMenuItem @ 0x1C000D828
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C000DE2C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C000DEB4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C000E1AC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 *     GetDPIServerInfoForDpi @ 0x1C010350C (GetDPIServerInfoForDpi.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0214EE4 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0214F9C (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C0219728 (BltColor.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 *     GreGetTextCharacterExtra @ 0x1C0298794 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02987E4 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 a3, __int64 a4, char a5, struct tagWND *a6)
{
  unsigned int v8; // ebx
  struct tagMENU *v11; // r8
  struct tagITEM *v12; // r9
  int v13; // eax
  int v14; // r11d
  BOOL v15; // r12d
  BOOL v16; // r15d
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  int *v27; // rbx
  int v28; // ecx
  int v29; // r10d
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r13
  int v33; // eax
  int v34; // r11d
  unsigned int v35; // ebx
  unsigned int v36; // edi
  unsigned int v37; // [rsp+54h] [rbp-64h]
  int v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  int v40; // [rsp+D8h] [rbp+20h]

  v37 = 0;
  v39 = 0LL;
  v8 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  v40 = 0;
  v38 = MNIsOwnerDrawItem(a3, a4);
  v13 = MNDrawHilite(v11, v12);
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
  {
    v15 = v13 || (*(_DWORD *)(a4 + 4) & 0x10000100) != 0;
    v16 = (*(_DWORD *)(a3 + 56) & 1) == 0;
  }
  else
  {
    v15 = v13;
    v16 = 0;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48) )
    {
      v17 = GreSelectFontInternal(a1);
      v14 = 0;
      v39 = v17;
    }
    else
    {
      v40 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
      v8 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
      v14 = 64;
    }
  }
  if ( v38 )
  {
    GreSetTextColor(a1);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage(a1, (a5 & 1) + 1, (struct tagMENU *)a3, (struct tagITEM *)a4, 0, 0, a6);
    result = MNGetpItemIndex(a3, a4);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (*(_DWORD *)(a3 + 56) & 1) == 0 || !*(_QWORD *)(a4 + 16) || (unsigned int)MNIsUAHMenu(a3) )
      goto LABEL_66;
    if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v19, v20, v21) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v22, v23, v24) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v25 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v26 = gpsi + 7188LL;
LABEL_24:
        v27 = (int *)(v26 + ((*(_DWORD *)a4 & 0x2000) != 0 ? 1472LL : 992LL));
        FixHDCBITSBmp();
        v28 = 0;
        v29 = v27[3];
        if ( (*(_DWORD *)(a4 + 84) - v29 - 2) / 2 > 0 )
          v28 = (*(_DWORD *)(a4 + 84) - v29 - 2) / 2;
        BltColor(a1, *(_DWORD *)(a4 + 76) + v28, v27[2], v29, *v27, v27[1], 1);
LABEL_66:
        MNDrawInsertionBar(a1, (struct tagITEM *)a4);
        result = v37;
        if ( v37 )
          result = GreSetBkMode(a1);
        if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
        {
          if ( v39 )
          {
            return GreSelectFontInternal(a1);
          }
          else
          {
            GreGetTextCharacterExtra(a1);
            return GreSetTextCharacterExtra(a1);
          }
        }
        return result;
      }
    }
    else
    {
      v25 = (_QWORD *)gpsi;
    }
    v26 = *v25 + 5700LL;
    goto LABEL_24;
  }
  if ( v15 )
  {
    if ( v8 == -2147352576 )
    {
      v30 = gpsi;
      v31 = *(_DWORD *)(gpsi + 5076LL);
LABEL_32:
      v32 = *(_QWORD *)(v30 + 5200);
      goto LABEL_36;
    }
    if ( (*(_DWORD *)(a3 + 56) & 1) != 0 )
    {
      v30 = gpsi;
      v31 = *(_DWORD *)(gpsi + 5012LL);
      goto LABEL_32;
    }
  }
  else if ( v16 )
  {
    v30 = gpsi;
    v32 = *(_QWORD *)(gpsi + 5144LL);
    v31 = *(_DWORD *)(gpsi + 5080LL);
    goto LABEL_36;
  }
  v30 = gpsi;
  v31 = *(_DWORD *)(gpsi + 4976LL);
  v32 = *(_QWORD *)(gpsi + 5144LL);
LABEL_36:
  v33 = *(_DWORD *)(a4 + 4);
  if ( ((v33 & 0x20000000) == 0 || *(_QWORD *)(a4 + 40)) && ((v33 & 1) != 0 || (*(_DWORD *)(a3 + 56) & 0x10) != 0) )
  {
    if ( !v15 && v31 == *(_DWORD *)(v30 + 5020) && !*(_DWORD *)(v30 + 2172) )
    {
      if ( *(_DWORD *)(v30 + 5024) != v31 || *(_DWORD *)(v30 + 5040) != v31 )
      {
        v34 = ((*(_DWORD *)(a3 + 56) & 0x10) != 0 ? 256 : 32) | v14;
LABEL_48:
        v40 = v34;
        goto LABEL_50;
      }
LABEL_47:
      v34 = v14 | 0x10;
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v30 + 5028) == v31 )
      goto LABEL_47;
    v32 = *(_QWORD *)(v30 + 5224);
  }
LABEL_50:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(a3 + 128) || v15 || v16 )
  {
    GrePolyPatBlt(a1);
    v35 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( v15 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(a4 + 72),
        *(_DWORD *)(a4 + 76),
        *(_DWORD *)(a4 + 80),
        *(_DWORD *)(a4 + 84),
        1,
        *(HBRUSH *)(gpsi + 5192LL));
  }
  else
  {
    v35 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(a3 + 128) )
  {
    v36 = GreSetBkMode(a1);
    v37 = v36;
  }
  else
  {
    v36 = 0;
  }
  GreSelectBrush(a1, v32);
  xxxDrawState(a1, *(_DWORD *)(a4 + 76), *(_DWORD *)(a4 + 80), *(_DWORD *)(a4 + 84), v40);
  result = MNGetpItemIndex(a3, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v35 != -2147352576 )
      MNDrawMenu3DHotTracking(a1, (struct tagMENU *)a3, (struct tagITEM *)a4);
    goto LABEL_66;
  }
  if ( v36 )
    return GreSetBkMode(a1);
  return result;
}
