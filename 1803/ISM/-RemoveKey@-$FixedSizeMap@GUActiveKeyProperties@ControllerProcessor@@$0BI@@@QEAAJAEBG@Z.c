/*
 * XREFs of ?RemoveKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z @ 0x1800366D8
 * Callers:
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180032AE0 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800351DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z @ 0x18003594C (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::RemoveKey(
        _WORD *a1,
        __int16 *a2)
{
  char v3; // al
  __int16 v4; // cx
  int v5; // r8d
  _WORD *i; // rdx

  v3 = 0;
  v4 = *a2;
  v5 = 0;
  for ( i = a1; *i != v4; i += 2 )
  {
    if ( (unsigned int)++v5 >= 0x18 )
      return v3 == 0 ? 0x80004005 : 0;
  }
  a1[2 * v5] = a1[48];
  v3 = 1;
  return v3 == 0 ? 0x80004005 : 0;
}
