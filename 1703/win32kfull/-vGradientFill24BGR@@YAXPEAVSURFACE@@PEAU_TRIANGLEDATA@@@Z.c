/*
 * XREFs of ?vGradientFill24BGR@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AE650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill24BGR(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  int v4; // edx
  __int64 v5; // r12
  char *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // rsi
  struct _TRIANGLEDATA *v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // r10d
  int v18; // r14d
  _BYTE *v19; // r10
  unsigned __int64 v20; // rbp
  __int64 v21; // r9
  __int64 v22; // r14
  char v23; // r8^7
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  __int64 v26; // [rsp+40h] [rbp+10h]

  v2 = *((int *)a1 + 22);
  v4 = *((_DWORD *)a2 + 28);
  v5 = *((_QWORD *)a2 + 2);
  v6 = (char *)a2 + 168;
  v7 = *((_QWORD *)a2 + 3);
  v8 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v9 = *((_DWORD *)a2 + 29);
  if ( *((_DWORD *)a2 + 3) < v9 )
    v9 = *((_DWORD *)a2 + 3);
  v26 = *((_QWORD *)a2 + 4);
  if ( v4 < v9 )
  {
    v10 = v2;
    v11 = (unsigned int)(v9 - v4);
    do
    {
      v12 = a2;
      v13 = *((_QWORD *)v6 + 1);
      v14 = *((_QWORD *)v6 + 2);
      if ( *(_DWORD *)v6 > *(_DWORD *)a2 )
        v12 = (struct _TRIANGLEDATA *)v6;
      v15 = *((_QWORD *)v6 + 3);
      v16 = *((_DWORD *)a2 + 2);
      v17 = *(_DWORD *)v12;
      if ( *((_DWORD *)v6 + 1) < v16 )
        v16 = *((_DWORD *)v6 + 1);
      if ( v17 < v16 )
      {
        v18 = *(_DWORD *)a2 - *(_DWORD *)v6;
        v19 = (_BYTE *)(v8 + 3 * v17);
        v20 = v8 + 3 * v16;
        if ( v18 <= 0 )
        {
          v22 = v26;
        }
        else
        {
          v21 = v18;
          v22 = v26;
          v13 += v5 * v21;
          v14 += v7 * v21;
          v15 += v26 * v21;
        }
        while ( (unsigned __int64)v19 < v20 )
        {
          v23 = HIBYTE(v15);
          v15 += v22;
          *v19 = v23;
          v24 = HIBYTE(v14);
          v14 += v7;
          v19[1] = v24;
          v25 = HIBYTE(v13);
          v13 += v5;
          v19[2] = v25;
          v19 += 3;
        }
      }
      v8 += v10;
      v6 += 40;
      --v11;
    }
    while ( v11 );
  }
}
