/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C0007300
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 */

__int64 __fastcall CpcSetEnergyPerfPreference(_QWORD *a1, int a2)
{
  unsigned int v2; // edx
  __int64 result; // rax

  v2 = 255 * a2 / 0x64u;
  result = a1[14] + 212LL;
  if ( *(_BYTE *)(*a1 + 78LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 80LL), result, v2);
  if ( a1[14] != -212LL )
    return WriteGenAddr(a1[14] + 212LL, v2);
  return result;
}
