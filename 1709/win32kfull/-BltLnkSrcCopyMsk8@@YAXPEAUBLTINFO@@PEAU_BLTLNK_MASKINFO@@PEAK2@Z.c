/*
 * XREFs of ?BltLnkSrcCopyMsk8@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02B1B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rdi
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rbp
  _BYTE *v11; // r9
  int v12; // r14d
  _BYTE *v13; // r10
  int v14; // r11d
  char v15; // cl
  unsigned int v16; // edx
  int v17; // esi
  int v18; // eax
  int v19; // r12d
  unsigned int v20; // edx
  unsigned __int8 v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+4h] [rbp-44h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v22 = *((_DWORD *)a2 + 6);
  v21 = *((_BYTE *)a2 + 36);
  v23 = v8;
  while ( v5 )
  {
    --v5;
    v11 = (_BYTE *)(v7 + *((int *)v4 + 12));
    v12 = *((_DWORD *)v4 + 7);
    v13 = (_BYTE *)(v8 + *((int *)v4 + 14));
    v14 = *((_DWORD *)v6 + 7);
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v15 = 0;
        v16 = v21 ^ *(unsigned __int8 *)(((__int64)v14 >> 3) + v10);
        v17 = 8 - (v14 & 7);
        v18 = v22 - v14;
        if ( v17 > v12 )
        {
          v17 = v12;
          v15 = 8 - (v14 & 7) - v12;
        }
        if ( v17 > v18 )
        {
          v15 += v17 - v18;
          v17 = v22 - v14;
        }
        v12 -= v17;
        v19 = v17 + v14;
        if ( !v16 )
          goto LABEL_39;
        v20 = v16 >> v15;
        switch ( v17 )
        {
          case 1:
            goto LABEL_37;
          case 2:
            goto LABEL_34;
          case 3:
            goto LABEL_31;
          case 4:
            goto LABEL_28;
          case 5:
            goto LABEL_25;
          case 6:
            goto LABEL_22;
          case 7:
            goto LABEL_19;
        }
        if ( v17 == 8 )
          break;
LABEL_39:
        v14 = 0;
        v11 += v17;
        v13 += v17;
        if ( v19 != v22 )
          v14 = v19;
        if ( v12 <= 0 )
        {
          v6 = a2;
          v4 = a1;
          v8 = v23;
          goto LABEL_43;
        }
      }
      if ( (v20 & 1) != 0 )
        v13[7] = v11[7];
      v20 >>= 1;
LABEL_19:
      if ( (v20 & 1) != 0 )
        v13[6] = v11[6];
      v20 >>= 1;
LABEL_22:
      if ( (v20 & 1) != 0 )
        v13[5] = v11[5];
      v20 >>= 1;
LABEL_25:
      if ( (v20 & 1) != 0 )
        v13[4] = v11[4];
      v20 >>= 1;
LABEL_28:
      if ( (v20 & 1) != 0 )
        v13[3] = v11[3];
      v20 >>= 1;
LABEL_31:
      if ( (v20 & 1) != 0 )
        v13[2] = v11[2];
      v20 >>= 1;
LABEL_34:
      if ( (v20 & 1) != 0 )
        v13[1] = v11[1];
      v20 >>= 1;
LABEL_37:
      if ( (v20 & 1) != 0 )
        *v13 = *v11;
      goto LABEL_39;
    }
LABEL_43:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    v23 = v8;
    if ( *((int *)v4 + 9) <= 0 )
    {
      if ( v9 )
      {
        --v9;
        v10 += *((int *)v6 + 8);
      }
      else
      {
        v9 = *((_DWORD *)v6 + 4) - 1;
        v10 = *((_QWORD *)v6 + 1) + v9 * *((_DWORD *)v6 + 8);
      }
    }
    else
    {
      ++v9;
      v10 += *((int *)v6 + 8);
      if ( v9 >= *((_DWORD *)v6 + 4) )
      {
        v10 = *((_QWORD *)v6 + 1);
        v9 = 0;
      }
    }
  }
}
