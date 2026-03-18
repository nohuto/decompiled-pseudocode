/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A2350
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C004D764 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0056BDC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A34C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AF48 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00924C8 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  VIDMM_SEGMENT *v5; // r14
  struct _VIDMM_GLOBAL_ALLOC *v6; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v7; // rsi
  _QWORD **v8; // r15
  _QWORD *v9; // r14
  int *v10; // rbp
  VIDMM_DEVICE *v11; // rcx
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _VIDMM_GLOBAL_ALLOC *v16; // rsi
  _QWORD **v17; // r15
  _QWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int16 v21; // cx
  ADAPTER_RENDER **v22; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v31; // r12
  __int64 v32; // rcx
  _QWORD *v33; // rbp
  char *v34; // r13
  unsigned int v35; // esi
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  _QWORD *v37; // r15
  _QWORD *v38; // r13
  bool v39; // zf
  __int64 **v40; // rbp
  __int64 *v41; // r14
  unsigned __int64 v42; // r15
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned int v48; // ebp
  __int64 v49; // rdx
  __int64 v50; // r8
  char v51; // [rsp+60h] [rbp-88h]
  unsigned int v52; // [rsp+64h] [rbp-84h]
  unsigned __int64 v53; // [rsp+68h] [rbp-80h]
  int v54; // [rsp+68h] [rbp-80h]
  CVirtualAddressAllocator *v55; // [rsp+70h] [rbp-78h]
  unsigned __int64 v56; // [rsp+78h] [rbp-70h]
  _QWORD *v57; // [rsp+80h] [rbp-68h]
  char *v58; // [rsp+88h] [rbp-60h]
  struct VIDMM_ALLOC *v59; // [rsp+90h] [rbp-58h] BYREF
  _QWORD *v60; // [rsp+98h] [rbp-50h]
  struct _VIDMM_GLOBAL_ALLOC *v61; // [rsp+A0h] [rbp-48h]
  char v63; // [rsp+F8h] [rbp+10h]

  v5 = this;
  if ( a2 && *((_QWORD *)a2 + 26) && *((_QWORD *)a2 + 28) == *((_QWORD *)a2 + 17) )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 512, 0LL);
    v6 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
    v7 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    if ( v7 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
    {
      do
      {
        v8 = (_QWORD **)((char *)v7 - 16);
        v7 = *(struct _VIDMM_GLOBAL_ALLOC **)v7;
        v9 = *v8;
        while ( v9 != v8 )
        {
          v10 = (int *)(v9 - 5);
          v9 = (_QWORD *)*v9;
          v11 = (VIDMM_DEVICE *)*((_QWORD *)v10 + 1);
          if ( (*((_DWORD *)v11 + 13) & 7) == 0 )
            VIDMM_DEVICE::SuspendSchedulerDevice(v11, 1, *((_DWORD *)this + 4));
          if ( v10[26] > 0 )
            *((_DWORD *)a2 + 20) |= 0x400u;
        }
      }
      while ( v7 != v6 );
      v5 = this;
    }
    v12 = (_QWORD *)((char *)a2 + 144);
    VIDMM_GLOBAL::MemoryTransfer(
      *((VIDMM_GLOBAL **)v5 + 1),
      a2,
      *((_QWORD *)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 17),
      (union _LARGE_INTEGER *)a2 + 18,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 17),
      (union _LARGE_INTEGER *)a2 + 27,
      0LL,
      0);
    if ( (*((_DWORD *)a2 + 19) & 0x100000) != 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v15 + 24) = a2;
      WdLogEvent5_WdAssertion(v15);
      v16 = *(struct _VIDMM_GLOBAL_ALLOC **)v6;
      if ( *(struct _VIDMM_GLOBAL_ALLOC **)v6 != v6 )
      {
        do
        {
          v17 = (_QWORD **)((char *)v16 - 16);
          v16 = *(struct _VIDMM_GLOBAL_ALLOC **)v16;
          v18 = *v17;
          while ( v18 != v17 )
          {
            v19 = *(v18 - 4);
            v18 = (_QWORD *)*v18;
            VidSchiMarkDeviceAsError(*(_QWORD *)(v19 + 32), 24);
          }
        }
        while ( v16 != v6 );
        v5 = this;
      }
    }
    v20 = *((_QWORD *)a2 + 17);
    *v12 = *((_QWORD *)a2 + 27);
    if ( (*(_DWORD *)(v20 + 80) & 0x1000) != 0 )
      v21 = 0;
    else
      v21 = *(_DWORD *)(v20 + 16) + 1;
    *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = v21;
    *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = *v12 + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
    *((_QWORD *)a2 + 28) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)v5 + 1)) )
    {
      ExReleasePushLockExclusiveEx((char *)a2 + 512, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v24, v25);
      v28 = WdLogNewEntry5_WdWarning(v27, v26);
      WdLogEvent5_WdWarning(v28);
      return 3221226166LL;
    }
    if ( (**((_DWORD **)a2 + 65) & 0x10000) != 0 )
    {
      LOBYTE(v23) = 1;
      VIDMM_GLOBAL::NotifyResidency(v22, a2, v23);
    }
    v30 = *((_QWORD *)a2 + 17);
    if ( (*(_DWORD *)(v30 + 80) & 0x1000) != 0 )
      v52 = 0;
    else
      v52 = *(_DWORD *)(v30 + 16) + 1;
    v31 = *(struct _VIDMM_GLOBAL_ALLOC **)v6;
    while ( v31 != v6 )
    {
      v32 = *((_QWORD *)v5 + 1);
      v33 = (_QWORD *)((char *)v31 - 56);
      v53 = -1LL;
      v34 = 0LL;
      v31 = *(struct _VIDMM_GLOBAL_ALLOC **)v31;
      v35 = 0;
      v61 = v31;
      v55 = 0LL;
      v58 = 0LL;
      v63 = 0;
      v51 = 0;
      v56 = 0LL;
      if ( (*(_BYTE *)(v32 + 40872) & 1) != 0 )
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    (VIDMM_PROCESS *)v33[1],
                                    *(_DWORD *)(*(_QWORD *)(v32 + 24) + 200LL),
                                    *((_DWORD *)a2 + 19) & 0x3F);
        v55 = VirtualAddressAllocator;
        v34 = (char *)VirtualAddressAllocator + 56;
        v58 = (char *)VirtualAddressAllocator + 56;
        if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
          v63 = 1;
        }
      }
      v37 = (_QWORD *)v33[5];
      v57 = v33 + 5;
      if ( v37 != v33 + 5 )
      {
        v38 = v33 + 5;
        do
        {
          v39 = (*((_DWORD *)a2 + 19) & 0x8000000) == 0;
          v40 = (__int64 **)(v37 - 5);
          v37 = (_QWORD *)*v37;
          v60 = v37;
          if ( !v39 )
            VIDMM_GLOBAL::BuildInitContextAllocation(*((ADAPTER_RENDER ***)v5 + 1), v40);
          if ( (*(_BYTE *)(*((_QWORD *)v5 + 1) + 40872LL) & 1) != 0 && *((_BYTE *)v40 + 26) )
          {
            v41 = v40[16];
            if ( v41 != (__int64 *)(v40 + 16) )
            {
              v42 = v53;
              do
              {
                v43 = *((_DWORD *)a2 + 19);
                v59 = 0LL;
                v54 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        v55,
                        (struct VIDMM_MAPPED_VA_RANGE *)(v41 - 3),
                        v43 & 0x3F,
                        v52,
                        *((_QWORD *)a2 + 18),
                        0LL,
                        0,
                        &v59);
                if ( v54 >= 0 )
                {
                  v51 = 1;
                  v47 = v56;
                  v35 |= 1 << ((*((_DWORD *)v41 + 10) >> 4) & 0x3F);
                  if ( v42 >= v41[9] )
                    v42 = v41[9];
                  if ( v56 <= v41[10] )
                    v47 = v41[10];
                  v56 = v47;
                }
                else
                {
                  v46 = WdLogNewEntry5_WdWarning(v45, v44);
                  *(_QWORD *)(v46 + 32) = v54;
                  *(_QWORD *)(v46 + 24) = v40;
                  WdLogEvent5_WdWarning(v46);
                  VidSchiMarkDeviceAsError(v40[1][4], 23);
                }
                v41 = (__int64 *)*v41;
              }
              while ( v41 != (__int64 *)(v40 + 16) );
              v38 = v57;
              v53 = v42;
              v37 = v60;
            }
            v5 = this;
          }
        }
        while ( v37 != v38 );
        v31 = v61;
        v6 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        v34 = v58;
      }
      if ( v63 )
      {
        *((_QWORD *)v34 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v34, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v51 )
      {
        v48 = 0;
        if ( v35 )
        {
          do
          {
            if ( (v35 & 1) != 0 )
              CVirtualAddressAllocator::FlushGpuVaTlb(v55, v48, v53, v56);
            ++v48;
            v35 >>= 1;
          }
          while ( v35 );
          v5 = this;
        }
      }
    }
    ExReleasePushLockExclusiveEx((char *)a2 + 512, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v49, v50);
  }
  return 0LL;
}
