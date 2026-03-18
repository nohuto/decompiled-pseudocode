/*
 * XREFs of ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C005B914 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0068CC4 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0077E54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00A5D4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00A8AB0 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00A8C08 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00A909C (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00581E0 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0059C30 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::FreeVirtualAddressRange(
        struct _KTHREAD **this,
        struct _RTL_BALANCED_NODE *a2)
{
  unsigned int v4; // ebp
  char v5; // si
  struct _RTL_BALANCED_NODE *v6; // rbx
  int started; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  struct _RTL_BALANCED_NODE *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = -1073741811;
  if ( this[8] == KeGetCurrentThread() )
  {
    v5 = 0;
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v5 = 1;
  }
  v6 = (struct _RTL_BALANCED_NODE *)this[6];
  v11 = a2;
  if ( !v6 )
    goto LABEL_12;
  do
  {
    started = CompareVadByStartAddressAvl(&v11, v6);
    if ( started >= 0 )
    {
      if ( started <= 0 )
        break;
      v6 = v6->Children[1];
    }
    else
    {
      v6 = v6->Children[0];
    }
  }
  while ( v6 );
  if ( v6 )
  {
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
      (CVirtualAddressAllocator *)this,
      (struct VIDMM_VAD *)v6,
      v8);
    v4 = 0;
  }
  else
  {
LABEL_12:
    v9 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = a2;
    WdLogEvent5_WdWarning(v9);
  }
  if ( v5 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
