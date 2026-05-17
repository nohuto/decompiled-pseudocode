/*
 * XREFs of sub_1800E626C @ 0x1800E626C
 * Callers:
 *     RtlCopyBitMap @ 0x1800E5350 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

unsigned __int64 __fastcall sub_1800E626C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  size_t v7; // r8
  char v8; // cl
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rbp
  unsigned int *v13; // r14
  _DWORD *v14; // rbx
  char v15; // di
  _DWORD *v16; // rbx
  unsigned int v17; // r8d
  int v18; // r15d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = (unsigned __int64)a3 >> 3;
  if ( (a3 & 7) != 0 )
  {
    v8 = a4;
    v9 = (unsigned __int64)a4 >> 5;
    v10 = a3 & 0x1F;
    v11 = v8 & 0x1F;
    v12 = (unsigned int *)(*(_QWORD *)(a2 + 8) + 4 * (v9 + ((unsigned __int64)a3 >> 5)));
    result = *(_QWORD *)(a1 + 8);
    v13 = v12;
    v14 = (_DWORD *)(result + 4 * v9);
    if ( v11 )
    {
      v15 = 32 - v10;
      if ( v11 > 32 - v10 )
      {
        v12[1] = v12[1] & ~((1 << (v10 + v11 - 32)) - 1) | ((*v14 & (unsigned int)(((1 << (v10 + v11 - 32)) - 1) << v15)) >> v15);
        result = ((*v14 & ((1 << v15) - 1)) << v10) | *v12 & ((1 << v10) - 1);
        *v12 = result;
      }
      else
      {
        result = (*v14 & (unsigned int)((1 << v11) - 1)) << v10;
        *v12 = result | *v12 & ~(((1 << v11) - 1) << v10);
      }
    }
    v16 = v14 - 1;
    if ( v9 )
    {
      v17 = *v12;
      v18 = 1 << (32 - v10);
      do
      {
        *v13-- = ((*v16 & (unsigned int)~(v18 - 1)) >> (32 - v10)) | v17 & ~((1 << v10) - 1);
        result = (*v16-- & (unsigned int)(v18 - 1)) << v10;
        v17 = result | ((1 << v10) - 1) & *v13;
        *v13 = v17;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v7 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v7 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v7 + result) | *(_BYTE *)(v7 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    }
    if ( v7 )
      return (unsigned __int64)memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v7);
  }
  return result;
}
