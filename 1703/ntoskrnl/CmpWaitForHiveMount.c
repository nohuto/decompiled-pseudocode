/*
 * XREFs of CmpWaitForHiveMount @ 0x1405CB154
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  char v5; // bl
  __int16 v7; // cx
  _WORD *v8; // r8
  unsigned __int16 v9; // dx
  int v10; // eax
  unsigned __int16 v11; // dx
  __int64 v12; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  bool v16; // zf
  __m128i v17; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v17 = v4;
  v17.m128i_i16[0] = v7;
  if ( !v7 )
    goto LABEL_19;
  v8 = (_WORD *)v17.m128i_i64[1];
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v16 = v7 == 2;
    v7 -= 2;
    v17.m128i_i16[0] = v7;
  }
  while ( !v16 );
  v17.m128i_i64[1] = (__int64)v8;
  if ( v7 )
  {
    v9 = 0;
    do
    {
      if ( v8[v9] == 92 )
        break;
      ++v9;
      v7 -= 2;
    }
    while ( v7 );
    v17.m128i_i16[0] = 2 * v9;
    v10 = CmpHashUnicodeComponent(&v17);
    v11 = 0;
    while ( 1 )
    {
      v12 = 3LL * v11;
      if ( dword_14033C0CC[6 * v11] == v10 )
        break;
      if ( ++v11 >= 7u )
      {
        _interlockedbittestandset(dword_14033C0D0, 2u);
        return 0;
      }
    }
    _interlockedbittestandset(&dword_14033C0D0[6 * v11], 3u);
    _InterlockedAdd(&dword_14033C0D4[6 * v11], 1u);
    v14 = 3LL * v11;
    KeSetEvent((struct _KEVENT *)((char *)&stru_14033BCD0 + 152 * (unsigned int)dword_14033C0C8[6 * v11]), 0, 0);
    v15 = (unsigned int)dword_14033C0C8[2 * v14];
    if ( *(&stru_14033BD00.Header.SignalState + 38 * v15) )
    {
      _interlockedbittestandset(&dword_14033C0D0[2 * v12], 1u);
    }
    else
    {
      *a4 = v15;
      v5 = 1;
      _interlockedbittestandset(&dword_14033C0D0[2 * v14], 5u);
    }
    return v5;
  }
  else
  {
LABEL_19:
    _interlockedbittestandset(dword_14033C0D0, 0);
    return 0;
  }
}
