/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01F0580
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01F1200 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0184 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01F0B24 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01F0D04 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0F24 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F1004 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 */

void __fastcall HandleSizingAwayFromDockTarget(
        struct _MOVESIZEDATA *a1,
        const struct tagCHECKPOINT *const a2,
        unsigned int *a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // r11d
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  const struct _MOVESIZEDATA *v18; // rcx
  int v19; // ecx
  const struct _MOVESIZEDATA *v20; // rcx
  int v21; // ecx

  v6 = PreserveShellArrangementDuringTopBottomSize(a1);
  v7 = *((_DWORD *)a1 + 56);
  v8 = v6;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          goto LABEL_27;
        if ( (unsigned int)(*((_DWORD *)a1 + 40) - 6) > 2
          || (v11 = *((_DWORD *)a1 + 45), (v11 & 0x6000) == 0)
          || (v11 & 0x300) == 0 )
        {
          v13 = *((_DWORD *)a1 + 27);
          *((_DWORD *)a1 + 15) = v13;
          *((_DWORD *)a1 + 7) = v13;
          goto LABEL_27;
        }
        if ( !v8 )
        {
          if ( a2 )
          {
            *((_DWORD *)a1 + 15) = *((_DWORD *)a2 + 1);
            v12 = *((_DWORD *)a2 + 1);
          }
          else
          {
            v12 = *((_DWORD *)a1 + 27);
            *((_DWORD *)a1 + 15) = v12;
          }
          *((_DWORD *)a1 + 7) = v12;
LABEL_25:
          SetDragInThresholdAlways(a1);
          goto LABEL_27;
        }
      }
      else
      {
        *((_DWORD *)a1 + 14) = *((_DWORD *)a1 + 6);
      }
    }
    else
    {
      *((_DWORD *)a1 + 16) = *((_DWORD *)a1 + 8);
    }
    goto LABEL_16;
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 40) - 3) <= 2 )
  {
    v14 = *((_DWORD *)a1 + 45);
    if ( (v14 & 0x6000) != 0 && (v14 & 0x300) != 0 )
    {
      if ( !v8 )
      {
        if ( a2 )
        {
          *((_DWORD *)a1 + 17) = *((_DWORD *)a2 + 3);
          v15 = *((_DWORD *)a2 + 3);
        }
        else
        {
          v15 = *((_DWORD *)a1 + 29);
          *((_DWORD *)a1 + 17) = v15;
        }
        *((_DWORD *)a1 + 9) = v15;
        goto LABEL_25;
      }
LABEL_16:
      SetDragOutToDragInThreshold(a1);
      goto LABEL_27;
    }
  }
  v16 = *((_DWORD *)a1 + 29);
  *((_DWORD *)a1 + 17) = v16;
  *((_DWORD *)a1 + 9) = v16;
LABEL_27:
  if ( !v8 )
  {
    v17 = *((_DWORD *)a1 + 40);
    if ( (unsigned int)(v17 - 1) <= 1 )
    {
      v19 = *((_DWORD *)a1 + 45);
      if ( ((v19 & 0x6000) != 0x6000 || (v19 & 0x300) != 0x300)
        && (v17 == 1 && (v19 & 0x2100) == 0x2100 || v17 == 2 && (v19 & 0x4200) == 0x4200) )
      {
        *((_DWORD *)a1 + 66) &= ~2u;
        *((_DWORD *)a1 + 45) = v19 | 0x300;
        DisableTemporayMetricsOverrides(a1);
        MakeArrangedStateObservable(v20);
        ++*((_DWORD *)a1 + 76);
      }
    }
    else
    {
      *((_DWORD *)a1 + 45) &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 66) &= ~2u;
      DisableTemporayMetricsOverrides(a1);
      MakeArrangedStateObservable(v18);
      ++*((_DWORD *)a1 + 77);
    }
  }
  v21 = *((_DWORD *)a1 + 45);
  *((_DWORD *)a1 + 56) = 4;
  if ( (v21 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 45) = v21 & 0xFDFFFFFF;
    if ( a3 )
      *a3 |= 4u;
  }
}
