/*
 * XREFs of PnpLookupArbitersNewResources @ 0x140615E24
 * Callers:
 *     IopTestConfiguration @ 0x140615D3C (IopTestConfiguration.c)
 *     IopRetestConfiguration @ 0x140726518 (IopRetestConfiguration.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpLookupArbitersNewResources(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int v9; // r10d
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v15; // edi
  __int64 *v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // al
  _DWORD *PoolWithTag; // rdx
  __int64 v23; // rax
  char v24; // cl

  v6 = 0;
  v9 = 0;
  if ( !a2 )
    return 3221225473LL;
  v10 = *(_QWORD *)(a3 + 32);
  do
  {
    v11 = v9;
    v12 = *(_QWORD *)(((unsigned __int64)v9 << 6) + a1);
    if ( v12 == v10 )
      break;
    ++v9;
  }
  while ( v9 < a2 );
  v13 = v11 + 1;
  if ( v12 == v10 )
    v13 = v11;
  if ( (unsigned int)v13 >= a2 )
    return 3221225473LL;
  _mm_lfence();
  v15 = 0;
  v16 = *(__int64 **)(*(_QWORD *)((v13 << 6) + a1 + 32) + 16LL);
  v17 = *v16;
  v18 = *(_DWORD *)(*v16 + 20);
  if ( v18 )
  {
    v19 = v17 + 24;
    v20 = v18;
    do
    {
      v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v19 + 32LL) + 136LL);
      if ( v21 == a4 || v21 == 7 && a4 == 3 )
        ++v15;
      v19 += 8LL;
      --v20;
    }
    while ( v20 );
    if ( v15 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20LL * v15, 0x20207050u);
      if ( !PoolWithTag )
        return 3221225626LL;
      *a6 = v15;
      *a5 = PoolWithTag;
      if ( *(_DWORD *)(v17 + 20) )
      {
        do
        {
          v23 = *(_QWORD *)(*(_QWORD *)(v17 + 8LL * v6 + 24) + 32LL);
          v24 = *(_BYTE *)(v23 + 136);
          if ( v24 == a4 || v24 == 7 && a4 == 3 )
          {
            *(_OWORD *)PoolWithTag = *(_OWORD *)(v23 + 136);
            PoolWithTag[4] = *(_DWORD *)(v23 + 152);
            PoolWithTag += 5;
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(v17 + 20) );
      }
    }
  }
  return 0LL;
}
