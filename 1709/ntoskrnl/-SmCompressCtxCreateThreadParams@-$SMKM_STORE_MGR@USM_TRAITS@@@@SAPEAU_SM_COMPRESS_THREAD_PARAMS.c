/*
 * XREFs of ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140265214
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140265110 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(__int64 a1, int a2)
{
  BOOLEAN v4; // al
  int v5; // esi
  _QWORD *v6; // rbx
  SIZE_T v7; // rdx
  _QWORD *PoolWithTag; // rax

  v4 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 120));
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v7 = 40LL;
  if ( a2 )
    v7 = *(unsigned int *)(a1 + 132) + 4136LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x74436D73u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *v6 = a1;
    if ( a2 )
    {
      v6[3] = v6 + 5;
      v6[4] = (char *)v6 + *(unsigned int *)(a1 + 132) + 40;
    }
    v5 = 0;
  }
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 120));
  return v6;
}
