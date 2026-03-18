/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00317C0 (UserSetDCVisRgn.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0020A90 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0021EC0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0024EAC (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     IntersectRect @ 0x1C0057618 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C00577BC (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C0057E78 (GetMonitorRectForDpi.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A8988 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C29C4 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v4; // r9
  int v5; // ebx
  __int128 v6; // xmm0
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  int v10; // esi
  struct tagMONITOR *v11; // rdi
  int v12; // eax
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edi
  int v18; // ebx
  LONG v19; // ebx
  LONG v20; // edi
  int *v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rdi
  _DWORD *v24; // rsi
  unsigned int v25; // ebx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // ebx
  GdiHandleManager *v31; // rsi
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // r9
  _DWORD *v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r10
  int v42; // eax
  __int64 v43; // rdi
  HDC v44; // r15
  __int64 v45; // rbx
  char v46; // cl
  BOOL v47; // r14d
  unsigned int v48; // ebx
  GdiHandleManager *v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // r9
  _DWORD *v54; // rdx
  unsigned int v55; // ebx
  __int64 v56; // rdx
  unsigned int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // r10
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rdi
  HDC v63; // r15
  __int64 v64; // rbx
  char v65; // cl
  BOOL v66; // r14d
  unsigned int v67; // ebx
  GdiHandleManager *v68; // rdi
  __int64 v69; // rdx
  unsigned int v70; // r8d
  __int64 v71; // rcx
  __int64 v72; // r9
  _DWORD *v73; // rdx
  unsigned int v74; // ebx
  __int64 v75; // rdx
  unsigned int v76; // r8d
  __int64 v77; // rcx
  __int64 v78; // r10
  __m128i *ScreenRectForDpi; // rax
  unsigned __int64 v80; // xmm0_8
  __int64 v81; // rax
  __int64 *MonitorRectForDpi; // rax
  __int64 v83; // rdx
  int v84; // eax
  unsigned int v85; // r8d
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v86; // rdx
  unsigned int v87; // ecx
  unsigned int v88; // r8d
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v89; // rdx
  unsigned int v90; // ecx
  __int128 v91; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v92[2]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v93[2]; // [rsp+50h] [rbp-89h] BYREF
  int *v94[2]; // [rsp+60h] [rbp-79h] BYREF
  int v95; // [rsp+70h] [rbp-69h]
  unsigned __int16 *v96; // [rsp+78h] [rbp-61h] BYREF
  int v97; // [rsp+80h] [rbp-59h]
  __int64 v98; // [rsp+90h] [rbp-49h] BYREF
  int v99; // [rsp+98h] [rbp-41h]
  __int64 v100; // [rsp+A8h] [rbp-31h] BYREF
  int v101; // [rsp+B0h] [rbp-29h]
  __int128 v102; // [rsp+C0h] [rbp-19h] BYREF
  _BYTE v103[16]; // [rsp+D0h] [rbp-9h] BYREF
  _BYTE v104[16]; // [rsp+E0h] [rbp+7h] BYREF
  _BYTE v105[64]; // [rsp+F0h] [rbp+17h] BYREF
  struct _POINTL v107; // [rsp+148h] [rbp+6Fh] BYREF
  int v108; // [rsp+150h] [rbp+77h]

  v108 = a3;
  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
  if ( (*(_WORD *)(v4 + 42) & 0x3FFF) == 0x29D )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v103, 0LL);
    v8 = 0;
    *(_QWORD *)&v91 = 0LL;
    v7 = 0;
    v5 = *((_DWORD *)a2 + 16);
    v80 = _mm_srli_si128(*ScreenRectForDpi, 8).m128i_u64[0];
    v81 = ScreenRectForDpi->m128i_i64[0];
    v9 = v80 - v81;
    v10 = HIDWORD(v80) - HIDWORD(v81);
    DWORD2(v91) = v80 - v81;
    HIDWORD(v91) = HIDWORD(v80) - HIDWORD(v81);
  }
  else
  {
    v5 = *((_DWORD *)a2 + 16);
    if ( (v5 & 1) != 0 )
      v6 = *(_OWORD *)(v4 + 88);
    else
      v6 = *(_OWORD *)(v4 + 104);
    v91 = v6;
    v7 = v6;
    v8 = DWORD1(v6);
    v9 = DWORD2(v6);
    v10 = HIDWORD(v6);
  }
  v11 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
  v12 = v5;
  if ( v11 )
  {
    if ( (v5 & 0x4000) == 0 )
    {
      MonitorRectForDpi = (__int64 *)GetMonitorRectForDpi(v104, *((_QWORD *)a2 + 11), 0LL);
      v83 = *MonitorRectForDpi;
      v84 = -(int)*MonitorRectForDpi;
      v7 += v84;
      LODWORD(v91) = v7;
      v9 += v84;
      v10 -= HIDWORD(v83);
      v8 -= HIDWORD(v83);
      HIDWORD(v91) = v10;
      v12 = v5;
      *(_QWORD *)((char *)&v91 + 4) = __PAIR64__(v9, v8);
      if ( a1 )
      {
        SetMonitorRegion(v11, a1, a1);
        v12 = *((_DWORD *)a2 + 16);
      }
    }
  }
  if ( (v12 & 0x4000000) != 0 )
    goto LABEL_110;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() < 0 )
    goto LABEL_20;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(*((_QWORD *)a2 + 2));
  v14 = LayeredOrRedirectedParent;
  if ( !LayeredOrRedirectedParent )
    goto LABEL_20;
  if ( (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported() >= 0
    && GetRedirectionBitmap(v14) )
  {
    v15 = *(_QWORD *)(v14 + 40);
    v16 = *((_QWORD *)a2 + 11);
    v17 = *(_DWORD *)(v15 + 88);
    v18 = *(_DWORD *)(v15 + 92);
    if ( v16 && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v91) = v17 + v7;
      DWORD2(v91) = v17 + v9;
      HIDWORD(v91) = v18 + v10;
      DWORD1(v91) = v18 + v8;
      v102 = *(_OWORD *)GetMonitorRectForDpi(v105, v16, 0LL);
      IntersectRect(&v91, &v91, &v102);
      v10 = HIDWORD(v91);
      v9 = DWORD2(v91);
      v8 = DWORD1(v91);
      v7 = v91;
    }
    v19 = -v18;
    v20 = -v17;
    v7 += v20;
    HIDWORD(v91) = v19 + v10;
    v8 += v19;
    *(_QWORD *)&v91 = __PAIR64__(v8, v7);
    DWORD2(v91) = v20 + v9;
    if ( a1 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v94, a1, 0);
      v107.y = v19;
      v21 = v94[0];
      v107.x = v20;
      if ( v94[0] )
      {
        RGNOBJ::bOffset(v94, &v107);
        v21 = v94[0];
      }
      if ( !v95 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v94);
      if ( v21 )
      {
        _InterlockedDecrement(v21 + 3);
        v8 = DWORD1(v91);
        v7 = v91;
      }
    }
  }
  else
  {
LABEL_110:
    if ( a1 )
      GreSetRectRgn(a1, 0, 0, 0, 0);
  }
LABEL_20:
  v22 = *((_QWORD *)a2 + 1);
  v93[1] = 0LL;
  v96 = 0LL;
  v97 = 0;
  v23 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v96, (unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v97 )
  {
    v24 = v96;
    if ( *((_BYTE *)v96 + 14) == 1 && v96[6] == WORD1(v22) )
    {
      v25 = *(_DWORD *)v96 & 0xFFFFFF;
      if ( v25 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v96,
                                      1)
               + 13) == HIWORD(v25) )
            v25 = (unsigned __int16)v25;
        }
        else
        {
          v25 = *v96;
        }
      }
      v26 = *((_QWORD *)gpHandleManager + 2);
      v27 = *(_DWORD *)(v26 + 2056);
      if ( v25 >= v27 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
        goto LABEL_121;
      v28 = ((v25 - v27) >> 16) + 1;
      if ( v25 < v27 )
        v28 = 0LL;
      v29 = *(_QWORD *)(v26 + 8 * v28 + 8);
      if ( (_DWORD)v28 )
        v25 += ((1 - (_DWORD)v28) << 16) - v27;
      if ( v25 >= *(_DWORD *)(v29 + 20) )
LABEL_121:
        v23 = 0LL;
      else
        v23 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                        + 16LL * (unsigned __int8)v25
                        + 8);
      ++*(_DWORD *)(v23 + 8);
    }
    v30 = *v24 & 0xFFFFFF;
    if ( v30 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v24,
                                    1)
             + 13) == HIWORD(v30) )
          v30 = (unsigned __int16)v30;
      }
      else
      {
        v30 = *(unsigned __int16 *)v24;
      }
    }
    v31 = gpHandleManager;
    v32 = *((_QWORD *)gpHandleManager + 2);
    v33 = *(_DWORD *)(v32 + 2056);
    if ( v30 >= v33 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16) )
      goto LABEL_126;
    v34 = ((v30 - v33) >> 16) + 1;
    if ( v30 < v33 )
      v34 = 0LL;
    v35 = *(_QWORD *)(v32 + 8 * v34 + 8);
    if ( (_DWORD)v34 )
      v30 += ((1 - (_DWORD)v34) << 16) - v33;
    if ( v30 >= *(_DWORD *)(v35 + 20) )
LABEL_126:
      v36 = 0LL;
    else
      v36 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                       + 16LL * (unsigned __int8)v30
                       + 8);
    v37 = (unsigned __int16)*v36 | (*v36 >> 8) & 0xFF0000;
    if ( v37 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v36,
                                    1)
             + 13) == HIWORD(v37) )
          v37 = (unsigned __int16)v37;
      }
      else
      {
        v37 = (unsigned __int16)*v36;
      }
    }
    v38 = *((_QWORD *)v31 + 2);
    v39 = *(_DWORD *)(v38 + 2056);
    if ( v37 < v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
    {
      v40 = ((v37 - v39) >> 16) + 1;
      if ( v37 < v39 )
        v40 = 0LL;
      v41 = *(_QWORD *)(v38 + 8 * v40 + 8);
      if ( (_DWORD)v40 )
        v37 += ((1 - (_DWORD)v40) << 16) - v39;
      *(_DWORD *)(*(_QWORD *)v41 + 24LL * v37 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v37 >> 8)) + 16LL * (unsigned __int8)v37,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v93[0] = v23;
  if ( v23 )
  {
    *(_DWORD *)(v23 + 8LL * (*(_DWORD *)(v23 + 40) & 1) + 1424) = v7;
    *(_DWORD *)(v23 + 8LL * (*(_DWORD *)(v23 + 40) & 1) + 1428) = v8;
    DC::vCalcFillOrigin((DC *)v23);
    *(_OWORD *)(v23 + 1440) = v91;
    v42 = *(_DWORD *)(v23 + 528);
    if ( (v42 & 1) != 0 && (v42 & 2) == 0 )
    {
      *(_DWORD *)(v23 + 36) |= 0x10u;
      *(_DWORD *)(v23 + 528) = v42 | 4;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v93);
    v43 = v93[0];
    v98 = 0LL;
    v99 = 0;
    v44 = *(HDC *)v93[0];
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)&v98,
      (unsigned __int16)*(_QWORD *)v93[0] | ((unsigned int)*(_QWORD *)v93[0] >> 8) & 0xFF0000,
      0,
      0,
      1);
    if ( v99 )
    {
      v45 = v98;
      v46 = *(_BYTE *)(v98 + 14);
      if ( v46 == 5 )
      {
        v46 = 5;
        if ( gbGdiHmgrAltStacks )
        {
          if ( gpentHmgrAltStacks )
          {
            v85 = (unsigned __int16)*(_DWORD *)v43 | (*(_DWORD *)v43 >> 8) & 0xFF0000;
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v85 | (v85 >> 8) & 0xFF0000);
            v46 = *(_BYTE *)(v45 + 14);
          }
        }
      }
      v47 = (*(_BYTE *)(v45 + 15) & 8) != 0;
      if ( v46 == 5 )
      {
        v86 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v43 + 680);
        v87 = 0;
      }
      else
      {
        if ( v46 != 16 )
        {
LABEL_60:
          --*(_DWORD *)(v43 + 8);
          v48 = *(_DWORD *)v45 & 0xFFFFFF;
          if ( v48 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v48,
                                          1)
                   + 13) == HIWORD(v48) )
                v48 = (unsigned __int16)v48;
            }
            else
            {
              v48 = (unsigned __int16)v48;
            }
          }
          v49 = gpHandleManager;
          v50 = *((_QWORD *)gpHandleManager + 2);
          v51 = *(_DWORD *)(v50 + 2056);
          if ( v48 >= v51 + ((*(unsigned __int16 *)(v50 + 2) + 0xFFFF) << 16) )
            goto LABEL_142;
          v52 = ((v48 - v51) >> 16) + 1;
          if ( v48 < v51 )
            v52 = 0LL;
          v53 = *(_QWORD *)(v50 + 8 * v52 + 8);
          if ( (_DWORD)v52 )
            v48 += ((1 - (_DWORD)v52) << 16) - v51;
          if ( v48 >= *(_DWORD *)(v53 + 20) )
LABEL_142:
            v54 = 0LL;
          else
            v54 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v53 + 24) + 8 * ((unsigned __int64)v48 >> 8))
                             + 16LL * (unsigned __int8)v48
                             + 8);
          v55 = (unsigned __int16)*v54 | (*v54 >> 8) & 0xFF0000;
          if ( v55 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)*v54,
                                          1)
                   + 13) == HIWORD(v55) )
                v55 = (unsigned __int16)v55;
            }
            else
            {
              v55 = (unsigned __int16)*v54;
            }
          }
          v56 = *((_QWORD *)v49 + 2);
          v57 = *(_DWORD *)(v56 + 2056);
          if ( v55 < v57 + ((*(unsigned __int16 *)(v56 + 2) + 0xFFFF) << 16) )
          {
            v58 = ((v55 - v57) >> 16) + 1;
            if ( v55 < v57 )
              v58 = 0LL;
            v59 = *(_QWORD *)(v56 + 8 * v58 + 8);
            if ( (_DWORD)v58 )
              v55 += ((1 - (_DWORD)v58) << 16) - v57;
            *(_DWORD *)(*(_QWORD *)v59 + 24LL * v55 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v59 + 24) + 8 * ((unsigned __int64)v55 >> 8)) + 16LL * (unsigned __int8)v55,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v47 )
            bDeleteDCInternalEx(v44, 0LL);
          goto LABEL_81;
        }
        v86 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v43 + 136);
        v87 = 2;
      }
      TrackObjectReferenceDecrement(v87, v86);
      goto LABEL_60;
    }
  }
LABEL_81:
  if ( !v108 )
    return;
  v60 = *((_QWORD *)a2 + 1);
  v92[1] = 0LL;
  v92[0] = HmgShareLockEx(v60, 1, 0);
  v61 = v92[0];
  GreSelectVisRgnInternal(v92, a1, 1LL);
  if ( !v61 )
    return;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v92);
  v62 = v92[0];
  v100 = 0LL;
  v101 = 0;
  v63 = *(HDC *)v92[0];
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v100,
    (unsigned __int16)*(_QWORD *)v92[0] | ((unsigned int)*(_QWORD *)v92[0] >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v101 )
    return;
  v64 = v100;
  v65 = *(_BYTE *)(v100 + 14);
  if ( v65 == 5 )
  {
    v65 = 5;
    if ( gbGdiHmgrAltStacks )
    {
      if ( gpentHmgrAltStacks )
      {
        v88 = (unsigned __int16)*(_DWORD *)v62 | (*(_DWORD *)v62 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v88 | (v88 >> 8) & 0xFF0000);
        v65 = *(_BYTE *)(v64 + 14);
      }
    }
  }
  v66 = (*(_BYTE *)(v64 + 15) & 8) != 0;
  if ( v65 == 5 )
  {
    v89 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v62 + 680);
    v90 = 0;
LABEL_152:
    TrackObjectReferenceDecrement(v90, v89);
    goto LABEL_87;
  }
  if ( v65 == 16 )
  {
    v89 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v62 + 136);
    v90 = 2;
    goto LABEL_152;
  }
LABEL_87:
  --*(_DWORD *)(v62 + 8);
  v67 = *(_DWORD *)v64 & 0xFFFFFF;
  if ( v67 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v67,
                                  1)
           + 13) == HIWORD(v67) )
        v67 = (unsigned __int16)v67;
    }
    else
    {
      v67 = (unsigned __int16)v67;
    }
  }
  v68 = gpHandleManager;
  v69 = *((_QWORD *)gpHandleManager + 2);
  v70 = *(_DWORD *)(v69 + 2056);
  if ( v67 >= v70 + ((*(unsigned __int16 *)(v69 + 2) + 0xFFFF) << 16) )
    goto LABEL_156;
  v71 = ((v67 - v70) >> 16) + 1;
  if ( v67 < v70 )
    v71 = 0LL;
  v72 = *(_QWORD *)(v69 + 8 * v71 + 8);
  if ( (_DWORD)v71 )
    v67 += ((1 - (_DWORD)v71) << 16) - v70;
  if ( v67 >= *(_DWORD *)(v72 + 20) )
LABEL_156:
    v73 = 0LL;
  else
    v73 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v72 + 24) + 8 * ((unsigned __int64)v67 >> 8))
                     + 16LL * (unsigned __int8)v67
                     + 8);
  v74 = (unsigned __int16)*v73 | (*v73 >> 8) & 0xFF0000;
  if ( v74 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v73,
                                  1)
           + 13) == HIWORD(v74) )
        v74 = (unsigned __int16)v74;
    }
    else
    {
      v74 = (unsigned __int16)*v73;
    }
  }
  v75 = *((_QWORD *)v68 + 2);
  v76 = *(_DWORD *)(v75 + 2056);
  if ( v74 < v76 + ((*(unsigned __int16 *)(v75 + 2) + 0xFFFF) << 16) )
  {
    v77 = ((v74 - v76) >> 16) + 1;
    if ( v74 < v76 )
      v77 = 0LL;
    v78 = *(_QWORD *)(v75 + 8 * v77 + 8);
    if ( (_DWORD)v77 )
      v74 += ((1 - (_DWORD)v77) << 16) - v76;
    *(_DWORD *)(*(_QWORD *)v78 + 24LL * v74 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v78 + 24) + 8 * ((unsigned __int64)v74 >> 8)) + 16LL * (unsigned __int8)v74,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v66 )
    bDeleteDCInternalEx(v63, 0LL);
}
