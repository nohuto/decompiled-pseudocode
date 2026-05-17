/*
 * XREFs of sub_180107270 @ 0x180107270
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char __fastcall sub_180107270(
        __int64 *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        __int64 a7,
        void *Src,
        size_t Size)
{
  __int64 v9; // r10
  _WORD *v11; // r11
  __int64 v12; // r12
  unsigned int v13; // ebx
  char v14; // dl
  __int64 v15; // r12
  _WORD *v16; // r9
  void *v17; // rax
  unsigned int v18; // ecx
  char result; // al
  _WORD *v20; // [rsp+20h] [rbp-58h]
  char *v21; // [rsp+28h] [rbp-50h]
  _WORD *v22; // [rsp+30h] [rbp-48h]
  void *v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+80h] [rbp+8h]
  char v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v9 = *a1;
  v24 = 0LL;
  v11 = 0LL;
  v20 = 0LL;
  v12 = 0LL;
  v21 = 0LL;
  v13 = 16;
  v22 = 0LL;
  v14 = 0;
  v23 = 0LL;
  if ( a5 && *((_QWORD *)a5 + 1) )
  {
    v11 = (_WORD *)(v9 + 16);
    v13 = *a5 + 20;
    v24 = (char *)(v9 + 18);
    v14 = 1;
  }
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    v20 = (_WORD *)(v9 + v13);
    v21 = (char *)(v20 + 1);
    v13 += *a6 + 4;
    v14 |= 2u;
  }
  if ( a7 )
  {
    v15 = v13;
    v13 += 56;
    v12 = v9 + v15;
    v14 |= 4u;
  }
  if ( Src && (_DWORD)Size )
  {
    v16 = (_WORD *)(v9 + v13);
    v13 += Size + 2;
    v22 = v16;
    v14 |= 8u;
    v17 = v16 + 1;
    a4 = v25;
    v23 = v17;
  }
  v18 = *((_DWORD *)a1 + 3);
  if ( v18 + v13 < v18 || v18 + v13 > *((_DWORD *)a1 + 2) )
    return 0;
  *(_DWORD *)v9 = a3;
  *(_BYTE *)(v9 + 4) = v14;
  *(_BYTE *)(v9 + 5) = a4;
  *(_QWORD *)(v9 + 8) = MEMORY[0x7FFE0014];
  if ( a5 && *((_QWORD *)a5 + 1) )
  {
    *v11 = *a5 + 2;
    memmove(v24, *((const void **)a5 + 1), *a5);
    *(_WORD *)&v24[*a5] = 0;
  }
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    *v20 = *a6 + 2;
    memmove(v21, *((const void **)a6 + 1), *a6);
    *(_WORD *)&v21[*a6] = 0;
  }
  if ( a7 )
  {
    *(_OWORD *)v12 = *(_OWORD *)a7;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(a7 + 16);
    *(_OWORD *)(v12 + 32) = *(_OWORD *)(a7 + 32);
    *(_QWORD *)(v12 + 48) = *(_QWORD *)(a7 + 48);
  }
  if ( Src )
  {
    if ( (_DWORD)Size )
    {
      *v22 = Size;
      memmove(v23, Src, (unsigned int)Size);
    }
  }
  *((_DWORD *)a1 + 3) += v13;
  result = 1;
  *a1 += v13;
  ++*((_DWORD *)a1 + 4);
  return result;
}
