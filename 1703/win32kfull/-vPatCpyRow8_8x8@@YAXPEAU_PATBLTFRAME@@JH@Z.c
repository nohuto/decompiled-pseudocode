/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02A2DC4
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02AB980 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02B6D94 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v4; // r11
  int v5; // eax
  __int64 v6; // r12
  int v7; // edi
  __int64 v8; // r15
  char v9; // di
  unsigned int *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ebp
  int v15; // r14d
  int v16; // r14d
  __int64 v17; // r9
  __int64 v18; // rbx
  int v19; // r8d
  unsigned int v20; // esi
  unsigned int v21; // r10d
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // edi
  unsigned __int64 v25; // rax
  int v26; // ebp
  int v27; // ebp
  _DWORD v28[2]; // [rsp+20h] [rbp-98h] BYREF
  int *v29; // [rsp+28h] [rbp-90h]
  unsigned __int64 v30; // [rsp+30h] [rbp-88h]
  unsigned int *v31; // [rsp+38h] [rbp-80h]
  _QWORD v32[2]; // [rsp+40h] [rbp-78h] BYREF
  int v33; // [rsp+50h] [rbp-68h]
  int v34; // [rsp+54h] [rbp-64h]
  int v35; // [rsp+58h] [rbp-60h]
  int v36; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+C0h] [rbp+8h]
  char v38; // [rsp+C8h] [rbp+10h]
  char v40; // [rsp+D8h] [rbp+20h]

  v4 = (int *)*((_QWORD *)a1 + 3);
  v5 = a2 * *((_DWORD *)a1 + 4);
  v29 = v4;
  v6 = *(_QWORD *)a1 + v5;
  v7 = *((_DWORD *)a1 + 8) & 3;
  v37 = *((_DWORD *)a1 + 8) & 7;
  v8 = 3 * ((a2 - *((_DWORD *)a1 + 9)) & 7u);
  v31 = (unsigned int *)*((_QWORD *)a1 + 1);
  LOBYTE(v5) = 8 * (4 - v7);
  v9 = 8 * v7;
  v38 = v5;
  v10 = &v31[v8];
  v40 = v9;
  v30 = (unsigned __int64)(v31 + 24);
  do
  {
    v11 = *v4;
    v12 = *v4 & 3;
    v13 = v4[1] - v11;
    v14 = v4[1] & 3;
    v15 = v13 - (-(*v4 & 3) & 3) - v14;
    if ( v15 >= 0 )
      v16 = v15 >> 2;
    else
      v16 = 0;
    if ( (_DWORD)v12 == 1 )
    {
      if ( v13 == 1 )
      {
        v12 = 4LL;
      }
      else
      {
        if ( v13 != 2 )
          goto LABEL_14;
        v12 = 5LL;
      }
      goto LABEL_13;
    }
    if ( (_DWORD)v12 == 2 && v13 == 1 )
    {
      v12 = 6LL;
LABEL_13:
      v14 = 0;
    }
LABEL_14:
    v33 = 0;
    v32[1] = v28;
    v34 = 8;
    v17 = ((int)v11 >> 2) & 1;
    v36 = 2;
    v18 = v6 + (v11 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)a1 + 8) )
    {
      v20 = *v10;
      v21 = v10[1];
      if ( v37 >= 4 )
      {
        if ( v37 == 4 )
        {
          v19 = v10[1];
        }
        else
        {
          v19 = (v21 << v9) | (v20 >> v38);
          v20 = (v20 << v9) | (v21 >> v38);
        }
      }
      else
      {
        v19 = (v20 << v9) | (v21 >> v38);
        v20 = (v21 << v9) | (v20 >> v38);
      }
      if ( (_DWORD)v17 )
      {
        v22 = v19;
        v19 = v20;
        v20 = v22;
      }
    }
    else
    {
      v19 = v10[v17];
      v20 = v10[(v17 & 1) == 0];
    }
    v23 = v16;
    v24 = v19;
    if ( (_DWORD)v12 )
    {
      v12 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v12 )
      {
        v12 = (unsigned int)(v12 - 1);
        if ( (_DWORD)v12 )
        {
          v12 = (unsigned int)(v12 - 1);
          if ( (_DWORD)v12 )
          {
            v12 = (unsigned int)(v12 - 1);
            if ( (_DWORD)v12 )
            {
              v12 = (unsigned int)(v12 - 1);
              if ( !(_DWORD)v12 )
              {
                *(_BYTE *)(v18 + 1) = BYTE1(v19);
                goto LABEL_32;
              }
              if ( (_DWORD)v12 == 1 )
LABEL_32:
                *(_BYTE *)(v18 + 2) = BYTE2(v19);
            }
            else
            {
              *(_BYTE *)(v18 + 1) = BYTE1(v19);
            }
          }
          else
          {
            *(_BYTE *)(v18 + 3) = HIBYTE(v19);
          }
LABEL_37:
          v24 = v20;
          v18 += 4LL;
          v20 = v19;
          goto LABEL_38;
        }
      }
      else
      {
        *(_BYTE *)(v18 + 1) = BYTE1(v19);
      }
      *(_WORD *)(v18 + 2) = HIWORD(v19);
      goto LABEL_37;
    }
LABEL_38:
    if ( v16 <= 7 )
    {
      if ( (unsigned int)v16 >= 2 )
      {
        v25 = (unsigned __int64)(unsigned int)v16 >> 1;
        do
        {
          *(_DWORD *)v18 = v24;
          v23 -= 2;
          *(_DWORD *)(v18 + 4) = v20;
          v18 += 8LL;
          --v25;
        }
        while ( v25 );
      }
      if ( v23 )
      {
        *(_DWORD *)v18 = v24;
        v18 += 4LL;
      }
    }
    else
    {
      v28[0] = v24;
      v28[1] = v20;
      v35 = v16;
      v32[0] = v18;
      vFetchAndCopy(v32, v12);
      v4 = v29;
      v18 += 4LL * v16;
    }
    if ( v14 )
    {
      if ( (v16 & 1) != 0 )
        v24 = v20;
      v26 = v14 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 1 )
          {
            *(_WORD *)v18 = v24;
            *(_BYTE *)(v18 + 2) = BYTE2(v24);
          }
        }
        else
        {
          *(_WORD *)v18 = v24;
        }
      }
      else
      {
        *(_BYTE *)v18 = v24;
      }
    }
    v10 += 3;
    v9 = v40;
    if ( (unsigned __int64)v10 >= v30 )
      v10 = v31;
    v4 += 2;
    v6 += *((int *)a1 + 4);
    v29 = v4;
    --a3;
  }
  while ( a3 );
}
