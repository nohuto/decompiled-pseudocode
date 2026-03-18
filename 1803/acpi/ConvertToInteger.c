/*
 * XREFs of ConvertToInteger @ 0x1C0053BE8
 * Callers:
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ToInteger @ 0x1C0053650 (ToInteger.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     _strtoui64_0 @ 0x1C0003FC2 (_strtoui64_0.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ConvertToInteger(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  memset(v14, 0, 0x28uLL);
  v5 = *(unsigned __int16 *)(a1 + 2);
  WORD1(v14[0]) = 1;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = strtoui64_0(*(const char **)(a1 + 32), 0LL, 0);
LABEL_11:
    *(_QWORD *)&v14[1] = v10;
LABEL_12:
    FreeDataBuffs(a2, 1u);
    v11 = v14[1];
    *(_OWORD *)a2 = v14[0];
    v12 = *(_QWORD *)&v14[2];
    *(_OWORD *)(a2 + 16) = v11;
    *(_QWORD *)(a2 + 32) = v12;
    return v4;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 8;
    if ( *(_DWORD *)(a1 + 24) <= 8u )
      v9 = *(_DWORD *)(a1 + 24);
    memmove(&v14[1], *(const void **)(a1 + 32), v9);
    goto LABEL_12;
  }
  if ( v8 == 12 )
  {
LABEL_10:
    v10 = *(_QWORD *)(a1 + 16);
    goto LABEL_11;
  }
  return (unsigned int)-1072431095;
}
