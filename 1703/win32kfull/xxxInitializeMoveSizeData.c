/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C01F76A4
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01F31C8 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     MoveWithArrangementAllowed @ 0x1C01EDE38 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01EDE68 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01EDF7C (WindowArrangementAllowed.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01EFBB0 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F0770 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01F2FA4 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01F33A4 (-xxxMS_FlushWigglies@@YAXXZ.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  int v8; // r9d
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  int *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rax
  int *v17; // r14
  __int64 v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rax
  __int64 TopLevelWindow; // rax
  __int64 v22; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v24; // r8
  unsigned int v25; // r12d
  unsigned int v26; // ebx
  unsigned int v27; // r15d
  __int128 v28; // xmm0
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  BOOL v33; // eax
  int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  __int128 v37; // xmm0
  int v38; // eax
  int *v39; // r14
  int v40; // ecx
  int v41; // eax
  int v42; // r8d
  int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // eax
  char v49; // cl
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  int v64; // eax
  int v65; // eax
  __int64 result; // rax
  unsigned __int64 v67; // [rsp+20h] [rbp-60h]
  struct tagPOINT v68; // [rsp+20h] [rbp-60h]
  struct tagRECT v69; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v70[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v71; // [rsp+50h] [rbp-30h] BYREF
  __int128 v72; // [rsp+60h] [rbp-20h] BYREF

  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
    v8 = 16;
  *(_DWORD *)(a2 + 180) = *(_DWORD *)(a2 + 180) & 0xFFFFFFEF | v8;
  *(_OWORD *)(a2 + 104) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 128);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v11 != DesktopWindow )
  {
    v17 = (int *)(a2 + 72);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v11 + 144);
    TransformRectBetweenCoordinateSpaces(a2 + 72, a2 + 72, a1, *(_QWORD *)(a1 + 104));
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      v22 = *(_QWORD *)(TopLevelWindow + 216);
      if ( v22 )
      {
        v70[0] = 0LL;
        v70[1] = 0LL;
        GreGetRgnBox(v22, v70);
        IntersectRect((int *)(a2 + 72), (int *)(a2 + 72), (int *)v70);
      }
    }
    v71 = *(struct tagRECT *)v17;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(a1 + 368) & 0xF) != 2 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      LogicalToPhysicalDPIRect(&v71, &v71, MonitorFlagsFromWindow, 0LL);
    }
    goto LABEL_32;
  }
  if ( (*(_BYTE *)(a1 + 64) & 0x88) == 0 )
  {
    v13 = *gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo <= 1u )
    {
      if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
        && (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
        && (v13 = **(_QWORD **)(v14 + 8), (*(_DWORD *)(v13 + 52) & 1) != 0) )
      {
        v15 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v13) + 88) + 40LL) + 92LL);
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
             && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (v13 = **(_QWORD **)(v16 + 8), (*(_DWORD *)(v13 + 52) & 1) != 0) )
      {
        v15 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v13) + 88) + 40LL) + 108LL);
      }
      else
      {
        v15 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v13) + 88) + 40LL) + 76LL);
      }
      v17 = (int *)(a2 + 72);
      *(_OWORD *)(a2 + 72) = *v15;
      v71 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v15) + 88) + 40LL) + 76LL);
LABEL_32:
      v12 = (int *)(a2 + 104);
      goto LABEL_33;
    }
  }
  if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
    && (v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 52LL) & 1) != 0 )
  {
    v19 = (_OWORD *)(*gpDispInfo + 40LL);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
         && (v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 52LL) & 1) != 0 )
  {
    v19 = (_OWORD *)(*gpDispInfo + 56LL);
  }
  else
  {
    v19 = (_OWORD *)(*gpDispInfo + 24LL);
  }
  v17 = (int *)(a2 + 72);
  *(_OWORD *)(a2 + 72) = *v19;
  v71 = *(struct tagRECT *)(*gpDispInfo + 24LL);
LABEL_33:
  v24 = *(_QWORD *)(a1 + 104);
  v25 = (__int16)a4;
  v26 = HIWORD(a4);
  v27 = (__int16)v26;
  LODWORD(v67) = v25;
  HIDWORD(v67) = (__int16)v26;
  if ( *(_QWORD *)(v24 + 216) )
  {
    v28 = *(_OWORD *)v12;
    v29 = v67;
    v70[0] = v67;
    v72 = v28;
    TransformRectBetweenCoordinateSpaces(&v72, &v72, v24, a1);
    TransformPointBetweenCoordinateSpaces(v70, v70, *(_QWORD *)(a1 + 104), a1);
    v30 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 216LL), &v72);
    v31 = HIDWORD(v70[0]);
    v32 = LODWORD(v70[0]);
    *(_DWORD *)(a2 + 180) = (v30 != 0 ? 0 : 0x40) | *(_DWORD *)(a2 + 180) & 0xFFFFFFBF;
    *(_DWORD *)(a2 + 180) = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 216LL), v32, v31) != 0
                           ? 0
                           : 0x200000) | *(_DWORD *)(a2 + 180) & 0xFFDFFFFF;
  }
  else
  {
    v29 = v67;
    *(_DWORD *)(a2 + 180) = ((unsigned int)IntersectRect(&v69.left, v12, v17) == 0 ? 0x40 : 0) | *(_DWORD *)(a2 + 180) & 0xFFFFFFBF;
    v33 = PtInRect(v17, v67);
    *(_DWORD *)(a2 + 180) = v34 & 0xFFDFFFFF | (!v33 << 21);
  }
  if ( (*(_DWORD *)(a2 + 180) & 0x100000) != 0 )
  {
    v69 = v71;
    CCursorClip::SetClip(gpCursorClip, &v69);
  }
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(a1 + 71) >> 5)) != 0 )
  {
    v35 = *(_DWORD *)(gpsi + 2108LL);
    *(_DWORD *)(a2 + 96) = v35;
    *(_DWORD *)(a2 + 88) = v35;
    v36 = *(_DWORD *)(gpsi + 2112LL);
    *(_DWORD *)(a2 + 100) = v36;
    *(_DWORD *)(a2 + 92) = v36;
  }
  else
  {
    xxxGetMinMaxTrackInfo((struct _MOVESIZEDATA *)a2, a5 & 1);
  }
  v37 = *(_OWORD *)(a2 + 104);
  v38 = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(a2 + 228) = 0;
  v39 = (int *)(a2 + 224);
  *(_DWORD *)(a2 + 224) = 4;
  *(_DWORD *)(a2 + 268) = v25;
  *(_DWORD *)(a2 + 272) = v27;
  *(_DWORD *)(a2 + 276) = v25;
  *(_DWORD *)(a2 + 280) = v27;
  *(_DWORD *)(a2 + 180) = (v38 & 0xFFFFFFFC ^ (v38 & 0xFFFFFFFC ^ ~(a5 << 25)) & 0x4000000) & 0x7CFBFF7F;
  *(_OWORD *)(a2 + 8) = v37;
  *(_OWORD *)(a2 + 24) = v37;
  *(_OWORD *)(a2 + 40) = v37;
  *(_OWORD *)(a2 + 56) = v37;
  if ( (unsigned int)SizeWithSnapAllowed((struct tagWND *)a1)
    && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
    && (*(_BYTE *)(a1 + 70) & 4) != 0
    && ((*(_BYTE *)(a1 + 71) | *(_BYTE *)(a1 + 64)) & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)a2 + 70LL) & 1) != 0
    && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL) )
  {
    v40 = 1024;
  }
  else
  {
    v40 = 0;
  }
  *(_DWORD *)(a2 + 180) = v40 | *(_DWORD *)(a2 + 180) & 0xFFFFFBFF;
  v41 = MoveWithArrangementAllowed((struct tagWND *)a1);
  v42 = 2048;
  if ( v41
    && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
    && (*(_BYTE *)(a1 + 70) & 4) != 0
    && ((*(_BYTE *)(a1 + 71) | *(_BYTE *)(a1 + 64)) & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)a2 + 70LL) & 1) != 0
    && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL) )
  {
    v43 = v42;
  }
  else
  {
    v43 = 0;
  }
  v44 = v43 | *(_DWORD *)(a2 + 180) & 0xFFFFF7FF;
  *(_DWORD *)(a2 + 180) = v44;
  if ( (v44 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(a1 + 305) & 3) == 0 )
    {
      if ( !WindowArrangementAllowed((struct tagWND *)a1) || (*(_BYTE *)(a1 + 71) & 1) == 0 )
        goto LABEL_66;
      v42 = 2048;
    }
    v45 = *(_DWORD *)(a2 + 180);
    if ( (v45 & v42) == 0 )
      *(_DWORD *)(a2 + 180) = v42 | v45 | 0x800000;
    v46 = *(_DWORD *)(a2 + 180);
    if ( (v46 & 0x400) == 0 )
      *(_DWORD *)(a2 + 180) = v46 | 0x400400;
  }
LABEL_66:
  if ( (*(_DWORD *)(a2 + 180) & 0xC00) == 0 )
  {
    *(_QWORD *)(a2 + 216) = MonitorFromPoint(v29, 2u);
    goto LABEL_100;
  }
  if ( (*(_BYTE *)(a1 + 305) & 3) != 0 || (*(_BYTE *)(a1 + 71) & 1) != 0 )
    v47 = 4096;
  else
    v47 = 0;
  v48 = v47 | *(_DWORD *)(a2 + 180) & 0xFFFFEFFF;
  *(_DWORD *)(a2 + 180) = v48;
  if ( (v48 & 0x1000) != 0 )
  {
    *(_DWORD *)(a2 + 228) = 2;
    *(_DWORD *)(a2 + 180) = v48 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v29,
    (const struct _MOVESIZEDATA *const)a2,
    (struct tagMONITOR **)(a2 + 216),
    (enum eTHRESHOLD_MARGIN_DIRECTION *)(a2 + 224));
  if ( (*(_DWORD *)(a2 + 180) & 0x38000) == 0 && (*(_BYTE *)(a1 + 305) & 3) != 0 && a3 == 9 )
    *(_DWORD *)(a2 + 180) = *(_DWORD *)(a2 + 180) & 0xFFFC7FFF | 0x20000;
  if ( (*(_BYTE *)(a1 + 71) & 1) != 0 || (v49 = *(_BYTE *)(a1 + 305), (v49 & 3) == 3) )
  {
    *v39 = 0;
    if ( (*(_BYTE *)(a1 + 305) & 3) == 3 )
    {
      v52 = *v39;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v52 = 3;
      *v39 = v52;
    }
    goto LABEL_99;
  }
  if ( (v49 & 1) == 0 )
  {
    if ( (v49 & 2) == 0 )
    {
      *v39 = 4;
      goto LABEL_99;
    }
    v51 = *(_DWORD *)(a2 + 180) & 0x38000;
    if ( v51 != 0x20000 )
    {
      if ( v51 )
        goto LABEL_93;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_84;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_93:
        *v39 = 2;
        goto LABEL_99;
      }
    }
LABEL_86:
    *v39 = 0;
    goto LABEL_99;
  }
  v50 = *(_DWORD *)(a2 + 180) & 0x38000;
  if ( v50 == 0x20000 )
    goto LABEL_86;
  if ( v50 )
    goto LABEL_87;
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) <= 2 )
      goto LABEL_86;
LABEL_87:
    *v39 = 1;
    goto LABEL_99;
  }
LABEL_84:
  *v39 = 3;
LABEL_99:
  *(_DWORD *)(a2 + 180) ^= ((unsigned __int8)*(_DWORD *)(a2 + 180) ^ (unsigned __int8)(*(_DWORD *)(a2 + 180) >> 5)) & 0x80;
LABEL_100:
  *(_DWORD *)(a2 + 160) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_112;
    a3 = 9;
    *(_DWORD *)(a2 + 160) = 9;
  }
  zzzSetCursor(*(_QWORD *)&gasyscur[76]);
  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
    *(_DWORD *)(a2 + 180) |= 1u;
  v53 = *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 180) |= 2u;
  *(_DWORD *)(a2 + 172) = v25;
  *(_DWORD *)(a2 + 176) = v27;
  v25 = v53 / 2;
  v68.x = v53 / 2;
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 || *(_DWORD *)(a2 + 160) != 9 )
  {
    v27 = (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20)) / 2;
    v68.y = v27;
  }
  else
  {
    v27 = (int)GetCaptionHeight(a1) / 2 + *(_DWORD *)(a2 + 12) + 3;
    v68.y = v27;
  }
  zzzInternalSetCursorPos(v25, v27, 1);
  xxxMS_FlushWigglies();
  if ( (*(_DWORD *)(a2 + 180) & 0x400) == 0 )
    *v39 = 4;
  *(_DWORD *)(a2 + 180) &= ~0x80u;
  v29 = (__int64)v68;
  *(_DWORD *)(a2 + 268) = v25;
  *(_DWORD *)(a2 + 272) = v27;
  *(_DWORD *)(a2 + 276) = v25;
  *(_DWORD *)(a2 + 280) = v27;
LABEL_112:
  v54 = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a2 + 272) -= v54;
  *(_DWORD *)(a2 + 280) -= v54;
  v55 = (*(_DWORD *)(a2 + 180) ^ (gdwPUDFlags >> 15)) & 0x20;
  *(_QWORD *)(a2 + 200) = *(_QWORD *)(a2 + 216);
  *(_DWORD *)(a2 + 180) ^= v55;
  v56 = *(_DWORD *)(a2 + 104);
  v57 = *v39;
  *(_DWORD *)(a2 + 268) -= v56;
  *(_DWORD *)(a2 + 276) -= v56;
  *(_DWORD *)(a2 + 208) = v57;
  *(_QWORD *)(a2 + 192) = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 360));
  v58 = *(_DWORD *)(a2 + 180) ^ (*(_DWORD *)(a2 + 180) ^ ~(*(_DWORD *)(a2 + 180) << 23)) & 0x10000000;
  *(_DWORD *)(a2 + 180) = v58;
  v59 = v58 & 0xFFFFDFFF | ((*(_BYTE *)(a1 + 305) & 1) << 13);
  *(_DWORD *)(a2 + 180) = v59;
  v60 = v59 & 0xFFFFBFFF | ((*(_BYTE *)(a1 + 305) & 2) << 13);
  v61 = ((unsigned __int16)v60 ^ (unsigned __int16)(v60 >> 5)) & 0x100 ^ v60;
  v62 = (((unsigned __int16)v61 ^ (unsigned __int16)(v61 >> 5)) & 0x200 ^ v61) & 0xDFF7FFFF;
  *(_DWORD *)(a2 + 180) = v62;
  if ( (v62 & 2) != 0 )
  {
    v63 = v62 & 0xFFFFF3FF;
    *(_DWORD *)(a2 + 180) = v63;
    if ( (*(_BYTE *)(a1 + 305) & 3) != 0 )
      *(_DWORD *)(a2 + 180) = v63 | 0xC00C00;
  }
  *(_DWORD *)(a2 + 164) = dword_1C02EE6C8[a3];
  *(_DWORD *)(a2 + 168) = dword_1C02EE698[a3];
  v64 = dword_1C02EE728[a3];
  if ( v64 != -1 )
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 4LL * (__int16)v64 + 104) - v25;
  v65 = dword_1C02EE6F8[a3];
  if ( v65 != -1 )
    *(_DWORD *)(a2 + 156) = *(_DWORD *)(a2 + 4LL * (__int16)v65 + 104) - v27;
  *(_QWORD *)(a2 + 284) = v29;
  *(_DWORD *)(a2 + 324) = a5;
  memset((void *)(a2 + 232), 0, 0x20uLL);
  result = *(_DWORD *)(a2 + 264) & 0xFFFFFFF4 | *(_BYTE *)(a1 + 307) & 1 | (2 * (a5 & 4 | *(_BYTE *)(a1 + 307) & 1));
  *(_DWORD *)(a2 + 264) = result;
  return result;
}
