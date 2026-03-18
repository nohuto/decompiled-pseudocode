/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C029F494
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02A7FC0 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C02B0B14 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v4; // rcx
  int v5; // eax
  int v6; // r11d
  unsigned int v7; // edi
  int v8; // edx
  __int64 v9; // r12
  char v10; // r11
  unsigned int *v11; // r15
  __int64 v12; // r8
  int v13; // ebp
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ebp
  int v17; // r14d
  int v18; // r14d
  __int64 v19; // r9
  __int64 v20; // rbx
  int v21; // r8d
  unsigned int v22; // esi
  unsigned int v23; // r10d
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // edi
  unsigned __int64 v27; // rax
  int v28; // ebp
  int v29; // ebp
  bool v30; // zf
  _DWORD v31[2]; // [rsp+20h] [rbp-98h] BYREF
  int *v32; // [rsp+28h] [rbp-90h]
  unsigned __int64 v33; // [rsp+30h] [rbp-88h]
  unsigned int *v34; // [rsp+38h] [rbp-80h]
  _QWORD v35[2]; // [rsp+40h] [rbp-78h] BYREF
  int v36; // [rsp+50h] [rbp-68h]
  int v37; // [rsp+54h] [rbp-64h]
  int v38; // [rsp+58h] [rbp-60h]
  int v39; // [rsp+5Ch] [rbp-5Ch]
  char v40; // [rsp+C0h] [rbp+8h]
  char v41; // [rsp+C8h] [rbp+10h]
  unsigned int v43; // [rsp+D8h] [rbp+20h]

  v4 = (int *)*((_QWORD *)a1 + 3);
  v32 = v4;
  v5 = a2 * *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 8) & 3;
  v7 = *((_DWORD *)a1 + 8) & 7;
  v8 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v34 = (unsigned int *)*((_QWORD *)a1 + 1);
  v43 = v7;
  v9 = *(_QWORD *)a1 + v5;
  LOBYTE(v5) = 8 * (4 - v6);
  v10 = 8 * v6;
  v41 = v5;
  v11 = (unsigned int *)((char *)v34 + (unsigned int)(12 * v8));
  v40 = v10;
  v33 = (unsigned __int64)(v34 + 24);
  do
  {
    v12 = *v4;
    v13 = v4[1];
    v14 = *v4 & 3;
    v15 = v13 - v12;
    v16 = v13 & 3;
    v17 = v15 - (-(int)v14 & 3) - v16;
    if ( v17 >= 0 )
      v18 = v17 >> 2;
    else
      v18 = 0;
    if ( (_DWORD)v14 == 1 )
    {
      if ( v15 == 1 )
      {
        v14 = 4LL;
      }
      else
      {
        if ( v15 != 2 )
          goto LABEL_14;
        v14 = 5LL;
      }
      goto LABEL_13;
    }
    if ( (_DWORD)v14 == 2 && v15 == 1 )
    {
      v14 = 6LL;
LABEL_13:
      v16 = 0;
    }
LABEL_14:
    v36 = 0;
    v35[1] = v31;
    v37 = 8;
    v19 = ((int)v12 >> 2) & 1;
    v39 = 2;
    v20 = v9 + (v12 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)a1 + 8) )
    {
      v22 = *v11;
      v23 = v11[1];
      if ( v7 >= 4 )
      {
        if ( v7 == 4 )
        {
          v21 = v11[1];
        }
        else
        {
          v21 = (v23 << v10) | (v22 >> v41);
          v22 = (v22 << v10) | (v23 >> v41);
        }
      }
      else
      {
        v21 = (v22 << v10) | (v23 >> v41);
        v22 = (v23 << v10) | (v22 >> v41);
      }
      if ( (_DWORD)v19 )
      {
        v24 = v21;
        v21 = v22;
        v22 = v24;
      }
    }
    else
    {
      v21 = v11[v19];
      v22 = v11[(v19 & 1) == 0];
    }
    v25 = v18;
    v26 = v21;
    if ( (_DWORD)v14 )
    {
      v14 = (unsigned int)(v14 - 1);
      if ( (_DWORD)v14 )
      {
        v14 = (unsigned int)(v14 - 1);
        if ( (_DWORD)v14 )
        {
          v14 = (unsigned int)(v14 - 1);
          if ( (_DWORD)v14 )
          {
            v14 = (unsigned int)(v14 - 1);
            if ( (_DWORD)v14 )
            {
              v14 = (unsigned int)(v14 - 1);
              if ( !(_DWORD)v14 )
              {
                *(_BYTE *)(v20 + 1) = BYTE1(v21);
                goto LABEL_32;
              }
              if ( (_DWORD)v14 == 1 )
LABEL_32:
                *(_BYTE *)(v20 + 2) = BYTE2(v21);
            }
            else
            {
              *(_BYTE *)(v20 + 1) = BYTE1(v21);
            }
          }
          else
          {
            *(_BYTE *)(v20 + 3) = HIBYTE(v21);
          }
LABEL_37:
          v26 = v22;
          v20 += 4LL;
          v22 = v21;
          goto LABEL_38;
        }
      }
      else
      {
        *(_BYTE *)(v20 + 1) = BYTE1(v21);
      }
      *(_WORD *)(v20 + 2) = HIWORD(v21);
      goto LABEL_37;
    }
LABEL_38:
    if ( v18 <= 7 )
    {
      if ( (unsigned int)v18 >= 2 )
      {
        v27 = (unsigned __int64)(unsigned int)v18 >> 1;
        do
        {
          *(_DWORD *)v20 = v26;
          v25 -= 2;
          *(_DWORD *)(v20 + 4) = v22;
          v20 += 8LL;
          --v27;
        }
        while ( v27 );
      }
      if ( v25 )
      {
        *(_DWORD *)v20 = v26;
        v20 += 4LL;
      }
    }
    else
    {
      v31[0] = v26;
      v31[1] = v22;
      v38 = v18;
      v35[0] = v20;
      vFetchAndCopy(v35, v14);
      v10 = v40;
      v20 += 4LL * v18;
    }
    if ( v16 )
    {
      if ( (v18 & 1) != 0 )
        v26 = v22;
      v28 = v16 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            *(_WORD *)v20 = v26;
            *(_BYTE *)(v20 + 2) = BYTE2(v26);
          }
        }
        else
        {
          *(_WORD *)v20 = v26;
        }
      }
      else
      {
        *(_BYTE *)v20 = v26;
      }
    }
    v11 += 3;
    if ( (unsigned __int64)v11 >= v33 )
      v11 = v34;
    v9 += *((int *)a1 + 4);
    v7 = v43;
    v4 = v32 + 2;
    v30 = a3-- == 1;
    v32 += 2;
  }
  while ( !v30 );
}
