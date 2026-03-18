/*
 * XREFs of PnpiGrowResourceList @ 0x1C008EB64
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x1C0011D5C (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0011E28 (WPP_RECORDER_SF_ddL.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C008F7A4 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(_QWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r14
  PVOID PoolWithTag; // rax
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v10; // esi

  v3 = a2;
  if ( *a1 && (v7 = *a2) != 0 )
  {
    v8 = 8 * v7;
    v9 = 8 * v7 + 64;
    v10 = v7 + 8;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, 32);
    result = ACPIInternalGrowBuffer(a1, v8, v9);
    if ( (int)result < 0 )
      v10 = 0;
    *v3 = v10;
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
