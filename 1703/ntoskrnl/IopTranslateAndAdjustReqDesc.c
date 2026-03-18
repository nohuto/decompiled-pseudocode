/*
 * XREFs of IopTranslateAndAdjustReqDesc @ 0x1405B2D64
 * Callers:
 *     IopSetupArbiterAndTranslators @ 0x1405B1FC8 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTranslateAndAdjustReqDesc(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v3; // r14
  unsigned int v4; // edi
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  void *v9; // r12
  _DWORD *v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r13
  int v14; // eax
  char v15; // dl
  unsigned int v16; // ecx
  _OWORD *v17; // rbx
  _OWORD *v18; // rax
  _OWORD *v19; // rbp
  _OWORD *v20; // rcx
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rsi
  _OWORD *v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 i; // rbx
  int *v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  _OWORD **v32; // [rsp+50h] [rbp-58h]
  char v33; // [rsp+B0h] [rbp+8h]
  _OWORD *v34; // [rsp+B0h] [rbp+8h]
  int v37; // [rsp+C8h] [rbp+20h]

  v3 = (_DWORD *)(a1 + 56);
  v37 = 0;
  v4 = 0;
  v5 = a1;
  v31 = *(_QWORD *)(a2 + 24);
  v6 = -1073741823;
  v7 = *(_DWORD *)(a1 + 56);
  v33 = 0;
  if ( !v7 )
    return 3221225485LL;
  *a3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x20207050u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 8LL * (unsigned int)*v3);
  v10 = ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)*v3, 0x20207050u);
  v11 = v10;
  if ( !v10 )
  {
    ExFreePoolWithTag(v9, 0);
    return 3221225626LL;
  }
  memset(v10, 0, 4LL * (unsigned int)*v3);
  v12 = 0LL;
  v13 = *(_QWORD *)(v5 + 64);
  v32 = (_OWORD **)(v5 + 64);
  if ( !*v3 )
  {
    v16 = 0;
LABEL_33:
    v4 = v6;
    goto LABEL_13;
  }
  do
  {
    v30 = &v11[v12];
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *, __int64))(v31 + 40))(
           *(_QWORD *)(v31 + 8),
           v13,
           *(_QWORD *)(v5 + 72),
           v30,
           (__int64)v9 + 8 * v12);
    if ( v6 >= 0 && (v14 = *v30) != 0 )
    {
      v15 = 1;
      v33 = 1;
    }
    else
    {
      v15 = v33;
      *((_QWORD *)v9 + v12) = v13;
      v14 = 1;
      v11[v12] = 0;
    }
    v13 += 32LL;
    v16 = v14 + v37;
    v37 += v14;
    if ( v6 >= 0 && v4 != 288 )
      v4 = v6;
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < *v3 );
  if ( !v15 )
    goto LABEL_33;
LABEL_13:
  v17 = ExAllocatePoolWithTag(PagedPool, 32LL * v16, 0x20207050u);
  if ( v17 )
  {
    v18 = ExAllocatePoolWithTag(PagedPool, 0x128uLL, 0x20207050u);
    v34 = v18;
    v19 = v18;
    if ( v18 )
    {
      v20 = v18;
      v21 = 2LL;
      do
      {
        *v20 = *(_OWORD *)v5;
        v20[1] = *(_OWORD *)(v5 + 16);
        v20[2] = *(_OWORD *)(v5 + 32);
        v20[3] = *(_OWORD *)(v5 + 48);
        v20[4] = *(_OWORD *)(v5 + 64);
        v20[5] = *(_OWORD *)(v5 + 80);
        v20[6] = *(_OWORD *)(v5 + 96);
        v20 += 8;
        v22 = *(_OWORD *)(v5 + 112);
        v5 += 128LL;
        *(v20 - 1) = v22;
        --v21;
      }
      while ( v21 );
      *v20 = *(_OWORD *)v5;
      v20[1] = *(_OWORD *)(v5 + 16);
      v23 = *(_QWORD *)(v5 + 32);
      v24 = 0LL;
      *((_QWORD *)v20 + 4) = v23;
      *((_QWORD *)v19 + 2) = 0LL;
      *((_QWORD *)v19 + 4) = 0LL;
      *((_QWORD *)v19 + 36) = a2;
      *((_QWORD *)v19 + 6) = (char *)v19 + 40;
      *((_QWORD *)v19 + 5) = (char *)v19 + 40;
      *((_DWORD *)v19 + 14) = v37;
      *((_QWORD *)v19 + 14) = (char *)v19 + 136;
      *((_QWORD *)v19 + 8) = v17;
      v25 = *v32;
      if ( *v3 )
      {
        while ( 1 )
        {
          v26 = v11[v24];
          if ( !v26 )
            break;
          memmove(v17, *((const void **)v9 + v24), 32LL * v26);
          v27 = 32LL * (unsigned int)v11[v24];
LABEL_20:
          v25 += 2;
          v24 = (unsigned int)(v24 + 1);
          v17 = (_OWORD *)((char *)v17 + v27);
          if ( (unsigned int)v24 >= *v3 )
          {
            v19 = v34;
            goto LABEL_22;
          }
        }
        *v17 = *v25;
        v17[1] = v25[1];
        if ( *((_BYTE *)v17 + 1) == 1 )
          goto LABEL_42;
        if ( *((_BYTE *)v17 + 1) != 2 )
        {
          if ( *((_BYTE *)v17 + 1) == 3 )
            goto LABEL_42;
          if ( *((_BYTE *)v17 + 1) != 4 )
          {
            if ( *((_BYTE *)v17 + 1) == 6 )
            {
              *((_DWORD *)v17 + 3) = 2;
              *((_DWORD *)v17 + 4) = 1;
              goto LABEL_43;
            }
            if ( *((_BYTE *)v17 + 1) != 7 )
            {
LABEL_43:
              v27 = 32LL;
              goto LABEL_20;
            }
LABEL_42:
            *((_DWORD *)v17 + 5) = 0;
            *((_DWORD *)v17 + 7) = 0;
            *((_DWORD *)v17 + 4) = 2;
            *((_DWORD *)v17 + 6) = 1;
            goto LABEL_43;
          }
        }
        *((_DWORD *)v17 + 2) = 2;
        *((_DWORD *)v17 + 3) = 1;
        goto LABEL_43;
      }
LABEL_22:
      *a3 = v19;
      goto LABEL_23;
    }
    ExFreePoolWithTag(v17, 0);
  }
  v4 = -1073741670;
LABEL_23:
  for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
  {
    if ( v11[i] )
      ExFreePoolWithTag(*((PVOID *)v9 + i), 0);
  }
  ExFreePoolWithTag(v9, 0);
  ExFreePoolWithTag(v11, 0);
  return v4;
}
