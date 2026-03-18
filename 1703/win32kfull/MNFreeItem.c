/*
 * XREFs of MNFreeItem @ 0x1C0042C60
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C0042CB8 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042CEC (-FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 */

struct tagMENU *__fastcall MNFreeItem(struct tagMENU *a1, __int64 a2, int a3)
{
  struct tagMENU *result; // rax

  *(_QWORD *)(a2 + 104) = 0LL;
  FreeItemString(a1, (struct tagITEM *)a2);
  result = UnlockSubMenu(a1, (struct tagMENU **)(a2 + 16));
  if ( result )
  {
    if ( a3 )
      return (struct tagMENU *)DestroyMenu(result);
  }
  return result;
}
