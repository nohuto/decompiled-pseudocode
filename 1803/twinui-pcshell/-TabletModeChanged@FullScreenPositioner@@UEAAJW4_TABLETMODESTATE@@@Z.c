/*
 * XREFs of ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18014E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z @ 0x18014DA94 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::TabletModeChanged(__int64 a1, int a2)
{
  bool v2; // zf
  FullScreenPositionerHelpers *v3; // rdx

  if ( *(_DWORD *)(a1 + 92) )
  {
    v2 = a2 == 1;
    v3 = *(FullScreenPositionerHelpers **)(a1 + 56);
    *(_BYTE *)(a1 + 152) = v2;
    if ( v3 )
      FullScreenPositioner::PositionView(a1 - 128, v3, 0);
  }
  return 0LL;
}
