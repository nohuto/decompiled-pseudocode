/*
 * XREFs of SdbpCheckFromVersion @ 0x14072E234
 * Callers:
 *     SdbpMatchOsVersion @ 0x1405BB4D8 (SdbpMatchOsVersion.c)
 *     SdbpCheckPackageAttributes @ 0x14072C200 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x14072E05C (SdbpCheckAttribute.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SdbpCheckFromVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax
  int v4; // ecx
  unsigned __int64 v5; // r8

  result = 1LL;
  v4 = 48;
  while ( 1 )
  {
    v5 = a1 >> v4;
    if ( (unsigned __int16)(a1 >> v4) != (unsigned __int16)(a2 >> v4) && (_WORD)v5 != 0xFFFF )
      break;
    v4 -= 16;
    if ( v4 < 0 )
      return result;
  }
  return (unsigned __int16)v5 < (unsigned __int16)(a2 >> v4);
}
