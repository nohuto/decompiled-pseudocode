/*
 * XREFs of ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C007C488
 * Callers:
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C020D384 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     _SetMenuDefaultItem @ 0x1C007C4B4 (_SetMenuDefaultItem.c)
 */

void __fastcall _SetCloseDefault(struct tagMENU *a1)
{
  if ( !(unsigned int)SetMenuDefaultItem(a1, 61536LL, 0LL) && !(unsigned int)SetMenuDefaultItem(a1, 32864LL, 0LL) )
    SetMenuDefaultItem(a1, 49264LL, 0LL);
}
