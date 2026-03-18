/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02805B0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0011110 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02589C0 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C027C4B0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C027C58C (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027C6F0 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C027C734 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027C864 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027C8FC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0280ED0 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0281BB0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0281FD0 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffTextOut @ 0x1C02A0F28 (OffTextOut.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *prclExtra,
        struct _RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  DHPDEV dhpdev; // rdi
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // r14
  RECTL *p_rclBkGround; // rcx
  struct _RECTL v19; // xmm6
  __int64 v20; // rdi
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  __int64 v23; // rcx
  BOOL (__stdcall *v24)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  ULONG cGlyphs; // [rsp+68h] [rbp-A0h]
  RECTL *v27; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-58h]
  _DWORD v31[16]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v32[64]; // [rsp+F8h] [rbp-10h] BYREF
  struct _DISPSURF *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  __int64 v35; // [rsp+148h] [rbp+40h]
  __int64 v36; // [rsp+150h] [rbp+48h]
  _DWORD v37[24]; // [rsp+168h] [rbp+60h] BYREF
  SURFOBJ *pso; // [rsp+1C8h] [rbp+C0h]

  dhpdev = a1->dhpdev;
  v15 = 1;
  v16 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v37, a1);
    v15 = EngTextOut(pso, pstro, a3, a4, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v37);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v31,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v31[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v37,
      pboOpaque,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v37[0] )
    {
      MULTIFONT::MULTIFONT((MULTIFONT *)&v29, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
      v17 = v30;
      if ( v30 )
      {
        p_rclBkGround = prclOpaque;
        if ( !prclOpaque )
          p_rclBkGround = &pstro->rclBkGround;
        v27 = p_rclBkGround;
        cGlyphs = pstro[1].cGlyphs;
        v19 = *p_rclBkGround;
        if ( (unsigned int)MSURF::bFindSurface((MSURF *)v32, a1, a4, p_rclBkGround) )
        {
          v20 = v29;
          do
          {
            *(_QWORD *)&pstro[1].cGlyphs = 0LL;
            if ( v20 )
              *(_QWORD *)(v20 + 48) = *(_QWORD *)(v17 + 8LL * *((int *)v33 + 4) + 8);
            v21 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v34);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v31, v33, v21);
            v22 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v34);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v37, v33, v22);
            v23 = v34;
            pstro[1].cGlyphs = cGlyphs;
            *v27 = v19;
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 8) != 0 )
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v33 + 7) + 2888LL);
            else
              v24 = EngTextOut;
            v15 &= OffTextOut(v24, v36, v34, pstro, a3, v35, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v31, *((_DWORD *)v33 + 4));
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v37, *((_DWORD *)v33 + 4));
            if ( v20 )
              *(_QWORD *)(v17 + 8LL * *((int *)v33 + 4) + 8) = *(_QWORD *)(v20 + 48);
          }
          while ( (unsigned int)MSURF::bNextSurface((MSURF *)v32) );
        }
        v16 = v15;
      }
      MULTIFONT::~MULTIFONT((MULTIFONT *)&v29);
    }
  }
  return v16;
}
