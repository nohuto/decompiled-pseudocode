/*
 * XREFs of ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027F120
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x1C00E8340 (EngLineTo.c)
 *     OffLineTo @ 0x1C00E8C40 (OffLineTo.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02589C0 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C027C4B0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027C864 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027C8FC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C0280ED0 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0281BB0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0281FD0 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02824E4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  DHPDEV dhpdev; // rsi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int i; // eax
  struct SURFACE *v16; // rax
  BOOL (__stdcall *v17)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  _DWORD v20[14]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-58h]
  char v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B4h] [rbp-4Ch]
  SURFOBJ *pso; // [rsp+D0h] [rbp-30h]
  RECTL *prclBounds; // [rsp+D8h] [rbp-28h]
  _BYTE v26[64]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v27; // [rsp+120h] [rbp+20h]
  SURFOBJ *v28; // [rsp+128h] [rbp+28h]
  struct _CLIPOBJ *v29; // [rsp+130h] [rbp+30h]
  LONG *v30; // [rsp+138h] [rbp+38h]

  dhpdev = a1->dhpdev;
  v13 = 1;
  v14 = 0;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    v21 = 0LL;
    v22 = 0;
    v23 = 0;
    MULTISURF::vInit((MULTISURF *)v20, a1, a8);
    v13 = EngLineTo(pso, a2, a3, a4, y1, x2, y2, prclBounds, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v20);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v20,
    a3,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v20[0] )
  {
    for ( i = MSURF::bFindSurface((MSURF *)v26, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v26) )
    {
      v16 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v28);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v20, v27, v16);
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x100) != 0 )
        v17 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v27 + 7) + 2952LL);
      else
        v17 = EngLineTo;
      v13 &= OffLineTo(
               (__int64 (__fastcall *)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX))v17,
               v30,
               v28,
               v29,
               a3,
               a4,
               y1,
               x2,
               y2,
               a8,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v20, *((_DWORD *)v27 + 4));
    }
    return v13;
  }
  return v14;
}
