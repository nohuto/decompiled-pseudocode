/*
 * XREFs of ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0005094
 * Callers:
 *     ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00043A0 (-SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0004774 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00047F4 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0004874 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00051B8 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned int v5; // r10d
  int v7; // eax
  _DWORD *v8; // r11
  _BYTE *v9; // r9
  int v10; // eax
  __int64 v11; // r11
  _BYTE *v12; // r9

  switch ( *a2 )
  {
    case 1:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchConfigurationList(
                             a1,
                             a2,
                             a3,
                             a4);
    case 2:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchpadConfiguration(
                             a1,
                             a2,
                             a3,
                             a4);
    case 3:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdatePenConfigurationList(
                             a1,
                             a2,
                             a3,
                             a4);
    case 4:
      *a4 = 0;
      v10 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
              *(unsigned int *)(a1 + 84),
              (unsigned int)a2[1],
              a3,
              a4);
      *(_DWORD *)(v11 + 84) = v10;
      if ( *v12 != (_BYTE)v5 )
        *(_DWORD *)(v11 + 12) |= 1u;
      break;
    case 5:
      *a4 = 0;
      v7 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
             *(unsigned int *)(a1 + 96),
             (unsigned int)a2[1],
             a3,
             a4);
      v8[23] = -1;
      v8[24] = v7;
      v8[22] = 1;
      if ( *v9 != (_BYTE)v5 )
        v8[3] |= 0x10u;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v5;
}
