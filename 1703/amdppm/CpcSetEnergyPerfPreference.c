/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C0006FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetEnergyPerfPreference(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = a1[14];
  v3 = 255 * a2 / 0x64u;
  if ( *(_BYTE *)(*a1 + 78LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 80LL), v2 + 212, v3);
  else
    return WriteGenAddr(v2 + 212, v3);
}
