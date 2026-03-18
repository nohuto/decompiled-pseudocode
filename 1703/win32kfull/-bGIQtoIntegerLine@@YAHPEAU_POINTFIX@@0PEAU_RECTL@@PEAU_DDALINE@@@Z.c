/*
 * XREFs of ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C0134CF4
 * Callers:
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00A6B18 (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGIQtoIntegerLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        struct _DDALINE *a4)
{
  FIX x; // r10d
  unsigned int v5; // r11d
  FIX v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  FIX y; // r8d
  FIX v10; // r9d
  int v11; // r9d
  int v12; // r12d
  int v13; // r10d
  int v14; // r12d
  int v15; // edi
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  signed __int64 v19; // rbp
  __int64 v20; // rbp
  int v21; // r13d
  __int64 v22; // r14
  int v23; // esi
  int v24; // esi
  unsigned __int64 v25; // r8
  struct _RECTL *v26; // rax
  int top; // r15d
  int bottom; // r12d
  int right; // r13d
  int left; // r10d
  int v31; // r13d
  int v32; // r10d
  int v33; // r12d
  int v34; // r15d
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r12d
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  __int64 v43; // rax
  unsigned int v44; // eax
  FIX v45; // eax
  int v46; // eax
  __int64 v47; // r10
  unsigned __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-58h]
  int v50; // [rsp+60h] [rbp+8h]
  int v51; // [rsp+68h] [rbp+10h]

  x = a1->x;
  v5 = 0;
  v6 = a2->x;
  v7 = 0;
  if ( a2->x < a1->x )
  {
    x = -x;
    v7 = 4;
    v6 = -v6;
  }
  v8 = v6 - x;
  if ( (v8 & 0x80000000) == 0 )
  {
    y = a1->y;
    v10 = a2->y;
    if ( v10 < y )
    {
      y = -y;
      v10 = -v10;
      v7 |= 2u;
    }
    v11 = v10 - y;
    if ( v11 >= 0 )
    {
      if ( v11 >= v8 )
      {
        if ( v11 == v8 )
        {
          v7 |= 8u;
        }
        else
        {
          v44 = v8;
          v7 |= 1u;
          v8 = v11;
          v11 = v44;
          v45 = x;
          x = y;
          y = v45;
        }
      }
      v12 = x;
      v13 = x & 0xF;
      v14 = v12 >> 4;
      v50 = v14;
      v15 = gaflHardwareRound[v7] | v7;
      v16 = y >> 4;
      v17 = y & 0xF;
      v51 = v16;
      if ( v8 > 0x1FFFFFF )
      {
        v19 = (int)v8 * (unsigned __int64)(unsigned int)(v17 + 8) - v11 * (unsigned __int64)(unsigned int)v13;
        if ( (v15 & 0x8000) != 0 )
          --v19;
      }
      else
      {
        v18 = v8 * (v17 + 8) - v13 * v11 - 1;
        if ( (v15 & 0x200) == 0 )
          v18 = v8 * (v17 + 8) - v13 * v11;
        v19 = v18;
      }
      v20 = v19 >> 4;
      v21 = ((_BYTE)v11 + (_BYTE)v17) & 0xF;
      LODWORD(v22) = ((v8 + v13) >> 4) - 1;
      v23 = ((_BYTE)v8 + (_BYTE)v13) & 0xF;
      if ( (((_BYTE)v8 + (_BYTE)v13) & 0xF) != 0 )
      {
        if ( (((_BYTE)v11 + (_BYTE)v17) & 0xF) != 0 )
        {
          if ( (int)abs32(v21 - 8) <= v23 )
            LODWORD(v22) = (v8 + v13) >> 4;
        }
        else if ( v23 - (unsigned int)((v15 & 0x100) != 0) + 8 >= 0x10 )
        {
          LODWORD(v22) = (v8 + v13) >> 4;
        }
      }
      if ( (v15 & 0x108) != 0x108 )
        goto LABEL_16;
      if ( (((_BYTE)v8 + (_BYTE)v13) & 0xF) != 0 && v21 == v23 + 8 )
        LODWORD(v22) = v22 - 1;
      if ( v13 && v17 == v13 + 8 )
      {
        v24 = 0;
      }
      else
      {
LABEL_16:
        v24 = 0;
        if ( v13 )
        {
          if ( v17 )
            v24 = (int)abs32(v17 - 8) <= v13;
          else
            LOBYTE(v24) = v13 - (unsigned int)((v15 & 0x100) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v25) = 0;
      if ( v20 >= 0 )
        LODWORD(v25) = v20 >= v8 - (v11 & -v24);
      if ( (int)v22 < v24 )
        goto LABEL_68;
      if ( !a3 )
      {
        v20 += (v11 & (unsigned int)-v24) - (unsigned __int64)v8;
        if ( v20 >= 0 )
          LODWORD(v20) = v20 - v8;
        goto LABEL_36;
      }
      v26 = &a3[v15 & 3];
      if ( (v15 & 4) != 0 )
      {
        if ( (v15 & 1) == 0 )
        {
          top = v26->top;
          left = 1 - v26->right;
          right = 1 - v26->left;
          bottom = v26->bottom;
LABEL_24:
          v31 = right - v50;
          v32 = left - v50;
          v33 = bottom - v51;
          v34 = top - v51;
          if ( v33 > (int)v25 && v31 > v24 && v32 <= (int)v22 )
          {
            v35 = v31 - 1;
            if ( (int)v22 < v31 )
              v35 = v22;
            v36 = ~v20;
            LODWORD(v22) = v35;
            v49 = ~v20;
            v37 = v20 + v11 * (__int64)v35;
            if ( v37 >= 0xFFFFFFFFLL )
            {
              v37 /= (unsigned __int64)v8;
              v36 = ~v20;
            }
            else
            {
              LODWORD(v37) = (unsigned int)v37 / v8;
            }
            if ( v34 <= (int)v37 )
            {
              if ( v33 <= (int)v37 )
              {
                v22 = v36 + (int)v8 * (__int64)v33;
                if ( v22 >= 0xFFFFFFFFLL )
                  v22 /= (unsigned __int64)(unsigned int)v11;
                else
                  LODWORD(v22) = (unsigned int)v22 / v11;
              }
              if ( v32 <= v24
                || ((v24 = v32, v43 = v20 + v11 * (__int64)v32, v43 >= 0xFFFFFFFFLL)
                  ? (v25 = (v20 + v11 * (__int64)v32) / (unsigned __int64)v8)
                  : (LODWORD(v25) = (unsigned int)v43 / v8),
                    v33 > (int)v25) )
              {
                if ( v34 <= (int)v25
                  || ((LODWORD(v25) = v34, v47 = v49 + (int)v8 * (__int64)v34, v47 >= 0xFFFFFFFFLL)
                    ? (v48 = (v49 + (int)v8 * (__int64)v34) / (unsigned __int64)(unsigned int)v11)
                    : (LODWORD(v48) = (unsigned int)v47 / v11),
                      v24 = v48 + 1,
                      v31 > (int)v48 + 1) )
                {
                  v14 = v50;
                  LODWORD(v20) = v11 * v24 - v8 * v25 - v8 + v20;
LABEL_36:
                  v38 = v24 + v14;
                  v39 = v25 + v51;
                  if ( (v15 & 1) != 0 )
                  {
                    v46 = v38;
                    v38 = v25 + v51;
                    v39 = v46;
                  }
                  v5 = 1;
                  v40 = -v38;
                  *(_DWORD *)a4 = v15;
                  if ( (v15 & 4) == 0 )
                    v40 = v38;
                  *((_DWORD *)a4 + 4) = v8;
                  v41 = -v39;
                  *((_DWORD *)a4 + 1) = v40;
                  *((_DWORD *)a4 + 5) = v11;
                  *((_DWORD *)a4 + 6) = v20;
                  if ( (v15 & 2) == 0 )
                    v41 = v39;
                  *((_DWORD *)a4 + 7) = 1;
                  *((_DWORD *)a4 + 2) = v41;
                  *((_DWORD *)a4 + 3) = v22 - v24 + 1;
                  return v5;
                }
              }
            }
          }
LABEL_68:
          *((_DWORD *)a4 + 3) = 0;
          return 1;
        }
        top = 1 - v26->bottom;
        bottom = 1 - v26->top;
      }
      else
      {
        top = v26->top;
        bottom = v26->bottom;
      }
      right = v26->right;
      left = v26->left;
      goto LABEL_24;
    }
  }
  return v5;
}
