/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C009D63C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     GreNotifyDirtySprite @ 0x1C009CFC4 (GreNotifyDirtySprite.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C009D444 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C009D48C (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C009EE10 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024DA04 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00267CC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C009D6FC (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00A12EC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C (GreAddLogicalSurfaceToDirtyQueue.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, int a3, __int64 a4)
{
  int v7; // ebp
  int v8; // esi
  unsigned int v9; // edi
  void *v10; // rax

  v7 = 0;
  v8 = 0;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(a2) )
    a3 &= ~1u;
  v9 = 1;
  if ( (a3 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)a2 + 64)) )
  {
    v7 = GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)a2);
    a3 &= ~1u;
  }
  if ( a3 )
  {
    v10 = (void *)UserReferenceDwmApiPort();
    v8 = DwmAsyncDirtySprite(v10, a4);
  }
  if ( v7 < 0 || v8 < 0 )
    return 0;
  return v9;
}
