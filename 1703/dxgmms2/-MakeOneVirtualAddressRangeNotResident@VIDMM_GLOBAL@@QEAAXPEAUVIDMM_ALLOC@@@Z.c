/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056FF0
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049610 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D484 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0091788 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rsi
  unsigned int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 **v11; // r14
  __int64 *i; // rbx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 j; // rbx
  _QWORD *v18; // rdx
  CVirtualAddressAllocator *v19; // rcx
  int v20; // r9d
  _BYTE v21[8]; // [rsp+20h] [rbp-458h] BYREF
  char *v22; // [rsp+28h] [rbp-450h]
  int v23; // [rsp+30h] [rbp-448h]
  unsigned __int64 v24[64]; // [rsp+40h] [rbp-438h] BYREF
  unsigned __int64 v25[64]; // [rsp+240h] [rbp-238h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (*(_DWORD *)(v4 + 48) & 2) != 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                *(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x3F);
  }
  else
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v4 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
    if ( !v5 || !*(_DWORD *)(*v5 + 40864LL) )
      return;
    VirtualAddressAllocator = (struct CVirtualAddressAllocator *)v5[58];
  }
  if ( VirtualAddressAllocator )
  {
    v7 = *((_DWORD *)this + 1604);
    if ( v7 )
    {
      memset(v25, 0xFFu, 8LL * v7);
      memset(v24, 0, 8LL * v7);
    }
    v8 = 0;
    v22 = (char *)VirtualAddressAllocator + 56;
    v23 = 0;
    if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v20 = *((_DWORD *)VirtualAddressAllocator + 18);
          if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v9, &EventBlockThread, v10, v20);
        }
        ExAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL);
      }
      *((_QWORD *)VirtualAddressAllocator + 8) = KeGetCurrentThread();
      v23 = 2;
    }
    v11 = (__int64 **)((char *)a2 + 128);
    for ( i = *v11; i != (__int64 *)v11; i = (__int64 *)*i )
    {
      if ( ((*((_DWORD *)i + 10) | (*((_DWORD *)i + 10) >> 1)) & 0x400) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          VirtualAddressAllocator,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
          0LL,
          0);
        v13 = *((_DWORD *)i + 10);
        v14 = v25[(v13 >> 4) & 0x3F];
        if ( v14 >= i[9] )
          v14 = i[9];
        v15 = i[10];
        v25[(*((_DWORD *)i + 10) >> 4) & 0x3F] = v14;
        v16 = v24[(v13 >> 4) & 0x3F];
        if ( v16 <= v15 )
          v16 = v15;
        v24[(v13 >> 4) & 0x3F] = v16;
        v8 |= 1 << ((v13 >> 4) & 0x3F);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    for ( j = 0LL; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v18 = *(_QWORD **)(*(_QWORD *)(v4 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
        if ( v18 && *(_DWORD *)(*v18 + 40864LL) )
        {
          if ( (*(_DWORD *)(v4 + 48) & 2) != 0 )
            v19 = *(CVirtualAddressAllocator **)(*v18 + 8 * j + 40352);
          else
            v19 = (CVirtualAddressAllocator *)v18[58];
        }
        else
        {
          v19 = 0LL;
        }
        CVirtualAddressAllocator::FlushGpuVaTlb(v19, j, v25[j], v24[j]);
      }
      j = (unsigned int)(j + 1);
    }
  }
}
