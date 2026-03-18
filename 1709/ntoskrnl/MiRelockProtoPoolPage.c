/*
 * XREFs of MiRelockProtoPoolPage @ 0x14002E068
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockOwnedProtoPage @ 0x140031B00 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

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
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1, v5, v6, v7) || (unsigned int)MiChargeForLockedPage(v9, 1LL) )
    ++*(_WORD *)(a1 + 32);
  LOBYTE(v8) = v4;
  MiLockOwnedProtoPage(a1, v8);
  return a1;
}
