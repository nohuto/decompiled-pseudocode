/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C009A6B0
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
  int v8; // ebx
  _DWORD *v9; // r10
  char v10; // r11
  unsigned __int8 *v14; // r14
  __int64 v15; // rsi
  int v16; // ecx
  int v17; // r9d
  unsigned int *v18; // r8
  __int64 v19; // rbp
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  int *v24; // rdi
  __int64 j; // rcx
  ULONG *pulXlate; // rax
  int v28; // r8d
  int v29; // ebp
  char v30; // r9
  unsigned __int8 *v31; // r13
  unsigned int *v32; // r15
  int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // r12
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  int *v39; // rdi
  __int64 i; // rcx
  __int64 v41; // rax
  ULONG v42; // [rsp+48h] [rbp+10h]
  char *v43; // [rsp+50h] [rbp+18h]
  int v44; // [rsp+50h] [rbp+18h]
  __int64 v45; // [rsp+58h] [rbp+20h]
  int v46; // [rsp+60h] [rbp+28h]
  int v47; // [rsp+68h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v43 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v14 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v46 = pulXlate[1];
    v42 = *pulXlate;
  }
  else
  {
    v42 = 0;
    v46 = 1;
  }
  v15 = a6 & 0x1F;
  if ( a4 )
  {
    v28 = 0;
    v29 = *(_DWORD *)a1;
    v30 = a8 & 0x1F;
    v31 = &a4[4 * ((__int64)a8 >> 5)];
    v47 = *(_DWORD *)v31;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v9;
    v32 = (unsigned int *)((char *)a1 + 32);
    v33 = *(_DWORD *)v31;
    v34 = 0LL;
    v44 = *(_DWORD *)v14;
    v45 = 0LL;
    v35 = a8 & 0x1F;
    while ( (v33 & dword_1C02EA5B0[v35]) == 0 )
    {
      if ( v28 > 0 )
      {
        *v9 = v29;
        v29 += v28;
        v9[1] = v28;
        v41 = v28;
        v28 = 0;
        v9 += v41 + 2;
        v34 = 0LL;
        v45 = 0LL;
      }
      v29 += *v32;
LABEL_33:
      ++v8;
      ++v10;
      ++v15;
      ++v30;
      ++v35;
      ++v32;
      if ( v8 >= a7 )
      {
        if ( v28 > 0 )
        {
          *v9 = v29;
          v9[1] = v28;
          v9 += v28 + 2;
        }
        return (struct _XRUNLEN *)v9;
      }
      if ( (v10 & 0x20) != 0 )
      {
        v14 += 4;
        v10 = 0;
        v15 = 0LL;
        v44 = *(_DWORD *)v14;
      }
      if ( (v30 & 0x20) != 0 )
      {
        v31 += 4;
        v30 = 0;
        v35 = 0LL;
        v33 = *(_DWORD *)v31;
        v47 = *(_DWORD *)v31;
      }
    }
    v36 = *v32;
    if ( (dword_1C02EA5B0[v15] & v44) != 0 )
    {
      if ( v36 )
      {
        v37 = v36;
        v38 = v46;
        goto LABEL_28;
      }
    }
    else if ( v36 )
    {
      v37 = *v32;
      v38 = v42;
LABEL_28:
      v28 += v37;
      v39 = &v9[v34 + 2];
      for ( i = v37; i; --i )
        *v39++ = v38;
      v34 = v37 + v45;
      v45 += v37;
    }
    v33 = v47;
    goto LABEL_33;
  }
  v16 = *(_DWORD *)a1;
  v17 = 0;
  *v9 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v16;
  if ( a6 >= a7 )
    return (struct _XRUNLEN *)&v9[v17 + 2];
  v18 = (unsigned int *)((char *)a1 + 32);
  v19 = 0LL;
LABEL_6:
  v20 = *(_DWORD *)v14;
  while ( 1 )
  {
    v21 = *v18++;
    if ( (v20 & dword_1C02EA5B0[v15]) != 0 )
    {
      if ( !(_DWORD)v21 )
        goto LABEL_14;
      v22 = v21;
      v23 = v46;
    }
    else
    {
      if ( !(_DWORD)v21 )
        goto LABEL_14;
      v22 = (unsigned int)v21;
      v23 = v42;
    }
    v17 += v22;
    v24 = (int *)((char *)a2 + 4 * v19 + 16);
    for ( j = v22; j; --j )
      *v24++ = v23;
    v19 += v22;
LABEL_14:
    ++v8;
    ++v10;
    ++v15;
    if ( v8 >= a7 )
      break;
    if ( (v10 & 0x20) != 0 )
    {
      v14 += 4;
      v10 = 0;
      v15 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = v43;
  return (struct _XRUNLEN *)&v9[v17 + 2];
}
