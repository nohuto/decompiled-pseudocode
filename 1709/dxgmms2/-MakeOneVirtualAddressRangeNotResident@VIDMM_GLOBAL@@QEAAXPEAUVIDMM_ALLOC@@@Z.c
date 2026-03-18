/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059DE8
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004E7C0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00519A8 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A040 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0054BF0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // r13
  _QWORD *v5; // rbp
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 **v11; // r14
  __int64 *i; // rsi
  __int64 j; // rdi
  CVirtualAddressAllocator *v14; // rax
  unsigned int v15; // r8d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // r9d
  _BYTE v21[8]; // [rsp+20h] [rbp-468h] BYREF
  char *v22; // [rsp+28h] [rbp-460h]
  int v23; // [rsp+30h] [rbp-458h]
  unsigned __int64 v24[64]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v25[64]; // [rsp+240h] [rbp-248h] BYREF

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
    if ( v5 && *(_DWORD *)(*v5 + 40864LL) )
      VirtualAddressAllocator = (struct CVirtualAddressAllocator *)v5[62];
    else
      VirtualAddressAllocator = 0LL;
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
          if ( v20 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v9, (__int64)&EventBlockThread, v10, v20);
        }
        ExAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL);
      }
      *((_QWORD *)VirtualAddressAllocator + 8) = KeGetCurrentThread();
      v23 = 2;
    }
    v11 = (__int64 **)((char *)a2 + 128);
    for ( i = *v11; i != (__int64 *)v11; i = (__int64 *)*i )
    {
      if ( (i[5] & 0xC00) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          VirtualAddressAllocator,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
          0LL,
          0);
        v15 = *((_DWORD *)i + 10);
        v16 = i[9];
        v17 = i[10];
        v18 = (v15 >> 4) & 0x3F;
        if ( v25[v18] < v16 )
          v16 = v25[v18];
        v19 = v24[v18];
        v25[v18] = v16;
        if ( v19 > v17 )
          v17 = v19;
        v24[v18] = v17;
        v8 |= 1 << ((v15 >> 4) & 0x3F);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    for ( j = 0LL; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v14 = VIDMM_PROCESS::GetVirtualAddressAllocator(
                (VIDMM_PROCESS *)v4,
                *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                j);
        CVirtualAddressAllocator::FlushGpuVaTlb(v14, j, v25[j], v24[j]);
      }
      j = (unsigned int)(j + 1);
    }
  }
}
