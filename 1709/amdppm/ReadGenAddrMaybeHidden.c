/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0008F6C
 * Callers:
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C0024D3C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0024F30 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0008E0C (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x1C0008FD0 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80));
  if ( a2 )
    return ReadGenAddr(a2);
  return result;
}
