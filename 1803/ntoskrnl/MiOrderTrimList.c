/*
 * XREFs of MiOrderTrimList @ 0x140259ADC
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x1400819D4 (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x140081B30 (MiUpdateClaimDistribution.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x1402538D0 (MiWorkingSetVeryLarge.c)
 */

__int64 __fastcall MiOrderTrimList(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  _QWORD *v4; // rsi
  __int64 result; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  char v17; // bp
  unsigned int i; // edx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ecx
  _QWORD *v24; // rax
  unsigned int v25; // r8d
  __int64 v26; // rax
  _QWORD *v27; // r9
  _QWORD *v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rdi
  unsigned __int64 v31; // [rsp+20h] [rbp-158h]
  unsigned __int64 Src[8]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v34[24]; // [rsp+70h] [rbp-108h] BYREF

  v2 = a2;
  memset(Src, 0, sizeof(Src));
  v4 = (_QWORD *)(a1 + 6776);
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 6768);
  v7 = v34;
  v8 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v10 = 12LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v10;
  }
  while ( v10 );
  while ( 1 )
  {
    v11 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v11[1] != v4 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
      __fastfail(3u);
    *v4 = v12;
    v13 = v11 - 3;
    *(_QWORD *)(v12 + 8) = v4;
    MiUpdateClaimDistribution((__int64)(v11 - 3), Src);
    if ( v2 )
    {
      v14 = 0LL;
      if ( v2 < 8 )
      {
        v15 = 8 - v2;
        v16 = &v13[v2 + 5];
        do
        {
          v14 += *v16++;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v14 = (v13[17] - v13[14]) & -(__int64)(v13[14] < v13[17]);
    }
    v17 = *((_BYTE *)v13 + 184);
    if ( (v17 & 7) == 0 && (unsigned int)MiIsStoreProcess((__int64)(v11 - 163)) )
    {
      i = 11;
LABEL_16:
      v9 = v31;
      goto LABEL_17;
    }
    if ( *((_BYTE *)v13 + 186) == 2 )
    {
      LOBYTE(v21) = MiWorkingSetVeryLarge((__int64)(v11 - 3));
      if ( !v21 )
      {
        i = 10;
        goto LABEL_16;
      }
    }
    if ( v14 && (v17 >= 0 || v13[17] > v13[14]) )
    {
      for ( i = 0; i < 9; ++i )
      {
        if ( v14 >= 0x100000uLL >> i )
          break;
      }
    }
    else
    {
      i = 11;
    }
    if ( i >= 0xA )
      goto LABEL_16;
    v22 = -1LL;
    if ( v14 + v31 >= v31 )
      v22 = v14 + v31;
    v9 = v22;
    v31 = v22;
LABEL_17:
    v19 = &v34[2 * i];
    v20 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      __fastfail(3u);
    v2 = a2;
    *v11 = v20;
    v11[1] = v19;
    *(_QWORD *)(v20 + 8) = v11;
    *v19 = v11;
  }
  v23 = 0;
  v24 = v34;
  while ( 1 )
  {
    v25 = v23 + 1;
    if ( (_QWORD *)*v24 != v24 )
      break;
    v24 += 2;
    ++v23;
    if ( v25 >= 0xC )
      goto LABEL_46;
  }
  v26 = v34[2 * v23];
  *v4 = v26;
  *(_QWORD *)(v26 + 8) = v4;
  if ( v25 < 0xC )
  {
    v27 = &v34[2 * v25];
    do
    {
      if ( (_QWORD *)*v27 != v27 )
      {
        *(_QWORD *)v34[2 * v23 + 1] = *v27;
        *(_QWORD *)(*v27 + 8LL) = v34[2 * v23 + 1];
        v23 = v25;
      }
      ++v25;
      v27 += 2;
    }
    while ( v25 < 0xC );
  }
  v28 = (_QWORD *)v34[2 * v23 + 1];
  *(_QWORD *)(a1 + 6784) = v28;
  *v28 = v4;
LABEL_46:
  memmove((void *)(v6 + 2424), Src, 0x40uLL);
  v29 = (_QWORD *)(v6 + 2472);
  v30 = 2LL;
  do
  {
    v8 += *v29++;
    --v30;
  }
  while ( v30 );
  *(_QWORD *)(v6 + 2416) = v8;
  *(_WORD *)(v6 + 2354) = MiComputeAgeDistribution(a1, 0);
  result = v9;
  *(_BYTE *)(v6 + 54) = 1;
  return result;
}
