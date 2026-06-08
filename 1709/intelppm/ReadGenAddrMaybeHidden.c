/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0004368
 * Callers:
 *     InitAcpiCpc @ 0x1C001EEC0 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00291B0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00293A4 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrHidden @ 0x1C00042FC (ReadGenAddrHidden.c)
 *     ReadGenAddr @ 0x1C0007818 (ReadGenAddr.c)
 */

__int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  else
    return ReadGenAddr(a2);
}
