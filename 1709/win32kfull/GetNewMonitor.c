/*
 * XREFs of GetNewMonitor @ 0x1C00644F0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008D2D0 (NtUserUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorTransform @ 0x1C005D640 (GetMonitorTransform.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01C2994 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01C2A70 (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 *     TransformRectAroundPoint @ 0x1C01C40FC (TransformRectAroundPoint.c)
 *     TransformVector @ 0x1C01D6334 (TransformVector.c)
 */

__int64 __fastcall GetNewMonitor(__m128i *a1, struct tagRECT *a2, _OWORD *a3)
{
  __int64 InheritedMonitor; // rbx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // r13d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  BOOL v12; // r10d
  int v13; // r11d
  int v14; // edx
  int v15; // r8d
  BOOL v16; // r9d
  __m128i v17; // xmm6
  BOOL v18; // r12d
  _OWORD *v19; // rax
  struct tagMONITOR *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  struct tagRECT v25; // xmm0
  int v26; // r9d
  int v27; // [rsp+28h] [rbp-89h]
  struct tagRECT v29; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v31[64]; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT v32; // [rsp+A8h] [rbp-9h] BYREF

  InheritedMonitor = 0LL;
  v6 = ValidateHmonitorNoRip(a1[22].m128i_i64[1]);
  v7 = (a1[19].m128i_i8[1] & 3) == 0;
  v8 = 1;
  v9 = v6;
  v10 = a1[1].m128i_i64[0];
  v29 = 0LL;
  v11 = *(_QWORD *)(v10 + 648);
  v12 = !v7 || (a1[4].m128i_i8[7] & 1) != 0 || (a1[3].m128i_i8[12] & 0x40) != 0;
  if ( v11 && *(__m128i **)(v11 + 16) == a1 )
  {
    v13 = 1;
    if ( *(int *)(v11 + 196) >= 0 )
    {
      v14 = 1;
      goto LABEL_44;
    }
  }
  else
  {
    v13 = 0;
  }
  v14 = 0;
  if ( !v13 )
  {
LABEL_8:
    v15 = 0;
    goto LABEL_9;
  }
LABEL_44:
  if ( *(int *)(v11 + 196) >= 0 )
    goto LABEL_8;
  v15 = 1;
LABEL_9:
  v16 = v14 && (*(_DWORD *)(v11 + 196) & 8) != 0 && v12;
  v17 = a1[8];
  v32 = (struct tagRECT)v17;
  if ( a2 )
  {
    if ( !v14 )
      goto LABEL_38;
    v23 = *(_QWORD *)(v11 + 24) - a1[8].m128i_i64[0];
    if ( !v23 )
      v23 = *(_QWORD *)(v11 + 32) - a1[8].m128i_i64[1];
    if ( v23 )
    {
LABEL_38:
      v17 = *(__m128i *)a2;
      v32 = *a2;
    }
  }
  v18 = !v16 && v14 && (unsigned int)(*(_DWORD *)(v11 + 176) - 9) <= 1;
  if ( v14 || v12 )
    v8 = 0;
  if ( v13 && (v14 || a2) )
  {
    v24 = *(_QWORD *)(v11 + 24) - v17.m128i_i64[0];
    if ( !v24 )
      v24 = *(_QWORD *)(v11 + 32) - _mm_srli_si128(v17, 8).m128i_u64[0];
    if ( v24 )
    {
      *(_DWORD *)(v11 + 196) |= 0x20000000u;
    }
    else
    {
      InheritedMonitor = *(_QWORD *)(v11 + 208);
      v15 = (*(_DWORD *)(v11 + 196) >> 3) & 1;
    }
  }
  if ( v15 )
  {
    v25 = *(struct tagRECT *)(v11 + 24);
    v29 = v25;
    if ( a2 )
      *a2 = v25;
  }
  v19 = a3;
  if ( a3 )
    *a3 = v17;
  if ( !InheritedMonitor )
  {
    InheritedMonitor = GetInheritedMonitor((struct tagWND *)a1);
    if ( !InheritedMonitor )
    {
      v21 = _MonitorFromWindowInternal((struct tagWND *)a1, 0, 1);
      InheritedMonitor = (__int64)v21;
      if ( !v21 )
        goto LABEL_34;
      if ( v9 && v21 != (struct tagMONITOR *)v9 && v18 )
      {
        v30 = (struct tagRECT)v17;
        memset(v31, 0, sizeof(v31));
        if ( (unsigned int)GetMonitorTransform(v9, (__int64)a1, (__int64)v31) )
        {
          TransformVector((unsigned int)v31, (unsigned int)&v30, (unsigned int)&v30.top, 0, 0);
          TransformVector((unsigned int)v31, (unsigned int)&v30.right, (unsigned int)&v30.bottom, v26, v26 & v27);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v11,
          &v30,
          *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL),
          a2,
          &v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
        if ( !(unsigned int)IsNewMonitorRectMostOccupied(
                              &v29,
                              (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                              (const struct tagRECT *)(*(_QWORD *)(v9 + 40) + 28LL)) )
        {
          InheritedMonitor = 0LL;
          v29 = (struct tagRECT)v17;
        }
      }
      if ( !InheritedMonitor )
      {
LABEL_34:
        if ( (a1[23].m128i_i32[0] & 0xF) == 2 )
        {
          v22 = MonitorFromRect(&v32, 2u, 0);
          v17 = (__m128i)v32;
        }
        else
        {
          v22 = (__int64)_MonitorFromWindowInternal((struct tagWND *)a1, 2, 1);
        }
        InheritedMonitor = v22;
      }
    }
    v19 = a3;
  }
  if ( v19
    && (a1[23].m128i_i32[0] & 0xF) == 2
    && (*(_DWORD *)(a1[1].m128i_i64[0] + 624) & 0x2000000) == 0
    && v9
    && v9 != InheritedMonitor
    && (unsigned int)IsTopLevelWindow(a1) )
  {
    if ( IsRectEmptyInl(&v29) )
    {
      if ( v18 )
      {
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)v11,
          &v32,
          *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL),
          a2,
          &v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL));
      }
      else if ( v8 )
      {
        TransformRectAroundPoint(
          (unsigned int)&v32,
          *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL),
          (_DWORD)a2,
          (unsigned int)&v29,
          *(_WORD *)(*(_QWORD *)(InheritedMonitor + 40) + 64LL),
          a1[8].m128i_i64[0]);
      }
      if ( !IsRectEmptyInl(&v29)
        && !(unsigned int)IsNewMonitorRectMostOccupied(
                            &v29,
                            (const struct tagRECT *)(*(_QWORD *)(InheritedMonitor + 40) + 28LL),
                            (const struct tagRECT *)(*(_QWORD *)(v9 + 40) + 28LL)) )
      {
        InheritedMonitor = v9;
        v29 = (struct tagRECT)v17;
      }
    }
    if ( !IsRectEmptyInl(&v29) )
      *a3 = v29;
  }
  return InheritedMonitor;
}
