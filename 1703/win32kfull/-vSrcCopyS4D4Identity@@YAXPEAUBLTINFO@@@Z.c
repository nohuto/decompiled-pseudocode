/*
 * XREFs of ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00AB6F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vSrcCopyS4D4Identity(struct BLTINFO *a1)
{
  unsigned __int8 v1; // r10
  int v3; // ebp
  _BYTE *v4; // rsi
  char *v5; // r14
  int v6; // r8d
  _BYTE *v7; // r15
  int v8; // ecx
  char *v9; // r12
  int v10; // ebp
  size_t v11; // r13
  bool v12; // zf
  int v13; // edx
  int v14; // r8d
  char v15; // cl
  int v16; // r8d
  _BYTE *v17; // r9
  int v18; // edx
  unsigned __int8 *v19; // r11
  char v20; // cl
  char v21; // al
  char v22; // al
  int v23; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 1));
  v5 = (char *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  v23 = v3;
  if ( *((int *)a1 + 6) > 0 )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)a1 + 14);
      v7 = v4;
      v8 = *((_DWORD *)a1 + 12);
      v9 = v5;
      if ( (((unsigned __int8)v8 ^ *((_BYTE *)a1 + 56)) & 1) != 0 )
      {
        v13 = *((_DWORD *)a1 + 13) - v8;
        if ( (v6 & 1) != 0 && v13 )
        {
          v7 = v4 + 1;
          *v4 = *v4 & 0xF0 | ((unsigned __int8)*v5 >> 4);
          --v13;
        }
        v14 = v13 >> 1;
        while ( --v14 >= 0 )
        {
          v15 = *v9++;
          *v7++ = (16 * v15) | ((unsigned __int8)*v9 >> 4);
        }
        if ( (v13 & 1) != 0 )
          *v7 = *v7 & 0xF | (16 * *v9);
      }
      else
      {
        v10 = *((_DWORD *)a1 + 13) - v8;
        if ( (v6 & 1) != 0 && v10 )
        {
          v9 = v5 + 1;
          v7 = v4 + 1;
          *v4 ^= (*v4 ^ *v5) & 0xF;
          --v10;
        }
        v11 = v10 >> 1;
        memmove(v7, v9, v11);
        v12 = (v10 & 1) == 0;
        v3 = v23;
        if ( !v12 )
          v7[v11] = v9[v11] ^ (v7[v11] ^ v9[v11]) & 0xF;
      }
      v12 = v3-- == 1;
      v23 = v3;
      if ( v12 )
        break;
      v5 += *((int *)a1 + 10);
      v4 += *((int *)a1 + 11);
    }
    return;
  }
  while ( 2 )
  {
    v16 = *((_DWORD *)a1 + 12);
    v17 = v4;
    v18 = *((_DWORD *)a1 + 14);
    v19 = (unsigned __int8 *)v5;
    if ( (v16 & 1) == 0 )
    {
      v1 = *v5;
      v19 = (unsigned __int8 *)(v5 - 1);
    }
    if ( (v18 & 1) != 0 )
      v20 = 0;
    else
      v20 = *v4 & 0xF;
    while ( v16 != *((_DWORD *)a1 + 13) )
    {
      if ( (v16 & 1) != 0 )
      {
        v1 = *v19--;
        if ( (v18 & 1) != 0 )
        {
          v21 = v1 & 0xF;
LABEL_30:
          v20 |= v21;
          goto LABEL_33;
        }
        v22 = 16 * v1;
      }
      else
      {
        if ( (v18 & 1) != 0 )
        {
          v21 = v1 >> 4;
          goto LABEL_30;
        }
        v22 = v1 & 0xF0;
      }
      *v17-- = v20 | v22;
      v20 = 0;
LABEL_33:
      --v16;
      LOBYTE(v18) = v18 - 1;
    }
    if ( (v18 & 1) == 0 )
      *v17 = v20 | *v17 & 0xF0;
    if ( --v3 )
    {
      v5 += *((int *)a1 + 10);
      v4 += *((int *)a1 + 11);
      continue;
    }
    break;
  }
}
