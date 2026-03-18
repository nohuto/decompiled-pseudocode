/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJH@Z @ 0x1C011ED70
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011F0DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawRoundedRectangularShadow(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r10d
  int v7; // edi
  _DWORD *v8; // r9
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // rdi
  int v17; // r8d
  int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rcx
  __int128 *v21; // r8
  int v22; // r9d
  int v23; // r11d
  __int64 v24; // rbp
  __int64 v25; // rcx
  _DWORD *v26; // rdi
  int v27; // eax
  _DWORD *v28; // rdx
  int v29; // eax
  __int128 v30; // xmm0
  __int64 v31; // rcx
  int v32; // edi
  int *v33; // r9
  int *v34; // r11
  __int64 v35; // rsi
  _DWORD *v36; // rcx
  int v37; // eax
  __int64 v38; // r11
  char *v39; // rdi
  _DWORD *v40; // r8
  __int64 i; // rcx
  int v42; // eax
  int *v43; // rcx
  int v44; // edi
  int *v45; // r9
  __int64 v46; // r11
  _DWORD *v47; // r8
  int v48; // eax
  __int64 v49; // rbp
  __int64 v50; // rcx
  _DWORD *v51; // rdi
  int v52; // eax
  int *v53; // rcx
  int v54; // edx
  int *v55; // r8
  __int64 v56; // r9
  _DWORD *v57; // rdi
  int v58; // eax

  v5 = -a2;
  if ( a4 )
  {
    v32 = a2 * (a3 - 6);
    v33 = (int *)&unk_1C02EA7F0;
    do
    {
      v34 = v33;
      v35 = 5LL;
      v36 = &a1[v32];
      do
      {
        v37 = *v34--;
        *v36++ = v37;
        --v35;
      }
      while ( v35 );
      v32 -= a2;
      v33 += 5;
    }
    while ( (__int64)v33 < (__int64)dword_1C02EA854 );
  }
  else
  {
    v7 = a2 * (a3 - 5);
    v8 = &unk_1C02EA7E0;
    do
    {
      v9 = v8[4];
      v10 = *(_OWORD *)v8;
      v11 = v7;
      v8 += 5;
      v7 -= a2;
      *(_OWORD *)&a1[v11 - 5] = v10;
      a1[v11 - 1] = v9;
    }
    while ( (__int64)v8 < (__int64)dword_1C02EA844 );
  }
  v12 = a3 - 5;
  if ( a4 )
  {
    if ( v12 > 10 )
    {
      v38 = (unsigned int)(a3 - 15);
      v39 = (char *)&a1[a2 * (a3 - 11)];
      do
      {
        v40 = v39;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v42 = *(_DWORD *)((char *)&xmmword_1C02EA6E8 + i);
          *v40++ = v42;
        }
        v39 += 4 * v5;
        --v38;
      }
      while ( v38 );
    }
  }
  else
  {
    if ( v12 <= 10 )
      goto LABEL_9;
    v13 = (unsigned int)(a3 - 15);
    v14 = a2 * (a3 - 11);
    do
    {
      v15 = v14 + a2;
      v14 += v5;
      *(_OWORD *)&a1[v15 - 5] = xmmword_1C02EA6E8;
      a1[v15 - 1] = 50331648;
      --v13;
    }
    while ( v13 );
  }
  if ( !a4 )
  {
LABEL_9:
    v16 = &unk_1C02EA770;
    v17 = 5 * a2;
    do
    {
      v18 = v16[4];
      v19 = *(_OWORD *)v16;
      v20 = v17;
      v16 += 5;
      v17 -= a2;
      *(_OWORD *)&a1[v20 - 5] = v19;
      a1[v20 - 1] = v18;
    }
    while ( (__int64)v16 < (__int64)dword_1C02EA7D4 );
    goto LABEL_11;
  }
  v43 = (int *)&unk_1C02EA780;
  v44 = 4 * a2;
  do
  {
    v45 = v43;
    v46 = 5LL;
    v47 = &a1[v44];
    do
    {
      v48 = *v45--;
      *v47++ = v48;
      --v46;
    }
    while ( v46 );
    v44 -= a2;
    v43 += 5;
  }
  while ( (__int64)v43 < (__int64)dword_1C02EA7E4 );
LABEL_11:
  v21 = &xmmword_1C02EA6E8;
  v22 = 4 * a2;
  v23 = 4 * a2;
  if ( a4 )
  {
    v49 = a2 - 10;
    do
    {
      if ( v49 > 5 )
      {
        v50 = v49 - 5;
        v51 = &a1[v23 + 5];
        v52 = *(_DWORD *)v21;
        while ( v50 )
        {
          *v51++ = v52;
          --v50;
        }
      }
      v23 -= a2;
      v21 = (__int128 *)((char *)v21 + 4);
    }
    while ( (__int64)v21 < (__int64)&unk_1C02EA6FC );
  }
  else
  {
    v24 = a2 - 5;
    do
    {
      if ( v24 > 10 )
      {
        v25 = v24 - 10;
        v26 = &a1[v23 + 10];
        v27 = *(_DWORD *)v21;
        while ( v25 )
        {
          *v26++ = v27;
          --v25;
        }
      }
      v23 -= a2;
      v21 = (__int128 *)((char *)v21 + 4);
    }
    while ( (__int64)v21 < (__int64)&unk_1C02EA6FC );
  }
  if ( a4 )
  {
    v53 = (int *)&unk_1C02EA710;
    v54 = 5 * a2;
    do
    {
      v55 = v53;
      v56 = 5LL;
      v57 = &a1[v54 - 10];
      do
      {
        v58 = *v55--;
        *v57++ = v58;
        --v56;
      }
      while ( v56 );
      v54 += v5;
      v53 += 5;
    }
    while ( (__int64)v53 < (__int64)dword_1C02EA774 );
  }
  else
  {
    v28 = &unk_1C02EA700;
    do
    {
      v29 = v28[4];
      v30 = *(_OWORD *)v28;
      v31 = v22;
      v28 += 5;
      v22 += v5;
      *(_OWORD *)&a1[v31 + 5] = v30;
      a1[v31 + 9] = v29;
    }
    while ( (__int64)v28 < (__int64)dword_1C02EA764 );
  }
}
