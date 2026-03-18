/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C01DE8F8
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01DAB38 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7A20 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D8484 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01DA938 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01DAD00 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     MoveWithArrangementAllowed @ 0x1C01F82D4 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01F8304 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01F841C (WindowArrangementAllowed.c)
 *     GetScreenRectForWindow @ 0x1C023A808 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  int v8; // r9d
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  __int64 DispInfo; // rax
  int *v13; // r14
  __int64 v14; // rcx
  struct tagRECT v15; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r12d
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  __int128 v22; // xmm0
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  BOOL v27; // eax
  int v28; // r8d
  int v29; // ecx
  int v30; // ecx
  __int128 v31; // xmm0
  int v32; // eax
  int *v33; // r14
  int v34; // ecx
  int v35; // eax
  int v36; // r8d
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // ecx
  char v45; // cl
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  int v61; // eax
  int v62; // eax
  __int64 result; // rax
  unsigned __int64 v64; // [rsp+20h] [rbp-60h]
  struct tagPOINT v65; // [rsp+20h] [rbp-60h]
  struct tagRECT v66; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v67[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v68; // [rsp+50h] [rbp-30h] BYREF
  __int128 v69; // [rsp+60h] [rbp-20h] BYREF

  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 408LL) == gpqForeground )
    v8 = 16;
  *(_DWORD *)(a2 + 196) = *(_DWORD *)(a2 + 196) & 0xFFFFFFEF | v8;
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 136) = *(_OWORD *)(a1 + 128);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v11 == DesktopWindow )
  {
    if ( (*(_BYTE *)(a1 + 64) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v13 = (int *)(a2 + 88);
      *(_OWORD *)(a2 + 88) = *(_OWORD *)GetScreenRectForWindow(&v66, a1);
      v15 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo);
      v13 = (int *)(a2 + 88);
      *(_OWORD *)(a2 + 88) = *GetMonitorWorkRectForWindow(&v66, *(_QWORD *)(DispInfo + 88), (struct tagWND *)a1);
      v15 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v14) + 88) + 40LL) + 44LL);
    }
    v68 = v15;
  }
  else
  {
    v13 = (int *)(a2 + 88);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(v11 + 144);
    TransformRectBetweenCoordinateSpaces(a2 + 88, a2 + 88, a1, *(_QWORD *)(a1 + 104));
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      v17 = *(_QWORD *)(TopLevelWindow + 216);
      if ( v17 )
      {
        v67[0] = 0LL;
        v67[1] = 0LL;
        if ( (unsigned int)GreGetRgnBox(v17, v67) )
          IntersectRect((_DWORD *)(a2 + 88), (int *)(a2 + 88), (int *)v67);
      }
    }
    v68 = *(struct tagRECT *)v13;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(a1 + 368) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v68, &v68, *(unsigned int *)(a1 + 368), 0LL);
  }
  v18 = *(_QWORD *)(a1 + 104);
  v19 = (__int16)a4;
  v20 = HIWORD(a4);
  v21 = (__int16)v20;
  LODWORD(v64) = v19;
  HIDWORD(v64) = (__int16)v20;
  if ( *(_QWORD *)(v18 + 216) )
  {
    v22 = *(_OWORD *)(a2 + 120);
    v23 = v64;
    v67[0] = v64;
    v69 = v22;
    TransformRectBetweenCoordinateSpaces(&v69, &v69, v18, a1);
    TransformPointBetweenCoordinateSpaces(v67, v67, *(_QWORD *)(a1 + 104), a1);
    v24 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 216LL), &v69);
    v25 = HIDWORD(v67[0]);
    v26 = LODWORD(v67[0]);
    *(_DWORD *)(a2 + 196) = (v24 != 0 ? 0 : 0x40) | *(_DWORD *)(a2 + 196) & 0xFFFFFFBF;
    *(_DWORD *)(a2 + 196) = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 216LL), v26, v25) != 0
                           ? 0
                           : 0x200000) | *(_DWORD *)(a2 + 196) & 0xFFDFFFFF;
  }
  else
  {
    v23 = v64;
    *(_DWORD *)(a2 + 196) = ((unsigned int)IntersectRect(&v66, (int *)(a2 + 120), v13) == 0 ? 0x40 : 0) | *(_DWORD *)(a2 + 196) & 0xFFFFFFBF;
    v27 = PtInRect(v13, v64);
    *(_DWORD *)(a2 + 196) = v28 & 0xFFDFFFFF | (!v27 << 21);
  }
  if ( (*(_DWORD *)(a2 + 196) & 0x100000) != 0 )
  {
    v66 = v68;
    CCursorClip::SetClip(gpCursorClip, &v66);
  }
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(a1 + 71) >> 5)) != 0 )
  {
    v29 = *(_DWORD *)(gpsi + 2108LL);
    *(_DWORD *)(a2 + 112) = v29;
    *(_DWORD *)(a2 + 104) = v29;
    v30 = *(_DWORD *)(gpsi + 2112LL);
    *(_DWORD *)(a2 + 116) = v30;
    *(_DWORD *)(a2 + 108) = v30;
  }
  else
  {
    xxxGetMinMaxTrackInfo((struct tagWND **)a2, a5 & 1);
  }
  v31 = *(_OWORD *)(a2 + 120);
  v32 = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(a2 + 244) = 0;
  v33 = (int *)(a2 + 240);
  *(_DWORD *)(a2 + 240) = 4;
  *(_DWORD *)(a2 + 284) = v19;
  *(_DWORD *)(a2 + 288) = v21;
  *(_DWORD *)(a2 + 292) = v19;
  *(_DWORD *)(a2 + 296) = v21;
  *(_DWORD *)(a2 + 196) = (v32 & 0xFFFFFFFC ^ (v32 & 0xFFFFFFFC ^ ~(a5 << 25)) & 0x4000000) & 0x7CFBFF7F;
  *(_OWORD *)(a2 + 24) = v31;
  *(_OWORD *)(a2 + 40) = v31;
  *(_OWORD *)(a2 + 56) = v31;
  *(_OWORD *)(a2 + 72) = v31;
  if ( (unsigned int)SizeWithSnapAllowed(a1)
    && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
    && (*(_BYTE *)(a1 + 70) & 4) != 0
    && ((*(_BYTE *)(a1 + 71) | *(_BYTE *)(a1 + 64)) & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(a2 + 16) + 70LL) & 1) != 0
    && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL) )
  {
    v34 = 1024;
  }
  else
  {
    v34 = 0;
  }
  *(_DWORD *)(a2 + 196) = v34 | *(_DWORD *)(a2 + 196) & 0xFFFFFBFF;
  v35 = MoveWithArrangementAllowed(a1);
  v36 = 2048;
  if ( v35
    && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
    && (*(_BYTE *)(a1 + 70) & 4) != 0
    && ((*(_BYTE *)(a1 + 71) | *(_BYTE *)(a1 + 64)) & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(a2 + 16) + 70LL) & 1) != 0
    && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL) )
  {
    v37 = v36;
  }
  else
  {
    v37 = 0;
  }
  v38 = v37 | *(_DWORD *)(a2 + 196) & 0xFFFFF7FF;
  *(_DWORD *)(a2 + 196) = v38;
  if ( (v38 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(a1 + 305) & 3) == 0 )
    {
      if ( !(unsigned int)WindowArrangementAllowed(a1) || (*(_BYTE *)(a1 + 71) & 1) == 0 )
        goto LABEL_49;
      v36 = 2048;
    }
    v39 = *(_DWORD *)(a2 + 196);
    if ( (v39 & v36) == 0 )
      *(_DWORD *)(a2 + 196) = v36 | v39 | 0x800000;
    v40 = *(_DWORD *)(a2 + 196);
    if ( (v40 & 0x400) == 0 )
      *(_DWORD *)(a2 + 196) = v40 | 0x400400;
  }
LABEL_49:
  v41 = *(_DWORD *)(a2 + 196);
  if ( (v41 & 0xC00) == 0 )
  {
    *(_QWORD *)(a2 + 232) = MonitorFromPoint(v23, 2u, 0);
    goto LABEL_83;
  }
  if ( (*(_BYTE *)(a1 + 305) & 3) != 0 || (*(_BYTE *)(a1 + 71) & 1) != 0 )
    v42 = 4096;
  else
    v42 = 0;
  v43 = v42 | v41 & 0xFFFFEFFF;
  *(_DWORD *)(a2 + 196) = v43;
  if ( (v43 & 0x1000) != 0 )
  {
    *(_DWORD *)(a2 + 244) = 2;
    *(_DWORD *)(a2 + 196) = v43 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v23,
    (const struct _MOVESIZEDATA *const)a2,
    (struct tagMONITOR **)(a2 + 232),
    (enum eTHRESHOLD_MARGIN_DIRECTION *)(a2 + 240));
  v44 = *(_DWORD *)(a2 + 196);
  if ( (v44 & 0x38000) == 0 && (*(_BYTE *)(a1 + 305) & 3) != 0 && a3 == 9 )
    *(_DWORD *)(a2 + 196) = v44 & 0xFFFC7FFF | 0x20000;
  if ( (*(_BYTE *)(a1 + 71) & 1) != 0 || (v45 = *(_BYTE *)(a1 + 305), (v45 & 3) == 3) )
  {
    *v33 = 0;
    if ( (*(_BYTE *)(a1 + 305) & 3) == 3 )
    {
      v48 = *v33;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v48 = 3;
      *v33 = v48;
    }
    goto LABEL_82;
  }
  if ( (v45 & 1) == 0 )
  {
    if ( (v45 & 2) == 0 )
    {
      *v33 = 4;
      goto LABEL_82;
    }
    v47 = (*(_DWORD *)(a2 + 196) >> 15) & 7;
    if ( v47 != 4 )
    {
      if ( v47 )
        goto LABEL_76;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_67;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_76:
        *v33 = 2;
        goto LABEL_82;
      }
    }
LABEL_69:
    *v33 = 0;
    goto LABEL_82;
  }
  v46 = (*(_DWORD *)(a2 + 196) >> 15) & 7;
  if ( v46 == 4 )
    goto LABEL_69;
  if ( v46 )
    goto LABEL_70;
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) <= 2 )
      goto LABEL_69;
LABEL_70:
    *v33 = 1;
    goto LABEL_82;
  }
LABEL_67:
  *v33 = 3;
LABEL_82:
  *(_DWORD *)(a2 + 196) ^= ((unsigned __int8)*(_DWORD *)(a2 + 196) ^ (unsigned __int8)(*(_DWORD *)(a2 + 196) >> 5)) & 0x80;
LABEL_83:
  *(_DWORD *)(a2 + 176) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_95;
    a3 = 9;
    *(_DWORD *)(a2 + 176) = 9;
  }
  zzzSetCursor(*(_QWORD *)&gasyscur[76]);
  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
    *(_DWORD *)(a2 + 196) |= 1u;
  v49 = *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 196) |= 2u;
  *(_DWORD *)(a2 + 188) = v19;
  *(_DWORD *)(a2 + 192) = v21;
  v19 = v49 / 2;
  v65.x = v49 / 2;
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 || *(_DWORD *)(a2 + 176) != 9 )
  {
    v21 = (*(_DWORD *)(a2 + 28) + *(_DWORD *)(a2 + 36)) / 2;
    v65.y = v21;
  }
  else
  {
    v21 = (int)GetCaptionHeight(a1) / 2 + *(_DWORD *)(a2 + 28) + 3;
    v65.y = v21;
  }
  zzzInternalSetCursorPos(v19, v21, 1, 0);
  xxxMS_FlushWigglies();
  v50 = *(_DWORD *)(a2 + 196);
  if ( (v50 & 0x400) == 0 )
    *v33 = 4;
  v23 = (__int64)v65;
  *(_DWORD *)(a2 + 196) = v50 & 0xFFFFFF7F;
  *(_DWORD *)(a2 + 284) = v19;
  *(_DWORD *)(a2 + 288) = v21;
  *(_DWORD *)(a2 + 292) = v19;
  *(_DWORD *)(a2 + 296) = v21;
LABEL_95:
  v51 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 288) -= v51;
  *(_DWORD *)(a2 + 296) -= v51;
  v52 = (*(_DWORD *)(a2 + 196) ^ (gdwPUDFlags >> 15)) & 0x20;
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a2 + 232);
  *(_DWORD *)(a2 + 196) ^= v52;
  v53 = *(_DWORD *)(a2 + 120);
  v54 = *v33;
  *(_DWORD *)(a2 + 284) -= v53;
  *(_DWORD *)(a2 + 292) -= v53;
  *(_DWORD *)(a2 + 224) = v54;
  *(_QWORD *)(a2 + 208) = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 360));
  v55 = *(_DWORD *)(a2 + 196) ^ (*(_DWORD *)(a2 + 196) ^ ~(*(_DWORD *)(a2 + 196) << 23)) & 0x10000000;
  *(_DWORD *)(a2 + 196) = v55;
  v56 = v55 & 0xFFFFDFFF | ((*(_BYTE *)(a1 + 305) & 1) << 13);
  *(_DWORD *)(a2 + 196) = v56;
  v57 = v56 & 0xFFFFBFFF | ((*(_BYTE *)(a1 + 305) & 2) << 13);
  v58 = ((unsigned __int16)v57 ^ (unsigned __int16)(v57 >> 5)) & 0x100 ^ v57;
  v59 = (((unsigned __int16)v58 ^ (unsigned __int16)(v58 >> 5)) & 0x200 ^ v58) & 0xDFF7FFFF;
  *(_DWORD *)(a2 + 196) = v59;
  if ( (v59 & 2) != 0 )
  {
    v60 = v59 & 0xFFFFF3FF;
    *(_DWORD *)(a2 + 196) = v60;
    if ( (*(_BYTE *)(a1 + 305) & 3) != 0 )
      *(_DWORD *)(a2 + 196) = v60 | 0xC00C00;
  }
  *(_DWORD *)(a2 + 180) = dword_1C02EAE38[a3];
  *(_DWORD *)(a2 + 184) = dword_1C02EAE08[a3];
  v61 = dword_1C02EAE98[a3];
  if ( v61 != -1 )
    *(_DWORD *)(a2 + 168) = *(_DWORD *)(a2 + 4LL * (__int16)v61 + 120) - v19;
  v62 = dword_1C02EAE68[a3];
  if ( v62 != -1 )
    *(_DWORD *)(a2 + 172) = *(_DWORD *)(a2 + 4LL * (__int16)v62 + 120) - v21;
  *(_QWORD *)(a2 + 300) = v23;
  *(_DWORD *)(a2 + 340) = a5;
  memset((void *)(a2 + 248), 0, 0x20uLL);
  result = *(_DWORD *)(a2 + 280) & 0xFFFFFFF4 | *(_BYTE *)(a1 + 307) & 1 | (2 * (a5 & 4 | *(_BYTE *)(a1 + 307) & 1));
  *(_DWORD *)(a2 + 280) = result;
  return result;
}
