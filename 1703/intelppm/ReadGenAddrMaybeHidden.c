/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C00041A4
 * Callers:
 *     InitAcpiCpc @ 0x1C001BC50 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00259D0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0025BC4 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  else
    return ReadGenAddr((__int64)a2);
}
