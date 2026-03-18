/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1C008ED30
 * Callers:
 *     PnpiUpdateResourceList @ 0x1C008F680 (PnpiUpdateResourceList.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0011E28 (WPP_RECORDER_SF_ddL.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C008F7A4 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rax
  int v6; // edi

  if ( *(_QWORD *)a1 )
  {
    v6 = 32 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
    WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 30);
    return ACPIInternalGrowBuffer(a1, (unsigned int)(v6 + 8), (unsigned int)(v6 + 264));
  }
  else
  {
    WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 2, a3, 29);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x52706341u);
    *(_QWORD *)a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x108uLL);
      **(_WORD **)a1 = 1;
      *(_WORD *)(*(_QWORD *)a1 + 2LL) = 1;
      *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
