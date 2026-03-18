/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C025A130
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
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0136BA0 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0136BC0 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     OffFillPath @ 0x1C02A0AD4 (OffFillPath.c)
 */

__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r12d
  struct _PATHOBJ *v9; // rdi
  struct _SURFOBJ *v10; // rsi
  SURFACE *v11; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v14; // edi
  LONG v15; // ebx
  __int64 v16; // rbx
  USHORT *p_iType; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v34)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct _CLIPOBJ *v48; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v49; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v51; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v53; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v54; // [rsp+80h] [rbp-80h]
  _QWORD v55[5]; // [rsp+88h] [rbp-78h] BYREF
  struct _PATHOBJ v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-48h]
  _BYTE v58[32]; // [rsp+108h] [rbp+8h] BYREF
  int v59; // [rsp+128h] [rbp+28h]
  __int64 *v60[9]; // [rsp+380h] [rbp+280h] BYREF
  int v61; // [rsp+3C8h] [rbp+2C8h]

  v54 = a4;
  v49 = a1;
  v48 = a3;
  v53 = a5;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v60, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v60, &v49, &v51, &v48) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v56);
      memset(v55, 0, sizeof(v55));
      v10 = v49;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v49);
      if ( v61 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_9;
      }
      if ( !v57 || !EPATHOBJ::bClone((EPATHOBJ *)&v56, (struct EPATHOBJ *)this) )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v55);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v56);
        if ( v59 )
          goto LABEL_41;
        goto LABEL_42;
      }
      x = v51.x;
      y = v51.y;
      CLIPOBJ_vOffset(v48, v51.x, v51.y);
      PATHOBJ_vOffset(&v56, x, y);
      hdev = v10->hdev;
      PRECOMPUTE::vInit((__int64)v55, v11, (PDEVOBJ *)&hdev, (__int64)&v56, (__int64)v48, 0LL, 0LL, a6, a7, 1);
      v14 = -y;
      v15 = -x;
      CLIPOBJ_vOffset(v48, v15, v14);
      PATHOBJ_vOffset(&v56, v15, v14);
      if ( v55[4] )
        break;
LABEL_40:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v55);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v56);
      if ( v59 )
LABEL_41:
        PopThreadGuardedObject(v58);
LABEL_42:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v60, &v49, &v51, &v48) )
        return v8;
    }
    v9 = this;
    this = &v56;
LABEL_9:
    PATHOBJ_vEnumStart(this);
    v16 = 0LL;
    v50 = 0LL;
    if ( v10
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
    {
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
      v50 = v16;
      GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v50, &v48) )
    {
LABEL_36:
      if ( v9 )
        this = v9;
      if ( v16 )
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
      goto LABEL_40;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32);
          v16 = v50;
          v10 = v49;
          v34 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_34;
        }
        v16 = v50;
        v10 = v49;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 108)) )
        {
          v16 = v50;
          v10 = v49;
          goto LABEL_33;
        }
        v16 = v50;
        v10 = v49;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v34 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 163);
LABEL_34:
      if ( !(unsigned int)OffFillPath(v34, &v51, v10, this, v48, v54, v53, a6, a7) )
        v8 = -1;
      goto LABEL_36;
    }
LABEL_33:
    v34 = EngFillPath;
    goto LABEL_34;
  }
  return v8;
}
