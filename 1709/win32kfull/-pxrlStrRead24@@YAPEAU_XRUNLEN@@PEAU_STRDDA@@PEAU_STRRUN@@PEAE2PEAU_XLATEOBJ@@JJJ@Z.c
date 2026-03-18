/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0127F20
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C2120 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead24(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebp
  _DWORD *v9; // r14
  int v10; // esi
  unsigned __int8 *v12; // rbx
  __int64 v13; // r9
  char *v14; // r8
  __int64 v15; // r10
  unsigned int v16; // eax
  ULONG *v17; // rdi
  __int64 v18; // rcx
  unsigned int *v20; // r12
  __int64 v21; // rbp
  __int64 v22; // r13
  ULONG v23; // eax
  __int64 v24; // rcx
  ULONG *v25; // rdi
  int v26; // r15d
  int v27; // r13d
  char v28; // r12
  unsigned __int8 *v29; // rcx
  int v30; // edx
  _DWORD *v31; // r8
  __int64 v32; // r9
  XLATEOBJ *v33; // rdi
  __int64 v34; // r11
  __int16 v35; // ax
  ULONG v36; // eax
  ULONG v37; // r10d
  unsigned int v38; // eax
  ULONG *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // [rsp+20h] [rbp-48h]
  _DWORD *v42; // [rsp+28h] [rbp-40h]
  ULONG iColor; // [rsp+78h] [rbp+10h]
  __int64 iColora; // [rsp+78h] [rbp+10h]
  ULONG v45; // [rsp+80h] [rbp+18h]
  __int64 v46; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v47; // [rsp+88h] [rbp+20h]
  int v48; // [rsp+98h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  HIBYTE(iColor) = 0;
  HIBYTE(v45) = 0;
  v12 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v26 = 0;
    v27 = *(_DWORD *)a1;
    v28 = a8 & 0x1F;
    v29 = &a4[4 * ((__int64)a8 >> 5)];
    v30 = *(_DWORD *)v29;
    v48 = *(_DWORD *)v29;
    v47 = v29;
    if ( v8 < a7 )
    {
      v31 = (_DWORD *)((char *)a1 + 32);
      v32 = a8 & 0x1F;
      v33 = pxlo;
      v34 = 0LL;
      v41 = v32;
      v42 = v31;
      iColora = 0LL;
      while ( 1 )
      {
        v35 = *(_WORD *)v12;
        v12 += 3;
        LOWORD(v45) = v35;
        BYTE2(v45) = *(v12 - 1);
        if ( v33 )
        {
          v36 = XLATEOBJ_iXlate(v33, v45);
          v31 = v42;
          v37 = v36;
          v29 = v47;
          v32 = v41;
          v34 = iColora;
          v30 = v48;
          HIBYTE(v45) = HIBYTE(v36);
        }
        else
        {
          v37 = v45;
        }
        if ( (dword_1C02E70D0[v32] & v30) != 0 )
        {
          v38 = *v31;
          if ( *v31 )
          {
            v39 = &v9[v34 + 2];
            v40 = v38;
            v26 += v38;
            while ( v40 )
            {
              *v39++ = v37;
              --v40;
            }
            v29 = v47;
            v34 += v38;
            v33 = pxlo;
            v30 = v48;
            iColora = v34;
          }
        }
        else
        {
          if ( v26 > 0 )
          {
            *v9 = v27;
            v34 = 0LL;
            v9[1] = v26;
            iColora = 0LL;
            v9 += v26 + 2;
            v27 += v26;
            v26 = 0;
          }
          v27 += *v31;
        }
        ++v32;
        ++v31;
        ++v8;
        v41 = v32;
        ++v28;
        v42 = v31;
        if ( v8 >= a7 )
          break;
        if ( (v28 & 0x20) != 0 )
        {
          v30 = *((_DWORD *)v29 + 1);
          v29 += 4;
          v48 = v30;
          v28 = 0;
          v47 = v29;
          v32 = 0LL;
          v41 = 0LL;
        }
      }
      if ( v26 > 0 )
      {
        *v9 = v27;
        v9[1] = v26;
        v9 += v26 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = *(_DWORD *)a1;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( pxlo )
    {
      v46 = 0LL;
      if ( a6 != a7 )
      {
        v20 = (unsigned int *)((char *)a1 + 32);
        v21 = (unsigned int)(a7 - a6);
        do
        {
          v22 = *v20++;
          if ( (_DWORD)v22 )
          {
            LOWORD(iColor) = *(_WORD *)v12;
            BYTE2(iColor) = v12[2];
            v23 = XLATEOBJ_iXlate(pxlo, iColor);
            v10 += v22;
            HIBYTE(iColor) = HIBYTE(v23);
            v24 = (unsigned int)v22;
            v25 = &v9[v46 + 2];
            v46 += v22;
            while ( v24 )
            {
              *v25++ = v23;
              --v24;
            }
          }
          v12 += 3;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v13 = 0LL;
      if ( a6 != a7 )
      {
        v14 = (char *)a1 + 32;
        v15 = (unsigned int)(a7 - a6);
        do
        {
          v14 += 4;
          LOWORD(iColor) = *(_WORD *)v12;
          BYTE2(iColor) = v12[2];
          v16 = *((_DWORD *)v14 - 1);
          if ( v16 )
          {
            v17 = (ULONG *)((char *)a2 + 4 * v13 + 16);
            v18 = v16;
            v10 += v16;
            while ( v18 )
            {
              *v17++ = iColor;
              --v18;
            }
            v13 += v16;
          }
          v12 += 3;
          --v15;
        }
        while ( v15 );
      }
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
