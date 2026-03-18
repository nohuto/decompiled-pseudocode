/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01D9474
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01D80E0 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01D8F2C (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D86B4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  struct tagWND *v6; // r8
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  __m128i *MonitorWorkRectForWindow; // rax
  int v16; // r14d
  int v17; // r15d
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r8
  int v28; // esi
  int v29; // r13d
  unsigned int v30; // edi
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdi
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // r8
  int v39; // esi
  int v40; // r13d
  unsigned int v41; // edi
  int v42; // eax
  int v43; // esi
  int v44; // eax
  __int128 v46; // [rsp+20h] [rbp-59h]
  __int64 v47; // [rsp+30h] [rbp-49h] BYREF
  __int64 v48; // [rsp+38h] [rbp-41h] BYREF
  unsigned int CurrentThreadDpiAwarenessContext; // [rsp+40h] [rbp-39h]
  __int128 v50; // [rsp+50h] [rbp-29h] BYREF
  __int128 v51; // [rsp+60h] [rbp-19h] BYREF
  __int128 v52; // [rsp+70h] [rbp-9h] BYREF

  v47 = 0LL;
  v6 = *(struct tagWND **)(a1 + 16);
  v48 = a2;
  v9 = 0;
  v46 = *GetMonitorWorkRectForWindow(&v50, a2, v6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13);
  v14 = CurrentThreadDpiAwarenessContext;
  if ( a4 )
  {
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v50, a4, *(struct tagWND **)(a1 + 16));
    v16 = HIDWORD(v46);
    v17 = DWORD1(v46);
    v18 = *MonitorWorkRectForWindow;
    v19 = MonitorWorkRectForWindow->m128i_i64[0];
    v20 = _mm_srli_si128(v18, 8).m128i_u64[0];
    if ( SHIDWORD(v20) > SHIDWORD(v46) )
      v16 = HIDWORD(v20);
    v21 = HIDWORD(v19);
    HIDWORD(v46) = v16;
    if ( (int)v21 < SDWORD1(v46) )
      v17 = v21;
    DWORD1(v46) = v17;
  }
  else
  {
    v16 = HIDWORD(v46);
    v17 = DWORD1(v46);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v9;
    v22 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v23 = *GetMonitorWorkRectForWindow(&v51, v22, *(struct tagWND **)(a1 + 16));
      v24 = *(_QWORD *)(a1 + 16);
      v50 = v23;
      if ( (*(_DWORD *)(v24 + 368) & 0xF) == 2 || v22 == v48 )
      {
        v52 = v23;
      }
      else
      {
        v52 = *(_OWORD *)(*(_QWORD *)(v22 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v52, &v52, v14, &v48);
      }
      if ( IsDockTargetActive(a1, v22, 0) && (int)v52 <= a5 && a5 < SDWORD2(v52) )
        break;
      v26 = *(_QWORD *)(v22 + 568);
      if ( v26 == gpDispInfo + 136LL )
        v26 = *(_QWORD *)(gpDispInfo + 136LL);
      v22 = v26 - 568;
      if ( v22 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v27 = *(_QWORD *)(a1 + 16);
    v47 = v22;
    if ( (*(_DWORD *)(v27 + 368) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v22 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL) )
    {
      v28 = DWORD1(v50);
      DWORD1(v46) = DWORD1(v50);
    }
    else
    {
      v47 = v25;
      v22 = v25;
      v46 = *GetMonitorWorkRectForWindow(&v51, v25, (struct tagWND *)v27);
      v16 = HIDWORD(v46);
      v28 = DWORD1(v46);
    }
    v29 = *(_DWORD *)(a1 + 48);
    LODWORD(v46) = *(_DWORD *)(a1 + 40);
    DWORD2(v46) = v29;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 368LL) & 0xF) != 2 && v22 != *(_QWORD *)(a1 + 208) )
    {
      v30 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v52 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v52, &v52, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v30, &v47);
      LODWORD(v46) = (__int16)v52;
      LODWORD(v52) = v29;
      LogicalToPhysicalDPIPoint(&v52, &v52, v30, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v30, &v47);
      DWORD2(v46) = (__int16)v52;
    }
    v31 = *(_DWORD *)(a1 + 108);
    if ( v16 - v28 < v31 )
      DWORD1(v46) = v16 - v31;
    v32 = *(_DWORD *)(a1 + 116);
    if ( v16 - v28 >= v32 )
      DWORD1(v46) = v16 - v32;
  }
  else
  {
    v33 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v34 = *GetMonitorWorkRectForWindow(&v51, v33, *(struct tagWND **)(a1 + 16));
      v35 = *(_QWORD *)(a1 + 16);
      v50 = v34;
      if ( (*(_DWORD *)(v35 + 368) & 0xF) == 2 || v33 == v48 )
      {
        v52 = v34;
      }
      else
      {
        v52 = *(_OWORD *)(*(_QWORD *)(v33 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v52, &v52, v14, &v48);
      }
      if ( IsDockTargetActive(a1, v33, 3) && (int)v52 <= a5 && a5 < SDWORD2(v52) )
        break;
      v37 = *(_QWORD *)(v33 + 568);
      if ( v37 == gpDispInfo + 136LL )
        v37 = *(_QWORD *)(gpDispInfo + 136LL);
      v33 = v37 - 568;
      if ( v33 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v38 = *(_QWORD *)(a1 + 16);
    v47 = v33;
    if ( (*(_DWORD *)(v38 + 368) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v33 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v36 + 40) + 64LL) )
    {
      v39 = HIDWORD(v50);
      HIDWORD(v46) = HIDWORD(v50);
    }
    else
    {
      v47 = v36;
      v33 = v36;
      v46 = *GetMonitorWorkRectForWindow(&v51, v36, (struct tagWND *)v38);
      v39 = HIDWORD(v46);
      v17 = DWORD1(v46);
    }
    v40 = *(_DWORD *)(a1 + 48);
    LODWORD(v46) = *(_DWORD *)(a1 + 40);
    DWORD2(v46) = v40;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 368LL) & 0xF) != 2 && v33 != *(_QWORD *)(a1 + 208) )
    {
      v41 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v52 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v52, &v52, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v41, &v47);
      LODWORD(v46) = (__int16)v52;
      LODWORD(v52) = v40;
      LogicalToPhysicalDPIPoint(&v52, &v52, v41, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v41, &v47);
      DWORD2(v46) = (__int16)v52;
    }
    v42 = *(_DWORD *)(a1 + 108);
    v43 = v39 - v17;
    if ( v43 < v42 )
      HIDWORD(v46) = v17 + v42;
    v44 = *(_DWORD *)(a1 + 116);
    if ( v43 >= v44 )
      HIDWORD(v46) = v17 + v44;
  }
  v9 = 1;
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v46;
  else
    *(_OWORD *)(a1 + 40) = v46;
  return v9;
}
