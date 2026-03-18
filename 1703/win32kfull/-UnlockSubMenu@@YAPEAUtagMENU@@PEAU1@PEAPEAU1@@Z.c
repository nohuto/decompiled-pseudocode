/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C0042CB8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0042670 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNFreeItem @ 0x1C0042C60 (MNFreeItem.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C013E394 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 */

struct tagMENU *__fastcall UnlockSubMenu(struct tagMENU *a1, struct tagMENU **a2)
{
  if ( !*a2 )
    return 0LL;
  RemoveParentMenu(a1, a2);
  return (struct tagMENU *)HMAssignmentUnlock(a2);
}
