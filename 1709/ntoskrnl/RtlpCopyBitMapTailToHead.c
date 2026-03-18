/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x1400D4F0C
 * Callers:
 *     RtlCopyBitMap @ 0x1400D4E00 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

unsigned __int64 __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 result; // rax
  char v7; // cl
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned int *v11; // r15
  unsigned int *v12; // r14
  _DWORD *v13; // r11
  char v14; // di
  int v15; // eax
  int v16; // edx
  int *i; // r11
  int v18; // edx
  size_t v19; // r8

  v5 = (unsigned __int64)a3 >> 3;
  result = a4;
  v7 = a4;
  if ( (a3 & 7) != 0 )
  {
    v8 = a3 & 0x1F;
    v9 = (unsigned __int64)(unsigned int)result >> 5;
    v10 = v7 & 0x1F;
    v11 = (unsigned int *)(*(_QWORD *)(a2 + 8) + 4 * (v9 + ((unsigned __int64)a3 >> 5)));
    result = *(_QWORD *)(a1 + 8);
    v12 = v11;
    v13 = (_DWORD *)(result + 4 * v9);
    if ( v10 )
    {
      v14 = 32 - v8;
      if ( v10 > 32 - v8 )
      {
        v11[1] = ((*v13 & (unsigned int)(((1 << (v8 + v10 - 32)) - 1) << v14)) >> v14) | v11[1] & ~((1 << (v8 + v10 - 32))
                                                                                                  - 1);
        v16 = (*v13 & ((1 << v14) - 1)) << v8;
        v15 = (1 << v8) - 1;
      }
      else
      {
        v15 = ~(((1 << v10) - 1) << v8);
        v16 = (*v13 & ((1 << v10) - 1)) << v8;
      }
      result = v16 | *v11 & v15;
      *v11 = result;
    }
    for ( i = v13 - 1; v9; --v9 )
    {
      *v12 = ((~((1 << (32 - v8)) - 1) & (unsigned int)*i) >> (32 - v8)) | *v12 & ~((1 << v8) - 1);
      --v12;
      v18 = *i--;
      result = ((((1 << (32 - v8)) - 1) & v18) << v8) | ((1 << v8) - 1) & *v12;
      *v12 = result;
    }
  }
  else
  {
    v19 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v19 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v19 + result) | *(_BYTE *)(v19 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    }
    if ( v19 )
      return (unsigned __int64)memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v19);
  }
  return result;
}
