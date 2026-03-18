/*
 * XREFs of GreReferenceObject @ 0x1C0105B20
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C002683C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C01958E0 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C019590C (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  unsigned int v1; // ebx
  char v3; // [rsp+38h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)&v3, a1);
  v1 = 0;
  if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)&v3) )
    SURFREF::vKeepIt((SURFREF *)&v3);
  else
    v1 = -1073741816;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v3);
  return v1;
}
