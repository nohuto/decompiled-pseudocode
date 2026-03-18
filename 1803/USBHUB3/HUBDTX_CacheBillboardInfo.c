/*
 * XREFs of HUBDTX_CacheBillboardInfo @ 0x1C002644C
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 */

void __fastcall HUBDTX_CacheBillboardInfo(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *PoolWithTag; // rbx
  PVOID v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x10uLL, 0x68334855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_BYTE *)PoolWithTag + 8) = -1;
    v5 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *a2, 0x68334855u);
    *PoolWithTag = v5;
    if ( v5 )
    {
      memmove(v5, a2, *a2);
    }
    else
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x58u,
        (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
      ExFreePoolWithTag(PoolWithTag, 0x68334855u);
      PoolWithTag = 0LL;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x57u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids);
  }
  *(_QWORD *)(a1 + 2640) = PoolWithTag;
}
