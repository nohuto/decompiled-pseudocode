/*
 * XREFs of MiMapDummyPages @ 0x140813A24
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiComputeHash64 @ 0x14008B400 (MiComputeHash64.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // r11

  result = MiReservePtes((__int64)&qword_14036D0A0, 2uLL, a3);
  v4 = result;
  if ( result )
  {
    *(_QWORD *)result = MiMakeValidPte(result, qword_14036CEE0, 536870913);
    if ( MiPteInShadowRange(v4) )
      MiWritePteShadow();
    qword_14036CEE8 = (__int64)(v4 << 25) >> 16;
    qword_14036CEF8 = MiComputeHash64((__int64)(v4 << 25) >> 16);
    v5 = v4 + 8;
    *(_QWORD *)v5 = (v6 ^ (qword_14036CEC8 << 12)) & 0xFFFFFFFFF000LL ^ v6;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow();
    qword_14036CEF0 = (__int64)(v5 << 25) >> 16;
    qword_14036CF00 = MiComputeHash64(qword_14036CEF0);
    return 1LL;
  }
  return result;
}
