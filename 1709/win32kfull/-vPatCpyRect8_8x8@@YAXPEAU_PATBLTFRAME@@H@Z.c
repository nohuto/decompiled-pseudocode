/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C029EC60
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02A7FA0 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02B0B14 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // rsi
  unsigned int *v4; // r14
  int v5; // r10d
  int v6; // ecx
  char v7; // di
  char v8; // r10
  __int64 v9; // r9
  int v10; // r11d
  int v11; // r13d
  int v12; // ecx
  int v13; // ebp
  int v14; // r15d
  int v15; // r15d
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // edx
  int v19; // ebx
  unsigned int *v20; // r12
  BOOL v21; // r8d
  unsigned __int64 v22; // r11
  int v23; // r9d
  __int64 v24; // rax
  _BOOL8 v25; // rcx
  int v26; // r8d
  int v27; // ebx
  unsigned int v28; // r14d
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  _BYTE *v32; // rbp
  int v33; // r8d
  __int64 v34; // r9
  unsigned int v35; // ecx
  int v36; // edx
  unsigned int v37; // esi
  _BYTE *v38; // rdi
  unsigned __int64 v39; // rax
  bool v40; // zf
  unsigned int v41; // [rsp+20h] [rbp-D8h]
  unsigned int v42; // [rsp+24h] [rbp-D4h]
  int v43; // [rsp+28h] [rbp-D0h]
  int v44; // [rsp+2Ch] [rbp-CCh]
  char v45; // [rsp+30h] [rbp-C8h]
  char v46; // [rsp+34h] [rbp-C4h]
  int v47; // [rsp+38h] [rbp-C0h]
  int v48; // [rsp+3Ch] [rbp-BCh]
  _DWORD v49[2]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int *v50; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v51; // [rsp+50h] [rbp-A8h]
  __int64 v52; // [rsp+58h] [rbp-A0h]
  int *v53; // [rsp+60h] [rbp-98h]
  __int64 v54; // [rsp+68h] [rbp-90h]
  unsigned __int64 v55; // [rsp+70h] [rbp-88h]
  unsigned int *v56; // [rsp+78h] [rbp-80h]
  _BOOL8 v57; // [rsp+80h] [rbp-78h]
  _QWORD v58[2]; // [rsp+88h] [rbp-70h] BYREF
  int v59; // [rsp+98h] [rbp-60h]
  int v60; // [rsp+9Ch] [rbp-5Ch]
  int v61; // [rsp+A0h] [rbp-58h]
  int v62; // [rsp+A4h] [rbp-54h]
  int v65; // [rsp+110h] [rbp+18h]
  int v66; // [rsp+118h] [rbp+20h]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (unsigned int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v5 & 7;
  v53 = v2;
  LOBYTE(v5) = v5 & 3;
  v42 = v6;
  v56 = v4;
  v7 = 8 * (4 - v5);
  v8 = 8 * v5;
  v45 = v8;
  v46 = v7;
  v55 = (unsigned __int64)(v4 + 24);
  do
  {
    v9 = *v2;
    v10 = v2[1];
    v11 = *v2 & 3;
    v12 = v2[2] - v9;
    v65 = v2[2] & 3;
    v13 = v2[3] - v10;
    v14 = v12 - (-v11 & 3) - v65;
    if ( v14 >= 0 )
      v15 = v14 >> 2;
    else
      v15 = 0;
    if ( v11 == 1 )
    {
      if ( v12 == 1 )
      {
        v65 = 0;
        v11 = 4;
        goto LABEL_14;
      }
      if ( v12 == 2 )
      {
        v11 = 5;
LABEL_13:
        v65 = 0;
      }
    }
    else if ( v11 == 2 && v12 == 1 )
    {
      v11 = 6;
      goto LABEL_13;
    }
LABEL_14:
    v16 = *((_DWORD *)v3 + 4);
    v17 = v10 - *((_DWORD *)v3 + 9);
    v59 = 0;
    v18 = ((int)v9 >> 2) & 1;
    v62 = 2;
    v19 = v13 & 7;
    v66 = v19;
    v20 = &v4[3 * (v17 & 7)];
    v50 = v20;
    v21 = (((int)v9 >> 2) & 1) == 0;
    v22 = *(_QWORD *)v3 + (v9 & 0xFFFFFFFFFFFFFFFCuLL) + v10 * v16;
    v23 = (v13 >> 3) + 1;
    v43 = 8 * v16;
    v51 = v22;
    v58[1] = v49;
    v60 = 8;
    if ( v13 > 8 )
      v13 = 8;
    if ( v13 )
    {
      v24 = v18;
      v25 = v21;
      v52 = v18;
      v57 = v21;
      while ( 1 )
      {
        v26 = v19;
        v48 = v13 - 1;
        if ( *((_DWORD *)v3 + 8) )
        {
          v28 = *v20;
          v29 = v20[1];
          if ( v42 >= 4 )
          {
            if ( v42 == 4 )
            {
              v27 = v20[1];
            }
            else
            {
              v27 = (v29 << v8) | (v28 >> v7);
              v28 = (v28 << v8) | (v29 >> v7);
            }
          }
          else
          {
            v27 = (v28 << v8) | (v29 >> v7);
            v28 = (v29 << v8) | (v28 >> v7);
          }
          if ( v52 )
          {
            v30 = v27;
            v27 = v28;
            v28 = v30;
          }
        }
        else
        {
          v27 = v20[v24];
          v28 = v20[v25];
        }
        --v66;
        v31 = v23 - 1;
        v32 = (_BYTE *)v22;
        if ( v26 )
          v31 = v23;
        v47 = v31;
        v23 = v31;
        v33 = v31;
        if ( v31 )
          break;
LABEL_62:
        v20 += 3;
        v4 = v56;
        v13 = v48;
        if ( (unsigned __int64)v20 >= v55 )
          v20 = v56;
        v19 = v66;
        v22 += *((int *)v3 + 4);
        v24 = v52;
        v25 = v57;
        v50 = v20;
        v51 = v22;
        if ( !v48 )
          goto LABEL_65;
      }
      v34 = v43;
      v54 = v43;
      while ( 2 )
      {
        --v33;
        v35 = v28;
        v44 = v33;
        v36 = v15;
        v41 = v28;
        v37 = v27;
        v38 = v32;
        if ( !v11 )
          goto LABEL_44;
        if ( v11 == 1 )
        {
          v32[1] = BYTE1(v27);
        }
        else if ( v11 != 2 )
        {
          if ( v11 == 3 )
          {
            v32[3] = HIBYTE(v27);
          }
          else if ( v11 == 4 )
          {
            v32[1] = BYTE1(v27);
          }
          else
          {
            if ( v11 == 5 )
              v32[1] = BYTE1(v27);
            v32[2] = BYTE2(v27);
          }
LABEL_43:
          v38 = v32 + 4;
          v41 = v27;
          v37 = v28;
          v35 = v27;
LABEL_44:
          if ( v15 <= 7 )
          {
            if ( (unsigned int)v15 >= 2 )
            {
              v39 = (unsigned __int64)(unsigned int)v15 >> 1;
              do
              {
                *(_DWORD *)v38 = v37;
                v36 -= 2;
                *((_DWORD *)v38 + 1) = v35;
                v38 += 8;
                --v39;
              }
              while ( v39 );
            }
            if ( v36 )
            {
              *(_DWORD *)v38 = v37;
              v38 += 4;
            }
          }
          else
          {
            v49[1] = v35;
            v49[0] = v37;
            v61 = v15;
            v58[0] = v38;
            vFetchAndCopy(v58, (unsigned int)v15);
            v33 = v44;
            v34 = v54;
            v38 += 4 * v15;
          }
          if ( v65 )
          {
            if ( (v15 & 1) != 0 )
              v37 = v41;
            switch ( v65 )
            {
              case 1:
                *v38 = v37;
                break;
              case 2:
                *(_WORD *)v38 = v37;
                break;
              case 3:
                *(_WORD *)v38 = v37;
                v38[2] = BYTE2(v37);
                break;
            }
          }
          v32 += v34;
          if ( !v33 )
          {
            v20 = v50;
            v8 = v45;
            v7 = v46;
            v3 = a1;
            v23 = v47;
            v22 = v51;
            goto LABEL_62;
          }
          continue;
        }
        break;
      }
      *((_WORD *)v32 + 1) = HIWORD(v27);
      goto LABEL_43;
    }
LABEL_65:
    v2 = v53 + 4;
    v40 = a2-- == 1;
    v53 += 4;
  }
  while ( !v40 );
}
