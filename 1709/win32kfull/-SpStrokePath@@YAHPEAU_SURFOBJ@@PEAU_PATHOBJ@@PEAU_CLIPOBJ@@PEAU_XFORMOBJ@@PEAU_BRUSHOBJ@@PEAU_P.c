/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0136660
 * Callers:
 *     <none>
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001D83C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E9158 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C012C5C4 (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C01368C4 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01369A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     OffStrokePath @ 0x1C0136A94 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0136BA0 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0136BC0 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v9; // r13d
  FLOAT_LONG v10; // edi
  struct _PATHOBJ *v11; // rsi
  struct _SURFOBJ *v12; // r14
  SURFACE *v13; // r12
  __int64 v14; // rbx
  USHORT *p_iType; // r12
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v20; // esi
  LONG v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _CLIPOBJ *v50; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v51; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v53; // [rsp+68h] [rbp-98h] BYREF
  struct _LINEATTRS *v54; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v55; // [rsp+78h] [rbp-88h]
  HDEV hdev; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL *v57; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v58; // [rsp+90h] [rbp-70h]
  _QWORD v59[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _PATHOBJ v60; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]
  _BYTE v62[32]; // [rsp+118h] [rbp+18h] BYREF
  int v63; // [rsp+138h] [rbp+38h]
  __int64 *v64[9]; // [rsp+390h] [rbp+290h] BYREF
  int v65; // [rsp+3D8h] [rbp+2D8h]

  v58 = a5;
  v57 = a6;
  v9 = 1;
  v55 = a4;
  v51 = a1;
  v50 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v54 = a7;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v64, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v64, &v51, &v53, &v50) )
  {
    v11 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v60);
    memset(v59, 0, sizeof(v59));
    v12 = v51;
    v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v51);
    if ( v65 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap(v13) )
    {
      if ( v61 && EPATHOBJ::bClone((EPATHOBJ *)&v60, (struct EPATHOBJ *)this) )
      {
        x = v53.x;
        y = v53.y;
        CLIPOBJ_vOffset(v50, v53.x, v53.y);
        PATHOBJ_vOffset(&v60, x, y);
        hdev = v12->hdev;
        PRECOMPUTE::vInit(v59, v13, &hdev, &v60, v50, v55, v54, a8, 0, 0);
        v20 = -y;
        v21 = -x;
        CLIPOBJ_vOffset(v50, v21, v20);
        PATHOBJ_vOffset(&v60, v21, v20);
        if ( !v59[4] )
          goto LABEL_17;
        v11 = this;
        this = &v60;
        goto LABEL_4;
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v59);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v60);
      if ( v63 )
        PopThreadGuardedObject(v62);
    }
    else
    {
LABEL_4:
      v54->elStyleState = v10;
      PATHOBJ_vEnumStart(this);
      v14 = 0LL;
      v52 = 0LL;
      if ( v12
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x200) == 0 )
      {
        v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
        v52 = v14;
        GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
      }
      if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v52, &v50) )
        goto LABEL_13;
      p_iType = &v12->iType;
      if ( v12->iType != 1 )
        goto LABEL_9;
      if ( bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 280) + 20LL) & 0x20) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
          v14 = v52;
          v12 = v51;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
          goto LABEL_11;
        }
        v14 = v52;
        v12 = v51;
      }
      if ( *p_iType != 1 || !bAllowShareAccess(v12) )
        goto LABEL_9;
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 108) )
      {
        v14 = v52;
        v12 = v51;
LABEL_9:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x20) != 0 )
        {
          v16 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v12->hdev + 162);
          goto LABEL_11;
        }
        goto LABEL_46;
      }
      v14 = v52;
      v12 = v51;
LABEL_46:
      v16 = EngStrokePath;
LABEL_11:
      if ( !(unsigned int)OffStrokePath(v16, &v53, v12, this, v50, v55, v58, v57, v54, a8) )
        v9 = -1;
LABEL_13:
      if ( v11 )
        this = v11;
      if ( v14 )
        GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
LABEL_17:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v59);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v60);
      if ( v63 )
        PopThreadGuardedObject(v62);
    }
  }
  return v9;
}
