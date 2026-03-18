/*
 * XREFs of GreReferenceObject @ 0x1C010FDB4
 * Callers:
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C008EB4C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReferenceObject(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = WORD1(a1);
  LOBYTE(v1) = BYTE2(a1) & 0x1F;
  v2 = HmgLock(a1, v1);
  v3 = v2;
  if ( !v2 )
    return 3221225480LL;
  HmgIncrementShareReferenceCount(v2);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  return 0LL;
}
