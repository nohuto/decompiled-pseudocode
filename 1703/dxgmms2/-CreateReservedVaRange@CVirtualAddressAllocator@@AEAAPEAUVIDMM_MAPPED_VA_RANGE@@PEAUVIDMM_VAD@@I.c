/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00518A8
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00512C8 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0051460 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

  v10 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  v12 = v10;
  if ( v10 )
  {
    v10[16] = 0;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 9) = 0LL;
    *((_QWORD *)v10 + 14) = 0LL;
    *((_QWORD *)v10 + 15) = 0LL;
    *(_QWORD *)v10 = a2;
    *((_QWORD *)v10 + 10) = a7;
    *((struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *)v10 + 11) = a6;
    *((_QWORD *)v10 + 13) = a4 + a5;
    v13 = v10[16];
    *((_QWORD *)v12 + 12) = a4;
    v12[32] = 1;
    v12[16] = v13 & 0xFFFFFC00 | ((*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0);
    memset(v12 + 2, 0, 0x30uLL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, a2, 0, 0LL, (struct _LIST_ENTRY **)v12) >= 0 )
      return (struct VIDMM_MAPPED_VA_RANGE *)v12;
    v18 = WdLogNewEntry5_WdWarning(v15, v14);
    WdLogEvent5_WdWarning(v18);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v12);
  }
  else
  {
    _InterlockedIncrement(&dword_1C003C680);
    v17 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v17 + 24) = 1780LL;
    WdLogEvent5_WdLowResource(v17);
  }
  return 0LL;
}
