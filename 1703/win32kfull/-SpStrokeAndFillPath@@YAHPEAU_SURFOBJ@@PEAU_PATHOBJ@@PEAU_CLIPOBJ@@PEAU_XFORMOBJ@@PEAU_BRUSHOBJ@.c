/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0259B30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00A732C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00A7354 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0121E60 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0123498 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C01247F8 (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C01257C4 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01258A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     OffStrokeAndFillPath @ 0x1C02A46D0 (OffStrokeAndFillPath.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v11; // r13d
  struct _PATHOBJ *v12; // r15
  struct _SURFOBJ *v13; // rsi
  SURFACE *v14; // r12
  LONG x; // ebx
  LONG y; // edi
  LONG v17; // edi
  LONG v18; // ebx
  __int64 v19; // rbx
  USHORT *p_iType; // rdi
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v22)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _CLIPOBJ *v24; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v27; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v28; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v29; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v31; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v32; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v33; // [rsp+A8h] [rbp-58h]
  _QWORD v34[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PATHOBJ v35; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-18h]
  _BYTE v37[32]; // [rsp+138h] [rbp+38h] BYREF
  int v38; // [rsp+158h] [rbp+58h]
  __int64 *v39[9]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v40; // [rsp+3F8h] [rbp+2F8h]

  v33 = a5;
  v28 = a6;
  v11 = 1;
  v32 = a7;
  v29 = a4;
  v25 = a1;
  v31 = a8;
  v24 = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v39, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v39, &v25, &v27, &v24) )
  {
    v12 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
    memset(v34, 0, 0x28uLL);
    v13 = v25;
    v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v25);
    if ( v40 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap(v14) )
    {
      if ( v36 && EPATHOBJ::bClone((EPATHOBJ *)&v35, (struct EPATHOBJ *)this) )
      {
        x = v27.x;
        y = v27.y;
        CLIPOBJ_vOffset(v24, v27.x, v27.y);
        PATHOBJ_vOffset(&v35, x, y);
        hdev = v13->hdev;
        PRECOMPUTE::vInit((__int64)v34, v14, (PDEVOBJ *)&hdev, (__int64)&v35, (__int64)v24, v29, v28, a9, a10, 2);
        v17 = -y;
        v18 = -x;
        CLIPOBJ_vOffset(v24, v18, v17);
        PATHOBJ_vOffset(&v35, v18, v17);
        if ( !v34[4] )
          goto LABEL_20;
        v12 = this;
        this = &v35;
        goto LABEL_10;
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v35);
      if ( v38 )
        goto LABEL_49;
    }
    else
    {
LABEL_10:
      PATHOBJ_vEnumStart(this);
      v19 = 0LL;
      v26 = 0LL;
      if ( v13
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
      {
        v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
        v26 = v19;
        GreLockDisplayDevice(*(_QWORD *)(v19 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v26, &v24) )
      {
        p_iType = &v13->iType;
        if ( v13->iType != 1 )
          goto LABEL_53;
        if ( !bAllowShareAccess(v13) )
          goto LABEL_34;
        if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
          || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x80u) == 0 )
        {
          v19 = v26;
          v13 = v25;
LABEL_34:
          if ( *p_iType == 1 && bAllowShareAccess(v13) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v19 = v26;
              v13 = v25;
LABEL_41:
              v22 = EngStrokeAndFillPath;
              goto LABEL_42;
            }
            v19 = v26;
            v13 = v25;
          }
LABEL_53:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x80u) != 0 )
          {
            v22 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v13->hdev + 161);
            goto LABEL_42;
          }
          goto LABEL_41;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v19 = v26;
        v13 = v25;
        v22 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
LABEL_42:
        if ( !(unsigned int)OffStrokeAndFillPath(v22, &v27, v13, this, v24, v29, v33, v28, v32, v31, a9, a10) )
          v11 = -1;
        if ( v12 )
          this = v12;
        if ( v19 )
          GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v35);
        if ( v38 )
LABEL_49:
          PopThreadGuardedObject(v37);
      }
      else
      {
        if ( v12 )
          this = v12;
        if ( v19 )
          GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
LABEL_20:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v35);
        if ( v38 )
          PopThreadGuardedObject(v37);
      }
    }
  }
  return v11;
}
