/*
 * XREFs of ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00ED740
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     bSpEnableSprites @ 0x1C00EBB70 (bSpEnableSprites.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025C318 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E544 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260838 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall psoSpCreateSurface(struct _SPRITESTATE *a1, ULONG a2, unsigned int a3, unsigned int a4)
{
  SURFOBJ *v4; // rbx
  HBITMAP Bitmap; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = 0LL;
  if ( !a2 )
    a2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 72LL);
  Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a4, a3), 0, a2, 1u, 0LL);
  if ( Bitmap )
  {
    v4 = EngLockSurface((HSURF)Bitmap);
    v7 = SURFOBJ_TO_SURFACE_NOT_NULL(v4);
    v8 = *(_QWORD *)a1;
    *(_DWORD *)(v7 + 116) |= 0x1000u;
    *(_QWORD *)(v7 + 48) = v8;
  }
  else
  {
    DbgPrint("psoSpCreateSurface: Error allocating sprite bitmap\n");
  }
  return v4;
}
