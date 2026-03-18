/*
 * XREFs of GetRect @ 0x1C0066ABC
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C004B848 (UpdateCheckpoint.c)
 *     ParkIcon @ 0x1C004BCA4 (ParkIcon.c)
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxGetScrollBarInfo @ 0x1C0076FC0 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     UT_GetParentDCClipBox @ 0x1C007F478 (UT_GetParentDCClipBox.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01D7F38 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C0210678 (SBCtlSetup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRect(__int64 a1, int *a2, char a3)
{
  int v4; // r11d
  __int64 result; // rax
  int v6; // r8d
  __int64 v7; // r8
  int *v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  int v15; // ecx

  v4 = a3 & 2;
  *(_OWORD *)a2 = *(_OWORD *)((-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + a1 + 144);
  result = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( (_DWORD)result == 669 )
    return result;
  v6 = a3 & 0x70;
  switch ( v6 )
  {
    case 32:
      v8 = (int *)(a1 + 128);
LABEL_9:
      v9 = *v8;
      v10 = -v8[1];
      a2[3] -= v8[1];
      result = (unsigned int)-v9;
      *a2 += result;
      a2[2] += result;
      a2[1] += v10;
      return result;
    case 16:
      v8 = (int *)(a1 + 144);
      goto LABEL_9;
    case 64:
      v7 = *(_QWORD *)(a1 + 104);
      result = *(_WORD *)(v7 + 82) & 0x3FFF;
      if ( (_DWORD)result != 669 )
      {
        v8 = (int *)(v7 + 144);
        if ( (*(_BYTE *)(v7 + 66) & 0x40) != 0 && v4 && (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
        {
          v11 = *(_DWORD *)(v7 + 148);
          v12 = -*(_DWORD *)(v7 + 152);
          v13 = *a2;
          v14 = -v11;
          v15 = a2[2];
          a2[3] += v14;
          a2[1] += v14;
          *a2 = -(v12 + v15);
          result = (unsigned int)-(v13 + v12);
          a2[2] = result;
          return result;
        }
        goto LABEL_9;
      }
      break;
  }
  return result;
}
