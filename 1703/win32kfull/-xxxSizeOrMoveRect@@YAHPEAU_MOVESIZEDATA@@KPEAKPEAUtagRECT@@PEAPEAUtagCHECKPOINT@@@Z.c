/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F2DDC (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EFD04 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0184 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F0224 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F099C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01F0B24 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01F0B98 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01F0EF0 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0F24 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0F80 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F0FB0 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F1004 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01F17B4 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F508C (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct _MOVESIZEDATA *a1,
        int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  int v5; // ebx
  unsigned int v8; // r14d
  int v9; // r13d
  int v10; // eax
  int v11; // ecx
  int v12; // r12d
  int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // r15d
  int v16; // ecx
  int v17; // eax
  __int64 result; // rax
  int v19; // r8d
  int v20; // r8d
  int v21; // ecx
  struct tagMONITOR *v22; // r13
  int v23; // ecx
  struct tagMONITOR *v24; // rdx
  _DWORD *v25; // rbx
  _QWORD *v26; // r12
  __int64 v27; // rdx
  _DWORD *v28; // r9
  __int64 v29; // rdx
  int v30; // r8d
  _DWORD *v31; // r9
  _QWORD *v32; // rdx
  bool v33; // zf
  __int128 v34; // xmm6
  unsigned int v35; // r8d
  unsigned int v36; // eax
  struct tagRECT *v37; // rax
  struct tagRECT v38; // xmm0
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r15d
  int v43; // eax
  struct tagCHECKPOINT *v44; // r14
  int v45; // r11d
  int v46; // eax
  __m128i v47; // xmm6
  int v48; // r8d
  int v49; // r9d
  int v50; // eax
  int v51; // r10d
  int v52; // r14d
  int v53; // edx
  int v54; // ebx
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // r10d
  int v59; // ebx
  int v60; // edx
  int v61; // r11d
  int v62; // r11d
  int v63; // r10d
  int v64; // r13d
  int v65; // r10d
  int v66; // r13d
  unsigned int v67; // r15d
  struct tagRECT *v68; // rax
  int v69; // r13d
  int v70; // r10d
  unsigned int v71; // r15d
  struct tagRECT *v72; // rax
  const struct _MOVESIZEDATA *v73; // rcx
  int v74; // ecx
  int v75; // eax
  struct tagMONITOR *v76; // r14
  unsigned int v77; // eax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __m128i v81; // [rsp+38h] [rbp-51h]
  unsigned __int64 v84; // [rsp+48h] [rbp-41h]
  struct tagCHECKPOINT *v85; // [rsp+50h] [rbp-39h]
  _DWORD *v86; // [rsp+58h] [rbp-31h]
  __int64 v87; // [rsp+60h] [rbp-29h]
  struct tagMONITOR *v88; // [rsp+68h] [rbp-21h]
  struct tagMONITOR *v89; // [rsp+70h] [rbp-19h] BYREF
  __int64 v90; // [rsp+78h] [rbp-11h] BYREF
  struct tagMONITOR *v91; // [rsp+80h] [rbp-9h]
  struct tagMONITOR *v92; // [rsp+E8h] [rbp+5Fh] BYREF
  int v93; // [rsp+F0h] [rbp+67h]
  struct tagRECT *v94; // [rsp+100h] [rbp+77h]

  v94 = a4;
  v93 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 38);
  v86 = 0LL;
  v88 = 0LL;
  v8 = 1;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 39);
  v87 = 0LL;
  v84 = __PAIR64__(v9, v5);
  v85 = GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v85 || v5 == *((_DWORD *)a1 + 71) && v9 == *((_DWORD *)a1 + 72) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v89, &v92);
  v11 = *((_DWORD *)a1 + 45);
  v12 = v10;
  *(_QWORD *)((char *)a1 + 284) = __PAIR64__(v9, v5);
  v13 = v93;
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 45) = v11 & 0xFDFFFFFF;
    v14 = MoveRect((__int64)a1, v13, 0);
    *((_DWORD *)a1 + 45) |= 0x2000000u;
    v8 = v14;
  }
  v15 = (unsigned int)v92;
  if ( v12 != 1 || (unsigned int)((_DWORD)v92 - 1) > 1 )
  {
    *((_DWORD *)a1 + 66) &= ~2u;
    if ( v12 != 1 )
    {
      switch ( v12 )
      {
        case 3:
          v22 = v89;
          if ( !*((_DWORD *)a1 + 56) && !v15 )
          {
            v23 = *((_DWORD *)a1 + 45);
            if ( (v23 & 0x300) == 0x300 && (((v23 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
            {
              v24 = v89;
              v25 = 0LL;
              v26 = (_QWORD *)(gpDispInfo + 160LL);
              v92 = (struct tagMONITOR *)*((_QWORD *)a1 + 27);
              do
              {
                if ( IsDockTargetActive((__int64)a1, (__int64)v24, 0) && *v28 <= (int)v84 && (int)v84 < v28[2] )
                {
                  v86 = v28;
                  v88 = (struct tagMONITOR *)v27;
                }
                if ( IsDockTargetActive((__int64)a1, v27, 3) && *v31 <= (int)v84 && (int)v84 < v31[2] )
                {
                  v25 = v31;
                  v87 = v29;
                }
                v32 = *(_QWORD **)(v29 + 456);
                if ( v32 == v26 )
                  v32 = (_QWORD *)*v26;
                v24 = (struct tagMONITOR *)(v32 - 57);
              }
              while ( v24 != v92 );
              v33 = v25 == 0LL;
              v13 = v93;
              if ( !v33 )
              {
                if ( v86 )
                {
                  v34 = *(_OWORD *)((char *)a1 + 24);
                  MoveRect((__int64)a1, v93, v30);
                  if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v88, 0, v87, v84) )
                  {
                    *((_DWORD *)a1 + 56) = 0;
                    SetCurrentHitTargetMonitor(a1, v88, 1);
                    result = v35;
                    *((_DWORD *)a1 + 57) = v35 + 1;
                    return result;
                  }
                  if ( (*((_DWORD *)a1 + 45) & 0x2000000) != 0 )
                    *(_OWORD *)((char *)a1 + 56) = v34;
                  else
                    *(_OWORD *)((char *)a1 + 24) = v34;
                }
              }
            }
          }
          if ( (*((_DWORD *)a1 + 45) & 0x6000000) != 0x4000000 )
          {
LABEL_52:
            v8 = 1;
            v90 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v90;
            v91 = v22;
            if ( v22 )
              ++*((_DWORD *)v22 + 2);
            xxxSizeRectFromHitTarget(a1, v22, v15);
            if ( v15 )
            {
              if ( v15 == 1 )
              {
                v36 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x100;
                goto LABEL_58;
              }
              if ( v15 == 2 )
              {
                v36 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x200;
LABEL_58:
                *((_DWORD *)a1 + 45) = v36;
                if ( (*(_BYTE *)(*(_QWORD *)a1 + 71LL) & 1) != 0 )
                {
                  v37 = v94;
                  v38 = *(struct tagRECT *)((char *)a1 + 24);
                  *a3 |= 1u;
                  *v37 = v38;
                  *a5 = v85;
                }
                SetDragOutThresholdAlways(a1);
                goto LABEL_66;
              }
            }
            else
            {
              v39 = *((_DWORD *)a1 + 45);
              *((_DWORD *)a1 + 66) &= ~2u;
              v39 &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 45) = v39;
              if ( (v39 & 0x4000000) == 0 )
                *a3 |= 2u;
              SetDragInToDragOutThreshold(a1);
            }
            if ( v15 == 3 )
            {
LABEL_67:
              *((_DWORD *)a1 + 56) = v15;
              SetCurrentHitTargetMonitor(a1, v22, 1);
              *((_DWORD *)a1 + 57) = 2;
              ThreadUnlock1(v41, v40);
              return v8;
            }
LABEL_66:
            MakeArrangedStateObservable(a1);
            goto LABEL_67;
          }
          if ( (unsigned int)MoveRect((__int64)a1, v13, 0) )
          {
            *a3 |= 8u;
            *((_DWORD *)a1 + 45) |= 0x2000000u;
            goto LABEL_52;
          }
          return 0LL;
        case 4:
          v42 = *((_DWORD *)a1 + 45);
          if ( (v42 & 0x80u) == 0 )
          {
            MoveRect((__int64)a1, v13, 0);
            v43 = *((_DWORD *)a1 + 56);
            if ( v43 )
            {
              if ( (unsigned int)(v43 - 1) <= 1 )
              {
                ++*((_DWORD *)a1 + 76);
                SetDragOutToDragInThreshold(a1);
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 75);
              SetDragInThresholdAlways(a1);
            }
LABEL_108:
            *((_DWORD *)a1 + 45) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 66) &= ~2u;
            *((_DWORD *)a1 + 56) = 4;
            DisableTemporayMetricsOverrides(a1);
            MakeArrangedStateObservable(v73);
            v74 = *((_DWORD *)a1 + 45);
            *((_DWORD *)a1 + 57) = 0;
            if ( (v74 & 0x6000000) == 0x6000000 )
            {
              *a3 |= 4u;
              *((_DWORD *)a1 + 45) = v74 & 0xFDFFFFFF;
            }
            return 1LL;
          }
          v44 = v85;
          v45 = *((_DWORD *)a1 + 56);
          v46 = *((_DWORD *)a1 + 45) & 0x7000;
          v47 = *(__m128i *)v85;
          v48 = _mm_cvtsi128_si32(*(__m128i *)v85);
          v49 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v85, 8));
          v81 = *(__m128i *)v85;
          if ( v45 )
          {
            v33 = v46 == 4096;
            v50 = v49;
            if ( v33 )
            {
              v58 = *((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 26);
              v53 = *((_DWORD *)a1 + 69);
              v59 = (v49 - v48) / 2;
              if ( v53 < v59 )
                goto LABEL_95;
              if ( v53 <= v58 - v59 )
              {
                v53 = (v49 - v48) / 2;
                goto LABEL_95;
              }
              v60 = v53 - v58;
              goto LABEL_93;
            }
          }
          else
          {
            v33 = v46 == 4096;
            v50 = v49;
            if ( v33 )
            {
              v51 = v84;
              v52 = *((_DWORD *)a1 + 4) - *((_DWORD *)a1 + 2);
              v53 = v84 - *((_DWORD *)a1 + 2);
              v54 = (v49 - v48) / 2;
              if ( v53 >= v54 )
              {
                if ( v53 <= v52 - v54 )
                  v53 = (v49 - v48) / 2;
                else
                  v53 = v49 + v53 - v52 - v48;
              }
              v55 = *((_DWORD *)a1 + 68);
              v44 = v85;
              goto LABEL_96;
            }
          }
          v56 = v50 - v48;
          v57 = *((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 26);
          if ( v57 <= v56 )
          {
            v53 = *((_DWORD *)a1 + 69);
            if ( v53 < v57 / 2 )
              goto LABEL_95;
            if ( v53 <= v57 / 2 )
            {
              v53 = v57 / 2;
              goto LABEL_95;
            }
          }
          else
          {
            v53 = *((_DWORD *)a1 + 69);
            if ( v53 < v56 / 2 )
            {
LABEL_95:
              v55 = *((_DWORD *)a1 + 70);
              v51 = v84;
LABEL_96:
              if ( v45 )
              {
                v61 = v45 - 1;
                if ( v61 && (v62 = v61 - 1) != 0 )
                {
                  if ( v62 == 1 )
                  {
                    v63 = v51 - v53 - v48;
                    v64 = v9 - v81.m128i_i32[1] - v55;
                    v81.m128i_i32[0] = v63 + v48;
                    v81.m128i_i32[3] += v64;
                    v81.m128i_i32[1] += v64;
                    v81.m128i_i32[2] = v63 + v49;
                    v47 = v81;
                  }
                }
                else
                {
                  v65 = v51 - v53 - v48;
                  v66 = v9 - v81.m128i_i32[1] - v55;
                  v81.m128i_i32[3] += v66;
                  v81.m128i_i32[1] += v66;
                  v67 = v42 & 0xFFFFFF7F;
                  v81.m128i_i32[0] = v65 + v48;
                  v81.m128i_i32[2] = v65 + v49;
                  *((_DWORD *)a1 + 45) = v67;
                  v47 = v81;
                  if ( (v67 & 0x20) != 0 )
                  {
                    v68 = v94;
                    *a3 |= 1u;
                    *v68 = (struct tagRECT)v81;
                    *a5 = v44;
                  }
                  ++*((_DWORD *)a1 + 76);
                  SetDragOutToDragInThreshold(a1);
                }
              }
              else
              {
                *((_DWORD *)a1 + 67) = v53;
                v69 = v9 - v81.m128i_i32[1] - v55;
                *((_DWORD *)a1 + 68) = v55;
                v81.m128i_i32[3] += v69;
                v70 = v51 - v53 - v48;
                v81.m128i_i32[1] += v69;
                v71 = v42 & 0xFFFFFF7F;
                v81.m128i_i32[0] = v70 + v48;
                v81.m128i_i32[2] = v70 + v49;
                *((_DWORD *)a1 + 45) = v71;
                v47 = v81;
                if ( (v71 & 0x20) != 0 )
                {
                  v72 = v94;
                  *a3 |= 1u;
                  *v72 = (struct tagRECT)v81;
                  *a5 = v44;
                }
                ++*((_DWORD *)a1 + 75);
                SetDragInThresholdAlways(a1);
              }
              *(__m128i *)((char *)a1 + 24) = v47;
              goto LABEL_108;
            }
            if ( v53 <= v57 - v56 / 2 )
            {
              v53 = v56 / 2;
              goto LABEL_95;
            }
          }
          v60 = v53 - v57;
LABEL_93:
          v53 = v49 + v60 - v48;
          goto LABEL_95;
        case 5:
LABEL_13:
          v19 = *((_DWORD *)a1 + 57);
          return MoveRect((__int64)a1, v13, v19);
      }
      if ( v12 != 6 )
        return 0LL;
      if ( (*((_DWORD *)a1 + 45) & 0x40000) == 0 )
      {
        CkptRestore(*(_QWORD *)a1, (struct _MOVESIZEDATA *)((char *)a1 + 104));
        v75 = *((_DWORD *)a1 + 45) | 0x40000;
        *((_DWORD *)a1 + 45) = v75;
        if ( (v75 & 0x1000000) != 0 )
          *(_OWORD *)((char *)a1 + 136) = *(_OWORD *)v85;
      }
      if ( (*((_DWORD *)a1 + 45) & 0x6000000) == 0x4000000 )
      {
        if ( !(unsigned int)MoveRect((__int64)a1, v13, 0) )
          return 0LL;
        *a3 |= 8u;
        *((_DWORD *)a1 + 45) |= 0x2000000u;
      }
      v76 = v89;
      v90 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v90;
      v91 = v76;
      if ( v76 )
        ++*((_DWORD *)v76 + 2);
      xxxSizeRectFromHitTarget(a1, v76, v15);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v77 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x100;
        }
        else
        {
          if ( v15 != 2 )
          {
            if ( v15 == 3 )
            {
              *((_DWORD *)a1 + 45) &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 66) &= ~2u;
            }
            goto LABEL_132;
          }
          v77 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x200;
        }
        *((_DWORD *)a1 + 45) = v77;
      }
      else
      {
        v78 = *((_DWORD *)a1 + 45);
        *((_DWORD *)a1 + 66) &= ~2u;
        v78 &= 0xFFFFFCFF;
        *((_DWORD *)a1 + 45) = v78;
        if ( (v78 & 0x4000000) == 0 )
          *a3 |= 2u;
      }
      SetDragInToDragOutThreshold(a1);
LABEL_132:
      MakeArrangedStateObservable(a1);
      *((_DWORD *)a1 + 56) = v15;
      SetCurrentHitTargetMonitor(a1, v76, 1);
      ThreadUnlock1(v80, v79);
      return 1LL;
    }
  }
  v16 = *((_DWORD *)a1 + 56);
  if ( (unsigned int)(v16 - 1) <= 1 )
  {
    v17 = *((_DWORD *)a1 + 45);
    if ( (v17 & 0x300) == 0 )
    {
      if ( (v17 & 0x2000000) != 0 )
        return v8;
      goto LABEL_13;
    }
  }
  if ( !v16 )
  {
    v20 = *((_DWORD *)a1 + 45);
    if ( (v20 & 0x300) == 0x300 && (((v20 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
    {
      if ( (v20 & 0x2000000) != 0 )
        return v8;
      goto LABEL_19;
    }
    v21 = *((_DWORD *)a1 + 45);
    if ( (v21 & 0x300) != 0 && (((v21 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
    {
      *((_DWORD *)a1 + 45) = v21 | 0x300;
      MakeArrangedStateObservable(a1);
      if ( (*((_DWORD *)a1 + 45) & 0x2000000) != 0 )
        return v8;
LABEL_19:
      v19 = 3;
      return MoveRect((__int64)a1, v13, v19);
    }
  }
  return (*((_DWORD *)a1 + 45) & 0x2000000) != 0 ? v8 : 0;
}
