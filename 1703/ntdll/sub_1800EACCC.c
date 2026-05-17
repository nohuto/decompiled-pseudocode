/*
 * XREFs of sub_1800EACCC @ 0x1800EACCC
 * Callers:
 *     RtlCopyBitMap @ 0x1800E9EF0 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

unsigned __int64 __fastcall sub_1800EACCC(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 result; // rax
  char v7; // cl
  size_t v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned int *v12; // r15
  unsigned int *v13; // r14
  _DWORD *v14; // r11
  char v15; // di
  int v16; // eax
  int v17; // edx
  int *i; // r11
  int v19; // edx

  v5 = (unsigned __int64)a3 >> 3;
  result = a4;
  v7 = a4;
  if ( (a3 & 7) != 0 )
  {
    v9 = a3 & 0x1F;
    v10 = result >> 5;
    v11 = v7 & 0x1F;
    v12 = (unsigned int *)(*(_QWORD *)(a2 + 8) + 4 * ((result >> 5) + ((unsigned __int64)a3 >> 5)));
    result = *(_QWORD *)(a1 + 8);
    v13 = v12;
    v14 = (_DWORD *)(result + 4 * v10);
    if ( v11 )
    {
      v15 = 32 - v9;
      if ( v11 > 32 - v9 )
      {
        v12[1] = ((*v14 & (unsigned int)(((1 << (v9 + v11 - 32)) - 1) << v15)) >> v15) | v12[1] & ~((1 << (v9 + v11 - 32))
                                                                                                  - 1);
        v17 = (*v14 & ((1 << v15) - 1)) << v9;
        v16 = (1 << v9) - 1;
      }
      else
      {
        v16 = ~(((1 << v11) - 1) << v9);
        v17 = (*v14 & ((1 << v11) - 1)) << v9;
      }
      result = v17 | *v12 & v16;
      *v12 = result;
    }
    for ( i = v14 - 1; v10; --v10 )
    {
      *v13 = ((~((1 << (32 - v9)) - 1) & (unsigned int)*i) >> (32 - v9)) | *v13 & ~((1 << v9) - 1);
      --v13;
      v19 = *i--;
      result = ((((1 << (32 - v9)) - 1) & v19) << v9) | ((1 << v9) - 1) & *v13;
      *v13 = result;
    }
  }
  else
  {
    v8 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v8 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v8 + result) | *(_BYTE *)(v8 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    }
    if ( v8 )
      return (unsigned __int64)memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v8);
  }
  return result;
}
