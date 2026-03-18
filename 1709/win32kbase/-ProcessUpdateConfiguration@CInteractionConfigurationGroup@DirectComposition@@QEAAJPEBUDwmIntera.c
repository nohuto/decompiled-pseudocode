/*
 * XREFs of ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0022BBC
 * Callers:
 *     ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0021B00 (-SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00224F8 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0022578 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00225F8 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0022CA0 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v5; // r10d
  int v7; // eax
  __int64 v8; // r11
  _BYTE *v9; // r9

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
      v7 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
             *(unsigned int *)(a1 + 84),
             (unsigned int)a2[1],
             a3,
             a4);
      *(_DWORD *)(v8 + 84) = v7;
      if ( *v9 != (_BYTE)v5 )
        *(_DWORD *)(v8 + 12) |= 1u;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v5;
}
