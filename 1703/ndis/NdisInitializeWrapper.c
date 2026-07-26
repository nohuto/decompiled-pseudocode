/*
 * XREFs of NdisInitializeWrapper @ 0x1C00DEAF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
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
  size_t v10; // r8

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xAu, &WPP_9f8f378a758a3d0ffb730d0f7c1927f6_Traceguids);
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
    WPP_SF_(0xBu, &WPP_9f8f378a758a3d0ffb730d0f7c1927f6_Traceguids);
}
