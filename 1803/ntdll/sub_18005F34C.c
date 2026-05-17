/*
 * XREFs of sub_18005F34C @ 0x18005F34C
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_18005F2D0 @ 0x18005F2D0 (sub_18005F2D0.c)
 * Callees:
 *     sub_18005F3DC @ 0x18005F3DC (sub_18005F3DC.c)
 *     sub_18005F458 @ 0x18005F458 (sub_18005F458.c)
 */

_BOOL8 __fastcall sub_18005F34C(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = byte_1801190F0[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 224) & 1) != 0 )
  {
    v7 = sub_18005F3DC(a1, byte_1801190F0[v3]);
    if ( a3 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u || (*(_BYTE *)(a1 + 88) & 1) != 0 )
        sub_18005F458(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 224) & 1) == 0;
}
