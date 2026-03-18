/*
 * XREFs of MiMapDummyPages @ 0x140856878
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiComputeHash64 @ 0x140107500 (MiComputeHash64.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // r11

  result = MiReservePtes((__int64)&qword_140389360, 2uLL, a3);
  v4 = result;
  if ( result )
  {
    *(_QWORD *)result = MiMakeValidPte(result, qword_1403891A0, 536870913);
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    qword_1403891A8 = (__int64)(v4 << 25) >> 16;
    qword_1403891B8 = MiComputeHash64((__int64)(v4 << 25) >> 16);
    v5 = v4 + 8;
    *(_QWORD *)v5 = (v6 ^ (qword_140389188 << 12)) & 0xFFFFFFFFF000LL ^ v6;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    qword_1403891B0 = (__int64)(v5 << 25) >> 16;
    qword_1403891C0 = MiComputeHash64(qword_1403891B0);
    return 1LL;
  }
  return result;
}
