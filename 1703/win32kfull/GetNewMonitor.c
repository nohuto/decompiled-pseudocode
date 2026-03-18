/*
 * XREFs of GetNewMonitor @ 0x1C0060BF0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     HasMaximizedState @ 0x1C006138C (HasMaximizedState.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     IsValidMonitor @ 0x1C00FC0E4 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01BF0B4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01BF190 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     GetMonitorTransform @ 0x1C01C04A0 (GetMonitorTransform.c)
 *     TransformRectAroundPoint @ 0x1C01C09B4 (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(__m128i *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 InheritedMonitor; // rbx
  struct tagRECT si128; // xmm7
  __int64 v8; // r14
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  BOOL v14; // edx
  __m128i v15; // xmm6
  BOOL v16; // r13d
  __int64 v17; // rcx
  int v18; // r11d
  __int64 v19; // rax
  __int64 MonitorTransform; // rax
  int v21; // r9d
  int v22; // r11d
  __int64 v23; // rax
  int v25; // [rsp+28h] [rbp-59h]
  BOOL v26; // [rsp+38h] [rbp-49h]
  struct tagRECT v27; // [rsp+48h] [rbp-39h] BYREF
  struct tagRECT v28; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v29; // [rsp+68h] [rbp-19h] BYREF

  InheritedMonitor = 0LL;
  si128 = 0LL;
  v8 = ValidateHmonitorNoRip(a1[22].m128i_i64[1]);
  v27 = 0LL;
  v9 = *(_QWORD *)(a1[1].m128i_i64[0] + 592);
  v10 = HasMaximizedState(a1);
  if ( v9 && *(__m128i **)v9 == a1 )
  {
    v11 = 1;
    if ( *(_DWORD *)(v9 + 180) < 0x80000000 )
    {
      v12 = 1;
      goto LABEL_7;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = 0;
  if ( !v11 )
  {
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
LABEL_7:
  if ( *(_DWORD *)(v9 + 180) < 0x80000000 )
    goto LABEL_9;
  v13 = 1;
LABEL_10:
  v14 = v12 && (*(_DWORD *)(v9 + 180) & 8) != 0 && v10;
  v15 = a1[8];
  v29 = (struct tagRECT)v15;
  if ( a2 && (!v12 || *(_QWORD *)(v9 + 8) != a1[8].m128i_i64[0] || *(_QWORD *)(v9 + 16) != a1[8].m128i_i64[1]) )
  {
    v15 = *(__m128i *)a2;
    v29 = *a2;
  }
  v16 = !v14 && v12 && (unsigned int)(*(_DWORD *)(v9 + 160) - 9) <= 1;
  v26 = !v12 && !v10;
  if ( v11 && (v12 || a2) )
  {
    if ( *(_QWORD *)(v9 + 8) == v15.m128i_i64[0]
      && *(_QWORD *)(v9 + 16) == _mm_srli_si128(v15, 8).m128i_u64[0]
      && (unsigned int)IsValidMonitor(*(_QWORD *)(v9 + 192)) )
    {
      InheritedMonitor = v17;
      v13 = v18 & (*(_DWORD *)(v9 + 180) >> 3);
    }
    else
    {
      *(_DWORD *)(v9 + 180) |= 0x20000000u;
    }
  }
  if ( v13 )
  {
    si128 = *(struct tagRECT *)(v9 + 8);
    v27 = si128;
    if ( a2 )
      *a2 = si128;
  }
  if ( a3 )
    *a3 = (struct tagRECT)v15;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor((struct tagWND *)a1);
    if ( !InheritedMonitor )
    {
      v19 = MonitorFromWindow((__int64)a1, 0x20u);
      InheritedMonitor = v19;
      if ( !v19 )
        goto LABEL_54;
      if ( v8 && v19 != v8 && v16 )
      {
        v28 = (struct tagRECT)v15;
        MonitorTransform = GetMonitorTransform(v8, a1);
        if ( MonitorTransform )
        {
          TransformVector(MonitorTransform, (unsigned int)&v28, (unsigned int)&v28.top, 0, 0);
          TransformVector(v22, (unsigned int)&v28.right, (unsigned int)&v28.bottom, v21, v21 & v25);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v9,
          &v28,
          *(_WORD *)(*(_QWORD *)(v8 + 40) + 128LL),
          a2,
          &v27,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 128LL));
        if ( (unsigned int)IsNewMonitorRectMostOccupied(
                             &v27,
                             (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                             (const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 28LL)) )
        {
          si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v27);
        }
        else
        {
          InheritedMonitor = 0LL;
          v27 = (struct tagRECT)v15;
          si128 = (struct tagRECT)v15;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_54:
        if ( (a1[23].m128i_i32[0] & 0xF) == 2 )
          v23 = MonitorFromRect(&v29.left, 2u);
        else
          v23 = MonitorFromWindow((__int64)a1, 0x22u);
        InheritedMonitor = v23;
        if ( !v23 )
          InheritedMonitor = MonitorFromWindow((__int64)a1, 0x22u);
      }
    }
  }
  if ( a3
    && (a1[23].m128i_i32[0] & 0xF) == 2
    && (*(_DWORD *)(a1[1].m128i_i64[0] + 568) & 0x2000000) == 0
    && v8
    && InheritedMonitor
    && v8 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1) )
  {
    if ( IsRectEmptyInl(&v27) )
    {
      if ( v16 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v9,
          &v29,
          *(_WORD *)(*(_QWORD *)(v8 + 40) + 128LL),
          a2,
          a3,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 128LL));
      }
      else if ( v26 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v29,
          *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 128LL),
          (_DWORD)a2,
          (_DWORD)a3,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 128LL),
          a1[8].m128i_i64[0]);
      }
    }
    else
    {
      *a3 = si128;
    }
  }
  return InheritedMonitor;
}
