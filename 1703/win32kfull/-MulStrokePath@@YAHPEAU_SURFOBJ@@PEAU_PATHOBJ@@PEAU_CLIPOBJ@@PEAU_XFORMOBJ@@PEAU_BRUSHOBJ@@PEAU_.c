/*
 * XREFs of ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02836D0
 * Callers:
 *     <none>
 * Callees:
 *     OffStrokePath @ 0x1C0121D54 (OffStrokePath.c)
 *     EngStrokePath @ 0x1C0126EF0 (EngStrokePath.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C0256EB0 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C027F980 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027FBC0 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027FD34 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027FDCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0284350 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C028503C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0285464 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  DHPDEV dhpdev; // r14
  unsigned int v11; // esi
  FLOAT_LONG v12; // ebx
  unsigned int v13; // edi
  int i; // eax
  SURFOBJ *v15; // rcx
  struct SURFACE *v16; // rax
  BOOL (__stdcall *v17)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  _BYTE v21[64]; // [rsp+70h] [rbp-90h] BYREF
  struct _DISPSURF *v22; // [rsp+B0h] [rbp-50h]
  SURFOBJ *v23; // [rsp+B8h] [rbp-48h]
  CLIPOBJ *v24; // [rsp+C0h] [rbp-40h]
  int *v25; // [rsp+C8h] [rbp-38h]
  _DWORD v26[24]; // [rsp+E0h] [rbp-20h] BYREF
  SURFOBJ *pso; // [rsp+140h] [rbp+40h]
  struct _RECTFX prectfx; // [rsp+150h] [rbp+50h] BYREF
  struct _RECTL v29; // [rsp+160h] [rbp+60h] BYREF

  dhpdev = a1->dhpdev;
  v11 = 1;
  LODWORD(v12.e) = plineattrs->elStyleState;
  v13 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v26, a1);
    v11 = EngStrokePath(pso, ppo, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v26);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v26,
    pbo,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v26[0] )
  {
    PATHOBJ_vGetBounds(ppo, &prectfx);
    v29.left = prectfx.xLeft >> 4;
    v29.top = prectfx.yTop >> 4;
    v29.right = (prectfx.xRight >> 4) + 2;
    v29.bottom = (prectfx.yBottom >> 4) + 2;
    for ( i = MSURF::bFindSurface((MSURF *)v21, a1, a3, &v29); i; i = MSURF::bNextSurface((MSURF *)v21) )
    {
      PATHOBJ_vEnumStart(ppo);
      v15 = v23;
      plineattrs->elStyleState = v12;
      v16 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v15);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v26, v22, v16);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x20) != 0 )
        v17 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)v22 + 7) + 2816LL);
      else
        v17 = EngStrokePath;
      v11 &= OffStrokePath(
               (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))v17,
               v25,
               v23,
               ppo,
               v24,
               a4,
               pbo,
               pptlBrushOrg,
               plineattrs,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v26, *((_DWORD *)v22 + 4));
    }
    return v11;
  }
  return v13;
}
