/*
 * XREFs of sub_1800F3580 @ 0x1800F3580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F36F0 @ 0x1800F36F0 (sub_1800F36F0.c)
 *     sub_1800F3C5C @ 0x1800F3C5C (sub_1800F3C5C.c)
 */

__int64 __fastcall sub_1800F3580(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r9d
  _DWORD *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_DWORD *)a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        v5 = v4 + *(_QWORD *)(a1 + 32) - 1LL;
        v6 = v4 >> 12;
        v7 = v5 >> 12;
        qword_18015C770 = v6;
        if ( v6 == qword_18015C768 )
        {
          v8 = dword_18015C738;
        }
        else
        {
          if ( qword_18015C768 )
          {
            sub_1800F36F0(qword_18015C768, 1LL);
            v6 = qword_18015C770;
          }
          qword_18015C768 = v6;
          v8 = 0;
        }
        v9 = qword_18015C740;
        dword_18015C738 = v8 + 1;
        v10 = 5LL * v8;
        *((_QWORD *)qword_18015C740 + v10 + 2) = *(_QWORD *)(a1 + 16);
        v9[2 * v10 + 8] = 0;
        *(_QWORD *)&v9[2 * v10 + 6] = *(_QWORD *)(a1 + 32);
        if ( v7 != v6 )
        {
          sub_1800F36F0(v6, 1LL);
          v11 = qword_18015C740;
          v12 = *(_QWORD *)(a1 + 16);
          dword_18015C738 = 1;
          *((_QWORD *)qword_18015C740 + 2) = v12;
          v11[8] = 0;
          *((_QWORD *)v11 + 3) = *(_QWORD *)(a1 + 32);
          if ( (unsigned __int64)(v7 - qword_18015C770) > 1 )
            sub_1800F36F0(qword_18015C770 + 1, v7 - qword_18015C770 - 1);
          qword_18015C768 = v7;
        }
      }
    }
    else
    {
      sub_1800F3C5C(qword_180159A30, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0LL);
    }
  }
  else
  {
    if ( qword_18015C768 )
      sub_1800F36F0(qword_18015C768, 1LL);
    qword_18015C768 = 0LL;
    v13 = *(_QWORD *)(a1 + 16);
    dword_18015C738 = 0;
    qword_18015C758 = v13;
  }
  return 0LL;
}
