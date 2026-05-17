/*
 * XREFs of sub_180009BD0 @ 0x180009BD0
 * Callers:
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180009D5C @ 0x180009D5C (sub_180009D5C.c)
 *     sub_18002CBD0 @ 0x18002CBD0 (sub_18002CBD0.c)
 */

__int64 __fastcall sub_180009BD0(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // ax
  __int64 v6; // r8
  __int64 v7; // r15
  int v8; // ecx
  unsigned __int64 v9; // rdx
  char v10; // bl
  unsigned __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int16 v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = sub_180009D5C(a3, a2, &v16, &v17);
  v7 = a1 + 8;
  v8 = qword_18015BFA8;
  v9 = (0x101010101010101LL
      * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 48) += (unsigned int)v9;
  v10 = 0;
  *a3 = (unsigned __int16)a3 ^ v8 ^ (v16 + v5 - v9);
  v11 = *(_QWORD *)v7;
  v12 = *(_BYTE *)(v7 + 8) & 1;
  if ( *(_QWORD *)v7 )
  {
    v13 = (unsigned int)a3 ^ v8 ^ *(_DWORD *)a3;
    while ( 1 )
    {
      if ( (int)sub_18002CBD0(v13, v11) < 0 )
      {
        v14 = *(_QWORD *)v11;
        if ( v12 )
        {
          if ( !v14 )
            break;
          v14 ^= v11;
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          if ( !v14 )
          {
LABEL_7:
            v10 = 1;
            break;
          }
          v14 ^= v11;
        }
        if ( !v14 )
          goto LABEL_7;
      }
      v11 = v14;
    }
  }
  LOBYTE(v6) = v10;
  return RtlRbInsertNodeEx(v7, v11, v6, a3 + 4);
}
