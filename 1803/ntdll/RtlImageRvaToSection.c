/*
 * XREFs of RtlImageRvaToSection @ 0x180010F00
 * Callers:
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     sub_18002B318 @ 0x18002B318 (sub_18002B318.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x18007D1F0 (RtlImageRvaToVa.c)
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageRvaToSection(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // ecx

  v3 = *(unsigned __int16 *)(a1 + 6);
  v4 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v4 + 16) + v6 )
      break;
    v4 += 40LL;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  return v4;
}
