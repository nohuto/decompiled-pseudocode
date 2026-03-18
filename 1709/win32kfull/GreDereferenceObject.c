/*
 * XREFs of GreDereferenceObject @ 0x1C00E3F0C
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002DBD0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002DC00 (UntrapAppContainerRenderingWrap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C008EB10 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0099668 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDereferenceObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // bl
  __int64 v5; // rsi
  __int64 v6; // rax

  v2 = a2;
  if ( (a1 & 0x800000) != 0 )
    return 0LL;
  v4 = BYTE2(a1) & 0x1F;
  LOBYTE(a2) = BYTE2(a1) & 0x1F;
  v5 = HmgLock(a1, a2);
  if ( v5 )
  {
    v6 = HmgShareUnlockRemoveObject(a1, 1LL, 0LL, v2, BYTE2(a1) & 0x1F);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    if ( v6 )
    {
      if ( v4 == 5 )
        return (unsigned int)SURFACE::bDeleteSurface(v5, 0LL, 1LL) == 0 ? 0xC0000001 : 0;
      return 3221225480LL;
    }
    return 0LL;
  }
  return 3221225480LL;
}
