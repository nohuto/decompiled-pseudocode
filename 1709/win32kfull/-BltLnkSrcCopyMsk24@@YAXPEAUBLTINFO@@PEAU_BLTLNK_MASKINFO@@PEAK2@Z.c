/*
 * XREFs of ?BltLnkSrcCopyMsk24@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C0138010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk24(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r10
  int v6; // ebx
  struct BLTINFO *v7; // rbp
  __int64 v8; // rdx
  int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r11d
  _BYTE *v14; // r8
  _BYTE *v15; // r9
  char v16; // cl
  unsigned int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // r12d
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned __int8 v23; // [rsp+0h] [rbp-48h]
  int v24; // [rsp+4h] [rbp-44h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a1 + 8);
  v10 = *((_QWORD *)a1 + 1);
  v11 = *(_QWORD *)v5;
  v24 = v4;
  v23 = *((_BYTE *)v5 + 36);
  v25 = v8;
  while ( v9 )
  {
    --v9;
    v12 = *((_DWORD *)v7 + 7);
    v13 = *((_DWORD *)v5 + 7);
    v14 = (_BYTE *)(v10 + 3 * *((_DWORD *)v7 + 12));
    v15 = (_BYTE *)(v8 + 3 * *((_DWORD *)v7 + 14));
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v16 = 0;
        v17 = v23 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v11);
        v18 = 8 - (v13 & 7);
        v19 = v24 - v13;
        if ( v18 > v12 )
        {
          v18 = v12;
          v16 = 8 - (v13 & 7) - v12;
        }
        if ( v18 > v19 )
        {
          v16 += v18 - v19;
          v18 = v24 - v13;
        }
        v12 -= v18;
        v20 = v18 + v13;
        if ( !v17 )
          goto LABEL_40;
        v21 = v17 >> v16;
        switch ( v18 )
        {
          case 1:
            goto LABEL_38;
          case 2:
            goto LABEL_35;
          case 3:
            goto LABEL_32;
          case 4:
            goto LABEL_29;
          case 5:
            goto LABEL_26;
          case 6:
            goto LABEL_23;
          case 7:
            goto LABEL_20;
        }
        if ( v18 == 8 )
          break;
LABEL_40:
        v13 = 0;
        v22 = 3 * v18;
        v14 += v22;
        v15 += v22;
        if ( v20 != v24 )
          v13 = v20;
        if ( v12 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v8 = v25;
          goto LABEL_44;
        }
      }
      if ( (v21 & 1) != 0 )
      {
        v15[23] = v14[23];
        v15[22] = v14[22];
        v15[21] = v14[21];
      }
      v21 >>= 1;
LABEL_20:
      if ( (v21 & 1) != 0 )
      {
        v15[20] = v14[20];
        v15[19] = v14[19];
        v15[18] = v14[18];
      }
      v21 >>= 1;
LABEL_23:
      if ( (v21 & 1) != 0 )
      {
        v15[17] = v14[17];
        v15[16] = v14[16];
        v15[15] = v14[15];
      }
      v21 >>= 1;
LABEL_26:
      if ( (v21 & 1) != 0 )
      {
        v15[14] = v14[14];
        v15[13] = v14[13];
        v15[12] = v14[12];
      }
      v21 >>= 1;
LABEL_29:
      if ( (v21 & 1) != 0 )
      {
        v15[11] = v14[11];
        v15[10] = v14[10];
        v15[9] = v14[9];
      }
      v21 >>= 1;
LABEL_32:
      if ( (v21 & 1) != 0 )
      {
        v15[8] = v14[8];
        v15[7] = v14[7];
        v15[6] = v14[6];
      }
      v21 >>= 1;
LABEL_35:
      if ( (v21 & 1) != 0 )
      {
        v15[5] = v14[5];
        v15[4] = v14[4];
        v15[3] = v14[3];
      }
      v21 >>= 1;
LABEL_38:
      if ( (v21 & 1) != 0 )
      {
        v15[2] = v14[2];
        v15[1] = v14[1];
        *v15 = *v14;
      }
      goto LABEL_40;
    }
LABEL_44:
    v8 += *((int *)v7 + 11);
    v10 += *((int *)v7 + 10);
    v25 = v8;
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v11 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v11 = *((_QWORD *)v5 + 1) + *((_DWORD *)v5 + 8) * v6;
      }
    }
    else
    {
      ++v6;
      v11 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v11 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
