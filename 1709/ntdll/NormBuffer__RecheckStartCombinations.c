/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x1800F8FA8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080920 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800F8CF4 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F9450 (Normalization__CanCombinableCharactersCombine.c)
 */

unsigned __int64 __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  unsigned __int64 result; // rax
  bool v2; // zf
  __int64 v3; // rbx
  unsigned __int16 *v4; // rsi
  unsigned __int16 *v5; // rdi
  char v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  char v9; // bp
  unsigned __int16 *v10; // rdi
  unsigned __int16 *v11; // rdx
  char v12; // r10
  unsigned __int16 *v13; // r8
  char v14; // al
  char v15; // r10
  __int64 v16; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned __int16 *v18; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = *(_BYTE *)(a1 + 93) == 64;
  v3 = a1;
  v4 = *(unsigned __int16 **)(a1 + 80);
  v18 = v4;
  if ( v2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 40);
    v6 = 0;
    if ( v4 != v5 )
    {
      v7 = *(_QWORD *)(a1 + 112);
      while ( 1 )
      {
        result = NormBuffer__GetCurrentOutputChar(a1, &v18);
        a1 = *(_QWORD *)(v7 + 40);
        v8 = (result & 0x7F)
           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + *(_QWORD *)(v7 + 32)) << 7);
        v9 = *(_BYTE *)(v8 + a1 - 128) & 0x3F;
        if ( v9 == v6 )
          goto LABEL_17;
        if ( (*(_BYTE *)(v8 + a1 - 128) & 0xC0) != 0xC0 )
          break;
        result = Normalization__CanCombinableCharactersCombine(v7, *(unsigned int *)(v3 + 88), (unsigned int)result);
        if ( !(_DWORD)result )
          break;
        a1 = *(_QWORD *)(v7 + 32);
        v10 = v5 - 1;
        *(_DWORD *)(v3 + 88) = result;
        *(_QWORD *)(v3 + 40) = v10;
        v11 = v18;
        v12 = *(_BYTE *)(*(_QWORD *)(v7 + 40)
                       + ((unsigned __int64)*(unsigned __int8 *)(a1 + ((__int64)(int)result >> 7)) << 7)
                       + (result & 0x7F)
                       - 128);
        v13 = v18;
        *(v4 - 1) = result;
        v14 = v12 & 0x3F;
        v15 = v12 & 0xC0;
        *(_BYTE *)(v3 + 92) = v14;
        result = *(_QWORD *)(v3 + 64);
        *(_BYTE *)(v3 + 93) = v15;
        if ( (unsigned __int16 *)result == v10 )
        {
          if ( (unsigned __int64)v11 >= result )
          {
            v16 = *(_QWORD *)(v3 + 24);
            *(_DWORD *)(v3 + 56) = 0;
            result = v16 - 2;
            *(_WORD *)(v3 + 72) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v3 + 64) = result;
        }
        if ( v11 != v10 )
        {
          do
          {
            a1 = (__int64)(v13 + 1);
            result = v13[1];
            *v13 = result;
            v13 = (unsigned __int16 *)a1;
          }
          while ( (unsigned __int16 *)a1 != v10 );
        }
        if ( v15 != 64 )
          return result;
LABEL_18:
        v5 = *(unsigned __int16 **)(v3 + 40);
        if ( v11 == v5 )
          return result;
      }
      v6 = v9;
LABEL_17:
      v11 = ++v18;
      goto LABEL_18;
    }
  }
  return result;
}
