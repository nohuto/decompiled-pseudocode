/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C00220BC
 * Callers:
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0021AD0 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0022274 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0021890 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0022678 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0022794 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int InputQueueTypes; // ebx
  CompositionInputObject *v3; // rcx
  char v4; // si
  _DWORD v6[10]; // [rsp+20h] [rbp-28h] BYREF

  InputQueueTypes = 0;
  if ( (*((_BYTE *)this + 280) & 1) == 0 )
    return 0LL;
  v3 = (CompositionInputObject *)*((_QWORD *)this + 27);
  v4 = 0;
  if ( v3 )
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(v3, (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)v6);
  else
    v4 = 1;
  if ( InputQueueTypes >= 0 )
  {
    DirectComposition::CInteractionConfigurationGroup::ClearConfiguration((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
    if ( v4 || v6[4] > 1 )
      InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 3LL);
    if ( InputQueueTypes >= 0 )
    {
      if ( v4 || v6[1] > 1 )
        InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 4LL);
      if ( InputQueueTypes >= 0 && (v4 || v6[3] > 1) )
      {
        InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 1LL);
        if ( InputQueueTypes >= 0 )
          InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll(
                              (char *)this + 40,
                              2LL);
      }
    }
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return (unsigned int)InputQueueTypes;
}
