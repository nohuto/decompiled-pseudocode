/*
 * XREFs of xxxEvaluateDestRectForMonitorMigration @ 0x1C01DE61C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D86B4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DA7B8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     MigrateRectMonitors @ 0x1C01DCF04 (MigrateRectMonitors.c)
 */

_BOOL8 __fastcall xxxEvaluateDestRectForMonitorMigration(int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  BOOL v8; // r9d
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r13
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v25; // [rsp+40h] [rbp-30h] BYREF
  __int128 v26; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v27; // [rsp+58h] [rbp-18h] BYREF

  v25 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = a1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          return MigrateRectMonitors(
                   a3,
                   (__m128i *)(a3 + 128),
                   *(_QWORD *)(a2 + 232),
                   (_DWORD *)(a2 + 40),
                   a4,
                   0LL,
                   (_DWORD *)a2,
                   32);
        return v8;
      }
      if ( a5 )
      {
        v15 = *(_DWORD *)(a2 + 196);
        if ( (v15 & 0x4200) == 0x4200 && (v15 & 0x6000) != 0x6000 && (v15 & 0x300) != 0x300 )
        {
          v16 = MigrateRectMonitors(
                  a3,
                  (__m128i *)(a3 + 128),
                  *(_QWORD *)(a2 + 232),
                  (_DWORD *)(a2 + 40),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  3);
LABEL_20:
          v8 = v16;
          *(_DWORD *)(a2 + 196) ^= (*(_DWORD *)(a2 + 196) ^ (v16 << 19)) & 0x80000;
          return v8;
        }
      }
      v17 = 2;
    }
    else
    {
      if ( a5 )
      {
        v18 = *(_DWORD *)(a2 + 196);
        if ( (v18 & 0x2100) == 0x2100 && (v18 & 0x6000) != 0x6000 && (v18 & 0x300) != 0x300 )
        {
          v16 = MigrateRectMonitors(
                  a3,
                  (__m128i *)(a3 + 128),
                  *(_QWORD *)(a2 + 232),
                  (_DWORD *)(a2 + 40),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  5);
          goto LABEL_20;
        }
      }
      v17 = 1;
    }
    v16 = xxxForceSizeRecToDockTarget(a2, v17, a4, &v25, &v27, (struct tagCHECKPOINT **)&v26);
    goto LABEL_20;
  }
  if ( IsDockTargetActive(a2, a4, 0) || IsDockTargetActive(a2, v19, 3) )
  {
    v8 = MigrateRectMonitors(a3, (__m128i *)(a3 + 128), *(_QWORD *)(a2 + 232), &v27, a4, 0LL, (_DWORD *)a2, 1);
    if ( v8 )
    {
      v20 = a4;
      v21 = v27.left + (v27.right - v27.left) / 2;
      do
      {
        v27 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v26, a4, (struct tagWND *)a3);
        if ( IsDockTargetActive(a2, a4, 0) && v27.left <= v21 && v21 <= v27.right )
          v9 = a4;
        if ( IsDockTargetActive(a2, v22, 3) && v27.left <= v21 && v21 <= v27.right )
          v10 = a4;
        v23 = *(_QWORD *)(a4 + 568);
        if ( v23 == gpDispInfo + 136LL )
          v23 = *(_QWORD *)(gpDispInfo + 136LL);
        a4 = v23 - 568;
      }
      while ( a4 != v20 );
      if ( !v10 || !v9 )
        return 0;
      return MigrateRectMonitors(
               a3,
               (__m128i *)(a3 + 128),
               *(_QWORD *)(a2 + 232),
               (_DWORD *)(a2 + 40),
               v9,
               v10,
               (_DWORD *)a2,
               1);
    }
  }
  return v8;
}
