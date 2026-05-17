/*
 * XREFs of sub_180012010 @ 0x180012010
 * Callers:
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180074240 @ 0x180074240 (sub_180074240.c)
 * Callees:
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 */

__int64 __fastcall sub_180012010(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // edi
  __int64 v6; // rax

  v4 = a2;
  v6 = sub_180012820(a1, a2);
  return sub_180012070(
           a1,
           v6,
           (v4
          - ((unsigned int)v6 & *(_DWORD *)a1)
          - (unsigned int)((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8))) >> 12,
           a3 >> 12);
}
