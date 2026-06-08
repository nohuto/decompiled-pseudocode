/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C00042FC
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0007AB0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0007B00 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0007B40 (CpcSetAutonomousMode.c)
 *     CpcSetEnergyPerfPreference @ 0x1C0007B70 (CpcSetEnergyPerfPreference.c)
 *     CpcSetTimeWindow @ 0x1C0007BA0 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C001BC50 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 78) )
    WriteGenAddrHidden(*(_DWORD *)(a1 + 80), a2, a3);
  else
    WriteGenAddr(a2, a3);
}
