/*
 * XREFs of ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F5B4
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0256D9C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0256F00 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0265378 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpCheckForWndobjOverlap(struct _SPRITESTATE *a1, struct _RECTL *a2, struct _RECTL *a3)
{
  TRACKOBJ *i; // rdi
  struct EWNDOBJ *j; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5));
  v13 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
  {
    for ( j = (struct EWNDOBJ *)*((_QWORD *)i + 3); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v12, j, a1);
      if ( (unsigned int)bIntersect((char *)j + 4, a2, v8, v9) || (unsigned int)bIntersect((char *)j + 4, a3, v10, v11) )
        vSpUpdateWndobjOverlap(a1, j);
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v12);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
}
