/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0014680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // r11d
  _DWORD *v10; // rdx
  unsigned int v11; // r10d
  unsigned __int8 *v13; // rsi
  ULONG v14; // r12d
  __int64 v15; // r8
  int v16; // ecx
  int v17; // r15d
  int v18; // ebx
  unsigned int *v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  int *v24; // rdi
  __int64 i; // rcx
  ULONG *pulXlate; // rax
  int v28; // ebp
  __int64 v29; // rax
  char v30; // bl
  int v31; // edx
  unsigned __int8 *v32; // r15
  int v33; // r9d
  int v34; // ecx
  unsigned int *v35; // r14
  _DWORD *v36; // rdi
  __int64 v37; // r13
  __int64 v38; // r12
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  int *v43; // rdi
  __int64 v44; // rax
  unsigned __int8 *v45; // [rsp+0h] [rbp-48h]
  int v46; // [rsp+58h] [rbp+10h]
  ULONG v47; // [rsp+60h] [rbp+18h]
  _DWORD *v48; // [rsp+68h] [rbp+20h]
  int v49; // [rsp+70h] [rbp+28h]
  int v50; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v10 = (_DWORD *)((char *)a2 + 8);
  v11 = a6 & 0x1F;
  v48 = v10;
  v13 = &a3[4 * ((__int64)a6 >> 5)];
  v45 = v13;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v14 = *pulXlate;
    v50 = pulXlate[1];
  }
  else
  {
    v14 = 0;
    v50 = 1;
  }
  v47 = v14;
  v15 = v11;
  if ( a4 )
  {
    v28 = *(_DWORD *)a1;
    v29 = (__int64)a8 >> 5;
    v30 = a8 & 0x1F;
    v31 = *(_DWORD *)&a4[4 * v29];
    v32 = &a4[4 * v29];
    v33 = 0;
    v46 = v31;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v48;
    v34 = *(_DWORD *)v13;
    v35 = (unsigned int *)((char *)a1 + 32);
    v36 = v48;
    v49 = *(_DWORD *)v13;
    v37 = 0LL;
    v38 = a8 & 0x1F;
    while ( 1 )
    {
      if ( (v31 & dword_1C02E70D0[v38]) != 0 )
      {
        v39 = *v35;
        if ( (v34 & dword_1C02E70D0[v15]) != 0 )
        {
          if ( !v39 )
            goto LABEL_37;
          v40 = v39;
          v41 = v50;
        }
        else
        {
          if ( !v39 )
            goto LABEL_37;
          v40 = *v35;
          v41 = v47;
        }
        v42 = v40;
        v43 = &v36[v37 + 2];
        v33 += v40;
        while ( v42 )
        {
          *v43++ = v41;
          --v42;
        }
        v34 = v49;
        v37 += v40;
        v36 = v48;
        v31 = v46;
      }
      else
      {
        if ( v33 > 0 )
        {
          *v36 = v28;
          v28 += v33;
          v36[1] = v33;
          v44 = v33;
          v33 = 0;
          v36 += v44 + 2;
          v48 = v36;
          v37 = 0LL;
        }
        v28 += *v35;
      }
LABEL_37:
      ++v8;
      LOBYTE(v11) = v11 + 1;
      ++v15;
      ++v30;
      ++v38;
      ++v35;
      if ( v8 >= a7 )
      {
        if ( v33 > 0 )
        {
          *v36 = v28;
          v36[1] = v33;
          v36 += v33 + 2;
        }
        return (struct _XRUNLEN *)v36;
      }
      if ( (v11 & 0x20) != 0 )
      {
        LOBYTE(v11) = 0;
        v45 += 4;
        v15 = 0LL;
        v34 = *(_DWORD *)v45;
        v49 = *(_DWORD *)v45;
      }
      if ( (v30 & 0x20) != 0 )
      {
        v31 = *((_DWORD *)v32 + 1);
        v32 += 4;
        v30 = 0;
        v46 = v31;
        v38 = 0LL;
      }
    }
  }
  v16 = *(_DWORD *)a1;
  v17 = 0;
  *v10 = v16;
  v10[1] = *((_DWORD *)a1 + 2) - v16;
  if ( v8 >= a7 )
    return (struct _XRUNLEN *)&v10[v17 + 2];
  v18 = *(_DWORD *)v13;
  v19 = (unsigned int *)((char *)a1 + 32);
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *v19++;
    if ( (v18 & dword_1C02E70D0[v15]) != 0 )
    {
      if ( !(_DWORD)v21 )
        goto LABEL_13;
      v22 = v21;
      v23 = v50;
    }
    else
    {
      if ( !(_DWORD)v21 )
        goto LABEL_13;
      v22 = (unsigned int)v21;
      v23 = v14;
    }
    v17 += v22;
    v24 = (int *)((char *)a2 + 4 * v20 + 16);
    for ( i = v22; i; --i )
      *v24++ = v23;
    v20 += v22;
LABEL_13:
    ++v8;
    LOBYTE(v11) = v11 + 1;
    ++v15;
    if ( v8 >= a7 )
      break;
    if ( (v11 & 0x20) != 0 )
    {
      LOBYTE(v11) = 0;
      v45 += 4;
      v15 = 0LL;
      v18 = *(_DWORD *)v45;
    }
  }
  v10 = v48;
  return (struct _XRUNLEN *)&v10[v17 + 2];
}
