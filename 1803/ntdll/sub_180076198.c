/*
 * XREFs of sub_180076198 @ 0x180076198
 * Callers:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 * Callees:
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009BC70 (ZwAssociateWaitCompletionPacket.c)
 *     sub_18010861C @ 0x18010861C (sub_18010861C.c)
 */

__int64 __fastcall sub_180076198(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  int v7; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[18];
  a1[45] = a2;
  v7 = ZwAssociateWaitCompletionPacket(a1[46], *(_QWORD *)(v3 + 64), a2, a1 + 49, a1, 0, 0LL, &v13);
  if ( v7 < 0 )
  {
    a1[45] = 0LL;
    sub_18010861C((unsigned int)v7, a2, a1);
    return 0LL;
  }
  else if ( !a3 || v13 )
  {
    return 1LL;
  }
  else
  {
    v9 = *a3;
    if ( *a3 >= 0 )
    {
      if ( v9 > MEMORY[0x7FFE0014] )
        v10 = v9 - MEMORY[0x7FFE0014];
      else
        v10 = 0LL;
    }
    else
    {
      v10 = -v9;
    }
    v11 = v10 >> 16;
    v12 = 300;
    if ( v11 <= 0x12C )
      v12 = v11;
    sub_18002C9D0((__int64)a1, (volatile signed __int64 *)(v3 + 112), a3, 0, v12);
    return 2LL;
  }
}
