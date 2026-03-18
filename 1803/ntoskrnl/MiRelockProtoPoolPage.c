/*
 * XREFs of MiRelockProtoPoolPage @ 0x140059A10
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiLockOwnedProtoPage @ 0x1400322A0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // di
  __int64 v5; // r8
  __int64 v6; // r9

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
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(a1, 1, v5, v6) )
    ++*(_WORD *)(a1 + 32);
  MiLockOwnedProtoPage(a1, v4);
  return a1;
}
