/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0003F84
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0004124 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0004340 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0002A68 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0004A9C (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0004BB8 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int InputQueueTypes; // ebx
  __int64 v3; // rsi
  _DWORD v5[10]; // [rsp+20h] [rbp-28h] BYREF

  InputQueueTypes = 0;
  if ( (*((_BYTE *)this + 316) & 1) == 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                        *((CompositionInputObject **)this + 31),
                        (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)v5);
  if ( InputQueueTypes >= 0 )
  {
    DirectComposition::CInteractionConfigurationGroup::ClearConfiguration((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
    if ( !v3 || v5[4] > 1 )
      InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 3LL);
    if ( InputQueueTypes >= 0 )
    {
      if ( !v3 || v5[1] > 1 )
        InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 4LL);
      if ( InputQueueTypes >= 0 && (!v3 || v5[3] > 1) )
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
