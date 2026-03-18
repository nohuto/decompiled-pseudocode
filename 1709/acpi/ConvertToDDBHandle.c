/*
 * XREFs of ConvertToDDBHandle @ 0x1C006323C
 * Callers:
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ConvertToDDBHandle(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  _OWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v10, 0, 0x28uLL);
  v4 = *(_WORD *)(a1 + 2) == 1;
  WORD1(v10[0]) = 15;
  if ( !v4 )
    return 3222536201LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)&v10[1];
  if ( v6 )
    v7 = v6;
  *(_QWORD *)&v10[1] = v7;
  FreeDataBuffs(a2, 1u);
  v8 = v10[1];
  *(_OWORD *)a2 = v10[0];
  v9 = *(_QWORD *)&v10[2];
  result = v6 == 0 ? 0xC014000F : 0;
  *(_OWORD *)(a2 + 16) = v8;
  *(_QWORD *)(a2 + 32) = v9;
  return result;
}
