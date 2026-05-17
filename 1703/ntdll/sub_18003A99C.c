/*
 * XREFs of sub_18003A99C @ 0x18003A99C
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18003C6D0 @ 0x18003C6D0 (sub_18003C6D0.c)
 */

void __fastcall sub_18003A99C(__int64 a1)
{
  int v2; // eax
  char *v3; // rdx
  char *v4; // rcx
  char **v5; // rax
  bool v6; // zf
  __int64 *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    v2 = sub_18003C6D0(a1 + 88);
    *(_DWORD *)(a1 + 264) = v2;
    v3 = (char *)(a1 + 112);
    v4 = (char *)&unk_18015AFA0 + 16 * (v2 & 0x1F);
    v5 = (char **)*((_QWORD *)v4 + 1);
    if ( *v5 != v4 )
      __fastfail(3u);
    v6 = a1 == qword_18015AE50;
    *(_QWORD *)(a1 + 120) = v5;
    *(_QWORD *)v3 = v4;
    *v5 = v3;
    *((_QWORD *)v4 + 1) = v3;
    if ( v6 )
    {
      v10 = qword_18015B350;
      if ( *(__int64 **)(qword_18015B350 + 8) != &qword_18015B350 )
        __fastfail(3u);
      *(_QWORD *)a1 = qword_18015B350;
      *(_QWORD *)(a1 + 8) = &qword_18015B350;
      v11 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(v10 + 8) = a1;
      v12 = qword_18015B360;
      qword_18015B350 = a1;
      if ( *(__int64 **)(qword_18015B360 + 8) != &qword_18015B360 )
        __fastfail(3u);
      *v11 = qword_18015B360;
      *(_QWORD *)(a1 + 24) = &qword_18015B360;
      *(_QWORD *)(v12 + 8) = v11;
      qword_18015B360 = a1 + 16;
    }
    else
    {
      v7 = (__int64 *)qword_18015B358;
      if ( *(__int64 **)qword_18015B358 != &qword_18015B350 )
        __fastfail(3u);
      *(_QWORD *)a1 = &qword_18015B350;
      v8 = (_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v7;
      *v7 = a1;
      v9 = (_QWORD *)qword_18015B368;
      qword_18015B358 = a1;
      if ( *(__int64 **)qword_18015B368 != &qword_18015B360 )
        __fastfail(3u);
      *v8 = &qword_18015B360;
      *(_QWORD *)(a1 + 24) = v9;
      *v9 = v8;
      qword_18015B368 = a1 + 16;
    }
    *(_DWORD *)(a1 + 104) |= 0x40u;
  }
}
