/*
 * XREFs of ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C00C2770
 * Callers:
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C020BDE4 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     _SetMenuDefaultItem @ 0x1C00C279C (_SetMenuDefaultItem.c)
 */

void __fastcall _SetCloseDefault(struct tagMENU *a1)
{
  if ( !(unsigned int)SetMenuDefaultItem(a1, 61536LL, 0LL) && !(unsigned int)SetMenuDefaultItem(a1, 32864LL, 0LL) )
    SetMenuDefaultItem(a1, 49264LL, 0LL);
}
