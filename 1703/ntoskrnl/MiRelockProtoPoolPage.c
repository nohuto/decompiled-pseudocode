/*
 * XREFs of MiRelockProtoPoolPage @ 0x14010B17C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiLockOwnedProtoPage @ 0x14010B370 (MiLockOwnedProtoPage.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2)
{
  char v4; // di
  __int64 v5; // rdx

  if ( a2 )
  {
    v4 = MiLockPageInline(a1);
    *a2 = v4;
  }
  else
  {
    v4 = 17;
    MiLockPageAtDpcInline(a1);
  }
  MiAddLockedPageCharge(a1, 1);
  LOBYTE(v5) = v4;
  MiLockOwnedProtoPage(a1, v5);
  return a1;
}
