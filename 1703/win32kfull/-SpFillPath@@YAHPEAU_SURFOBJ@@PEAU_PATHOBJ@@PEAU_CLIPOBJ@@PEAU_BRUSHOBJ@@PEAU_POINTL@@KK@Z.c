/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0259000
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
 *     OffFillPath @ 0x1C02A43F4 (OffFillPath.c)
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
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _CLIPOBJ *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v24; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v26; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v27; // [rsp+80h] [rbp-80h]
  _QWORD v28[5]; // [rsp+88h] [rbp-78h] BYREF
  struct _PATHOBJ v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _BYTE v31[32]; // [rsp+108h] [rbp+8h] BYREF
  int v32; // [rsp+128h] [rbp+28h]
  __int64 *v33[9]; // [rsp+380h] [rbp+280h] BYREF
  int v34; // [rsp+3C8h] [rbp+2C8h]

  v27 = a4;
  v22 = a1;
  v21 = a3;
  v26 = a5;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v33, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v33, &v22, &v24, &v21) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v29);
      memset(v28, 0, sizeof(v28));
      v10 = v22;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v22);
      if ( v34 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_9;
      }
      if ( !v30 || !EPATHOBJ::bClone((EPATHOBJ *)&v29, (struct EPATHOBJ *)this) )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v29);
        if ( v32 )
          goto LABEL_41;
        goto LABEL_42;
      }
      x = v24.x;
      y = v24.y;
      CLIPOBJ_vOffset(v21, v24.x, v24.y);
      PATHOBJ_vOffset(&v29, x, y);
      hdev = v10->hdev;
      PRECOMPUTE::vInit((__int64)v28, v11, (PDEVOBJ *)&hdev, (__int64)&v29, (__int64)v21, 0LL, 0LL, a6, a7, 1);
      v14 = -y;
      v15 = -x;
      CLIPOBJ_vOffset(v21, v15, v14);
      PATHOBJ_vOffset(&v29, v15, v14);
      if ( v28[4] )
        break;
LABEL_40:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v29);
      if ( v32 )
LABEL_41:
        PopThreadGuardedObject(v31);
LABEL_42:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v33, &v22, &v24, &v21) )
        return v8;
    }
    v9 = this;
    this = &v29;
LABEL_9:
    PATHOBJ_vEnumStart(this);
    v16 = 0LL;
    v23 = 0LL;
    if ( v10
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
    {
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
      v23 = v16;
      GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v23, &v21) )
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
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v16 = v23;
          v10 = v22;
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_34;
        }
        v16 = v23;
        v10 = v22;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v16 = v23;
          v10 = v22;
          goto LABEL_33;
        }
        v16 = v23;
        v10 = v22;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v19 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 163);
LABEL_34:
      if ( !(unsigned int)OffFillPath(v19, &v24, v10, this, v21, v27, v26, a6, a7) )
        v8 = -1;
      goto LABEL_36;
    }
LABEL_33:
    v19 = EngFillPath;
    goto LABEL_34;
  }
  return v8;
}
