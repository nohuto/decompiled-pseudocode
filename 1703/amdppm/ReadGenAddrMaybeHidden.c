/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0008C2C
 * Callers:
 *     InitAcpiCpc @ 0x1C0021788 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C0021BA4 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0021D98 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80));
  else
    return ReadGenAddr(a2);
}
