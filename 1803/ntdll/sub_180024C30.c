/*
 * XREFs of sub_180024C30 @ 0x180024C30
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 *     sub_18004ABB4 @ 0x18004ABB4 (sub_18004ABB4.c)
 * Callees:
 *     sub_18004ABB4 @ 0x18004ABB4 (sub_18004ABB4.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall sub_180024C30(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  int v7; // edx
  unsigned int v8; // esi

  v4 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v7 = 0;
    if ( a4 )
    {
      while ( (a2[10] & 1) != 0 )
      {
        _mm_pause();
        if ( ++v7 >= a4 )
          goto LABEL_3;
      }
      return 0LL;
    }
  }
LABEL_3:
  if ( !_interlockedbittestandreset(a2 + 10, 0) )
    return 0LL;
  v8 = ZwWaitForAlertByThreadId(*(_QWORD *)a2, a3);
  if ( v8 == 258 )
  {
    if ( _InterlockedExchange(a2 + 10, 4) == 2 )
      v8 = ZwWaitForAlertByThreadId(*(_QWORD *)a2, 0LL);
    else
      sub_18004ABB4(a1, a2);
  }
  if ( v8 != 257 )
    return v8;
  return v4;
}
