/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C0008C48
 * Callers:
 *     InitAcpiCpc @ 0x1C0021788 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  if ( *(_BYTE *)(a1 + 78) )
    WriteGenAddrHidden(*(unsigned int *)(a1 + 80), a2, a3);
  else
    WriteGenAddr(a2, a3);
}
