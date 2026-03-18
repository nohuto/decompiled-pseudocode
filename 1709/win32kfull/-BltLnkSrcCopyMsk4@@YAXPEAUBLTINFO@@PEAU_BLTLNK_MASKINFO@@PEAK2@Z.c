/*
 * XREFs of ?BltLnkSrcCopyMsk4@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02B1930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk4(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r13
  __int64 v6; // rcx
  int v8; // edi
  __int64 v9; // rbx
  int v10; // r15d
  unsigned int v11; // ebp
  int v12; // esi
  unsigned int v13; // r12d
  char *v14; // r8
  _BYTE *v15; // r11
  char v16; // r9
  char v17; // cl
  _BYTE *v18; // rax
  int v19; // esi
  unsigned __int64 v20; // r13
  int v21; // r15d
  unsigned int v22; // edx
  unsigned int v23; // eax
  char v24; // bp
  unsigned int v25; // edx
  char v26; // r9
  char v27; // al
  char v28; // cl
  char v29; // cl
  char v30; // al
  char v31; // cl
  char v32; // cl
  unsigned int v33; // eax
  char v34; // cl
  char v35; // al
  char v36; // cl
  __int64 v37; // [rsp+0h] [rbp-48h]
  int v38; // [rsp+50h] [rbp+8h]
  __int64 v39; // [rsp+58h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a2 + 5);
  v9 = *(_QWORD *)a2;
  v10 = *((_DWORD *)a1 + 8);
  v37 = v4;
  v39 = v6;
  while ( v10 )
  {
    --v10;
    v11 = *((_DWORD *)a2 + 7);
    v12 = *((_DWORD *)a1 + 12);
    v13 = *((_DWORD *)a1 + 7);
    v14 = (char *)(v6 + ((__int64)*((int *)a1 + 14) >> 1));
    v38 = v10;
    v15 = (_BYTE *)(v4 + ((__int64)v12 >> 1));
    v16 = (*((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v11 >> 3) + v9)) << (v11 & 7);
    if ( (*((_DWORD *)a1 + 14) & 1) != 0 )
    {
      if ( v16 < 0 )
      {
        v17 = *v14;
        if ( (v12 & 1) != 0 )
          *v14 ^= (*v15 ^ v17) & 0xF;
        else
          *v14 = (*v15 >> 4) | v17 & 0xF0;
      }
      v18 = v15 + 1;
      ++v14;
      LOBYTE(v12) = v12 + 1;
      v16 *= 2;
      ++v11;
      --v13;
      if ( (v12 & 1) != 0 )
        v18 = v15;
      v15 = v18;
    }
    v19 = v12 & 1;
    if ( v13 >= 2 )
    {
      v20 = (unsigned __int64)v13 >> 1;
      while ( 1 )
      {
        v21 = *((_DWORD *)a2 + 6);
        v22 = 0;
        if ( v11 != v21 )
          v22 = v11;
        if ( (v22 & 7) == 0 )
          v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v22 >> 3) + v9);
        v23 = v22 + 1;
        v24 = v16;
        v25 = 0;
        v26 = 2 * v16;
        if ( v23 != v21 )
          v25 = v23;
        if ( (v25 & 7) == 0 )
          v26 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v25 >> 3) + v9);
        if ( v24 >= 0 )
        {
          if ( v26 < 0 )
          {
            v32 = *v14;
            if ( !v19 )
            {
              *v14 ^= (*v15 ^ v32) & 0xF;
              goto LABEL_35;
            }
            v28 = v32 & 0xF0;
            v30 = *v15 >> 4;
LABEL_32:
            v31 = v30 | v28;
LABEL_33:
            *v14 = v31;
          }
        }
        else
        {
          v27 = *v15;
          if ( v26 >= 0 )
          {
            v29 = *v14;
            if ( !v19 )
            {
              v31 = v27 ^ (v27 ^ v29) & 0xF;
              goto LABEL_33;
            }
            v28 = v29 & 0xF;
LABEL_27:
            v30 = 16 * v27;
            goto LABEL_32;
          }
          if ( v19 )
          {
            v28 = v15[1] >> 4;
            goto LABEL_27;
          }
          *v14 = v27;
        }
LABEL_35:
        v16 = 2 * v26;
        v11 = v25 + 1;
        ++v14;
        ++v15;
        v13 -= 2;
        if ( !--v20 )
        {
          v10 = v38;
          v4 = v37;
          break;
        }
      }
    }
    if ( v13 )
    {
      v33 = 0;
      if ( v11 != *((_DWORD *)a2 + 6) )
        v33 = v11;
      if ( (v33 & 7) == 0 )
        v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v33 >> 3) + v9);
      if ( v16 < 0 )
      {
        v34 = *v14;
        v35 = *v15;
        if ( v19 )
          v36 = (16 * v35) | v34 & 0xF;
        else
          v36 = v35 ^ (v35 ^ v34) & 0xF;
        *v14 = v36;
      }
    }
    v6 = *((int *)a1 + 11) + v39;
    v4 += *((int *)a1 + 10);
    v39 = v6;
    v37 = v4;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v8 )
      {
        --v8;
        v9 += *((int *)a2 + 8);
      }
      else
      {
        v8 = *((_DWORD *)a2 + 4) - 1;
        v9 = *((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v8;
      }
    }
    else
    {
      ++v8;
      v9 += *((int *)a2 + 8);
      if ( v8 >= *((_DWORD *)a2 + 4) )
      {
        v9 = *((_QWORD *)a2 + 1);
        v8 = 0;
      }
    }
  }
}
