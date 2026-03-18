/*
 * XREFs of IopFillTriageDumpDataBlocks @ 0x140234D54
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x140233034 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlULongLongSub @ 0x140079C00 (RtlULongLongSub.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

int __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  unsigned int v6; // r15d
  _QWORD *v7; // rcx
  __int64 v8; // r11
  __int64 v10; // rax
  char *v11; // rbx
  ULONGLONG *v12; // r13
  _QWORD *v13; // rbp
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  int v16; // r11d
  unsigned __int64 v17; // rcx
  size_t v18; // r8
  _QWORD *v20; // [rsp+20h] [rbp-48h]
  ULONGLONG pullResult[8]; // [rsp+28h] [rbp-40h] BYREF
  int v22; // [rsp+70h] [rbp+8h]

  v5 = (_QWORD *)(a4 + a1[30]);
  v6 = 0;
  v7 = v5;
  v8 = a4;
  v20 = v5;
  LODWORD(v10) = a2;
  v11 = (char *)&v5[2 * a1[31]];
  if ( a2 )
  {
    while ( 1 )
    {
      v22 = 0;
      v12 = *(ULONGLONG **)(a3 + 8);
      if ( *(_DWORD *)a3 )
        break;
LABEL_14:
      ++v6;
      a3 += 16LL;
      if ( v6 >= (unsigned int)v10 )
        return v10;
    }
    v13 = v7 + 2;
    while ( 1 )
    {
      v10 = ((__int64)v13 - 16 - (__int64)v5) >> 4;
      if ( (unsigned int)v10 >= a1[31] )
        break;
      if ( (unsigned __int64)v13 > v8 + (unsigned __int64)a1[1] )
        break;
      LODWORD(v10) = RtlULongLongSub(v12[1], *v12, pullResult);
      if ( (int)v10 < 0 )
        break;
      v17 = (unsigned __int64)&v11[LODWORD(pullResult[0])];
      if ( v17 < (unsigned __int64)v11 )
      {
        v17 = -1LL;
        LODWORD(v10) = 0;
      }
      else
      {
        LODWORD(v10) = 1;
      }
      if ( !(_DWORD)v10 || v17 > v15 )
        break;
      *v20 = v14;
      *((_DWORD *)v13 - 2) = (_DWORD)v11 - v16;
      v18 = (unsigned int)(*((_DWORD *)v12 + 2) - *(_DWORD *)v12);
      *((_DWORD *)v13 - 1) = v18;
      memmove(v11, (const void *)*v12, v18);
      v12 += 2;
      v11 += *((unsigned int *)v13 - 1);
      v7 = v20 + 2;
      v8 = a4;
      v13 += 2;
      v20 += 2;
      if ( (unsigned int)++v22 >= *(_DWORD *)a3 )
      {
        LODWORD(v10) = a2;
        goto LABEL_14;
      }
    }
  }
  return v10;
}
