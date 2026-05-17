/*
 * XREFs of sub_18004334C @ 0x18004334C
 * Callers:
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_18008363C @ 0x18008363C (sub_18008363C.c)
 */

bool __fastcall sub_18004334C(__int64 a1, char a2)
{
  bool v2; // bl
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  int v8; // r14d
  int v9; // eax
  unsigned __int64 v10; // rax
  int v11; // esi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 168) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection((__int64)&unk_18015C240);
    v6 = xmmword_18015D100;
    if ( (BYTE8(xmmword_18015D100) & 1) != 0 )
    {
      if ( (_QWORD)xmmword_18015D100 )
        v7 = (unsigned __int64)&xmmword_18015D100 ^ xmmword_18015D100;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = xmmword_18015D100;
    }
    v8 = BYTE8(xmmword_18015D100) & 1;
    if ( !v7 )
      goto LABEL_19;
    do
    {
      v9 = sub_18008363C(v5, v7);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v10 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v10 = *(_QWORD *)v7;
      }
      if ( v8 && v10 )
        v7 ^= v10;
      else
        v7 = v10;
    }
    while ( v7 );
    if ( !v7 )
    {
LABEL_19:
      if ( !a2 )
      {
LABEL_40:
        RtlLeaveCriticalSection((__int64)&unk_18015C240);
        return v2;
      }
      if ( (BYTE8(xmmword_18015D100) & 1) != 0 )
      {
        if ( v6 )
          v6 ^= (unsigned __int64)&xmmword_18015D100;
        else
          v6 = 0LL;
      }
      v11 = BYTE8(xmmword_18015D100) & 1;
      if ( v6 )
      {
        while ( 1 )
        {
          if ( (int)sub_18008363C(v5, v6) < 0 )
          {
            v12 = *(_QWORD *)v6;
            if ( v11 )
            {
              if ( !v12 )
                break;
              v12 ^= v6;
            }
            if ( !v12 )
              break;
          }
          else
          {
            v12 = *(_QWORD *)(v6 + 8);
            if ( v11 )
            {
              if ( !v12 )
                goto LABEL_30;
              v12 ^= v6;
            }
            if ( !v12 )
            {
LABEL_30:
              v2 = 1;
              break;
            }
          }
          v6 = v12;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64)&xmmword_18015D100, v6, v2, v5 + 224);
    }
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v13 = (_QWORD *)qword_18015C218;
    v14 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18015C218 != &qword_18015C210 )
      __fastfail(3u);
    *v14 = &qword_18015C210;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v13;
    *v13 = v14;
    qword_18015C218 = a1 + 64;
    goto LABEL_40;
  }
  return v2;
}
