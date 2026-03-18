/*
 * XREFs of xxxEvaluateDestRectForMonitorMigration @ 0x1C01F7344
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F099C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F2DDC (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     MigrateRectMonitors @ 0x1C01F5BCC (MigrateRectMonitors.c)
 */

_BOOL8 __fastcall xxxEvaluateDestRectForMonitorMigration(int a1, __int64 a2, __m128i *a3, __int64 a4, int a5)
{
  BOOL v8; // r9d
  _DWORD *v9; // r15
  _DWORD *v10; // r14
  __int64 v11; // r13
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rdx
  _DWORD *v23; // r9
  int v24; // r10d
  _DWORD *v25; // r9
  int v26; // r10d
  struct tagCHECKPOINT *v27; // rax
  _QWORD *v28; // rdi
  struct tagCHECKPOINT *v30; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v31; // [rsp+48h] [rbp-60h] BYREF
  struct tagRECT v32; // [rsp+50h] [rbp-58h] BYREF

  LODWORD(v31) = 0;
  v30 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = a1 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          return MigrateRectMonitors(
                   (__int64)a3,
                   a3 + 8,
                   *(_QWORD *)(a2 + 216),
                   (int *)(a2 + 24),
                   a4,
                   0LL,
                   (_DWORD *)a2,
                   32);
        return v8;
      }
      if ( a5 )
      {
        v16 = *(_DWORD *)(a2 + 180);
        if ( (v16 & 0x4200) == 0x4200 && (v16 & 0x6000) != 0x6000 && (v16 & 0x300) != 0x300 )
        {
          v17 = MigrateRectMonitors(
                  (__int64)a3,
                  a3 + 8,
                  *(_QWORD *)(a2 + 216),
                  (int *)(a2 + 24),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  3);
LABEL_19:
          v8 = v17;
          *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (v17 << 19)) & 0x80000;
          return v8;
        }
      }
      v18 = 2;
    }
    else
    {
      if ( a5 )
      {
        v19 = *(_DWORD *)(a2 + 180);
        if ( (v19 & 0x2100) == 0x2100 && (v19 & 0x6000) != 0x6000 && (v19 & 0x300) != 0x300 )
        {
          v17 = MigrateRectMonitors(
                  (__int64)a3,
                  a3 + 8,
                  *(_QWORD *)(a2 + 216),
                  (int *)(a2 + 24),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  5);
          goto LABEL_19;
        }
      }
      v18 = 1;
    }
    v17 = xxxForceSizeRecToDockTarget((struct _MOVESIZEDATA *)a2, v18, a4, (unsigned int *)&v31, &v32, &v30);
    goto LABEL_19;
  }
  if ( IsDockTargetActive(a2, a4, 0) || IsDockTargetActive(a2, v20, 3) )
  {
    v8 = MigrateRectMonitors((__int64)a3, a3 + 8, *(_QWORD *)(a2 + 216), &v32.left, a4, v21, (_DWORD *)a2, 1);
    if ( v8 )
    {
      *(_QWORD *)&v32.left = a4;
      v31 = (_QWORD *)(gpDispInfo + 160LL);
      do
      {
        if ( IsDockTargetActive(a2, a4, 0) && *v23 <= v24 && v24 <= v23[2] )
        {
          v9 = v23;
          v11 = a4;
        }
        if ( IsDockTargetActive(a2, v22, 3) && *v25 <= v26 && v26 <= v25[2] )
        {
          v27 = (struct tagCHECKPOINT *)a4;
          v10 = v25;
          v30 = (struct tagCHECKPOINT *)a4;
        }
        else
        {
          v27 = v30;
        }
        v28 = *(_QWORD **)(a4 + 456);
        if ( v28 == v31 )
          v28 = (_QWORD *)*v31;
        a4 = (__int64)(v28 - 57);
      }
      while ( a4 != *(_QWORD *)&v32.left );
      if ( !v10 || !v9 )
        return 0;
      return MigrateRectMonitors(
               (__int64)a3,
               a3 + 8,
               *(_QWORD *)(a2 + 216),
               (int *)(a2 + 24),
               v11,
               (__int64)v27,
               (_DWORD *)a2,
               1);
    }
  }
  return v8;
}
