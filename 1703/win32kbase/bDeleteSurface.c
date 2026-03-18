/*
 * XREFs of bDeleteSurface @ 0x1C003F890
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     EngDeleteSurface @ 0x1C008D9F0 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00984A8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EF040 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall bDeleteSurface(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = HmgShareLockCheckIgnoreStockBit(a1, 5);
  if ( v3 )
  {
    v1 = SURFREF::bDeleteSurface(&v3, 0LL);
    if ( v3 )
      HmgDecrementShareReferenceCount(v3);
  }
  else
  {
    return 0;
  }
  return v1;
}
