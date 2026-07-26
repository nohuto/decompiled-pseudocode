/*
 * XREFs of NdisInitializeWrapper @ 0x1C00EA5D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  SIZE_T v7; // rbp
  PVOID *PoolWithTag; // rax
  PVOID *v9; // rbx
  unsigned int v10; // r9d

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xAu, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids);
  *NdisWrapperHandle = 0LL;
  v7 = (unsigned int)*(unsigned __int16 *)SystemSpecific2 + 26;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6877444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *NdisWrapperHandle = PoolWithTag;
    memset(PoolWithTag, 0, (unsigned int)v7);
    *v9 = SystemSpecific1;
    v9[2] = v9 + 3;
    v10 = *(unsigned __int16 *)SystemSpecific2;
    *((_WORD *)v9 + 4) = v10;
    *((_WORD *)v9 + 5) = v10 + 2;
    memmove(v9 + 3, *((const void **)SystemSpecific2 + 1), v10);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xBu, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids);
}
