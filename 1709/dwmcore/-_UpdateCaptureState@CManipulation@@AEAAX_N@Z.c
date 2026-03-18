/*
 * XREFs of ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x180171DE8
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180170370 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180171140 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180171400 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180171778 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulation::_UpdateCaptureState(CManipulation *this, unsigned __int8 a2)
{
  if ( *((_DWORD *)this + 105) != 2 )
    *((_DWORD *)this + 105) = a2;
}
