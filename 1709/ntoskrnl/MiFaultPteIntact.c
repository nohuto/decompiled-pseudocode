/*
 * XREFs of MiFaultPteIntact @ 0x140126DB4
 * Callers:
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiFaultPteIntact(unsigned __int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rcx

  result = 1;
  if ( (a1 & 0x400) == 0 )
  {
    if ( !a1 || (a1 & 0x800) == 0 && (a1 & 0x3E0) == 0 )
      return 0;
    v2 = (a1 >> 5) & 0x1F;
    if ( v2 == 24 || v2 == 31 )
      return 0;
  }
  return result;
}
