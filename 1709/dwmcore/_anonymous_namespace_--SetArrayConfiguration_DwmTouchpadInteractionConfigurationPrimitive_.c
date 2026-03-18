/*
 * XREFs of _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800BBF4C
 * Callers:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180092008 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800BBFB0 (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 */

__int64 __fastcall anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // edi

  if ( !a1 && a2 )
  {
    v6 = -2147024809;
    goto LABEL_6;
  }
  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 0xCu);
  v6 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a3, a1, a2);
  if ( v6 < 0 )
  {
LABEL_6:
    *(_DWORD *)(a3 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(a3, 0xCu);
  }
  return (unsigned int)v6;
}
