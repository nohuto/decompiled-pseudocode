/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C013DEB0
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01CB204 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveSwitchWindowInfo(struct tagSwitchWndInfo **a1)
{
  struct tagSwitchWndInfo **v1; // rbx

  v1 = &gpswiFirst;
  if ( gpswiFirst )
  {
    do
    {
      if ( *v1 == *a1 )
      {
        *v1 = *(struct tagSwitchWndInfo **)*v1;
        SwitchWndCleanup(a1);
      }
      v1 = (struct tagSwitchWndInfo **)*v1;
    }
    while ( v1 && *v1 );
  }
}
