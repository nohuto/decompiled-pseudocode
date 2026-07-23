/*
 * XREFs of sub_180009BD0 @ 0x180009BD0
 * Callers:
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180009D5C @ 0x180009D5C (sub_180009D5C.c)
 *     sub_18002CBD0 @ 0x18002CBD0 (sub_18002CBD0.c)
 */

BOOLEAN __fastcall sub_180009BD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rdx
  BOOLEAN v9; // bl
  _RTL_BALANCED_NODE *v10; // rdi
  int v11; // esi
  __int64 v12; // rbp
  _RTL_BALANCED_NODE *v13; // rax
  __int16 v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v5 = sub_180009D5C(a3, a2, &v15, &v16);
  v6 = a1 + 8;
  v7 = qword_18015BFA8;
  v8 = (0x101010101010101LL
      * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 48) += (unsigned int)v8;
  v9 = 0;
  *(_WORD *)a3 = a3 ^ v7 ^ (v15 + v5 - v8);
  v10 = *(_RTL_BALANCED_NODE **)v6;
  v11 = *(_BYTE *)(v6 + 8) & 1;
  if ( *(_QWORD *)v6 )
  {
    v12 = (unsigned int)a3 ^ v7 ^ *(_DWORD *)a3;
    while ( 1 )
    {
      if ( (int)sub_18002CBD0(v12, v10) < 0 )
      {
        v13 = v10->Children[0];
        if ( v11 )
        {
          if ( !v13 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
          v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ (unsigned __int64)v13);
        }
        if ( !v13 )
          return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
      }
      else
      {
        v13 = v10->Children[1];
        if ( v11 )
        {
          if ( !v13 )
          {
LABEL_7:
            v9 = 1;
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
          }
          v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ (unsigned __int64)v13);
        }
        if ( !v13 )
          goto LABEL_7;
      }
      v10 = v13;
    }
  }
  return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
}
