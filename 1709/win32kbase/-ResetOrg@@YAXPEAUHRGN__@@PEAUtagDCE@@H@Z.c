/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C007B3E0 (UserSetDCVisRgn.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0046980 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0052950 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GetScreenRectForDpi @ 0x1C00594D8 (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C0059998 (GetMonitorRectForDpi.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall ResetOrg(struct HOBJ__ *a1, struct tagDCE *a2, int a3)
{
  __int64 v5; // rdx
  __int128 v6; // xmm0
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  int v10; // r12d
  struct tagMONITOR *v11; // rbx
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // edi
  int v16; // ebx
  LONG v17; // ebx
  LONG v18; // edi
  struct HOBJ__ *v19; // r12
  int *v20; // rbx
  HDC v21; // rdx
  DC *v22; // r9
  DC *v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  DC *v26; // rdi
  HDC v27; // r15
  int *v28; // rbx
  BOOL v29; // r14d
  char v30; // al
  int v31; // edx
  GdiHandleManager *v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  unsigned int v37; // ecx
  __int64 v38; // r8
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned int v43; // r9d
  unsigned int v44; // ecx
  __int64 v45; // rdx
  HDC v46; // rdx
  struct OBJECT *v47; // rdi
  HDC v48; // r14
  int *v49; // rbx
  BOOL v50; // esi
  char v51; // al
  int v52; // edx
  GdiHandleManager *v53; // rbx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  unsigned int v57; // r9d
  unsigned int v58; // ecx
  __int64 v59; // r8
  _DWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // r10
  unsigned int v63; // edx
  unsigned int v64; // r8d
  unsigned int v65; // ecx
  __int64 v66; // r10
  __m128i *ScreenRectForDpi; // rax
  unsigned __int64 v68; // xmm0_8
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v72; // rdx
  unsigned int v73; // ecx
  unsigned int v74; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v75; // rdx
  unsigned int v76; // ecx
  __int128 v77; // [rsp+30h] [rbp-99h] BYREF
  struct OBJECT *v78[2]; // [rsp+40h] [rbp-89h] BYREF
  DC *v79[2]; // [rsp+50h] [rbp-79h] BYREF
  int *v80[2]; // [rsp+60h] [rbp-69h] BYREF
  int v81; // [rsp+70h] [rbp-59h]
  __int128 v82; // [rsp+78h] [rbp-51h] BYREF
  int *v83; // [rsp+88h] [rbp-41h] BYREF
  int v84; // [rsp+90h] [rbp-39h]
  int *v85; // [rsp+A0h] [rbp-29h] BYREF
  int v86; // [rsp+A8h] [rbp-21h]
  _BYTE v87[16]; // [rsp+B8h] [rbp-11h] BYREF
  _BYTE v88[16]; // [rsp+C8h] [rbp-1h] BYREF
  _BYTE v89[72]; // [rsp+D8h] [rbp+Fh] BYREF
  struct _POINTL v91; // [rsp+138h] [rbp+6Fh] BYREF
  int v92; // [rsp+140h] [rbp+77h]

  v92 = a3;
  v5 = *((_QWORD *)a2 + 2);
  if ( (*(_WORD *)(v5 + 82) & 0x3FFF) == 0x29D )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v87, 0LL);
    v8 = 0;
    v7 = 0;
    *(_QWORD *)&v77 = 0LL;
    v68 = _mm_srli_si128(*ScreenRectForDpi, 8).m128i_u64[0];
    v69 = ScreenRectForDpi->m128i_i64[0];
    v9 = v68 - v69;
    v10 = HIDWORD(v68) - HIDWORD(v69);
    DWORD2(v77) = v68 - v69;
    HIDWORD(v77) = HIDWORD(v68) - HIDWORD(v69);
  }
  else
  {
    if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
      v6 = *(_OWORD *)(v5 + 128);
    else
      v6 = *(_OWORD *)(v5 + 144);
    v77 = v6;
    v7 = v6;
    v8 = DWORD1(v6);
    v9 = DWORD2(v6);
    v10 = HIDWORD(v6);
  }
  v11 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
  if ( v11 )
  {
    if ( (*((_DWORD *)a2 + 16) & 0x4000) == 0 )
    {
      v70 = *(_QWORD *)GetMonitorRectForDpi(v88, *((_QWORD *)a2 + 11), 0LL);
      v7 -= v70;
      LODWORD(v77) = v7;
      v10 -= HIDWORD(v70);
      v8 -= HIDWORD(v70);
      v9 -= v70;
      *((_QWORD *)&v77 + 1) = __PAIR64__(v10, v9);
      DWORD1(v77) = v8;
      if ( a1 )
        SetMonitorRegion(v11, (HRGN)a1, (HRGN)a1);
    }
  }
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_70;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() < 0
    || (LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(*((_QWORD *)a2 + 2)),
        (v13 = LayeredOrRedirectedParent) == 0) )
  {
    v19 = a1;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(LayeredOrRedirectedParent + 64) & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported() >= 0
    && GetRedirectionBitmap(v13) )
  {
    v14 = *((_QWORD *)a2 + 11);
    v15 = *(_DWORD *)(v13 + 128);
    v16 = *(_DWORD *)(v13 + 132);
    if ( v14 && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v77) = v15 + v7;
      DWORD2(v77) = v15 + v9;
      HIDWORD(v77) = v16 + v10;
      DWORD1(v77) = v16 + v8;
      v82 = *(_OWORD *)GetMonitorRectForDpi(v89, v14, 0LL);
      IntersectRect(&v77, &v77, &v82);
      v10 = HIDWORD(v77);
      v9 = DWORD2(v77);
      v8 = DWORD1(v77);
      v7 = v77;
    }
    v17 = -v16;
    v18 = -v15;
    v7 += v18;
    HIDWORD(v77) = v17 + v10;
    v19 = a1;
    v8 += v17;
    *(_QWORD *)&v77 = __PAIR64__(v8, v7);
    DWORD2(v77) = v18 + v9;
    if ( a1 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v80, a1, 0);
      v91.y = v17;
      v20 = v80[0];
      v91.x = v18;
      if ( v80[0] )
        RGNOBJ::bOffset(v80, &v91);
      if ( !v81 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v80);
      if ( v20 )
      {
        _InterlockedDecrement(v20 + 3);
        v8 = DWORD1(v77);
        v7 = v77;
      }
    }
  }
  else
  {
LABEL_70:
    v19 = a1;
    if ( a1 )
      GreSetRectRgn((HRGN)a1, 0);
  }
LABEL_20:
  v21 = (HDC)*((_QWORD *)a2 + 1);
  v79[0] = 0LL;
  v79[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v79, v21, 0);
  v22 = v79[0];
  if ( v79[0] )
  {
    v23 = v79[0];
    *((_DWORD *)v79[0] + 2 * (*((_DWORD *)v79[0] + 10) & 1) + 358) = v7;
    *((_DWORD *)v22 + 2 * (*((_DWORD *)v22 + 10) & 1) + 359) = v8;
    DC::vCalcFillOrigin(v23);
    *(_OWORD *)(v24 + 1448) = v77;
    v25 = *(_DWORD *)(v24 + 536);
    if ( (v25 & 1) != 0 && (v25 & 2) == 0 )
    {
      *(_DWORD *)(v24 + 36) |= 0x10u;
      *(_DWORD *)(v24 + 536) = v25 | 4;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v79);
    v26 = v79[0];
    v27 = *(HDC *)v79[0];
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v83, v79[0], 0, 0, 1);
    if ( v84 )
    {
      v28 = v83;
      if ( *((_BYTE *)v83 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v71 = (unsigned __int16)*(_DWORD *)v26 | (*(_DWORD *)v26 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v71 | (v71 >> 8) & 0xFF0000);
      }
      v29 = (*((_BYTE *)v28 + 15) & 8) != 0;
      v30 = *((_BYTE *)v28 + 14);
      if ( v30 == 5 )
      {
        v72 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v26 + 77);
        v73 = 0;
      }
      else
      {
        if ( v30 != 16 )
          goto LABEL_26;
        v72 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v26 + 19);
        v73 = 2;
      }
      TrackObjectReferenceDecrement(v73, v72);
LABEL_26:
      --*((_DWORD *)v26 + 2);
      v31 = *v28;
      v32 = gpHandleManager;
      v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v31 & 0xFFFFFF);
      v34 = *((_QWORD *)v32 + 2);
      v35 = v33;
      v36 = *(_DWORD *)(v34 + 2056);
      if ( v33 >= v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
        goto LABEL_81;
      if ( v33 >= v36 )
        v37 = ((v33 - v36) >> 16) + 1;
      else
        v37 = 0;
      v38 = *(_QWORD *)(v34 + 8LL * v37 + 8);
      if ( v37 )
        v35 = ((1 - v37) << 16) - v36 + v33;
      if ( (unsigned int)v35 >= *(_DWORD *)(v38 + 20) )
LABEL_81:
        v39 = 0LL;
      else
        v39 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
      v40 = GdiHandleManager::DecodeIndex(
              (GdiHandleEntryDirectory **)v32,
              (unsigned __int16)*v39 | (*v39 >> 8) & 0xFF0000u);
      v41 = *((_QWORD *)v32 + 2);
      v42 = v40;
      v43 = *(_DWORD *)(v41 + 2056);
      if ( v40 < v43 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
      {
        if ( v40 >= v43 )
          v44 = ((v40 - v43) >> 16) + 1;
        else
          v44 = 0;
        v45 = *(_QWORD *)(v41 + 8LL * v44 + 8);
        if ( v44 )
          v42 = ((1 - v44) << 16) - v43 + v40;
        *(_DWORD *)(*(_QWORD *)v45 + 24 * v42 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
      if ( v29 )
        bDeleteDCInternalEx(v27, 0LL);
    }
  }
  if ( !v92 )
    return;
  v46 = (HDC)*((_QWORD *)a2 + 1);
  v78[0] = 0LL;
  v78[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v78, v46, 0);
  GreSelectVisRgnInternal(v78, v19, 1LL);
  if ( !v78[0] )
    return;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v78);
  v47 = v78[0];
  v48 = *(HDC *)v78[0];
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v85, v78[0], 0, 0, 1);
  if ( !v86 )
    return;
  v49 = v85;
  if ( *((_BYTE *)v85 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v74 = (unsigned __int16)*(_DWORD *)v47 | (*(_DWORD *)v47 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v74 | (v74 >> 8) & 0xFF0000);
  }
  v50 = (*((_BYTE *)v49 + 15) & 8) != 0;
  v51 = *((_BYTE *)v49 + 14);
  if ( v51 == 5 )
  {
    v75 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v47 + 77);
    v76 = 0;
  }
  else
  {
    if ( v51 != 16 )
      goto LABEL_47;
    v75 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v47 + 19);
    v76 = 2;
  }
  TrackObjectReferenceDecrement(v76, v75);
LABEL_47:
  --*((_DWORD *)v47 + 2);
  v52 = *v49;
  v53 = gpHandleManager;
  v54 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v52 & 0xFFFFFF);
  v55 = *((_QWORD *)v53 + 2);
  v56 = v54;
  v57 = *(_DWORD *)(v55 + 2056);
  if ( v54 >= v57 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16) )
    goto LABEL_91;
  if ( v54 >= v57 )
    v58 = ((v54 - v57) >> 16) + 1;
  else
    v58 = 0;
  v59 = *(_QWORD *)(v55 + 8LL * v58 + 8);
  if ( v58 )
    v56 = ((1 - v58) << 16) - v57 + v54;
  if ( (unsigned int)v56 >= *(_DWORD *)(v59 + 20) )
LABEL_91:
    v60 = 0LL;
  else
    v60 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v59 + 24) + 8 * (v56 >> 8)) + 16LL * (unsigned __int8)v56 + 8);
  v61 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v53, (unsigned __int16)*v60 | (*v60 >> 8) & 0xFF0000u);
  v62 = *((_QWORD *)v53 + 2);
  v63 = v61;
  v64 = *(_DWORD *)(v62 + 2056);
  if ( v61 < v64 + ((*(unsigned __int16 *)(v62 + 2) + 0xFFFF) << 16) )
  {
    if ( v61 >= v64 )
      v65 = ((v61 - v64) >> 16) + 1;
    else
      v65 = 0;
    v66 = *(_QWORD *)(v62 + 8LL * v65 + 8);
    if ( v65 )
      v63 = ((1 - v65) << 16) - v64 + v61;
    *(_DWORD *)(*(_QWORD *)v66 + 24LL * v63 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v66 + 24) + 8 * ((unsigned __int64)v63 >> 8)) + 16LL * (unsigned __int8)v63,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v50 )
    bDeleteDCInternalEx(v48, 0LL);
}
