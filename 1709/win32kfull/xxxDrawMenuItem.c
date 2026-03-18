/*
 * XREFs of xxxDrawMenuItem @ 0x1C007FB1C
 * Callers:
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020EDC8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C007FCA8 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C007FD30 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0080028 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0215E04 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0215EBC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 *     GreGetTextCharacterExtra @ 0x1C0294E2C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0294E74 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 a3, __int64 a4, char a5, struct tagWND *a6)
{
  unsigned int v9; // ebx
  struct tagITEM *v11; // r9
  int v12; // r8d
  int v13; // r11d
  int v14; // r12d
  BOOL v15; // r15d
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int *v21; // rbx
  int v22; // r10d
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rbx
  __int64 v27; // r13
  int v28; // eax
  int v29; // r11d
  unsigned int v30; // ebx
  int v31; // edi
  unsigned int v32; // [rsp+54h] [rbp-64h]
  int v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+60h] [rbp-58h]
  _DWORD v35[4]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v36; // [rsp+88h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp+20h]

  v32 = 0;
  v34 = 0LL;
  v37 = 0;
  v9 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  v33 = MNIsOwnerDrawItem(a3, a4, 2147614720LL);
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == v12 )
  {
    if ( (unsigned int)MNDrawHilite((struct tagMENU *)a3, v11) || (v14 = 0, (*(_DWORD *)(a4 + 4) & 0x10000100) != 0) )
      v14 = 1;
    v15 = (*(_DWORD *)(a3 + 56) & 1) == 0;
  }
  else
  {
    v14 = MNDrawHilite((struct tagMENU *)a3, v11);
    v15 = 0;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
  {
    v17 = *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48);
    if ( v17 )
    {
      v34 = GreSelectFont((__int64)a1, v17);
      v13 = 0;
    }
    else
    {
      v37 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
      v9 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
      v13 = 64;
    }
  }
  if ( v33 )
  {
    GreSetTextColor(a1);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage(a1, (a5 & 1) + 1, (struct tagMENU *)a3, (struct tagITEM *)a4, 0, 0, a6);
    result = MNGetpItemIndex(a3, a4);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (*(_DWORD *)(a3 + 56) & 1) != 0 && *(_QWORD *)(a4 + 16) && !(unsigned int)MNIsUAHMenu(a3) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi, v18) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
        || (v19 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
            (*(_DWORD *)(v19 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v19) + 284) == 96 )
      {
        v20 = gpsi + 6996LL;
      }
      else
      {
        v20 = gpsi + 8484LL;
      }
      v21 = (int *)(v20 + ((*(_DWORD *)a4 & 0x2000) != 0 ? 1472LL : 992LL));
      if ( *(_DWORD *)(a4 + 84) >= v21[3] )
      {
        FixHDCBITSBmpEx(0LL);
        v22 = v21[3];
        v23 = (*(_DWORD *)(a4 + 84) - v22 - 2) / 2;
        if ( v23 <= 0 )
          v23 = 0;
        BltColor(a1, *(_DWORD *)(a4 + 76) + v23, v21[2], v22, *v21, v21[1], 1);
      }
    }
    goto LABEL_9;
  }
  if ( v14 )
  {
    if ( v9 == -2147352576 )
    {
      v24 = gpsi;
      v25 = *(_DWORD *)(gpsi + 4668LL);
      v26 = *(_QWORD *)(gpsi + 4912LL);
LABEL_34:
      v27 = *(_QWORD *)(v24 + 4792);
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(a3 + 56) & 1) != 0 )
    {
      v24 = gpsi;
      v25 = *(_DWORD *)(gpsi + 4604LL);
      v26 = *(_QWORD *)(gpsi + 4784LL);
      goto LABEL_34;
    }
    goto LABEL_36;
  }
  if ( !v15 )
  {
LABEL_36:
    v24 = gpsi;
    v25 = *(_DWORD *)(gpsi + 4568LL);
    v26 = *(_QWORD *)(gpsi + 4712LL);
    v27 = *(_QWORD *)(gpsi + 4736LL);
    goto LABEL_37;
  }
  v26 = *(_QWORD *)(a3 + 128);
  v24 = gpsi;
  v27 = *(_QWORD *)(gpsi + 4736LL);
  if ( !v26 )
    v26 = *(_QWORD *)(gpsi + 4920LL);
  v25 = *(_DWORD *)(gpsi + 4672LL);
LABEL_37:
  v28 = *(_DWORD *)(a4 + 4);
  if ( ((v28 & 0x20000000) == 0 || *(_QWORD *)(a4 + 40)) && ((v28 & 1) != 0 || (*(_DWORD *)(a3 + 56) & 0x10) != 0) )
  {
    if ( v14 || v25 != *(_DWORD *)(v24 + 4612) || *(_DWORD *)(v24 + 2172) )
    {
      if ( *(_DWORD *)(v24 + 4620) != v25 )
      {
        v27 = *(_QWORD *)(v24 + 4816);
        goto LABEL_55;
      }
    }
    else if ( *(_DWORD *)(v24 + 4616) != v25 || *(_DWORD *)(v24 + 4632) != v25 )
    {
      v29 = ((*(_DWORD *)(a3 + 56) & 0x10) != 0 ? 256 : 32) | v13;
LABEL_54:
      v37 = v29;
      goto LABEL_55;
    }
    v29 = v13 | 0x10;
    goto LABEL_54;
  }
LABEL_55:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(a3 + 128) || v14 || v15 )
  {
    v35[0] = *(_DWORD *)(a4 + 72);
    v35[1] = *(_DWORD *)(a4 + 76);
    v35[2] = *(_DWORD *)(a4 + 80);
    v35[3] = *(_DWORD *)(a4 + 84);
    v36 = v26;
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v35, 1);
    v30 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( v14 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(a4 + 72),
        *(_DWORD *)(a4 + 76),
        *(_DWORD *)(a4 + 80),
        *(_DWORD *)(a4 + 84),
        1,
        *(HBRUSH *)(gpsi + 4784LL));
  }
  else
  {
    v30 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(a3 + 128) )
  {
    v31 = GreSetBkMode(a1, 1);
    v32 = v31;
  }
  else
  {
    v31 = 0;
  }
  GreSelectBrush(a1, v27);
  xxxDrawState(a1, *(_DWORD *)(a4 + 76), *(_DWORD *)(a4 + 80), *(_DWORD *)(a4 + 84), v37);
  result = MNGetpItemIndex(a3, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v30 != -2147352576 )
      MNDrawMenu3DHotTracking(a1, (struct tagMENU *)a3, (struct tagITEM *)a4);
LABEL_9:
    MNDrawInsertionBar(a1, (struct tagITEM *)a4);
    result = v32;
    if ( v32 )
      result = GreSetBkMode(a1, v32);
    if ( (*(_DWORD *)(a4 + 4) & 0x1000) != 0 )
    {
      if ( v34 )
      {
        return GreSelectFont((__int64)a1, v34);
      }
      else
      {
        GreGetTextCharacterExtra(a1);
        return GreSetTextCharacterExtra(a1);
      }
    }
    return result;
  }
  if ( v31 )
    return GreSetBkMode(a1, v31);
  return result;
}
