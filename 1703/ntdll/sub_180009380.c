/*
 * XREFs of sub_180009380 @ 0x180009380
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_1800074BC @ 0x1800074BC (sub_1800074BC.c)
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 *     sub_180008F44 @ 0x180008F44 (sub_180008F44.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 * Callees:
 *     sub_1800093DC @ 0x1800093DC (sub_1800093DC.c)
 */

unsigned __int64 __fastcall sub_180009380(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  int v4; // edi
  unsigned __int64 v5; // rax
  int v6; // eax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_BYTE *)(a1 + 64) & 1;
  while ( v3 )
  {
    v6 = sub_1800093DC(a2, v3);
    if ( v6 < 0 )
    {
      v5 = *(_QWORD *)v3;
    }
    else
    {
      if ( v6 <= 0 )
        return v3;
      v5 = *(_QWORD *)(v3 + 8);
    }
    if ( v4 && v5 )
      v3 ^= v5;
    else
      v3 = v5;
  }
  return v3;
}
