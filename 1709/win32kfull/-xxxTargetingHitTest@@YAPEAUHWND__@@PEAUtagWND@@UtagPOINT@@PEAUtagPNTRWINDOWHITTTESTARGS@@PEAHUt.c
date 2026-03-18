/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     xxxDCEWindowHitTest @ 0x1C0061F80 (xxxDCEWindowHitTest.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest @ 0x1C01092D8 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01D3388 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01D3A10 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01D4344 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01D4424 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01D46C0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D4AF0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C023A580 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C023CE74 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C023D464 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _DWORD *a4,
        struct tagRECT *a5,
        unsigned int a6,
        int a7)
{
  int v8; // r8d
  unsigned int v9; // r15d
  _DWORD *v10; // r10
  struct tagRECT *v11; // r9
  __int64 v12; // r12
  bool v13; // zf
  __int64 v15; // rdi
  unsigned int v16; // r13d
  bool v17; // cf
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // ecx
  BOOL v24; // eax
  __int64 v25; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct tagWND *v32; // r14
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct tagWND *v39; // r15
  unsigned int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // r14d
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  unsigned int v55; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v58; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v59; // [rsp+78h] [rbp-88h]
  unsigned __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v61; // [rsp+88h] [rbp-78h]
  struct tagPOINT v62; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  struct tagRECT v66; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v69; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v70; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v71; // [rsp+110h] [rbp+10h] BYREF
  __int128 v72; // [rsp+120h] [rbp+20h] BYREF
  __int128 v73; // [rsp+130h] [rbp+30h] BYREF
  __int128 v74; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v75; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v76; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v77; // [rsp+170h] [rbp+70h] BYREF

  v57 = 0;
  v53 = 0;
  v8 = a6;
  v9 = -2;
  v10 = a4;
  v61 = a4;
  v11 = a5;
  v12 = 0LL;
  v13 = *(_DWORD *)(a3 + 88) == 1;
  v15 = a1;
  v58 = a2;
  v59 = a5;
  v16 = 17;
  v54 = a6;
  v55 = -2;
  v56 = 0LL;
  if ( v13 && !PtInRect((_DWORD *)(a1 + 128), *(_QWORD *)&a2) && (_WORD)v8 != 3 && (*(_BYTE *)(v15 + 70) & 4) == 0 )
    return v12;
  v66 = *v11;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v15, *(_QWORD *)&a2, a3, v10, &v66, &v57, &v53, (__int64)&v56, a7, v8) )
    return v12;
  if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v15) )
  {
    v17 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v15) != 0;
    v18 = 1;
    v57 = 1;
    v9 = v17 ? -2 : 1;
    v55 = v9;
  }
  else
  {
    v18 = v57;
  }
  if ( v18 )
  {
    v49 = v53;
    goto LABEL_65;
  }
  if ( (*(_BYTE *)(v15 + 71) & 0x20) != 0 )
    goto LABEL_52;
  LODWORD(v60) = v58.x + v56.x;
  HIDWORD(v60) = v58.y + v56.y;
  if ( !PtInRect((_DWORD *)(v15 + 144), v60) )
  {
    if ( *(_DWORD *)(a3 + 88) == 1 )
      goto LABEL_52;
    v22 = *(_QWORD *)(a3 + 40);
    v67 = *(_OWORD *)(v15 + 144);
    v68 = v67;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v68, &v67, v22, 0LL, 0LL, v54) > 0xFFDu )
      goto LABEL_52;
  }
  if ( *(_DWORD *)(a3 + 88) != 1 )
    goto LABEL_20;
  v23 = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 176LL);
  v24 = v23 == 0;
  if ( v23 )
  {
    xxxSendNCHitTest(v15, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a3);
    v9 = v55;
    if ( ((v55 + 1) & 0xFFFFFFFD) != 0 )
      goto LABEL_20;
    v24 = 1;
  }
  if ( v24 )
  {
    v69 = *v59;
    xxxPointerInsideNCTargeting((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a3, &v69, v54);
  }
LABEL_20:
  if ( v9 != -2 && v9 != 1 )
  {
    v25 = *(_QWORD *)(v15 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
    v64 = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = &v64;
    v65 = v25;
    if ( v25 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
    if ( *(_DWORD *)(a3 + 84) )
    {
      v27 = *(unsigned int *)(v15 + 368);
      v62 = v58;
      LogicalToPhysicalDPIPoint(&v62, &v58, v27, 0LL);
      v28 = xxxDCEWindowHitTest(*(struct tagWND **)(v15 + 112));
    }
    else
    {
      v28 = xxxWindowHitTest(*(_QWORD *)(v15 + 112));
    }
    v12 = v28;
    if ( v28 )
    {
      v31 = ValidateHwnd(v28);
      v32 = (struct tagWND *)v31;
      if ( v31 )
      {
        *v61 = 1;
        v76 = *v59;
        TransformRectBetweenCoordinateSpaces(&v76, v59, v31, v15);
        v70 = v76;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v32, 0, 0LL, 0LL, 0, &v70, v54);
      }
    }
    ThreadUnlock1(v30, v29);
LABEL_49:
    v40 = v53;
    goto LABEL_50;
  }
  if ( v54 != 2 )
  {
    if ( (unsigned int)IntersectRect(&v72, (int *)(v15 + 144), &v59->left) )
    {
      ++*(_DWORD *)(a3 + 88);
      v44 = *(_QWORD *)(v15 + 112);
      v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43);
      v64 = *(_QWORD *)(v45 + 392);
      *(_QWORD *)(v45 + 392) = &v64;
      v65 = v44;
      if ( v44 )
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 8));
      v46 = *(_QWORD *)(v15 + 112);
      v73 = v72;
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v46,
              v58,
              a3,
              &v73,
              (unsigned __int16)v54);
      ThreadUnlock1(v48, v47);
      --*(_DWORD *)(a3 + 88);
      goto LABEL_49;
    }
LABEL_52:
    v40 = v53;
    goto LABEL_53;
  }
  v33 = *(_QWORD *)(v15 + 112);
  v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
  v64 = *(_QWORD *)(v34 + 392);
  *(_QWORD *)(v34 + 392) = &v64;
  v65 = v33;
  if ( v33 )
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
  if ( *(_DWORD *)(a3 + 84) )
  {
    v35 = *(unsigned int *)(v15 + 368);
    v63 = v60;
    LogicalToPhysicalDPIPoint(&v63, &v60, v35, 0LL);
    v36 = xxxDCEWindowHitTest(*(struct tagWND **)(v15 + 112));
  }
  else
  {
    v36 = xxxWindowHitTest(*(_QWORD *)(v15 + 112));
  }
  v12 = v36;
  if ( v36 && (v39 = (struct tagWND *)ValidateHwnd(v36)) != 0LL )
  {
    v40 = v53;
    if ( v53 )
      v40 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v53);
    if ( (unsigned int)TTBetterTarget(v39, v40, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v59, 2) )
    {
      *v61 = 1;
      v77 = *v59;
      TransformRectBetweenCoordinateSpaces(&v77, v59, v39, v15);
      v71 = v77;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v39, v40, 0LL, 0LL, 0, &v71, 2);
    }
  }
  else
  {
    v40 = v53;
  }
  ThreadUnlock1(v38, v37);
LABEL_50:
  if ( !v12 )
  {
    v9 = v55;
LABEL_53:
    if ( v40 == 4093 )
      return 0LL;
    v49 = _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v40) + v40;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v49, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v59, v54) )
      return *(_QWORD *)v15;
    if ( v9 == -2 || v56.x || v56.y )
    {
      xxxSendNCHitTest(v15, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v9 = v55;
    }
    if ( v9 == -1 )
    {
      v50 = *(_QWORD *)(a3 + 40);
      v74 = *(_OWORD *)(v15 + 128);
      v49 = (unsigned __int16)TouchTargetingRankForRectDeep(&v74, v50, v59, &v56, a7);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v49, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v59, v54)
        || (xxxSendNCHitTest(v15, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a3),
            v9 = v55,
            v55 == -1) )
      {
        *v61 = 0;
        return v12;
      }
    }
LABEL_65:
    v13 = *(_DWORD *)(a3 + 84) == 0;
    *(_DWORD *)(a3 + 32) = v9;
    if ( v13 )
    {
      if ( (*(_BYTE *)(v15 + 66) & 0x40) != 0 )
        v16 = 16;
    }
    else
    {
      LOBYTE(v16) = ~*(_BYTE *)(v15 + 66);
      v16 = (((*(unsigned __int8 *)(v15 + 65) ^ v16) >> 6) & 1) + 16;
    }
    if ( v9 == v16 && (*(_BYTE *)(v15 + 70) & 4) == 0 )
    {
      v51 = SizeBoxHwnd(v15);
      if ( v51 )
        v15 = v51;
    }
    if ( v57 )
      v49 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v49);
    if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v15)
      || (unsigned int)TTBetterTarget((struct tagWND *)v15, v49, (struct tagPNTRWINDOWHITTTESTARGS *)a3, v59, v54) )
    {
      v75 = *v59;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, (struct tagWND *)v15, v49, &v56, 0LL, 0, &v75, v54);
    }
    return *(_QWORD *)v15;
  }
  return v12;
}
