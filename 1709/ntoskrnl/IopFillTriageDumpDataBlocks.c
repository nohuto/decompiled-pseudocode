/*
 * XREFs of IopFillTriageDumpDataBlocks @ 0x1401F7A1C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rsi
  char *v7; // rbx
  __int64 result; // rax
  _QWORD *v10; // r10
  __int64 v11; // r12
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rdx
  const void *v14; // r8
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  char *v18; // rcx
  size_t v19; // r8
  _QWORD *v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v4 = 0;
  v5 = (_QWORD *)(a4 + a1[30]);
  v7 = (char *)&v5[2 * a1[31]];
  v20 = v5;
  result = a2;
  v10 = v5;
  if ( a2 )
  {
    while ( 1 )
    {
      v21 = 0;
      v11 = *(_QWORD *)(a3 + 8);
      if ( *(_DWORD *)a3 )
        break;
LABEL_14:
      ++v4;
      a3 += 16LL;
      if ( v4 >= (unsigned int)result )
        return result;
    }
    v12 = v10 + 2;
    while ( 1 )
    {
      result = ((__int64)v12 - 16 - (__int64)v5) >> 4;
      if ( (unsigned int)result >= a1[31] )
        break;
      v13 = a4 + a1[1];
      if ( (unsigned __int64)v12 > v13 )
        break;
      v14 = *(const void **)v11;
      v15 = *(_QWORD *)(v11 + 8);
      if ( v15 < *(_QWORD *)v11 )
      {
        result = -1LL;
        v16 = 0;
      }
      else
      {
        result = v15 - (_QWORD)v14;
        v16 = 1;
      }
      if ( !v16 )
        break;
      v17 = (unsigned int)result;
      result = -1LL;
      v18 = &v7[v17];
      if ( v18 < v7 )
        break;
      result = (__int64)v18;
      if ( (unsigned __int64)v18 > v13 )
        break;
      *v10 = v14;
      *((_DWORD *)v12 - 2) = (_DWORD)v7 - a4;
      v19 = (unsigned int)(*(_DWORD *)(v11 + 8) - *(_DWORD *)v11);
      *((_DWORD *)v12 - 1) = v19;
      memmove(v7, *(const void **)v11, v19);
      v11 += 16LL;
      v7 += *((unsigned int *)v12 - 1);
      v10 = v20 + 2;
      a4 = v23;
      v12 += 2;
      v20 += 2;
      if ( (unsigned int)++v21 >= *(_DWORD *)a3 )
      {
        result = a2;
        goto LABEL_14;
      }
    }
  }
  return result;
}
