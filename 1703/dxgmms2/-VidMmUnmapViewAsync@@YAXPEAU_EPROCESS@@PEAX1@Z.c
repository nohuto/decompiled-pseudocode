/*
 * XREFs of ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4
 * Callers:
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0048608 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C004880C (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0048C88 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00684CC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006E974 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C009E5D0 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C009EE50 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00A90A0 (-UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C00A9180 (-UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z.c)
 * Callees:
 *     Template_ppp @ 0x1C001FDD0 (Template_ppp.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C00503B4 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmUnmapViewAsync(PVOID Object, PVOID a2, PVOID MappedBase)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE v8[32]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  PVOID v10; // [rsp+58h] [rbp-20h]
  PVOID v11; // [rsp+60h] [rbp-18h]
  PVOID v12; // [rsp+68h] [rbp-10h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppp((__int64)Object, &BeginVidMmUnmapViewAsync, (__int64)MappedBase, Object, a2, MappedBase);
  if ( Object )
    ObfReferenceObject(Object);
  ObfReferenceObject(a2);
  v9 = 2;
  v10 = Object;
  v11 = a2;
  v12 = MappedBase;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v8) )
  {
    if ( Object )
    {
      MmUnmapViewOfSection(Object, MappedBase);
      ObfDereferenceObject(Object);
    }
    else
    {
      MmUnmapViewInSystemSpace(MappedBase);
    }
    ObfDereferenceObject(a2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppp(v6, &EndVidMmUnmapViewAsync, v7, Object, a2, MappedBase);
  }
}
