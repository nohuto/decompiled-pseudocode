/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C000456C
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0008130 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0008180 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00081D0 (CpcSetAutonomousMode.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0008200 (CpcSetEnergyPerfPreference.c)
 *     CpcSetTimeWindow @ 0x1C0008240 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0020C30 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C00044C4 (WriteGenAddrHidden.c)
 *     WriteGenAddr @ 0x1C0007D28 (WriteGenAddr.c)
 */

__int64 __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 78) )
    return WriteGenAddrHidden(*(_DWORD *)(a1 + 80), a2, a3);
  else
    return WriteGenAddr(a2, a3);
}
