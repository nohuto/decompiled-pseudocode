/*
 * XREFs of MiOrderTrimList @ 0x1402152D4
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x14001BEA0 (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x14001BFF8 (MiUpdateClaimDistribution.c)
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x14020E2C8 (MiWorkingSetVeryLarge.c)
 */

__int64 __fastcall MiOrderTrimList(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  _QWORD **v4; // rsi
  __int64 result; // rax
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r13
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r11
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  char v20; // bp
  unsigned int i; // edx
  _QWORD *v22; // rdi
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r8d
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r8d
  _QWORD *v31; // rax
  _QWORD *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  unsigned __int64 v37; // [rsp+20h] [rbp-158h]
  unsigned __int64 Src[8]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v39[24]; // [rsp+70h] [rbp-108h] BYREF

  v2 = a2;
  memset(Src, 0, sizeof(Src));
  v4 = (_QWORD **)(a1 + 5552);
  if ( *v4 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 5544);
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
  v11 = 2LL;
  while ( *v4 != v4 )
  {
    v12 = (_QWORD **)*v4;
    v13 = (_QWORD *)**v4;
    if ( (_QWORD **)(*v4)[1] != v4 || (_QWORD **)v13[1] != v12 )
      __fastfail(3u);
    *v4 = v13;
    v14 = (__int64)(v12 - 3);
    v13[1] = v4;
    MiUpdateClaimDistribution((__int64)(v12 - 3), Src);
    if ( (_DWORD)v2 )
    {
      v17 = 0LL;
      if ( (unsigned int)v2 < 8 )
      {
        v18 = (_QWORD *)(v14 + 8 * (v2 + 5));
        v19 = (unsigned int)(8 - v2);
        do
        {
          v17 += *v18++;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 136);
      v16 = *(_QWORD *)(v14 + 112);
      if ( v15 <= v16 )
        v17 = 0LL;
      else
        v17 = v15 - v16;
    }
    v20 = *(_BYTE *)(v14 + 192);
    if ( (v20 & 7) == 0 && (unsigned int)MiIsStoreProcess(v14 - 1280) )
    {
      i = 11;
LABEL_19:
      v9 = v37;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(v14 + 194) == 2 && !MiWorkingSetVeryLarge(v14, 0) )
    {
      i = 10;
      goto LABEL_19;
    }
    if ( v17 && (v20 >= 0 || *(_QWORD *)(v14 + 136) > *(_QWORD *)(v14 + 112)) )
    {
      for ( i = 0; i < 9; ++i )
      {
        if ( v17 >= 0x100000uLL >> i )
          break;
      }
    }
    else
    {
      i = 11;
    }
    if ( i >= 0xA )
      goto LABEL_19;
    v25 = -1LL;
    if ( v17 + v37 >= v37 )
      v25 = v17 + v37;
    v9 = v25;
    v37 = v25;
LABEL_20:
    v22 = (_QWORD *)(v14 + 24);
    v23 = &v39[2 * i];
    v24 = *v23;
    if ( *(_QWORD **)(*v23 + 8LL) != v23 )
      __fastfail(3u);
    *v22 = v24;
    v22[1] = v23;
    *(_QWORD *)(v24 + 8) = v22;
    *v23 = v22;
  }
  v26 = 0;
  v27 = v39;
  while ( (_QWORD *)*v27 == v27 )
  {
    ++v26;
    v27 += 2;
    if ( v26 >= 0xC )
      goto LABEL_49;
  }
  v28 = 2LL * v26;
  v29 = v26;
  v30 = v26 + 1;
  v31 = (_QWORD *)v39[v28];
  *v4 = v31;
  v31[1] = v4;
  if ( v30 < 0xC )
  {
    v32 = &v39[2 * v30];
    do
    {
      if ( (_QWORD *)*v32 != v32 )
      {
        v33 = 2 * v29;
        *(_QWORD *)v39[v33 + 1] = *v32;
        v34 = v39[v33 + 1];
        v29 = v30;
        *(_QWORD *)(*v32 + 8LL) = v34;
      }
      ++v30;
      v32 += 2;
    }
    while ( v30 < 0xC );
  }
  v35 = (_QWORD *)v39[2 * (unsigned int)v29 + 1];
  *(_QWORD *)(a1 + 5560) = v35;
  *v35 = v4;
LABEL_49:
  memmove((void *)(v6 + 2424), Src, 0x40uLL);
  v36 = (_QWORD *)(v6 + 2472);
  do
  {
    v8 += *v36++;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)(v6 + 2416) = v8;
  *(_WORD *)(v6 + 2354) = MiComputeAgeDistribution(a1, 0);
  result = v9;
  *(_BYTE *)(v6 + 54) = 1;
  return result;
}
