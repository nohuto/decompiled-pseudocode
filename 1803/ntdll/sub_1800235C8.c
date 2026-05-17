/*
 * XREFs of sub_1800235C8 @ 0x1800235C8
 * Callers:
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 * Callees:
 *     sub_180023F7C @ 0x180023F7C (sub_180023F7C.c)
 */

char __fastcall sub_1800235C8(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // ax
  bool v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // r9d
  unsigned __int64 v12; // rax
  __int16 v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v5 = sub_180023F7C(a3, a2, &v14, &v15);
  v6 = 0;
  v7 = ((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  v8 = (unsigned __int64 *)(a1 + 16);
  *a3 = (unsigned __int16)a3 ^ qword_18015A440 ^ (v14
                                                + v5
                                                - ((0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v9 = v8[1];
  v10 = *v8;
  if ( (v9 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v8;
    else
      v10 = 0LL;
  }
  v11 = v9 & 1;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)qword_18015A440 ^ *(_DWORD *)a3) < ((unsigned int)qword_18015A440 ^ ((_DWORD)v10 - 8) ^ *(_DWORD *)(v10 - 8)) )
      {
        v12 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v12 )
            return RtlRbInsertNodeEx((unsigned __int64)v8, v10, v6, (unsigned __int64)(a3 + 4));
          v12 ^= v10;
        }
        if ( !v12 )
          return RtlRbInsertNodeEx((unsigned __int64)v8, v10, v6, (unsigned __int64)(a3 + 4));
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_11;
          v12 ^= v10;
        }
        if ( !v12 )
        {
LABEL_11:
          v6 = 1;
          return RtlRbInsertNodeEx((unsigned __int64)v8, v10, v6, (unsigned __int64)(a3 + 4));
        }
      }
      v10 = v12;
    }
  }
  return RtlRbInsertNodeEx((unsigned __int64)v8, v10, v6, (unsigned __int64)(a3 + 4));
}
