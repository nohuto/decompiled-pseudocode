/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C00044CC
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0007D60 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0007DB0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0007E00 (CpcSetAutonomousMode.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0007E30 (CpcSetEnergyPerfPreference.c)
 *     CpcSetTimeWindow @ 0x1C0007E70 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C001EEC0 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C0004424 (WriteGenAddrHidden.c)
 *     WriteGenAddr @ 0x1C0007984 (WriteGenAddr.c)
 */

__int64 __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 78) )
    return WriteGenAddrHidden(*(_DWORD *)(a1 + 80), a2, a3);
  else
    return WriteGenAddr(a2, a3);
}
