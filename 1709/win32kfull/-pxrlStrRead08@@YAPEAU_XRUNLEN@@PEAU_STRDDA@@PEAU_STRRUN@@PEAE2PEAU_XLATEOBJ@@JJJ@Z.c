/*
 * XREFs of ?pxrlStrRead08@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00F3E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead08(
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
  _DWORD *v9; // r10
  unsigned __int8 *v10; // r8
  int v11; // edx
  __int64 v12; // rbx
  unsigned int *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdi
  _DWORD *v16; // r11
  __int64 v18; // r9
  unsigned int *v19; // rbx
  __int64 v20; // r11
  __int64 v21; // rcx
  _DWORD *v22; // rdi
  int v23; // esi
  char v24; // bl
  unsigned __int8 *v25; // r14
  int v26; // r9d
  int v27; // r13d
  __int64 v28; // r12
  __int64 v29; // rbp
  _DWORD *v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  _DWORD *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = &a3[a6];
  if ( a4 )
  {
    v23 = *(_DWORD *)a1;
    v24 = a8 & 0x1F;
    v25 = &a4[4 * ((__int64)a8 >> 5)];
    v26 = 0;
    v27 = *(_DWORD *)v25;
    if ( a6 < a7 )
    {
      v28 = 0LL;
      v29 = a8 & 0x1F;
      v30 = (_DWORD *)((char *)a1 + 32);
      while ( 1 )
      {
        v31 = *v10++;
        if ( a5 )
          LODWORD(v31) = a5->pulXlate[v31];
        if ( (dword_1C02E70D0[v29] & v27) != 0 )
        {
          if ( *v30 )
          {
            v32 = (unsigned int)*v30;
            v33 = v31;
            v34 = &v9[v28 + 2];
            v35 = (unsigned int)v32;
            v26 += v32;
            while ( v35 )
            {
              *v34++ = v33;
              --v35;
            }
            v28 += v32;
          }
        }
        else
        {
          if ( v26 > 0 )
          {
            *v9 = v23;
            v23 += v26;
            v9[1] = v26;
            v36 = v26;
            v26 = 0;
            v9 += v36 + 2;
            v28 = 0LL;
          }
          v23 += *v30;
        }
        ++v8;
        ++v24;
        ++v29;
        ++v30;
        if ( v8 >= a7 )
          break;
        if ( (v24 & 0x20) != 0 )
        {
          v25 += 4;
          v24 = 0;
          v29 = 0LL;
          v27 = *(_DWORD *)v25;
        }
      }
      if ( v26 > 0 )
      {
        *v9 = v23;
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
    v11 = 0;
    if ( a5 )
    {
      v12 = 0LL;
      if ( a6 != a7 )
      {
        v13 = (unsigned int *)((char *)a1 + 32);
        v14 = (unsigned int)(a7 - a6);
        do
        {
          v15 = *v13++;
          if ( (_DWORD)v15 )
          {
            v11 += v15;
            v16 = &v9[v12 + 2];
            v12 += v15;
            do
            {
              *v16++ = a5->pulXlate[*v10];
              LODWORD(v15) = v15 - 1;
            }
            while ( (_DWORD)v15 );
          }
          ++v10;
          --v14;
        }
        while ( v14 );
      }
    }
    else
    {
      v18 = 0LL;
      if ( a6 != a7 )
      {
        v19 = (unsigned int *)((char *)a1 + 32);
        v20 = (unsigned int)(a7 - a6);
        do
        {
          v21 = *v19++;
          if ( (_DWORD)v21 )
          {
            v11 += v21;
            v22 = &v9[v18 + 2];
            v18 += v21;
            do
            {
              *v22++ = *v10;
              LODWORD(v21) = v21 - 1;
            }
            while ( (_DWORD)v21 );
          }
          ++v10;
          --v20;
        }
        while ( v20 );
      }
    }
    return (struct _XRUNLEN *)&v9[v11 + 2];
  }
}
