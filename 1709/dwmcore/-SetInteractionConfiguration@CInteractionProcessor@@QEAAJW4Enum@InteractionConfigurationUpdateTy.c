/*
 * XREFs of ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180092008
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801695CC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800BBF4C (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 */

__int64 __fastcall CInteractionProcessor::SetInteractionConfiguration(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        unsigned int a5)
{
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  unsigned int v12; // edx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8

  v7 = a3 - 1;
  if ( !v7 )
  {
    v15 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 528LL : 88LL));
    v11 = 0;
    v12 = v15;
    if ( v15 < 0 )
      return v12;
    if ( !a2 )
      *(_BYTE *)(a1 + 148) |= 1u;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 560LL : 248LL));
    v11 = 0;
    v12 = v14;
    if ( v14 < 0 )
      return v12;
    if ( !a2 )
      *(_BYTE *)(a1 + 308) |= 1u;
    goto LABEL_7;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return (unsigned int)-2147024809;
    v11 = 0;
    v16 = a2 != 0 ? 8 : 0;
    v12 = 0;
    if ( a4 )
    {
      if ( a5 )
      {
        *(_DWORD *)(v16 + a1 + 480) = *a4;
        goto LABEL_7;
      }
    }
    else if ( a5 )
    {
      v12 = -2147024809;
      goto LABEL_7;
    }
    *(_DWORD *)(v16 + a1 + 480) = 0;
    goto LABEL_7;
  }
  v10 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
          a4,
          a5,
          a1 + (a2 != 0 ? 496LL : 408LL));
  v11 = 0;
  v12 = v10;
  if ( v10 < 0 )
    return v12;
  if ( !a2 )
    *(_BYTE *)(a1 + 468) |= 1u;
LABEL_7:
  if ( (v12 & 0x80000000) == 0 && a2 == 1 )
  {
    if ( *(_DWORD *)(a1 + 488) || *(_DWORD *)(a1 + 520) || *(_DWORD *)(a1 + 552) || *(_DWORD *)(a1 + 584) )
      v11 = 1;
    *(_BYTE *)(a1 + 1064) &= ~1u;
    *(_BYTE *)(a1 + 1064) |= v11;
  }
  return v12;
}
