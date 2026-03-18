/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005E6D0
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005E8F0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071EC0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00764F8 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C005B1F0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_PROCESS *v4; // r12
  unsigned int v5; // r8d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r15
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 **v11; // r14
  __int64 *i; // rsi
  __int64 j; // rdi
  CVirtualAddressAllocator *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r9d
  _BYTE v21[8]; // [rsp+20h] [rbp-468h] BYREF
  char *v22; // [rsp+28h] [rbp-460h]
  int v23; // [rsp+30h] [rbp-458h]
  unsigned __int64 v24[64]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v25[64]; // [rsp+240h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v4 = *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL);
  if ( (*((_DWORD *)v4 + 22) & 2) != 0 )
    v5 = *(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x3F;
  else
    v5 = -1;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v4,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                              v5);
  if ( VirtualAddressAllocator )
  {
    v7 = *((_DWORD *)this + 1748);
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
        v16 = (v15 >> 4) & 0x3F;
        v17 = v25[v16];
        if ( v17 >= i[9] )
          v17 = i[9];
        v18 = i[10];
        v25[v16] = v17;
        v19 = v24[v16];
        if ( v19 <= v18 )
          v19 = v18;
        v24[v16] = v19;
        v8 |= 1 << ((v15 >> 4) & 0x3F);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    for ( j = 0LL; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v14 = VIDMM_PROCESS::GetVirtualAddressAllocator(v4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), j);
        CVirtualAddressAllocator::FlushGpuVaTlb(v14, j, v25[j], v24[j]);
      }
      j = (unsigned int)(j + 1);
    }
  }
}
