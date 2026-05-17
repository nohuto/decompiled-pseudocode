/*
 * XREFs of sub_18002C268 @ 0x18002C268
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_1800404E8 @ 0x1800404E8 (sub_1800404E8.c)
 */

void __fastcall sub_18002C268(__int64 a1)
{
  int v2; // eax
  char *v3; // rcx
  char *v4; // rax
  char **v5; // rdx
  bool v6; // zf
  __int64 *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 264);
    if ( !v2 )
    {
      v2 = sub_1800404E8(a1 + 88);
      *(_DWORD *)(a1 + 264) = v2;
    }
    v3 = (char *)(a1 + 112);
    v4 = (char *)&unk_18015BFC0 + 16 * (v2 & 0x1F);
    v5 = (char **)*((_QWORD *)v4 + 1);
    if ( *v5 != v4 )
      __fastfail(3u);
    v6 = a1 == qword_18015BF88;
    *(_QWORD *)v3 = v4;
    *(_QWORD *)(a1 + 120) = v5;
    *v5 = v3;
    *((_QWORD *)v4 + 1) = v3;
    if ( v6 )
    {
      v10 = qword_18015C370;
      if ( *(__int64 **)(qword_18015C370 + 8) != &qword_18015C370 )
        __fastfail(3u);
      *(_QWORD *)a1 = qword_18015C370;
      *(_QWORD *)(a1 + 8) = &qword_18015C370;
      v11 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(v10 + 8) = a1;
      v12 = qword_18015C380;
      qword_18015C370 = a1;
      if ( *(__int64 **)(qword_18015C380 + 8) != &qword_18015C380 )
        __fastfail(3u);
      *v11 = qword_18015C380;
      *(_QWORD *)(a1 + 24) = &qword_18015C380;
      *(_QWORD *)(v12 + 8) = v11;
      qword_18015C380 = a1 + 16;
    }
    else
    {
      v7 = (__int64 *)qword_18015C378;
      if ( *(__int64 **)qword_18015C378 != &qword_18015C370 )
        __fastfail(3u);
      *(_QWORD *)a1 = &qword_18015C370;
      v8 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v7;
      *v7 = a1;
      v9 = (_QWORD *)qword_18015C388;
      qword_18015C378 = a1;
      if ( *(__int64 **)qword_18015C388 != &qword_18015C380 )
        __fastfail(3u);
      *v8 = &qword_18015C380;
      *(_QWORD *)(a1 + 24) = v9;
      *v9 = v8;
      qword_18015C388 = a1 + 16;
    }
    *(_DWORD *)(a1 + 104) |= 0x40u;
  }
}
