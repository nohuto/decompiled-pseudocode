/*
 * XREFs of ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0055734
 * Callers:
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053BA0 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadRangeAvl(char *a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // r8
  _QWORD *v4; // rax

  v2 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 3);
  if ( *(_OWORD *)&a2[1].0 != *(_OWORD *)(a1 + 24) )
  {
    if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 4) <= a2[1].Children[0] )
      return 0xFFFFFFFFLL;
    if ( v2 >= a2[1].Children[1] )
      return 1LL;
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, v2);
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4[3] = 275LL;
    v4[4] = 23LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  return 0LL;
}
