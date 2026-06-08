/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C00036A8
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C0021E94 (InitAcpiCpc.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0003568 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00037D4 (WriteGenAddrHidden.c)
 */

char __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  char result; // al

  result = (char)a2;
  if ( *(_BYTE *)(a1 + 78) )
    return WriteGenAddrHidden(*(unsigned int *)(a1 + 80), a2, a3);
  if ( a2 )
    return WriteGenAddr(a2, a3);
  return result;
}
