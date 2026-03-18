/*
 * XREFs of ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0004DC8
 * Callers:
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C005996C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C0059B44 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005BAA8 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C006D298 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C009E868 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00A5F48 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0023B00 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(volatile signed __int32 *P)
{
  unsigned __int32 v2; // esi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // ecx
  char *v9; // r14
  _QWORD *v11; // rdx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v13; // rdx
  char **v14; // rax

  v2 = _InterlockedDecrement(P + 32);
  if ( !v2 && P )
  {
    v3 = P + 6;
    v4 = *((_QWORD *)P + 3);
    if ( v4 )
    {
      if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *v3 = 0LL;
    }
    v6 = P + 2;
    v7 = *((_QWORD *)P + 1);
    if ( v7 )
    {
      if ( *(_QWORD **)(v7 + 8) != v6 || (v11 = (_QWORD *)*((_QWORD *)P + 2), (_QWORD *)*v11 != v6) )
        __fastfail(3u);
      *v11 = v7;
      *(_QWORD *)(v7 + 8) = v11;
      *v6 = 0LL;
    }
    v8 = *((_DWORD *)P + 16);
    if ( (v8 & 0x1000) == 0 )
    {
      v9 = (char *)(P + 10);
      if ( *((_QWORD *)P + 5) )
      {
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((unsigned int)(v8 << 28 >> 28), *((_QWORD *)P + 7));
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
        v13 = *(_QWORD *)v9;
        if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v14 = (char **)*((_QWORD *)P + 6), *v14 != v9) )
          __fastfail(3u);
        *v14 = (char *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_QWORD *)v9 = 0LL;
        ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    ExFreePoolWithTag((PVOID)P, 0);
  }
  return v2;
}
