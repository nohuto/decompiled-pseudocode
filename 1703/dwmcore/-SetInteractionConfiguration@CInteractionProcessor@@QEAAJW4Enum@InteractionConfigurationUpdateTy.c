/*
 * XREFs of ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800B2828
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180166AFC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800B3598 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
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
  int v9; // eax
  char v10; // cl
  unsigned int v11; // edx
  int v13; // eax
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // r8

  v7 = a3 - 1;
  if ( !v7 )
  {
    v13 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            (a2 != 0 ? 0xF8 : 0) + a1 + 88);
    v10 = 0;
    v11 = v13;
    if ( v13 < 0 )
      return v11;
    if ( !a2 )
      *(_BYTE *)(a1 + 148) |= 1u;
    goto LABEL_6;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v14 = v8 - 1;
    if ( !v14 )
    {
      v10 = 0;
      v15 = a2 != 0 ? 0xC : 0;
      v11 = 0;
      if ( a4 )
      {
        if ( a5 )
        {
          *(_DWORD *)(v15 + a1 + 320) = *a4;
          goto LABEL_6;
        }
LABEL_31:
        *(_DWORD *)(v15 + a1 + 320) = 0;
        goto LABEL_6;
      }
      if ( !a5 )
        goto LABEL_31;
LABEL_28:
      v11 = -2147024809;
      goto LABEL_6;
    }
    if ( v14 != 1 )
      return (unsigned int)-2147024809;
    v10 = 0;
    v16 = a2 != 0 ? 4 : 0;
    v11 = 0;
    if ( a4 )
    {
      if ( a5 )
      {
        *(_DWORD *)(v16 + a1 + 324) = *a4;
        goto LABEL_6;
      }
    }
    else if ( a5 )
    {
      goto LABEL_28;
    }
    *(_DWORD *)(v16 + a1 + 324) = 0;
    goto LABEL_6;
  }
  v9 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
         a4,
         a5,
         (a2 != 0 ? 0x78 : 0) + a1 + 248);
  v10 = 0;
  v11 = v9;
  if ( v9 < 0 )
    return v11;
  if ( !a2 )
    *(_BYTE *)(a1 + 308) |= 1u;
LABEL_6:
  if ( (v11 & 0x80000000) == 0 && a2 == 1 )
  {
    if ( *(_DWORD *)(a1 + 328) || *(_DWORD *)(a1 + 332) || *(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 392) )
      v10 = 1;
    *(_BYTE *)(a1 + 872) &= ~1u;
    *(_BYTE *)(a1 + 872) |= v10;
  }
  return v11;
}
