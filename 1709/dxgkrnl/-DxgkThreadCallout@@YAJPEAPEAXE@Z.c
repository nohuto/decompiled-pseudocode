/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x1C00F1DF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DxgkThreadCallout(void **a1, char a2)
{
  _DWORD *PoolWithQuotaTag; // rax
  __int64 v4; // rcx
  void *v5; // rbx
  void *v7; // rcx
  __int64 v8; // rax

  if ( a2 != 1 )
  {
    v7 = *a1;
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *a1 = 0LL;
    }
    return 0LL;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x8CuLL, 0x4B677844u);
  v5 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *PoolWithQuotaTag = 0;
    PoolWithQuotaTag[34] = 0;
    memset(PoolWithQuotaTag + 1, 0, 0x84uLL);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *a1 = v5;
    return 0LL;
  }
  v8 = WdLogNewEntry5_WdLowResource(v4);
  *(_QWORD *)(v8 + 24) = 257LL;
  WdLogEvent5_WdLowResource(v8);
  *a1 = 0LL;
  return 3221225495LL;
}
