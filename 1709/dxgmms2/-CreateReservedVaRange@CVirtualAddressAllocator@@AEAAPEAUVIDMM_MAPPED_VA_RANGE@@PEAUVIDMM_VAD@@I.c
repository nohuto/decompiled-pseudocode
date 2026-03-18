/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C005342C
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0055314 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001958 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00554B0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v10 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v10 )
    v13 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v10,
                                            (__int64)a2,
                                            a4,
                                            a4 + a5,
                                            0,
                                            0LL,
                                            0LL,
                                            (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                            a6.Value,
                                            a7,
                                            0LL,
                                            0LL);
  else
    v13 = 0LL;
  if ( v13 )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, a2, 0, 0LL, v13) >= 0 )
      return v13;
    v17 = WdLogNewEntry5_WdWarning(v14);
    WdLogEvent5_WdWarning(v17);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v13);
  }
  else
  {
    _InterlockedIncrement(&dword_1C0040690);
    v16 = WdLogNewEntry5_WdLowResource(v12, v11);
    *(_QWORD *)(v16 + 24) = 1780LL;
    WdLogEvent5_WdLowResource(v16);
  }
  return 0LL;
}
