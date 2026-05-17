/*
 * XREFs of sub_180107C4C @ 0x180107C4C
 * Callers:
 *     sub_1801079B0 @ 0x1801079B0 (sub_1801079B0.c)
 *     sub_180107B08 @ 0x180107B08 (sub_180107B08.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180107C4C(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v9; // rcx

  *a7 = Size + 16;
  if ( a6 < Size + 16 )
    return 3221225507LL;
  v9 = a1 + *(unsigned int *)(a1 + 48);
  *(_WORD *)(v9 + 6) = a2;
  *(_WORD *)(v9 + 4) = Size + 16;
  *(_DWORD *)v9 = -1072627710;
  *(_QWORD *)(v9 + 8) = *a3;
  memmove((void *)(v9 + 16), a4, Size);
  *(_DWORD *)(a1 + 48) += (Size + 23) & 0xFFFFFFF8;
  return 0LL;
}
