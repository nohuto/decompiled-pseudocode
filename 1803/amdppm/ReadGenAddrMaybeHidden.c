/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0003678
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C0021E94 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C0022358 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00225B4 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0003518 (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x1C00036DC (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  if ( a2 )
    return ReadGenAddr(a2);
  return result;
}
