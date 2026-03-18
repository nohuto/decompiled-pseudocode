/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipPropertySet@@@Z @ 0x1C004D61C
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C004E2F0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C004E440 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C004F820 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FB2C (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOpe.c)
 * Callees:
 *     ??0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C001C398 (--0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipPropertySet>(unsigned int a1, char *Src, CFlipPropertySet **a3)
{
  signed int v5; // ebx
  unsigned int v6; // r12d
  char *v7; // r14
  char *PoolWithQuotaTag; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  unsigned int i; // r8d
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  char *v18; // r9
  unsigned int j; // r15d
  char *v20; // rbx
  size_t v21; // r8
  char *v22; // rdx
  __int64 v23; // rcx
  CFlipPropertySet *v24; // rax
  CFlipPropertySet *v25; // rcx
  char *v27; // [rsp+50h] [rbp-48h]

  v5 = 0;
  if ( a1 )
  {
    v6 = 0;
    v7 = 0LL;
    PoolWithQuotaTag = 0LL;
    v9 = 0;
    if ( Src )
    {
      v10 = 32LL * a1;
      v11 = 0xFFFFFFFFLL;
      if ( v10 <= 0xFFFFFFFF )
        v11 = (unsigned int)v10;
      v5 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v10 <= 0xFFFFFFFF )
      {
        PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v11, 0x69704346u);
        if ( !PoolWithQuotaTag )
          v5 = -1073741801;
      }
      if ( v5 < 0 )
      {
        v6 = 0;
      }
      else
      {
        if ( &Src[v11] < Src || (unsigned __int64)&Src[v11] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithQuotaTag, Src, (unsigned int)v11);
        v6 = 0;
      }
    }
    else
    {
      v5 = -1073741811;
    }
    for ( i = 0; v5 >= 0 && i < a1; ++i )
    {
      v13 = 32LL * i;
      v14 = *(_DWORD *)&PoolWithQuotaTag[v13 + 16];
      if ( v14 && *(_QWORD *)&PoolWithQuotaTag[v13 + 24] )
      {
        v15 = v6;
        v16 = v6 + v14;
        v17 = -1;
        if ( v16 >= v6 )
          v17 = v16;
        v6 = v17;
        v5 = v16 < v15 ? 0xC0000095 : 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    if ( v5 >= 0 )
    {
      v7 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v6, 0x62704346u);
      if ( !v7 )
        v5 = -1073741801;
      if ( v5 >= 0 )
      {
        v18 = v7;
        v27 = v7;
        for ( j = 0; v5 >= 0 && j < a1; ++j )
        {
          v20 = &PoolWithQuotaTag[32 * j];
          v21 = *((unsigned int *)v20 + 4);
          v22 = (char *)*((_QWORD *)v20 + 3);
          if ( &v22[v21] < v22 || (unsigned __int64)&v22[v21] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v18, v22, v21);
          *((_QWORD *)v20 + 3) = v27;
          v23 = *((unsigned int *)v20 + 4);
          v18 = &v27[v23];
          v27 += v23;
          if ( v9 + 16 < v9 )
          {
            v9 = -1;
            v5 = -1073741675;
          }
          else
          {
            v9 += 16;
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            if ( v9 + 4 < v9 )
            {
              v9 = -1;
              v5 = -1073741675;
            }
            else
            {
              v9 += 4;
              v5 = 0;
            }
            if ( v5 >= 0 )
            {
              if ( (unsigned int)v23 + v9 < v9 )
              {
                v9 = -1;
                v5 = -1073741675;
              }
              else
              {
                v9 += v23;
                v5 = 0;
              }
            }
          }
        }
      }
    }
    if ( v5 >= 0 )
    {
      v24 = (CFlipPropertySet *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x28uLL, 0x73704346u);
      if ( v24 )
        v25 = CFlipPropertySet::CFlipPropertySet(v24, a1, (struct FlipPropertyItem *)PoolWithQuotaTag, v7, v9);
      else
        v25 = 0LL;
      *a3 = v25;
      if ( v25 )
      {
        v7 = 0LL;
        PoolWithQuotaTag = 0LL;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( PoolWithQuotaTag )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return (unsigned int)v5;
}
