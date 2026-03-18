/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C01D0100
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01CF5C0 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveSwitchWindowInfo(struct tagSwitchWndInfo **a1, __int64 a2, __int64 a3)
{
  struct tagSwitchWndInfo **v3; // rbx

  v3 = &gpswiFirst;
  if ( gpswiFirst )
  {
    do
    {
      if ( *v3 == *a1 )
      {
        *v3 = *(struct tagSwitchWndInfo **)*v3;
        SwitchWndCleanup(a1, a2, a3);
      }
      v3 = (struct tagSwitchWndInfo **)*v3;
    }
    while ( v3 && *v3 );
  }
}
