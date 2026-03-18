/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0061C80 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     xxxWindowHitTest @ 0x1C00FD404 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01CEE70 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01CF314 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01CFC6C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01CFD4C (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01D0008 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D043C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C0239024 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C023AF0C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C023B4FC (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        struct tagRECT *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // r13d
  int v9; // r8d
  __int64 v10; // r12
  bool v12; // zf
  __int64 v13; // rsi
  unsigned int v14; // edi
  bool v15; // cf
  unsigned int v16; // eax
  LONG x; // edi
  struct tagRECT *v18; // rcx
  __int64 v19; // r8
  int v20; // ecx
  BOOL v21; // eax
  __int64 v22; // rdx
  unsigned int MonitorFlagsFromWindow; // eax
  struct tagWND *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct tagWND *v29; // r15
  __int64 v30; // rdx
  unsigned int v31; // eax
  struct tagWND *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagWND *v36; // rax
  unsigned int v37; // r15d
  struct tagWND *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // r15d
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47[5]; // [rsp+54h] [rbp-ACh] BYREF
  struct tagPOINT v48; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT *v49; // [rsp+70h] [rbp-90h]
  struct tagWND *v50; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v51; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D4h] [rbp-2Ch]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  int v62; // [rsp+E0h] [rbp-20h]
  struct tagWND *v63[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v64; // [rsp+100h] [rbp+0h] BYREF

  v47[2] = 0;
  v46 = 0;
  v8 = -2;
  v9 = a6;
  v10 = 0LL;
  v52 = a4;
  v12 = *(_DWORD *)(a3 + 88) == 1;
  v13 = a1;
  *(_QWORD *)&v47[3] = a2;
  v14 = 17;
  v49 = a5;
  v47[0] = a6;
  v47[1] = -2;
  v48 = 0LL;
  if ( v12 && !PtInRect((_DWORD *)(a1 + 128), a2) && (_WORD)v9 != 3 && (*(_BYTE *)(v13 + 70) & 4) == 0 )
    return v10;
  v64 = *a5;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v13, a2, a3, a4, &v64, &v47[2], &v46, (__int64)&v48, a7, v9) )
    return v10;
  if ( IsCompositionInputWindow((struct tagWND *)v13) )
  {
    v15 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v13) != 0;
    v16 = 1;
    v8 = v15 ? -2 : 1;
    v47[1] = v8;
  }
  else
  {
    v16 = v47[2];
  }
  v47[2] = v16;
  if ( v16 )
  {
    v42 = v46;
    goto LABEL_66;
  }
  x = v48.x;
  if ( (*(_BYTE *)(v13 + 71) & 0x20) != 0 )
    goto LABEL_52;
  LODWORD(v50) = v48.x + v47[3];
  HIDWORD(v50) = v47[4] + v48.y;
  if ( !PtInRect((_DWORD *)(v13 + 144), (unsigned __int64)v50) )
  {
    if ( *(_DWORD *)(a3 + 88) == 1 )
      goto LABEL_52;
    v19 = *(_QWORD *)(a3 + 40);
    v64 = *v18;
    *(struct tagRECT *)v63 = v64;
    if ( (unsigned __int16)TouchTargetingRankForRect((unsigned int)v63, (unsigned int)&v64, v19, 0, 0LL, v47[0]) > 0xFFDu )
      goto LABEL_52;
  }
  if ( *(_DWORD *)(a3 + 88) != 1 )
    goto LABEL_20;
  v20 = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 176LL);
  v21 = v20 == 0;
  if ( v20 )
  {
    xxxSendNCHitTest(
      (struct tagWND *)v13,
      (struct tagPOINT)a2,
      *(struct tagPOINT *)&v47[3],
      &v48,
      (int *)&v47[1],
      (struct tagPNTRWINDOWHITTTESTARGS *)a3);
    v8 = v47[1];
    if ( ((v47[1] + 1) & 0xFFFFFFFD) != 0 )
      goto LABEL_20;
    v21 = 1;
  }
  if ( v21 )
  {
    v64 = *a5;
    xxxPointerInsideNCTargeting((struct tagWND *)v13, (struct tagPNTRWINDOWHITTTESTARGS *)a3, &v64, v47[0]);
  }
LABEL_20:
  if ( v8 != -2 && v8 != 1 )
  {
    v22 = *(_QWORD *)(v13 + 112);
    v53 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v53;
    v54 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    if ( *(_DWORD *)(a3 + 84) )
    {
      v63[0] = *(struct tagWND **)&v47[3];
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v13);
      LogicalToPhysicalDPIPoint(v63, &v47[3], MonitorFlagsFromWindow, 0LL);
      v24 = *(struct tagWND **)(v13 + 112);
      v55 = *(_DWORD *)a3;
      v56 = *(_QWORD *)(a3 + 8);
      v57 = *(_QWORD *)(a3 + 16);
      v58 = a3 + 32;
      v59 = *(_DWORD *)(a3 + 36);
      v60 = 0;
      v61 = 0LL;
      v62 = 0;
      v25 = (__int64)xxxDCEWindowHitTestIndirect(v24, (struct tagPOINT)v63[0], (__int64)&v55);
    }
    else
    {
      v25 = xxxWindowHitTest(*(_QWORD *)(v13 + 112));
    }
    v10 = v25;
    if ( v25 )
    {
      v28 = ValidateHwnd(v25);
      v29 = (struct tagWND *)v28;
      if ( v28 )
      {
        *v52 = 1;
        *(struct tagRECT *)v63 = *v49;
        TransformRectBetweenCoordinateSpaces(v63, v49, v28, v13);
        v64 = *(struct tagRECT *)v63;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v29, 0, 0LL, 0LL, 0, &v64, v47[0]);
      }
    }
    ThreadUnlock1(v27, v26);
LABEL_49:
    v37 = v46;
    goto LABEL_50;
  }
  if ( v47[0] != 2 )
  {
    if ( (unsigned int)IntersectRect(&v51.left, (int *)(v13 + 144), &a5->left) )
    {
      ++*(_DWORD *)(a3 + 88);
      v39 = *(_QWORD *)(v13 + 112);
      v53 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v53;
      v54 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v10 = xxxWindowHitTestWithTargeting(*(_QWORD *)(v13 + 112), *(_QWORD *)&v47[3], a3, &v51, LOWORD(v47[0]));
      ThreadUnlock1(v41, v40);
      --*(_DWORD *)(a3 + 88);
      goto LABEL_49;
    }
LABEL_52:
    v37 = v46;
LABEL_53:
    if ( v37 == 4093 )
      return 0LL;
    v42 = _TTWindowPenalty((struct tagWND *)v13, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v37) + v37;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v13, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v49, v47[0]) )
      return *(_QWORD *)v13;
    if ( v8 == -2 || x || v48.y )
    {
      xxxSendNCHitTest(
        (struct tagWND *)v13,
        (struct tagPOINT)a2,
        *(struct tagPOINT *)&v47[3],
        &v48,
        (int *)&v47[1],
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v8 = v47[1];
    }
    if ( v8 == -1 )
    {
      v43 = *(_QWORD *)(a3 + 40);
      v51 = *(struct tagRECT *)(v13 + 128);
      v42 = (unsigned __int16)TouchTargetingRankForRectDeep(
                                (unsigned int)&v51,
                                v43,
                                (_DWORD)v49,
                                (unsigned int)&v48,
                                a7);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v13, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v49, v47[0])
        || (xxxSendNCHitTest(
              (struct tagWND *)v13,
              (struct tagPOINT)a2,
              *(struct tagPOINT *)&v47[3],
              &v48,
              (int *)&v47[1],
              (struct tagPNTRWINDOWHITTTESTARGS *)a3),
            v8 = v47[1],
            v47[1] == -1) )
      {
        *v52 = 0;
        return v10;
      }
    }
    v14 = 17;
LABEL_66:
    v12 = *(_DWORD *)(a3 + 84) == 0;
    *(_DWORD *)(a3 + 32) = v8;
    if ( v12 )
    {
      if ( (*(_BYTE *)(v13 + 66) & 0x40) != 0 )
        v14 = 16;
    }
    else
    {
      LOBYTE(v14) = ~*(_BYTE *)(v13 + 66);
      v14 = ((*(unsigned __int8 *)(v13 + 65) ^ v14) >> 6) & 1 | 0x10;
    }
    if ( v8 == v14 && (*(_BYTE *)(v13 + 70) & 4) == 0 )
    {
      v44 = SizeBoxHwnd(v13);
      if ( v44 )
        v13 = v44;
    }
    if ( v47[2] )
      v42 += _TTWindowPenalty((struct tagWND *)v13, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v42);
    if ( IsCompositionInputWindow((struct tagWND *)v13)
      || (unsigned int)TTBetterTarget((struct tagWND *)v13, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v49, v47[0]) )
    {
      v51 = *v49;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, (struct tagWND *)v13, v42, &v48, 0LL, 0, &v51, v47[0]);
    }
    return *(_QWORD *)v13;
  }
  v30 = *(_QWORD *)(v13 + 112);
  v53 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v53;
  v54 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  if ( *(_DWORD *)(a3 + 84) )
  {
    v63[0] = v50;
    v31 = GetMonitorFlagsFromWindow(v13);
    LogicalToPhysicalDPIPoint(v63, &v50, v31, 0LL);
    v32 = *(struct tagWND **)(v13 + 112);
    v55 = *(_DWORD *)a3;
    v56 = *(_QWORD *)(a3 + 8);
    v57 = *(_QWORD *)(a3 + 16);
    v58 = a3 + 32;
    v59 = *(_DWORD *)(a3 + 36);
    v60 = 0;
    v61 = 0LL;
    v62 = 0;
    v33 = (__int64)xxxDCEWindowHitTestIndirect(v32, (struct tagPOINT)v63[0], (__int64)&v55);
  }
  else
  {
    v33 = xxxWindowHitTest(*(_QWORD *)(v13 + 112));
  }
  v10 = v33;
  if ( v33 && (v36 = (struct tagWND *)ValidateHwnd(v33), (v63[0] = v36) != 0LL) )
  {
    v37 = v46;
    if ( v46 )
    {
      v37 += _TTWindowPenalty((struct tagWND *)v13, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v46);
      v36 = v63[0];
    }
    if ( (unsigned int)TTBetterTarget(v36, v37, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v49, 2) )
    {
      v38 = v63[0];
      *v52 = 1;
      v64 = *v49;
      TransformRectBetweenCoordinateSpaces(&v64, v49, v38, v13);
      v51 = v64;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v63[0], v37, 0LL, 0LL, 0, &v51, 2);
    }
  }
  else
  {
    v37 = v46;
  }
  ThreadUnlock1(v35, v34);
LABEL_50:
  if ( !v10 )
    goto LABEL_53;
  return v10;
}
