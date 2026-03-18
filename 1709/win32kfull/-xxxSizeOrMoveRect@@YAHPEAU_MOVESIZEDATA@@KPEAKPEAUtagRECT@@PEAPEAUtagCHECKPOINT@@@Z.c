/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DA7B8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D7B1C (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7E98 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01D7F38 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D86B4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01D88C0 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01D8938 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01D8C34 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D8C68 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D8CB4 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D8CE8 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D8D30 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01D9474 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DC3B0 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct _MOVESIZEDATA *a1,
        int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  unsigned int *v5; // rsi
  int v6; // r14d
  int v7; // r13d
  unsigned int v8; // r15d
  int v10; // ebx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  int v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // eax
  __int64 result; // rax
  int v21; // r8d
  unsigned int v22; // ecx
  struct tagMONITOR *v23; // rsi
  struct tagMONITOR *v24; // rbx
  struct tagMONITOR *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rbx
  bool v28; // zf
  struct tagMONITOR *v29; // rbx
  __int128 v30; // xmm6
  unsigned int v31; // r8d
  __int64 v32; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v34; // r14
  unsigned int v35; // r12d
  unsigned int v36; // eax
  struct tagRECT *v37; // rax
  struct tagRECT v38; // xmm0
  struct tagCHECKPOINT *v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r15d
  int v44; // eax
  struct tagCHECKPOINT *v45; // r14
  int v46; // r11d
  int v47; // eax
  __m128i v48; // xmm6
  int v49; // r8d
  int v50; // r9d
  int v51; // eax
  int v52; // r10d
  int v53; // eax
  int v54; // ecx
  int v55; // r10d
  int v56; // eax
  int v57; // r10d
  int v58; // r10d
  int v59; // ecx
  int v60; // r11d
  int v61; // r11d
  int v62; // r13d
  int v63; // r13d
  unsigned int v64; // r15d
  _OWORD *p_left; // rax
  __int32 v66; // eax
  int v67; // r13d
  int v68; // edx
  int v69; // edx
  unsigned int v70; // r15d
  _OWORD *v71; // rax
  const struct _MOVESIZEDATA *v72; // rcx
  int v73; // ecx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rax
  struct tagMONITOR *v77; // r14
  unsigned int v78; // r12d
  unsigned int v79; // eax
  int v80; // eax
  __int128 v81; // [rsp+38h] [rbp-51h] BYREF
  struct tagMONITOR *v82; // [rsp+48h] [rbp-41h] BYREF
  __m128i *v83; // [rsp+50h] [rbp-39h]
  struct tagMONITOR *v84; // [rsp+58h] [rbp-31h]
  __m128i v85; // [rsp+60h] [rbp-29h]
  __int64 v86; // [rsp+70h] [rbp-19h] BYREF
  struct tagMONITOR *v87; // [rsp+78h] [rbp-11h]
  unsigned int v88; // [rsp+E8h] [rbp+5Fh] BYREF
  int v89; // [rsp+F0h] [rbp+67h]
  unsigned int *v90; // [rsp+F8h] [rbp+6Fh]
  struct tagRECT *v91; // [rsp+100h] [rbp+77h]

  v91 = a4;
  v90 = a3;
  v89 = a2;
  v84 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v8 = 1;
  v10 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  *(_QWORD *)&v81 = __PAIR64__(v10, v7);
  v83 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v83 || v7 == *((_DWORD *)a1 + 75) && v10 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v11 = ComputeMoveOutcome(v81, (__int64)a1, &v82, &v88);
  v14 = *((_DWORD *)a1 + 49);
  v15 = v11;
  *(_QWORD *)((char *)a1 + 300) = v81;
  if ( (v14 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v14 & 0xFDFFFFFF;
    v16 = MoveRect((__int64)a1, v6, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v8 = v16;
  }
  v17 = v88;
  if ( v15 != 1 || v88 - 1 > 1 )
  {
    *((_DWORD *)a1 + 70) &= ~2u;
    if ( v15 != 1 )
    {
      switch ( v15 )
      {
        case 3:
          if ( !*((_DWORD *)a1 + 60)
            && !v17
            && (*((_DWORD *)a1 + 49) & 0x300) == 0x300
            && ((*((_DWORD *)a1 + 49) >> 15) & 7u) - 4 <= 1 )
          {
            v23 = v84;
            v24 = v82;
            v25 = v84;
            do
            {
              v85 = *(__m128i *)GetMonitorWorkRectForWindow(&v81, (__int64)v24, *((struct tagWND **)a1 + 2));
              if ( IsDockTargetActive((__int64)a1, (__int64)v24, 0) && v85.m128i_i32[0] <= v7 && v7 < v85.m128i_i32[2] )
                v23 = v24;
              if ( IsDockTargetActive((__int64)a1, v26, 3) && v85.m128i_i32[0] <= v7 && v7 < v85.m128i_i32[2] )
                v25 = v24;
              v27 = *((_QWORD *)v24 + 71);
              if ( v27 == gpDispInfo + 136LL )
                v27 = *(_QWORD *)(gpDispInfo + 136LL);
              v24 = (struct tagMONITOR *)(v27 - 568);
            }
            while ( v24 != *((struct tagMONITOR **)a1 + 29) );
            v85.m128i_i64[0] = (__int64)v25;
            v28 = v25 == 0LL;
            v6 = v89;
            v84 = v23;
            v5 = v90;
            if ( !v28 )
            {
              v29 = v84;
              if ( v84 )
              {
                v30 = *(_OWORD *)((char *)a1 + 40);
                MoveRect((__int64)a1, v89, v12);
                if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v29, 0, v85.m128i_i64[0], v7) )
                {
                  *((_DWORD *)a1 + 60) = 0;
                  SetCurrentHitTargetMonitor(a1, v29, 1);
                  result = v31;
                  *((_DWORD *)a1 + 61) = v31 + 1;
                  return result;
                }
                if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
                  *(_OWORD *)((char *)a1 + 72) = v30;
                else
                  *(_OWORD *)((char *)a1 + 40) = v30;
              }
            }
          }
          v32 = 100663296LL;
          if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
          {
LABEL_52:
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v12, v13);
            v34 = v82;
            v86 = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = &v86;
            v87 = v34;
            if ( v34 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v34 + 2);
              v34 = v82;
            }
            v35 = v88;
            xxxSizeRectFromHitTarget(a1, v34, v88);
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                v36 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
                goto LABEL_58;
              }
              if ( v35 == 2 )
              {
                v36 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_58:
                *((_DWORD *)a1 + 49) = v36;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 2) + 71LL) & 1) != 0 )
                {
                  v37 = v91;
                  v38 = *(struct tagRECT *)((char *)a1 + 40);
                  v39 = (struct tagCHECKPOINT *)v83;
                  *v5 |= 1u;
                  *v37 = v38;
                  *a5 = v39;
                }
                SetDragOutThresholdAlways(a1);
                goto LABEL_66;
              }
            }
            else
            {
              v40 = *((_DWORD *)a1 + 49);
              *((_DWORD *)a1 + 70) &= ~2u;
              v40 &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 49) = v40;
              if ( (v40 & 0x4000000) == 0 )
                *v5 |= 2u;
              SetDragInToDragOutThreshold(a1);
            }
            if ( v35 == 3 )
            {
LABEL_67:
              *((_DWORD *)a1 + 60) = v35;
              SetCurrentHitTargetMonitor(a1, v34, 1);
              *((_DWORD *)a1 + 61) = 2;
LABEL_68:
              ThreadUnlock1(v42, v41);
              return 1LL;
            }
LABEL_66:
            MakeArrangedStateObservable(a1);
            goto LABEL_67;
          }
          if ( (unsigned int)MoveRect((__int64)a1, v6, 0) )
          {
            *v5 |= 8u;
            *((_DWORD *)a1 + 49) |= 0x2000000u;
            goto LABEL_52;
          }
          return 0LL;
        case 4:
          v43 = *((_DWORD *)a1 + 49);
          if ( (v43 & 0x80u) == 0 )
          {
            MoveRect((__int64)a1, v6, 0);
            v44 = *((_DWORD *)a1 + 60);
            if ( v44 )
            {
              if ( (unsigned int)(v44 - 1) <= 1 )
              {
                ++*((_DWORD *)a1 + 80);
                SetDragOutToDragInThreshold(a1);
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 79);
              SetDragInThresholdAlways(a1);
            }
LABEL_111:
            *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 70) &= ~2u;
            *((_DWORD *)a1 + 60) = 4;
            DisableTemporayMetricsOverrides(a1);
            MakeArrangedStateObservable(v72);
            v73 = *((_DWORD *)a1 + 49);
            *((_DWORD *)a1 + 61) = 0;
            if ( (v73 & 0x6000000) == 0x6000000 )
            {
              *v5 |= 4u;
              *((_DWORD *)a1 + 49) = v73 & 0xFDFFFFFF;
            }
            return 1LL;
          }
          v45 = (struct tagCHECKPOINT *)v83;
          v46 = *((_DWORD *)a1 + 60);
          v47 = *((_DWORD *)a1 + 49) & 0x7000;
          v48 = *v83;
          v49 = _mm_cvtsi128_si32(*v83);
          v50 = _mm_cvtsi128_si32(_mm_srli_si128(*v83, 8));
          v85 = *v83;
          v85.m128i_i32[0] = v49;
          if ( v46 )
          {
            v54 = *((_DWORD *)a1 + 73);
            v28 = v47 == 4096;
            v51 = v50;
            if ( v28 )
            {
              v58 = (v50 - v49) / 2;
              if ( v54 < v58 )
                goto LABEL_98;
              if ( v54 <= *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30) - v58 )
              {
                v54 = (v50 - v49) / 2;
                goto LABEL_98;
              }
              v59 = v54 - (*((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30));
              goto LABEL_96;
            }
          }
          else
          {
            v28 = v47 == 4096;
            v51 = v50;
            if ( v28 )
            {
              v52 = (v50 - v49) / 2;
              v53 = *((_DWORD *)a1 + 6);
              v54 = v7 - v53;
              if ( v7 - v53 >= v52 )
              {
                if ( v54 <= *((_DWORD *)a1 + 8) - v53 - v52 )
                  v54 = (v50 - v49) / 2;
                else
                  v54 = v50 + v7 - *((_DWORD *)a1 + 8) - v49;
              }
              v55 = *((_DWORD *)a1 + 72);
              goto LABEL_99;
            }
            v54 = *((_DWORD *)a1 + 73);
          }
          v56 = v51 - v49;
          v57 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
          if ( v57 <= v56 )
          {
            if ( v54 < v57 / 2 )
              goto LABEL_98;
            if ( v54 <= v57 / 2 )
            {
              v54 = v57 / 2;
              goto LABEL_98;
            }
          }
          else
          {
            if ( v54 < v56 / 2 )
            {
LABEL_98:
              v55 = *((_DWORD *)a1 + 74);
LABEL_99:
              if ( v46 )
              {
                v60 = v46 - 1;
                if ( v60 && (v61 = v60 - 1) != 0 )
                {
                  if ( v61 == 1 )
                  {
                    v62 = v7 - v54 - v49;
                    v85.m128i_i32[0] = v62 + v49;
                    v85.m128i_i32[3] += DWORD1(v81) - v85.m128i_i32[1] - v55;
                    v85.m128i_i32[1] = DWORD1(v81) - v55;
                    v85.m128i_i32[2] = v62 + v50;
                    v48 = v85;
                  }
                }
                else
                {
                  v63 = v7 - v54 - v49;
                  v85.m128i_i32[0] = v63 + v49;
                  v85.m128i_i32[3] += DWORD1(v81) - v85.m128i_i32[1] - v55;
                  v85.m128i_i32[1] = DWORD1(v81) - v55;
                  v64 = v43 & 0xFFFFFF7F;
                  v85.m128i_i32[2] = v63 + v50;
                  *((_DWORD *)a1 + 49) = v64;
                  v48 = v85;
                  if ( (v64 & 0x20) != 0 )
                  {
                    p_left = &v91->left;
                    *v5 |= 1u;
                    *p_left = v48;
                    *a5 = v45;
                  }
                  ++*((_DWORD *)a1 + 80);
                  SetDragOutToDragInThreshold(a1);
                }
              }
              else
              {
                v66 = v85.m128i_i32[1];
                v67 = v7 - v54 - v49;
                v68 = DWORD1(v81) - v85.m128i_i32[1];
                *((_DWORD *)a1 + 71) = v54;
                v69 = v68 - v55;
                *((_DWORD *)a1 + 72) = v55;
                v85.m128i_i32[3] += v69;
                v85.m128i_i32[1] = v69 + v66;
                v85.m128i_i32[0] = v67 + v49;
                v70 = v43 & 0xFFFFFF7F;
                v85.m128i_i32[2] = v67 + v50;
                *((_DWORD *)a1 + 49) = v70;
                v48 = v85;
                if ( (v70 & 0x20) != 0 )
                {
                  v71 = &v91->left;
                  *v5 |= 1u;
                  *v71 = v48;
                  *a5 = v45;
                }
                ++*((_DWORD *)a1 + 79);
                SetDragInThresholdAlways(a1);
              }
              *(__m128i *)((char *)a1 + 40) = v48;
              goto LABEL_111;
            }
            if ( v54 <= v57 - v56 / 2 )
            {
              v54 = v56 / 2;
              goto LABEL_98;
            }
          }
          v59 = v54 - v57;
LABEL_96:
          v54 = v50 + v59 - v49;
          goto LABEL_98;
        case 5:
LABEL_13:
          v21 = *((_DWORD *)a1 + 61);
          return MoveRect((__int64)a1, v6, v21);
      }
      if ( v15 != 6 )
        return 0LL;
      if ( (*((_DWORD *)a1 + 49) & 0x40000) == 0 )
      {
        CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
        v74 = *((_DWORD *)a1 + 49) | 0x40000;
        *((_DWORD *)a1 + 49) = v74;
        if ( (v74 & 0x1000000) != 0 )
          *(__m128i *)((char *)a1 + 152) = *v83;
      }
      v75 = 100663296LL;
      if ( (*((_DWORD *)a1 + 49) & 0x6000000) == 0x4000000 )
      {
        if ( !(unsigned int)MoveRect((__int64)a1, v6, 0) )
          return 0LL;
        *v5 |= 8u;
        *((_DWORD *)a1 + 49) |= 0x2000000u;
      }
      v76 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v12, v13);
      v77 = v82;
      v86 = *(_QWORD *)(v76 + 392);
      *(_QWORD *)(v76 + 392) = &v86;
      v87 = v77;
      if ( v77 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v77 + 2);
        v77 = v82;
      }
      v78 = v88;
      xxxSizeRectFromHitTarget(a1, v77, v88);
      if ( v78 )
      {
        if ( v78 == 1 )
        {
          v79 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
        }
        else
        {
          if ( v78 != 2 )
          {
            if ( v78 == 3 )
            {
              *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 70) &= ~2u;
            }
            goto LABEL_134;
          }
          v79 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
        }
        *((_DWORD *)a1 + 49) = v79;
      }
      else
      {
        v80 = *((_DWORD *)a1 + 49);
        *((_DWORD *)a1 + 70) &= ~2u;
        v80 &= 0xFFFFFCFF;
        *((_DWORD *)a1 + 49) = v80;
        if ( (v80 & 0x4000000) == 0 )
          *v5 |= 2u;
      }
      SetDragInToDragOutThreshold(a1);
LABEL_134:
      MakeArrangedStateObservable(a1);
      *((_DWORD *)a1 + 60) = v78;
      SetCurrentHitTargetMonitor(a1, v77, 1);
      goto LABEL_68;
    }
  }
  v18 = *((_DWORD *)a1 + 60);
  if ( (unsigned int)(v18 - 1) <= 1 )
  {
    v19 = *((_DWORD *)a1 + 49);
    if ( (v19 & 0x300) == 0 )
    {
      if ( (v19 & 0x2000000) != 0 )
        return v8;
      goto LABEL_13;
    }
  }
  if ( !v18 )
  {
    v22 = *((_DWORD *)a1 + 49);
    if ( (v22 & 0x300) == 0x300 && ((v22 >> 15) & 7) - 4 <= 1 )
    {
      if ( (v22 & 0x2000000) != 0 )
        return v8;
      goto LABEL_19;
    }
    if ( (v22 & 0x300) != 0 && ((v22 >> 15) & 7) - 4 <= 1 )
    {
      *((_DWORD *)a1 + 49) = v22 | 0x300;
      MakeArrangedStateObservable(a1);
      if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
        return v8;
LABEL_19:
      v21 = 3;
      return MoveRect((__int64)a1, v6, v21);
    }
  }
  return (*((_DWORD *)a1 + 49) & 0x2000000) != 0 ? v8 : 0;
}
