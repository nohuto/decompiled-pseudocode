/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02A2590
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02AB960 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02B6D94 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // rax
  struct _PATBLTFRAME *v3; // rsi
  unsigned int *v4; // r14
  int v5; // r11d
  int v6; // ecx
  char v7; // di
  char v8; // r11
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r12d
  int v12; // ecx
  int v13; // ebp
  int v14; // r15d
  int v15; // r15d
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ebx
  int v19; // r13d
  BOOL v20; // r8d
  int v21; // eax
  unsigned int *v22; // r13
  unsigned __int64 v23; // r10
  int v24; // r9d
  __int64 v25; // rax
  _BOOL8 v26; // rcx
  int v27; // r8d
  int v28; // ebx
  unsigned int v29; // r14d
  unsigned int v30; // edx
  unsigned int v31; // eax
  int v32; // eax
  _BYTE *v33; // rbp
  int v34; // r8d
  __int64 v35; // r9
  unsigned int v36; // ecx
  int v37; // edx
  unsigned int v38; // esi
  _BYTE *v39; // rdi
  unsigned __int64 v40; // rax
  bool v41; // zf
  unsigned int v42; // [rsp+20h] [rbp-D8h]
  unsigned int v43; // [rsp+24h] [rbp-D4h]
  int v44; // [rsp+28h] [rbp-D0h]
  int v45; // [rsp+2Ch] [rbp-CCh]
  char v46; // [rsp+30h] [rbp-C8h]
  char v47; // [rsp+34h] [rbp-C4h]
  int v48; // [rsp+38h] [rbp-C0h]
  int v49; // [rsp+3Ch] [rbp-BCh]
  _DWORD v50[2]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int *v51; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+50h] [rbp-A8h]
  __int64 v53; // [rsp+58h] [rbp-A0h]
  int *v54; // [rsp+60h] [rbp-98h]
  __int64 v55; // [rsp+68h] [rbp-90h]
  unsigned __int64 v56; // [rsp+70h] [rbp-88h]
  unsigned int *v57; // [rsp+78h] [rbp-80h]
  _BOOL8 v58; // [rsp+80h] [rbp-78h]
  _QWORD v59[2]; // [rsp+88h] [rbp-70h] BYREF
  int v60; // [rsp+98h] [rbp-60h]
  int v61; // [rsp+9Ch] [rbp-5Ch]
  int v62; // [rsp+A0h] [rbp-58h]
  int v63; // [rsp+A4h] [rbp-54h]
  int v66; // [rsp+110h] [rbp+18h]
  int v67; // [rsp+118h] [rbp+20h]

  v2 = (int *)*((_QWORD *)a1 + 3);
  v3 = a1;
  v4 = (unsigned int *)*((_QWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v5 & 7;
  v54 = v2;
  LOBYTE(v5) = v5 & 3;
  v43 = v6;
  v57 = v4;
  v7 = 8 * (4 - v5);
  v8 = 8 * v5;
  v46 = v8;
  v47 = v7;
  v56 = (unsigned __int64)(v4 + 24);
  do
  {
    v9 = *v2;
    v10 = v2[1];
    v11 = *v2 & 3;
    v12 = v2[2] - v9;
    v66 = v2[2] & 3;
    v13 = v2[3] - v10;
    v14 = v12 - (-v11 & 3) - v66;
    if ( v14 >= 0 )
      v15 = v14 >> 2;
    else
      v15 = 0;
    if ( v11 == 1 )
    {
      if ( v12 == 1 )
      {
        v66 = 0;
        v11 = 4;
        goto LABEL_14;
      }
      if ( v12 == 2 )
      {
        v11 = 5;
LABEL_13:
        v66 = 0;
      }
    }
    else if ( v11 == 2 && v12 == 1 )
    {
      v11 = 6;
      goto LABEL_13;
    }
LABEL_14:
    v60 = 0;
    v59[1] = v50;
    v16 = (v10 - *((_DWORD *)v3 + 9)) & 7;
    v17 = ((int)v9 >> 2) & 1;
    v63 = 2;
    v18 = v13 & 7;
    v19 = 3 * v16;
    v67 = v18;
    v20 = (((int)v9 >> 2) & 1) == 0;
    v21 = v10 * *((_DWORD *)v3 + 4);
    v22 = (unsigned int *)((char *)v4 + (unsigned int)(4 * v19));
    v51 = v22;
    v23 = *(_QWORD *)v3 + (v9 & 0xFFFFFFFFFFFFFFFCuLL) + v21;
    v24 = (v13 >> 3) + 1;
    v44 = 8 * *((_DWORD *)v3 + 4);
    v52 = v23;
    v61 = 8;
    if ( v13 > 8 )
      v13 = 8;
    if ( v13 )
    {
      v25 = v17;
      v26 = v20;
      v53 = v17;
      v58 = v20;
      while ( 1 )
      {
        v27 = v18;
        v49 = v13 - 1;
        if ( *((_DWORD *)v3 + 8) )
        {
          v29 = *v22;
          v30 = v22[1];
          if ( v43 >= 4 )
          {
            if ( v43 == 4 )
            {
              v28 = v22[1];
            }
            else
            {
              v28 = (v30 << v8) | (v29 >> v7);
              v29 = (v29 << v8) | (v30 >> v7);
            }
          }
          else
          {
            v28 = (v29 << v8) | (v30 >> v7);
            v29 = (v30 << v8) | (v29 >> v7);
          }
          if ( v53 )
          {
            v31 = v28;
            v28 = v29;
            v29 = v31;
          }
        }
        else
        {
          v28 = v22[v25];
          v29 = v22[v26];
        }
        --v67;
        v32 = v24 - 1;
        v33 = (_BYTE *)v23;
        if ( v27 )
          v32 = v24;
        v48 = v32;
        v24 = v32;
        v34 = v32;
        if ( v32 )
          break;
LABEL_62:
        v22 += 3;
        v4 = v57;
        v13 = v49;
        if ( (unsigned __int64)v22 >= v56 )
          v22 = v57;
        v18 = v67;
        v23 += *((int *)v3 + 4);
        v25 = v53;
        v26 = v58;
        v51 = v22;
        v52 = v23;
        if ( !v49 )
          goto LABEL_65;
      }
      v35 = v44;
      v55 = v44;
      while ( 2 )
      {
        --v34;
        v36 = v29;
        v45 = v34;
        v37 = v15;
        v42 = v29;
        v38 = v28;
        v39 = v33;
        if ( !v11 )
          goto LABEL_44;
        if ( v11 == 1 )
        {
          v33[1] = BYTE1(v28);
        }
        else if ( v11 != 2 )
        {
          if ( v11 == 3 )
          {
            v33[3] = HIBYTE(v28);
          }
          else if ( v11 == 4 )
          {
            v33[1] = BYTE1(v28);
          }
          else
          {
            if ( v11 == 5 )
              v33[1] = BYTE1(v28);
            v33[2] = BYTE2(v28);
          }
LABEL_43:
          v39 = v33 + 4;
          v42 = v28;
          v38 = v29;
          v36 = v28;
LABEL_44:
          if ( v15 <= 7 )
          {
            if ( (unsigned int)v15 >= 2 )
            {
              v40 = (unsigned __int64)(unsigned int)v15 >> 1;
              do
              {
                *(_DWORD *)v39 = v38;
                v37 -= 2;
                *((_DWORD *)v39 + 1) = v36;
                v39 += 8;
                --v40;
              }
              while ( v40 );
            }
            if ( v37 )
            {
              *(_DWORD *)v39 = v38;
              v39 += 4;
            }
          }
          else
          {
            v50[1] = v36;
            v50[0] = v38;
            v62 = v15;
            v59[0] = v39;
            vFetchAndCopy(v59, (unsigned int)v15);
            v34 = v45;
            v35 = v55;
            v39 += 4 * v15;
          }
          if ( v66 )
          {
            if ( (v15 & 1) != 0 )
              v38 = v42;
            switch ( v66 )
            {
              case 1:
                *v39 = v38;
                break;
              case 2:
                *(_WORD *)v39 = v38;
                break;
              case 3:
                *(_WORD *)v39 = v38;
                v39[2] = BYTE2(v38);
                break;
            }
          }
          v33 += v35;
          if ( !v34 )
          {
            v22 = v51;
            v8 = v46;
            v7 = v47;
            v3 = a1;
            v24 = v48;
            v23 = v52;
            goto LABEL_62;
          }
          continue;
        }
        break;
      }
      *((_WORD *)v33 + 1) = HIWORD(v28);
      goto LABEL_43;
    }
LABEL_65:
    v2 = v54 + 4;
    v41 = a2-- == 1;
    v54 += 4;
  }
  while ( !v41 );
}
