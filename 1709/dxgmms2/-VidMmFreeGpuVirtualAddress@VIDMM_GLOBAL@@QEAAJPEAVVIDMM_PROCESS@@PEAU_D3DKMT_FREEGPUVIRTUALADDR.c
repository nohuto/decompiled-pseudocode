/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0064E6C
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x1C0013E00 (VidMmFreeGpuVirtualAddress.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006FE58 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4)
{
  __int64 v7; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  __int64 v11; // rax
  _QWORD v12[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*((_BYTE *)this + 40872) & 1) == 0 )
    return 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                              0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    BaseAddress = a3->BaseAddress;
    if ( BaseAddress )
    {
      memset(v12, 0, 0x58uLL);
      v12[7] = a3->Size >> 12;
      v12[0] = -4294967176LL;
      v12[6] = BaseAddress;
      v12[5] = VirtualAddressAllocator;
      LOBYTE(v12[8]) = a4;
      return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12);
    }
    v11 = WdLogNewEntry5_WdWarning(v7);
    WdLogEvent5_WdWarning(v11);
  }
  return 3221225485LL;
}
