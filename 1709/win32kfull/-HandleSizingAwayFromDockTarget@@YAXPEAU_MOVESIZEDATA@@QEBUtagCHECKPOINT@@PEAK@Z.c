/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01D8298
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01D8F2C (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7E98 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01D88C0 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01D8AAC (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D8C68 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D8D30 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 */

void __fastcall HandleSizingAwayFromDockTarget(
        struct _MOVESIZEDATA *a1,
        const struct tagCHECKPOINT *const a2,
        unsigned int *a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // r10d
  int v9; // r11d
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  const struct _MOVESIZEDATA *v19; // rcx
  int v20; // ecx
  const struct _MOVESIZEDATA *v21; // rcx
  int v22; // ecx

  v6 = PreserveShellArrangementDuringTopBottomSize(a1);
  v7 = *((_DWORD *)a1 + 60);
  v8 = v6;
  v9 = 768;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_27;
        if ( (unsigned int)(*((_DWORD *)a1 + 44) - 6) > 2
          || (v12 = *((_DWORD *)a1 + 49), (v12 & 0x6000) == 0)
          || (v12 & 0x300) == 0 )
        {
          v14 = *((_DWORD *)a1 + 31);
          *((_DWORD *)a1 + 19) = v14;
          *((_DWORD *)a1 + 11) = v14;
          goto LABEL_27;
        }
        if ( !v8 )
        {
          if ( a2 )
          {
            *((_DWORD *)a1 + 19) = *((_DWORD *)a2 + 1);
            v13 = *((_DWORD *)a2 + 1);
          }
          else
          {
            v13 = *((_DWORD *)a1 + 31);
            *((_DWORD *)a1 + 19) = v13;
          }
          *((_DWORD *)a1 + 11) = v13;
LABEL_25:
          SetDragInThresholdAlways(a1);
          goto LABEL_27;
        }
      }
      else
      {
        *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 10);
      }
    }
    else
    {
      *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 12);
    }
    goto LABEL_16;
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 44) - 3) <= 2 )
  {
    v15 = *((_DWORD *)a1 + 49);
    if ( (v15 & 0x6000) != 0 && (v15 & 0x300) != 0 )
    {
      if ( !v8 )
      {
        if ( a2 )
        {
          *((_DWORD *)a1 + 21) = *((_DWORD *)a2 + 3);
          v16 = *((_DWORD *)a2 + 3);
        }
        else
        {
          v16 = *((_DWORD *)a1 + 33);
          *((_DWORD *)a1 + 21) = v16;
        }
        *((_DWORD *)a1 + 13) = v16;
        goto LABEL_25;
      }
LABEL_16:
      SetDragOutToDragInThreshold(a1);
      goto LABEL_27;
    }
  }
  v17 = *((_DWORD *)a1 + 33);
  *((_DWORD *)a1 + 21) = v17;
  *((_DWORD *)a1 + 13) = v17;
LABEL_27:
  if ( !v8 )
  {
    v18 = *((_DWORD *)a1 + 44);
    if ( (unsigned int)(v18 - 1) <= 1 )
    {
      v20 = *((_DWORD *)a1 + 49);
      if ( ((v20 & 0x6000) != 0x6000 || (v9 & v20) != v9)
        && (v18 == 1 && (v20 & 0x2100) == 0x2100 || v18 == 2 && (v20 & 0x4200) == 0x4200) )
      {
        *((_DWORD *)a1 + 70) &= ~2u;
        *((_DWORD *)a1 + 49) = v9 | v20;
        DisableTemporayMetricsOverrides(a1);
        MakeArrangedStateObservable(v21);
        ++*((_DWORD *)a1 + 80);
      }
    }
    else
    {
      *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 70) &= ~2u;
      DisableTemporayMetricsOverrides(a1);
      MakeArrangedStateObservable(v19);
      ++*((_DWORD *)a1 + 81);
    }
  }
  v22 = *((_DWORD *)a1 + 49);
  *((_DWORD *)a1 + 60) = 4;
  if ( (v22 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v22 & 0xFDFFFFFF;
    if ( a3 )
      *a3 |= 4u;
  }
}
