/*
 * XREFs of ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A8EE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall vFillGRectDIB24BGR(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v5; // r14d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  const void *v13; // r15
  _BYTE *v14; // r8
  _BYTE *v15; // rcx
  char v16; // rax^6
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  char *i; // rbx
  __int64 v20; // r11
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  _BYTE *v26; // r8
  _BYTE *v27; // rax
  __int64 v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+70h] [rbp+18h]

  v3 = *((int *)a1 + 22);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v20 = *((_QWORD *)a2 + 10);
    v21 = *((_QWORD *)a2 + 11);
    v22 = *((_QWORD *)a2 + 12);
    v23 = *((_QWORD *)a1 + 10) + (int)v3 * *((_DWORD *)a2 + 9);
    v24 = *((int *)a2 + 45);
    if ( (int)v24 > 0 )
    {
      v6 += v20 * v24;
      v7 += v21 * v24;
      v8 += v22 * *((int *)a2 + 45);
    }
    v25 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v23);
    while ( v5 )
    {
      --v5;
      v26 = v25;
      v27 = &v25[3 * *((_DWORD *)a2 + 10)];
      if ( v25 != v27 )
      {
        do
        {
          *v26 = BYTE6(v8);
          v26[1] = BYTE6(v7);
          v26[2] = BYTE6(v6);
          v26 += 3;
        }
        while ( v26 != v27 );
      }
      v6 += v20;
      v7 += v21;
      v8 += v22;
      v25 += v3;
    }
  }
  else
  {
    v9 = *((int *)a2 + 44);
    v10 = *((_QWORD *)a2 + 14);
    v28 = v10;
    v29 = *((_QWORD *)a2 + 15);
    v30 = *((_QWORD *)a2 + 16);
    if ( (int)v9 > 0 )
    {
      v6 += v10 * v9;
      v7 += *((_QWORD *)a2 + 15) * v9;
      v8 += *((_QWORD *)a2 + 16) * v9;
    }
    v11 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v11 - 1) <= 0xD05554 )
    {
      v12 = AllocFreeTmpBuffer((unsigned int)(3 * v11));
      v13 = (const void *)v12;
      if ( v12 )
      {
        v14 = (_BYTE *)v12;
        v15 = (_BYTE *)(v12 + 3 * *((_DWORD *)a2 + 10));
        if ( (_BYTE *)v12 != v15 )
        {
          do
          {
            v16 = BYTE6(v8);
            v8 += v30;
            *v14 = v16;
            v17 = HIWORD(v7);
            v7 += v29;
            v14[1] = v17;
            v18 = HIWORD(v6);
            v6 += v28;
            v14[2] = v18;
            v14 += 3;
          }
          while ( v14 != v15 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)((int)v3 * *((_DWORD *)a2 + 9)));
              v5;
              --v5 )
        {
          memmove(i, v13, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v13);
      }
    }
  }
}
