/*
 * XREFs of ?vGradientFill24BGR@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AAC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill24BGR(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  int v4; // edx
  __int64 v5; // r13
  char *v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // r12
  __int64 v10; // rbp
  int v11; // r10d
  int v12; // r9d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  _BYTE *v17; // r10
  unsigned __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rsi
  char v21; // r8^7
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 v24; // [rsp+38h] [rbp+8h]
  __int64 v25; // [rsp+40h] [rbp+10h]

  v2 = *((int *)a1 + 22);
  v4 = *((_DWORD *)a2 + 28);
  v5 = *((_QWORD *)a2 + 2);
  v6 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v8 = *((_DWORD *)a2 + 29);
  v24 = *((_QWORD *)a2 + 3);
  v25 = *((_QWORD *)a2 + 4);
  if ( *((_DWORD *)a2 + 3) < v8 )
    v8 = *((_DWORD *)a2 + 3);
  if ( v4 < v8 )
  {
    v9 = v2;
    v10 = (unsigned int)(v8 - v4);
    do
    {
      v11 = *(_DWORD *)a2;
      v12 = *((_DWORD *)a2 + 2);
      v13 = *((_QWORD *)v6 + 1);
      if ( *(_DWORD *)v6 > *(_DWORD *)a2 )
        v11 = *(_DWORD *)v6;
      v14 = *((_QWORD *)v6 + 2);
      v15 = *((_QWORD *)v6 + 3);
      if ( *((_DWORD *)v6 + 1) < v12 )
        v12 = *((_DWORD *)v6 + 1);
      if ( v11 < v12 )
      {
        v16 = *(_DWORD *)a2 - *(_DWORD *)v6;
        v17 = (_BYTE *)(v7 + 3 * v11);
        v18 = v7 + 3 * v12;
        if ( v16 <= 0 )
        {
          v20 = v24;
        }
        else
        {
          v19 = v16;
          v20 = v24;
          v13 += v5 * v19;
          v14 += v24 * v19;
          v15 += v25 * v19;
        }
        while ( (unsigned __int64)v17 < v18 )
        {
          v21 = HIBYTE(v15);
          v15 += v25;
          *v17 = v21;
          v22 = HIBYTE(v14);
          v14 += v20;
          v17[1] = v22;
          v23 = HIBYTE(v13);
          v13 += v5;
          v17[2] = v23;
          v17 += 3;
        }
      }
      v7 += v9;
      v6 += 40;
      --v10;
    }
    while ( v10 );
  }
}
