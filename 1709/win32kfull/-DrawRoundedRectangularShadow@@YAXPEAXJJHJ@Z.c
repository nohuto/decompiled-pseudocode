/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C012CD30
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRoundedRectangularShadow(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r10d
  int v10; // r8d
  int v11; // edx
  _DWORD *v12; // rdi
  int v13; // eax
  __int128 v14; // xmm0
  __int64 v15; // rcx
  int v16; // edi
  char *v17; // rdx
  __int64 v18; // rcx
  int v19; // edx
  _DWORD *v20; // rdi
  int v21; // eax
  __int128 v22; // xmm0
  __int64 v23; // rcx
  __int128 *v24; // rdx
  int v25; // r9d
  __int64 v26; // rbx
  int v27; // r9d
  __int64 v28; // rcx
  _DWORD *v29; // rdi
  int v30; // eax
  _DWORD *v31; // rdx
  int v32; // r8d
  int v33; // eax
  __int128 v34; // xmm0
  __int64 v35; // rcx
  int v36; // ecx
  int *v37; // rdx
  int *v38; // r9
  __int64 v39; // rsi
  _DWORD *v40; // rdi
  int v41; // eax
  __int64 v42; // rdi
  char *v43; // r9
  _DWORD *v44; // rdx
  __int64 i; // rcx
  int v46; // eax
  int v47; // ecx
  int *v48; // rdx
  int *v49; // r9
  __int64 v50; // rbx
  _DWORD *v51; // rdi
  int v52; // eax
  __int64 v53; // rbp
  int v54; // r9d
  __int64 v55; // rcx
  _DWORD *v56; // rdi
  int v57; // eax
  int *v58; // rcx
  int v59; // r8d
  int *v60; // rdi
  __int64 v61; // r9
  _DWORD *v62; // rdx
  int v63; // eax

  v5 = -a2;
  v10 = 5 * a5;
  if ( a4 )
  {
    v36 = a2 * (a3 - 6);
    v37 = (int *)&unk_1C02E72E0;
    do
    {
      v38 = v37;
      v39 = 5LL;
      v40 = &a1[v10 - 5 + (__int64)v36];
      do
      {
        v41 = *v38--;
        *v40++ = v41;
        --v39;
      }
      while ( v39 );
      v36 += v5;
      v37 += 5;
    }
    while ( (__int64)v37 < (__int64)dword_1C02E7344 );
  }
  else
  {
    v11 = a2 * (a3 - 5);
    v12 = &unk_1C02E72D0;
    do
    {
      v13 = v12[4];
      v14 = *(_OWORD *)v12;
      v12 += 5;
      v15 = v11 - (__int64)v10;
      v11 += v5;
      *(_OWORD *)&a1[v15] = v14;
      a1[v15 + 4] = v13;
    }
    while ( (__int64)v12 < (__int64)dword_1C02E7334 );
  }
  v16 = a3 - v10;
  if ( a4 )
  {
    if ( v16 > 10 )
    {
      v42 = (unsigned int)(v16 - 10);
      v43 = (char *)&a1[v10 - 5 + (__int64)(a2 * (a3 - 11))];
      do
      {
        v44 = v43;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v46 = *(_DWORD *)((char *)&xmmword_1C02E71D8 + i);
          *v44++ = v46;
        }
        v43 += 4 * v5;
        --v42;
      }
      while ( v42 );
    }
  }
  else if ( v16 > 10 )
  {
    v17 = (char *)&a1[a2 * (a3 - 10) - (__int64)v10];
    v18 = (unsigned int)(v16 - 10);
    do
    {
      *(_OWORD *)v17 = xmmword_1C02E71D8;
      *((_DWORD *)v17 + 4) = 50331648;
      v17 += 4 * v5;
      --v18;
    }
    while ( v18 );
  }
  if ( a4 )
  {
    v47 = a2 * (v10 - 1);
    v48 = (int *)&unk_1C02E7270;
    do
    {
      v49 = v48;
      v50 = 5LL;
      v51 = &a1[v10 - 5 + (__int64)v47];
      do
      {
        v52 = *v49--;
        *v51++ = v52;
        --v50;
      }
      while ( v50 );
      v47 += v5;
      v48 += 5;
    }
    while ( (__int64)v48 < (__int64)dword_1C02E72D4 );
  }
  else
  {
    v19 = a2 * v10;
    v20 = &unk_1C02E7260;
    do
    {
      v21 = v20[4];
      v22 = *(_OWORD *)v20;
      v20 += 5;
      v23 = v19 - (__int64)v10;
      v19 += v5;
      *(_OWORD *)&a1[v23] = v22;
      a1[v23 + 4] = v21;
    }
    while ( (__int64)v20 < (__int64)dword_1C02E72C4 );
  }
  v24 = &xmmword_1C02E71D8;
  v25 = v10 - 1;
  if ( a4 )
  {
    v53 = a2 - 10;
    v54 = a2 * v25;
    do
    {
      if ( v10 < v53 )
      {
        v55 = v53 - v10;
        v56 = &a1[v10 + (__int64)v54];
        v57 = *(_DWORD *)v24;
        while ( v55 )
        {
          *v56++ = v57;
          --v55;
        }
      }
      v54 += v5;
      v24 = (__int128 *)((char *)v24 + 4);
    }
    while ( (__int64)v24 < (__int64)&unk_1C02E71EC );
  }
  else
  {
    v26 = a2 - v10;
    v27 = a2 * v25;
    do
    {
      if ( v26 > 10 )
      {
        v28 = v26 - 10;
        v29 = &a1[v27 + 10];
        v30 = *(_DWORD *)v24;
        while ( v28 )
        {
          *v29++ = v30;
          --v28;
        }
      }
      v27 += v5;
      v24 = (__int128 *)((char *)v24 + 4);
    }
    while ( (__int64)v24 < (__int64)&unk_1C02E71EC );
  }
  if ( a4 )
  {
    v58 = (int *)&unk_1C02E7200;
    v59 = a2 * v10;
    do
    {
      v60 = v58;
      v61 = 5LL;
      v62 = &a1[v59 - 10];
      do
      {
        v63 = *v60--;
        *v62++ = v63;
        --v61;
      }
      while ( v61 );
      v59 += v5;
      v58 += 5;
    }
    while ( (__int64)v58 < (__int64)dword_1C02E7264 );
  }
  else
  {
    v31 = &unk_1C02E71F0;
    v32 = a2 * (v10 - 1);
    do
    {
      v33 = v31[4];
      v34 = *(_OWORD *)v31;
      v35 = v32;
      v31 += 5;
      v32 += v5;
      *(_OWORD *)&a1[v35 + 5] = v34;
      a1[v35 + 9] = v33;
    }
    while ( (__int64)v31 < (__int64)dword_1C02E7254 );
  }
}
