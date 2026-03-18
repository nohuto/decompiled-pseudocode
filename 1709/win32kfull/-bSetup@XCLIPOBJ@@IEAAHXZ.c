/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C012F1CC
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C012F478 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C012EC1C (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C012EC70 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C012ECC0 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C012ED44 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C012EDAC (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C012F04C (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C012F0E0 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  LONG v6; // edx
  LONG v7; // r8d
  LONG v8; // eax
  LONG v9; // edx
  _DWORD *v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int i; // eax
  int NextSegment; // eax
  __int64 v18; // rax
  LONG v19; // edx
  __int64 v20; // rax
  int v21; // edx
  struct _POINTL v22; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v23; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_23;
  }
  v1[40] = -1;
  v3 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v3[28] > v3[30] )
  {
    v3[6] &= ~0x400000u;
    *((_DWORD *)this + 25) = -1;
  }
  else
  {
    v3[6] |= 0x400000u;
    *((_DWORD *)this + 25) = 1;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v4[29] <= v4[31] )
    v4[6] |= 0x800000u;
  v5 = (_DWORD *)*((_QWORD *)this + 18);
  v6 = *((_DWORD *)this + 2);
  v7 = v5[29];
  if ( v7 >= v6 || v5[31] >= v6 )
  {
    v8 = *((_DWORD *)this + 4);
    if ( v7 < v8 || v5[31] < v8 )
    {
      if ( (v5[6] & 0x800000) != 0 )
      {
        if ( v7 < v6 )
        {
          XCLIPOBJ::vIntersectScan(this, v6, 0LL, &v22, v5 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
        }
        v9 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) >= v9 )
        {
          XCLIPOBJ::vIntersectScan(this, v9, &v23, 0LL, (int *)&v22);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
        }
      }
      else
      {
        if ( v5[31] < v6 )
        {
          XCLIPOBJ::vIntersectScan(this, v6, &v23, 0LL, (int *)&v22);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
        }
        v18 = *((_QWORD *)this + 18);
        v19 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v18 + 116) >= v19 )
        {
          XCLIPOBJ::vIntersectScan(this, v19, 0LL, &v22, (int *)(v18 + 160));
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
        }
      }
      v10 = (_DWORD *)*((_QWORD *)this + 18);
      v11 = *((_DWORD *)this + 1);
      v12 = v10[28];
      if ( v12 >= v11 || v10[30] >= v11 )
      {
        v13 = *((_DWORD *)this + 3);
        if ( v12 < v13 || v10[30] < v13 )
        {
          if ( (v10[6] & 0x400000) != 0 )
          {
            if ( v12 < v11 )
            {
              XCLIPOBJ::bIntersectWall(this, v11, 0LL, &v22, v10 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
            }
            v14 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) >= v14 )
            {
              XCLIPOBJ::bIntersectWall(this, v14, &v23, 0LL, (int *)&v22);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
            }
          }
          else
          {
            if ( v10[30] < v11 )
            {
              XCLIPOBJ::bIntersectWall(this, v11, &v23, 0LL, (int *)&v22);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
            }
            v20 = *((_QWORD *)this + 18);
            v21 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v20 + 112) >= v21 )
            {
              XCLIPOBJ::bIntersectWall(this, v21, 0LL, &v22, (int *)(v20 + 160));
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_23:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
