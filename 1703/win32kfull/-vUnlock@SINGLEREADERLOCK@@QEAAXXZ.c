/*
 * XREFs of ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02661D0
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01182A0 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0257CEC (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0263810 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0263F3C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SINGLEREADERLOCK::vUnlock(struct _KMUTANT **this)
{
  struct _KMUTANT *v1; // r8

  v1 = *this;
  if ( *this && this[1] == (struct _KMUTANT *)KeGetCurrentThread() )
  {
    if ( (*((_DWORD *)this + 4))-- == 1 )
      this[1] = 0LL;
    KeReleaseMutex(v1, 0);
  }
}
