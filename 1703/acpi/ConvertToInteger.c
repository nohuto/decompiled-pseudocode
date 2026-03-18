/*
 * XREFs of ConvertToInteger @ 0x1C001CA8C
 * Callers:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     ToInteger @ 0x1C001CA10 (ToInteger.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     _strtoui64_0 @ 0x1C002BFB2 (_strtoui64_0.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ConvertToInteger(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // eax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  unsigned __int64 v13; // rax
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  memset(v14, 0, 0x28uLL);
  v5 = *(unsigned __int16 *)(a1 + 2);
  WORD1(v14[0]) = 1;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v13 = strtoui64_0(*(const char **)(a1 + 32), 0LL, 0);
      goto LABEL_10;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v9 = 8;
      if ( *(_DWORD *)(a1 + 24) <= 8u )
        v9 = *(_DWORD *)(a1 + 24);
      memmove(&v14[1], *(const void **)(a1 + 32), v9);
      goto LABEL_7;
    }
    if ( v8 != 12 )
      return (unsigned int)-1072431095;
  }
  v13 = *(_QWORD *)(a1 + 16);
LABEL_10:
  *(_QWORD *)&v14[1] = v13;
LABEL_7:
  FreeDataBuffs(a2, 1u);
  v10 = v14[1];
  *(_OWORD *)a2 = v14[0];
  v11 = *(_QWORD *)&v14[2];
  *(_OWORD *)(a2 + 16) = v10;
  *(_QWORD *)(a2 + 32) = v11;
  return v4;
}
