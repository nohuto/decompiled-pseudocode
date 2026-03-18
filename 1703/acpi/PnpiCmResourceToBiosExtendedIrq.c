/*
 * XREFs of PnpiCmResourceToBiosExtendedIrq @ 0x1C00A3A68
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C008B3C0 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00060C4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 */

__int64 __fastcall PnpiCmResourceToBiosExtendedIrq(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v5; // edx
  int v6; // eax
  __int64 i; // rdi
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a3 + 16);
  v6 = 0;
  if ( !v5 )
    return v3 == 0 ? 0xC0000001 : 0;
  for ( i = a3 + 20; *(_BYTE *)i != 2; i += 20LL )
  {
    if ( ++v6 >= v5 )
      return v3 == 0 ? 0xC0000001 : 0;
  }
  *(_DWORD *)(a2 + 5) = *(unsigned __int16 *)(i + 4);
  *(_BYTE *)(a2 + 3) = 0;
  if ( ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a1 + 736), *(_DWORD *)(i + 8), &v9) )
  {
    if ( (*(_BYTE *)(i + 2) & 1) != 0 )
      *(_BYTE *)(a2 + 3) |= 2u;
    if ( (v9 & 2) == 0 )
      goto LABEL_11;
  }
  else if ( (*(_BYTE *)(i + 2) & 1) != 0 )
  {
    *(_BYTE *)(a2 + 3) |= 2u;
    goto LABEL_11;
  }
  *(_BYTE *)(a2 + 3) |= 4u;
LABEL_11:
  if ( *(_BYTE *)(i + 1) == 3 )
    *(_BYTE *)(a2 + 3) |= 8u;
  *(_BYTE *)(a2 + 3) |= 1u;
  *(_BYTE *)i = 0;
  v3 = 1;
  return v3 == 0 ? 0xC0000001 : 0;
}
