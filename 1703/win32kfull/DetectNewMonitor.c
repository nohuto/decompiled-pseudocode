/*
 * XREFs of DetectNewMonitor @ 0x1C01BFD64
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C006138C (HasMaximizedState.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01BF0B4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01BF190 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetMonitorTransform @ 0x1C01C04A0 (GetMonitorTransform.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagWND *v5; // r14
  __int64 v6; // rsi
  struct tagWND *v7; // rdx
  __int64 MonitorTransform; // rax
  int v9; // r9d
  int v10; // r11d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r8d
  struct tagWND *v15; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  int left; // edx
  int top; // r8d
  struct tagRECT v19; // xmm6
  int v20; // r9d
  LONG v21; // eax
  __int64 v22; // rbx
  INT v23; // r8d
  bool v24; // cc
  INT v25; // r15d
  INT v26; // r8d
  INT v27; // r15d
  LONG v28; // ebx
  struct tagWND *v29; // r9
  int v30; // edx
  __int64 v31; // rax
  const struct tagRECT *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  const struct tagRECT *v35; // rdx
  __int64 v36; // rax
  int v37; // ecx
  int v39; // [rsp+28h] [rbp-49h]
  struct tagRECT v40; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v41; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v42; // [rsp+58h] [rbp-19h]
  struct tagRECT v43; // [rsp+68h] [rbp-9h] BYREF

  InheritedMonitor = GetInheritedMonitor(*a1);
  v5 = a1[24];
  v6 = InheritedMonitor;
  v7 = *a1;
  v42 = *a2;
  v43 = v42;
  MonitorTransform = GetMonitorTransform(v5, v7);
  if ( MonitorTransform )
  {
    TransformVector(MonitorTransform, (unsigned int)&v43, (unsigned int)&v43.top, 0, 0);
    TransformVector(v10, (unsigned int)&v43.right, (unsigned int)&v43.bottom, v9, v9 & v39);
  }
  if ( !v6 )
  {
    v6 = MonitorFromRect(&v43.left, 0x20u);
    v11 = *((_DWORD *)a1 + 45);
    if ( (v11 & 0x2000000) == 0
      && ((v11 & 8) == 0 || !(unsigned int)HasMaximizedState(*a1))
      && v5
      && v6
      && v5 != (struct tagWND *)v6 )
    {
      v12 = GetMonitorTransform(v6, *a1);
      v13 = v12;
      if ( v14 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)a1,
          &v43,
          *(_WORD *)(*((_QWORD *)v5 + 5) + 128LL),
          0LL,
          &v41,
          *(_WORD *)(*(_QWORD *)(v6 + 40) + 128LL));
        if ( IsNewMonitorRectMostOccupied(
               &v41,
               (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL),
               (const struct tagRECT *)(*((_QWORD *)v5 + 5) + 28LL)) )
        {
          v43 = v41;
          if ( v13 )
            TransformVector(v13, (unsigned int)&v43, (unsigned int)&v43.top, 0, 1);
          v15 = *a1;
          if ( (*((_DWORD *)*a1 + 92) & 0xF) == 2 )
          {
            top = v43.top;
            left = v43.left;
          }
          else
          {
            *(_QWORD *)&v41.left = v6;
            MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)v15);
            PhysicalToLogicalDPIPoint(&v40, (char *)a1 + 292, MonitorFlagsFromWindow, &v41);
            left = *((_DWORD *)a1 + 38) + v40.left;
            top = *((_DWORD *)a1 + 39) + v40.top;
            v43.top = top;
            v43.left = left;
          }
          v43.right = left + v42.right - v42.left;
          v43.bottom = top + v42.bottom - v42.top;
          *a2 = v43;
          goto LABEL_53;
        }
      }
      else
      {
        v19 = v43;
        v40 = v43;
        if ( v12 )
        {
          TransformVector(v12, (unsigned int)&v40, (unsigned int)&v40.top, 0, 1);
          TransformVector(v13, (unsigned int)&v40.right, (unsigned int)&v40.bottom, v20, 1);
          v19 = v40;
        }
        v21 = _mm_cvtsi128_si32((__m128i)v19);
        v22 = *(_QWORD *)(gpsi + 5368LL);
        v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v19, 8)) - v21;
        v24 = v23 <= *((_DWORD *)a1 + 22);
        v25 = v23;
        *(_QWORD *)&v41.left = v22;
        if ( v24 )
          v25 = *((_DWORD *)a1 + 22);
        v24 = v25 < *((_DWORD *)a1 + 24);
        v40.left = v21;
        if ( !v24 )
          v25 = *((_DWORD *)a1 + 24);
        if ( v25 != v23 )
        {
          v40.left = v22 - EngMulDiv(v22 - v43.left, v25, v23);
          v40.right = v40.left + v25;
          v19 = v40;
        }
        v40.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v19, 4));
        v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v19, 12)) - v40.top;
        v27 = v26;
        if ( v26 <= *((_DWORD *)a1 + 23) )
          v27 = *((_DWORD *)a1 + 23);
        if ( v27 >= *((_DWORD *)a1 + 25) )
          v27 = *((_DWORD *)a1 + 25);
        if ( v27 != v26 )
        {
          v28 = v41.top;
          v40.top = v28 - EngMulDiv(v41.top - v43.top, v27, v26);
          v40.bottom = v40.top + v27;
          v19 = v40;
        }
        v29 = *a1;
        v30 = *((_DWORD *)*a1 + 92) & 0xF;
        if ( !v30
          && (v31 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 52LL) & 1) != 0 )
        {
          v32 = (const struct tagRECT *)(*((_QWORD *)v5 + 5) + 44LL);
        }
        else if ( v30 == 1
               && (v33 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 52LL) & 1) != 0 )
        {
          v32 = (const struct tagRECT *)(*((_QWORD *)v5 + 5) + 60LL);
        }
        else
        {
          v32 = (const struct tagRECT *)(*((_QWORD *)v5 + 5) + 28LL);
        }
        if ( !v30
          && (v34 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v34 + 8) + 52LL) & 1) != 0 )
        {
          v35 = (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 44LL);
        }
        else if ( v30 == 1
               && (v36 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 52LL) & 1) != 0 )
        {
          v35 = (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 60LL);
        }
        else
        {
          v35 = (const struct tagRECT *)(*(_QWORD *)(v6 + 40) + 28LL);
        }
        if ( IsNewMonitorRectMostOccupied(&v40, v35, v32) )
        {
          *a2 = v19;
          goto LABEL_53;
        }
      }
      v6 = (__int64)v5;
    }
  }
LABEL_53:
  if ( (struct tagWND *)v6 == a1[24] || !v6 )
    return 0LL;
  v37 = *((_DWORD *)a1 + 45);
  a1[24] = (struct tagWND *)v6;
  if ( (v37 & 0x20) == 0 )
    *((_DWORD *)a1 + 45) = v37 | 0x10000000;
  return 1LL;
}
