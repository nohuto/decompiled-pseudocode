/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C0008F9C
 * Callers:
 *     InitAcpiCpc @ 0x1C0024918 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
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
