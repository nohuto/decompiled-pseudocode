/*
 * XREFs of ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180171778
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x180171140 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x180171400 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x18016D200 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x180171DE8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

void __fastcall CManipulation::_ResetManipulationThreadDataIfNecessary(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = *(_DWORD *)(a1 + 228);
  v3 = a2;
  if ( a2 != v2 )
  {
    if ( (*(_BYTE *)(a1 + 416) & 4) != 0 )
      goto LABEL_7;
    if ( (unsigned int)(v2 - 2) <= 2 && (unsigned int)(a2 - 2) > 2 )
      CManipulation::_UpdateCaptureState((CManipulation *)a1, 0);
    if ( (*(_BYTE *)(a1 + 416) & 4) != 0 )
    {
LABEL_7:
      if ( (unsigned int)(*(_DWORD *)(a1 + 228) - 2) > 2 && (unsigned int)(v3 - 2) <= 2 )
        ManipulationData::Reset((ManipulationData *)(a1 + 72));
    }
  }
}
