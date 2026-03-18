/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C01009D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  _DWORD *v9; // r10
  __int64 v10; // r11
  unsigned __int8 *v12; // r8
  int v13; // ecx
  int v14; // esi
  __int64 v15; // r14
  unsigned int *v16; // r13
  __int64 v17; // r9
  int v18; // r12d
  unsigned int v19; // eax
  __int64 v20; // rdx
  ULONG v21; // eax
  ULONG *v22; // rdi
  __int64 v23; // rcx
  __int64 v25; // rbp
  unsigned int *v26; // r12
  __int64 v27; // r9
  int v28; // r14d
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int *v31; // rdi
  int v32; // ebp
  char v33; // si
  unsigned __int8 *v34; // r14
  int v35; // r9d
  int v36; // ecx
  unsigned int *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r12
  unsigned int v41; // eax
  __int64 v42; // rcx
  _DWORD *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-48h]
  int v47; // [rsp+58h] [rbp+10h]
  __int64 v48; // [rsp+60h] [rbp+18h]
  __int64 v49; // [rsp+68h] [rbp+20h]
  int v50; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = a6 & 7;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  if ( a4 )
  {
    v32 = *(_DWORD *)a1;
    v33 = a8 & 0x1F;
    v34 = &a4[4 * ((__int64)a8 >> 5)];
    v35 = 0;
    v47 = *(_DWORD *)v34;
    if ( a6 < a7 )
    {
      v36 = *(_DWORD *)v12;
      v37 = (unsigned int *)((char *)a1 + 32);
      v48 = 0LL;
      v38 = a6 & 7;
      v50 = *(_DWORD *)v12;
      v49 = v10;
      v39 = a8 & 0x1F;
LABEL_27:
      v46 = v39;
      while ( 1 )
      {
        v40 = (v36 & (unsigned int)dword_1C02E6C08[v38]) >> dword_1C02E6C28[v38];
        if ( a5 )
          LODWORD(v40) = a5->pulXlate[v40];
        if ( (dword_1C02E70D0[v39] & v47) != 0 )
        {
          v41 = *v37;
          if ( *v37 )
          {
            v42 = v48 + 2;
            v35 += v41;
            v48 += v41;
            v43 = &v9[v42];
            v44 = v41;
            v39 = v46;
            while ( v44 )
            {
              *v43++ = v40;
              --v44;
            }
          }
        }
        else
        {
          if ( v35 > 0 )
          {
            *v9 = v32;
            v32 += v35;
            v9[1] = v35;
            v45 = v35;
            v35 = 0;
            v9 += v45 + 2;
            v48 = 0LL;
          }
          v32 += *v37;
        }
        ++v39;
        v38 = v49 + 1;
        v46 = v39;
        ++v8;
        ++v49;
        LOBYTE(v10) = v10 + 1;
        ++v33;
        ++v37;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v38 = 0LL;
          v49 = 0LL;
          v36 = *(_DWORD *)v12;
          v50 = *(_DWORD *)v12;
        }
        else
        {
          v36 = v50;
        }
        if ( (v33 & 0x20) != 0 )
        {
          v34 += 4;
          v33 = 0;
          v39 = 0LL;
          v47 = *(_DWORD *)v34;
          v36 = v50;
          goto LABEL_27;
        }
      }
      if ( v35 > 0 )
      {
        *v9 = v32;
        v9[1] = v35;
        v9 += v35 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    v13 = *(_DWORD *)a1;
    v14 = 0;
    *v9 = v13;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v13;
    if ( a5 )
    {
      if ( a6 < a7 )
      {
        v15 = 0LL;
        v16 = (unsigned int *)((char *)a1 + 32);
        v17 = a6 & 7;
LABEL_5:
        v18 = *(_DWORD *)v12;
        while ( 1 )
        {
          v19 = *v16++;
          if ( v19 )
          {
            v20 = v19;
            v21 = a5->pulXlate[(unsigned __int64)(v18 & (unsigned int)dword_1C02E6C08[v17]) >> LOBYTE(dword_1C02E6C28[v17])];
            v22 = &v9[v15 + 2];
            v23 = (unsigned int)v20;
            v14 += v20;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v15 += v20;
          }
          ++v8;
          LOBYTE(v10) = v10 + 1;
          ++v17;
          if ( v8 >= a7 )
            break;
          if ( (v10 & 8) != 0 )
          {
            v12 += 4;
            LOBYTE(v10) = 0;
            v17 = 0LL;
            goto LABEL_5;
          }
        }
      }
    }
    else if ( a6 < a7 )
    {
      v25 = 0LL;
      v26 = (unsigned int *)((char *)a1 + 32);
      v27 = a6 & 7;
LABEL_17:
      v28 = *(_DWORD *)v12;
      while ( 1 )
      {
        v29 = (v28 & (unsigned int)dword_1C02E6C08[v27]) >> dword_1C02E6C28[v27];
        v30 = *v26++;
        if ( (_DWORD)v30 )
        {
          v14 += v30;
          v31 = (unsigned int *)((char *)a2 + 4 * v25 + 16);
          v25 += (unsigned int)v30;
          while ( v30 )
          {
            *v31++ = v29;
            --v30;
          }
        }
        ++v8;
        LOBYTE(v10) = v10 + 1;
        ++v27;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v27 = 0LL;
          goto LABEL_17;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[v14 + 2];
  }
}
