/*
 * XREFs of MiOrderTrimList @ 0x14021D9B0
 * Callers:
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     MiComputeAgeDistribution @ 0x1400F506C (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x1400F51D0 (MiUpdateClaimDistribution.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x1402159E8 (MiWorkingSetVeryLarge.c)
 */

__int64 __fastcall MiOrderTrimList(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r15
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  char v14; // r11
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  char v18; // bp
  unsigned int i; // edx
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r8d
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // r8d
  __int64 v30; // rax
  _QWORD *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // [rsp+20h] [rbp-158h]
  unsigned __int64 Src[8]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v39[24]; // [rsp+70h] [rbp-108h] BYREF

  v2 = a2;
  memset(Src, 0, sizeof(Src));
  v4 = a1 + 5688;
  if ( *(_QWORD *)v4 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 5680);
  v7 = v39;
  v8 = 0LL;
  v9 = 0LL;
  v37 = 0LL;
  v10 = 12LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v10;
  }
  while ( v10 );
  while ( *(_QWORD *)v4 != v4 )
  {
    v11 = *(__int64 **)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v12 = *v11, *(__int64 **)(*v11 + 8) != v11) )
      __fastfail(3u);
    *(_QWORD *)v4 = v12;
    v13 = (__int64)(v11 - 3);
    *(_QWORD *)(v12 + 8) = v4;
    MiUpdateClaimDistribution(v13, Src);
    if ( (_DWORD)v2 )
    {
      v15 = 0LL;
      if ( (unsigned int)v2 < 8 )
      {
        v16 = (_QWORD *)(v13 + 8 * (v2 + 5));
        v17 = (unsigned int)(8 - v2);
        do
        {
          v15 += *v16++;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v15 = (*(_QWORD *)(v13 + 136) - *(_QWORD *)(v13 + 112)) & -(__int64)(*(_QWORD *)(v13 + 112) < *(_QWORD *)(v13 + 136));
    }
    v18 = *(_BYTE *)(v13 + 192);
    if ( (v18 & 7) == 0 && (unsigned int)MiIsStoreProcess(v13 - 1280) )
    {
      i = 11;
LABEL_16:
      v9 = v37;
      goto LABEL_17;
    }
    if ( *(_BYTE *)(v13 + 194) == v14 )
    {
      LOBYTE(v23) = MiWorkingSetVeryLarge(v13);
      if ( !v23 )
      {
        i = 10;
        goto LABEL_16;
      }
    }
    if ( v15 && (v18 >= 0 || *(_QWORD *)(v13 + 136) > *(_QWORD *)(v13 + 112)) )
    {
      for ( i = 0; i < 9; ++i )
      {
        if ( v15 >= 0x100000uLL >> i )
          break;
      }
    }
    else
    {
      i = 11;
    }
    if ( i >= 0xA )
      goto LABEL_16;
    v24 = -1LL;
    if ( v15 + v37 >= v37 )
      v24 = v15 + v37;
    v9 = v24;
    v37 = v24;
LABEL_17:
    v20 = (_QWORD *)(v13 + 24);
    v21 = &v39[2 * i];
    v22 = *v21;
    if ( *(_QWORD **)(*v21 + 8LL) != v21 )
      __fastfail(3u);
    *v20 = v22;
    v20[1] = v21;
    *(_QWORD *)(v22 + 8) = v20;
    *v21 = v20;
  }
  v25 = 0;
  v26 = v39;
  while ( (_QWORD *)*v26 == v26 )
  {
    ++v25;
    v26 += 2;
    if ( v25 >= 0xC )
      goto LABEL_46;
  }
  v27 = 2LL * v25;
  v28 = v25;
  v29 = v25 + 1;
  v30 = v39[v27];
  *(_QWORD *)v4 = v30;
  *(_QWORD *)(v30 + 8) = v4;
  if ( v29 < 0xC )
  {
    v31 = &v39[2 * v29];
    do
    {
      if ( (_QWORD *)*v31 != v31 )
      {
        v32 = 2 * v28;
        *(_QWORD *)v39[v32 + 1] = *v31;
        v33 = v39[v32 + 1];
        v28 = v29;
        *(_QWORD *)(*v31 + 8LL) = v33;
      }
      ++v29;
      v31 += 2;
    }
    while ( v29 < 0xC );
  }
  v34 = (__int64 *)v39[2 * (unsigned int)v28 + 1];
  *(_QWORD *)(a1 + 5696) = v34;
  *v34 = v4;
LABEL_46:
  memmove((void *)(v6 + 2424), Src, 0x40uLL);
  v35 = (_QWORD *)(v6 + 2472);
  v36 = 2LL;
  do
  {
    v8 += *v35++;
    --v36;
  }
  while ( v36 );
  *(_QWORD *)(v6 + 2416) = v8;
  *(_WORD *)(v6 + 2354) = MiComputeAgeDistribution(a1, 0);
  result = v9;
  *(_BYTE *)(v6 + 54) = 1;
  return result;
}
