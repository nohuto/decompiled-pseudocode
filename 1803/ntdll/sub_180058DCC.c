/*
 * XREFs of sub_180058DCC @ 0x180058DCC
 * Callers:
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 *     TpAllocTimer @ 0x180058CD0 (TpAllocTimer.c)
 * Callees:
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 */

__int64 __fastcall sub_180058DCC(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = sub_1800247C8(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    sub_180058E68(*(_QWORD *)(a1 + 144), 1LL);
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_BYTE *)(a1 + 353) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      sub_1800570C8(a1);
    return 0LL;
  }
  return result;
}
