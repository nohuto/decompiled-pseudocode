/*
 * XREFs of sub_1800FF314 @ 0x1800FF314
 * Callers:
 *     sub_18005E348 @ 0x18005E348 (sub_18005E348.c)
 * Callees:
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_180061D14 @ 0x180061D14 (sub_180061D14.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800FF314(__int64 a1, unsigned __int64 a2)
{
  PVOID SubProcessTag; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int128 *v8; // r8
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v16 = 0uLL;
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  *(_QWORD *)&v16 = SubProcessTag;
  v4 = (__int64)SubProcessTag - qword_18015D338;
  if ( SubProcessTag == (PVOID)qword_18015D338 )
    v4 = *((_QWORD *)&v16 + 1) - qword_18015D340;
  if ( !v4 )
    return 0LL;
  if ( word_18015AA44 )
  {
    v6 = *(_QWORD *)(qword_18015AA38 + 8LL * (unsigned __int16)word_18015AA44 - 8);
    v7 = *(_QWORD *)(v6 + 16) - (_QWORD)SubProcessTag;
    if ( !v7 )
      v7 = *(_QWORD *)(v6 + 24) - *((_QWORD *)&v16 + 1);
    if ( !v7 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a2);
      result = *(unsigned __int16 *)(v6 + 40);
      goto LABEL_17;
    }
  }
  v8 = &v16;
  v9 = 314159LL;
  v10 = 2LL;
  do
  {
    v11 = *(unsigned __int8 *)v8;
    v8 = (__int128 *)((char *)v8 + 8);
    v12 = *((unsigned __int8 *)v8 - 2)
        + 37
        * (*((unsigned __int8 *)v8 - 3)
         + 37
         * (*((unsigned __int8 *)v8 - 4)
          + 37
          * (*((unsigned __int8 *)v8 - 5)
           + 37 * (*((unsigned __int8 *)v8 - 6) + 37 * (*((unsigned __int8 *)v8 - 7) + 37 * (v11 + 37 * v9))))));
    v13 = *((unsigned __int8 *)v8 - 1);
    v9 = v13 + 37 * v12;
    --v10;
  }
  while ( v10 );
  v14 = sub_180061D14((__int64)&Parameter, (__int64)&v16, v13 + 37 * v12);
  if ( v14 )
  {
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), a2);
    result = *(unsigned __int16 *)(v14 + 40);
  }
  else
  {
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    result = sub_180061B10(v15, &v16, v9, a2);
LABEL_17:
    if ( !(_WORD)result )
      return result;
  }
  word_18015AA44 = result;
  return result;
}
