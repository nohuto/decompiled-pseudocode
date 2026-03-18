/*
 * XREFs of bDeleteSurface @ 0x1C001F690
 * Callers:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSurface @ 0x1C0094E80 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00A2590 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F1CF0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0051670 (HmgShareLockCheckIgnoreStockBit.c)
 */

__int64 __fastcall bDeleteSurface(struct HOBJ__ *a1)
{
  __int64 v1; // rax
  struct OBJECT *v2; // rbx
  unsigned int v3; // edi

  v1 = HmgShareLockCheckIgnoreStockBit(a1);
  v2 = (struct OBJECT *)v1;
  if ( v1 )
  {
    v3 = SURFACE::bDeleteSurface(v1, 0LL, 0LL);
    if ( v3 )
      v2 = 0LL;
    if ( v2 )
      HmgDecrementShareReferenceCountEx(v2);
  }
  else
  {
    return 0;
  }
  return v3;
}
