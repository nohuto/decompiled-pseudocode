/*
 * XREFs of ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550
 * Callers:
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0050690 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0051460 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00516D0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00518A8 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00519B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C0091FD4 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009738C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0013DE4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(volatile signed __int32 *P)
{
  unsigned __int32 v2; // esi
  char *v3; // rax
  __int64 v4; // rdx
  char **v5; // rcx
  char *v6; // rax
  int v7; // ecx
  char *v8; // r14
  __int64 v10; // rdx
  char **v11; // rcx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v13; // rdx
  char **v14; // rax

  v2 = _InterlockedDecrement(P + 32);
  if ( !v2 && P )
  {
    v3 = (char *)(P + 6);
    if ( *((_QWORD *)P + 3) )
    {
      v4 = *(_QWORD *)v3;
      v5 = (char **)*((_QWORD *)P + 4);
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
        __fastfail(3u);
      *v5 = (char *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)v3 = 0LL;
    }
    v6 = (char *)(P + 2);
    if ( *((_QWORD *)P + 1) )
    {
      v10 = *(_QWORD *)v6;
      v11 = (char **)*((_QWORD *)P + 2);
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *v11 != v6 )
        __fastfail(3u);
      *v11 = (char *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)v6 = 0LL;
    }
    v7 = *((_DWORD *)P + 16);
    if ( (v7 & 0x1000) == 0 )
    {
      v8 = (char *)(P + 10);
      if ( *((_QWORD *)P + 5) )
      {
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((unsigned int)(v7 << 28 >> 28), *((_QWORD *)P + 7));
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
        v13 = *(_QWORD *)v8;
        v14 = (char **)*((_QWORD *)P + 6);
        if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *v14 != v8 )
          __fastfail(3u);
        *v14 = (char *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_QWORD *)v8 = 0LL;
        ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    ExFreePoolWithTag((PVOID)P, 0);
  }
  return v2;
}
