/*
 * XREFs of PnpiGrowResourceList @ 0x1C0085B80
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0038858 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0038978 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x1C007D86C (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(const void **a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r14
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // esi
  __int64 result; // rax
  PVOID PoolWithTag; // rax

  v3 = a2;
  if ( *a1 && (v5 = *a2) != 0 )
  {
    v6 = 8 * v5;
    v7 = 8 * v5 + 64;
    v8 = v5 + 8;
    WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 32);
    result = ACPIInternalGrowBuffer(a1, v6, v7);
    if ( (int)result < 0 )
      v8 = 0;
    *v3 = v8;
  }
  else
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, 14, 31);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x52706341u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      *v3 = 8;
      memset(PoolWithTag, 0, 0x40uLL);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
