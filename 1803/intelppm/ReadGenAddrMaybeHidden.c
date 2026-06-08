/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0004408
 * Callers:
 *     InitAcpiCpc @ 0x1C0020C30 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002A294 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002A4F0 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrHidden @ 0x1C000439C (ReadGenAddrHidden.c)
 *     ReadGenAddr @ 0x1C0007BBC (ReadGenAddr.c)
 */

__int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  else
    return ReadGenAddr(a2);
}
