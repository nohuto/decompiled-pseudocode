/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01EFED0
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F0770 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall ComputeSourceRectAndMonitorWithPrecision(
        const struct _MOVESIZEDATA *const a1,
        struct tagPOINT *a2,
        struct tagMONITOR **a3,
        struct tagRECT *a4)
{
  int v5; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagRECT v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rax
  __m128i *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  struct tagRECT *v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  __m128i v29; // [rsp+28h] [rbp-18h] BYREF

  v28 = 0LL;
  v5 = *((_DWORD *)a1 + 45);
  if ( (v5 & 0x38000) == 0x30000 )
  {
    v23 = MonitorFromPoint((__int64)*a2, 2u);
    v24 = *(_QWORD *)a1;
    v10 = v23;
    v28 = v23;
    if ( (*(_DWORD *)(v24 + 368) & 0xF) == 0
      && (v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
    {
      v26 = (struct tagRECT *)(*(_QWORD *)(v10 + 40) + 92LL);
    }
    else if ( (*(_DWORD *)(v24 + 368) & 0xF) == 1
           && (v27 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 52LL) & 1) != 0 )
    {
      v26 = (struct tagRECT *)(*(_QWORD *)(v10 + 40) + 108LL);
    }
    else
    {
      v26 = (struct tagRECT *)(*(_QWORD *)(v10 + 40) + 76LL);
    }
    v11 = *v26;
  }
  else if ( *(_DWORD *)*gpDispInfo <= 1u || (*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 2 )
  {
    if ( (v5 & 0x20) != 0 )
      v12 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)a1 + 360LL));
    else
      v12 = *((_QWORD *)a1 + 24);
    v28 = v12;
    LogicalToPhysicalDPIPoint(a2, a2, 0LL, &v28);
    v13 = MonitorFromPoint((__int64)*a2, 0x22u);
    v28 = v13;
    v14 = *(_QWORD *)a1;
    if ( *(_DWORD *)*gpDispInfo <= 1u )
    {
      v19 = *(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF;
      if ( !v19
        && (v20 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 52LL) & 1) != 0 )
      {
        v17 = (__m128i *)(*(_QWORD *)(v13 + 40) + 92LL);
      }
      else if ( v19 == 1
             && (v21 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 52LL) & 1) != 0 )
      {
        v17 = (__m128i *)(*(_QWORD *)(v13 + 40) + 108LL);
      }
      else
      {
        v17 = (__m128i *)(*(_QWORD *)(v13 + 40) + 76LL);
      }
    }
    else
    {
      v15 = *(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF;
      if ( !v15
        && (v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) != 0 )
      {
        v17 = (__m128i *)(*(_QWORD *)(v13 + 40) + 44LL);
      }
      else if ( v15 == 1
             && (v18 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 52LL) & 1) != 0 )
      {
        v17 = (__m128i *)(*(_QWORD *)(v13 + 40) + 60LL);
      }
      else
      {
        v17 = (__m128i *)(*(_QWORD *)(v13 + 40) + 28LL);
      }
    }
    v29 = *v17;
    v22 = v29;
    --v29.m128i_i32[3];
    v29.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8)) - 1;
    LogicalToPhysicalDPIRect(&v29, &v29, 0LL, &v28);
    ++v29.m128i_i32[2];
    ++v29.m128i_i32[3];
    v11 = (struct tagRECT)v29;
    v10 = v28;
  }
  else
  {
    v9 = *(_QWORD *)((char *)a1 + 292);
    *a2 = (struct tagPOINT)v9;
    v10 = MonitorFromPoint(v9, 0x22u);
    v11 = *(struct tagRECT *)(*(_QWORD *)(v10 + 40) + 28LL);
  }
  *a3 = (struct tagMONITOR *)v10;
  *a4 = v11;
}
