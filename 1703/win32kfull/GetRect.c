/*
 * XREFs of GetRect @ 0x1C0062FEC
 * Callers:
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     UT_GetParentDCClipBox @ 0x1C005EF1C (UT_GetParentDCClipBox.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00D74A4 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C00D7700 (CalcSBStuff.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     InternalGetRealClientRect @ 0x1C00EF82C (InternalGetRealClientRect.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F0224 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C020EED0 (SBCtlSetup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRect(__int64 a1, int *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  int v13; // ecx

  *(_OWORD *)a2 = *(_OWORD *)(a1 + 8 * (~a3 & 2 | 0x10LL));
  result = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( (_DWORD)result == 669 )
    return result;
  result = a3 & 0x70;
  switch ( (_DWORD)result )
  {
    case 0x20:
      v7 = (int *)(a1 + 128);
LABEL_9:
      v8 = *v7;
      v9 = -v7[1];
      a2[3] -= v7[1];
      result = (unsigned int)-v8;
      *a2 += result;
      a2[2] += result;
      a2[1] += v9;
      return result;
    case 0x10:
      v7 = (int *)(a1 + 144);
      goto LABEL_9;
    case 0x40:
      v6 = *(_QWORD *)(a1 + 104);
      result = *(_WORD *)(v6 + 82) & 0x3FFF;
      if ( (_DWORD)result != 669 )
      {
        v7 = (int *)(v6 + 144);
        if ( (((a3 & 2) != 0) & (*(_BYTE *)(v6 + 66) >> 6)) != 0 && (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
        {
          v10 = -*(_DWORD *)(v6 + 152);
          v11 = *a2;
          v12 = -*(_DWORD *)(v6 + 148);
          v13 = a2[2];
          a2[3] += v12;
          a2[1] += v12;
          *a2 = -(v10 + v13);
          result = (unsigned int)-(v11 + v10);
          a2[2] = result;
          return result;
        }
        goto LABEL_9;
      }
      break;
  }
  return result;
}
