/*
 * XREFs of MiMapDummyPages @ 0x1408C7D9C
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiComputeHash64 @ 0x14009EF60 (MiComputeHash64.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 */

ULONG_PTR MiMapDummyPages()
{
  ULONG_PTR result; // rax
  __int64 v1; // r9
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r11
  unsigned __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r11

  result = MiReservePtes((__int64)&qword_1403CC5E0, 2u);
  v2 = result;
  if ( result )
  {
    *(_QWORD *)result = MiMakeValidPte(result, qword_1403CC420, 536870913LL, v1);
    if ( MiPteInShadowRange(v2) )
      MiWritePteShadow(v3, v5, v4);
    qword_1403CC428 = (__int64)(v2 << 25) >> 16;
    qword_1403CC438 = MiComputeHash64((__int64)(v2 << 25) >> 16);
    v6 = v2 + 8;
    *(_QWORD *)v6 = (v7 ^ (qword_1403CC408 << 12)) & 0xFFFFFFFFF000LL ^ v7;
    if ( MiPteInShadowRange(v6) )
      MiWritePteShadow(v8, v10, v9);
    qword_1403CC430 = (PVOID)((__int64)(v6 << 25) >> 16);
    qword_1403CC440 = MiComputeHash64((__int64)qword_1403CC430);
    return 1LL;
  }
  return result;
}
