/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C0004430
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0003568 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00037D4 (WriteGenAddrHidden.c)
 */

char __fastcall CpcSetEnergyPerfPreference(_QWORD *a1, int a2)
{
  unsigned int v2; // edx
  _BYTE *v3; // rax

  v2 = 255 * a2 / 0x64u;
  v3 = (_BYTE *)(a1[14] + 212LL);
  if ( *(_BYTE *)(*a1 + 78LL) )
  {
    LOBYTE(v3) = WriteGenAddrHidden(*(_DWORD *)(*a1 + 80LL), v3, v2);
  }
  else if ( a1[14] != -212LL )
  {
    LOBYTE(v3) = WriteGenAddr((_BYTE *)(a1[14] + 212LL), v2);
  }
  return (char)v3;
}
