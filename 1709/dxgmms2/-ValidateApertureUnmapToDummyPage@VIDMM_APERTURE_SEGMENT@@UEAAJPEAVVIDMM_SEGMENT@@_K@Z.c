/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00A8450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0050660 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E16C (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C009BA34 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C009DAF4 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ValidateApertureUnmapToDummyPage(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_SEGMENT *a2,
        union _LARGE_INTEGER a3)
{
  struct _VIDMM_POOL_BLOCK *v4; // rbx
  void *v5; // rdi
  PHYSICAL_ADDRESS v6; // rdx
  int v7; // r12d
  void *v8; // r13
  struct _MDL *PagesForMdl; // r15
  struct _MDL *v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  void *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  UINT v21; // r9d
  union _LARGE_INTEGER v22; // rbx
  SIZE_T v23; // r13
  UINT v24; // r9d
  VIDMM_GLOBAL *v25; // rcx
  _DWORD *v26; // rax
  unsigned int v27; // ecx
  UINT v28; // r9d
  UINT v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v33; // [rsp+38h] [rbp-51h]
  unsigned int v34; // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER v35; // [rsp+60h] [rbp-29h] BYREF
  union _LARGE_INTEGER v36; // [rsp+68h] [rbp-21h] BYREF
  struct _VIDMM_POOL_BLOCK *v37; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v38; // [rsp+78h] [rbp-11h]
  _DWORD *v39; // [rsp+80h] [rbp-9h]
  __int64 v40; // [rsp+88h] [rbp-1h]
  union _LARGE_INTEGER v41; // [rsp+90h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h]
  PVOID v45; // [rsp+108h] [rbp+7Fh]

  v4 = 0LL;
  v38.QuadPart = 0LL;
  v5 = 0LL;
  v40 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 120);
  v7 = 0;
  v37 = 0LL;
  v8 = 0LL;
  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, v6, gs_PhysicalAddressZero, 0x1000uLL);
  v10 = MmAllocatePagesForMdl(
          gs_PhysicalAddressZero,
          *(PHYSICAL_ADDRESS *)((char *)this + 120),
          gs_PhysicalAddressZero,
          0x1000uLL);
  v11 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                  4096LL,
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  *((_QWORD *)this + 15),
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  516,
                  0x80000000);
  v45 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v31 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v31);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 19), v4);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v14 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v39 = v14;
  v8 = v14;
  if ( BaseAddress && v14 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v16 = v45;
    memset(v45, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 200LL))(
           this,
           1LL,
           v10);
    if ( v7 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v17);
      WdLogEvent5_WdWarning(v18);
      v5 = BaseAddress;
      goto LABEL_34;
    }
    v7 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 19),
           4096LL,
           0,
           1,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v41,
           (void **)&v37);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v21 = 0;
      else
        v21 = *((_DWORD *)this + 4) + 1;
      v22 = v41;
      v23 = (unsigned __int64)v41.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v21,
        1uLL,
        (unsigned __int64)v41.QuadPart >> 12,
        PagesForMdl,
        v33,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v24 = 0;
      else
        v24 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v24,
        1uLL,
        v23,
        PhysicalAddress,
        0);
      v36 = v22;
      v25 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v35 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v25, 0, 0LL, 0x1000uLL, 0LL, this, &v36, 0LL, a2, &v35, 0LL, 0);
      v35 = v38;
      v36 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        0x1000uLL,
        0LL,
        a2,
        &v36,
        0LL,
        this,
        &v35,
        0LL,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v26 = v39;
      v27 = 0;
      while ( *v26 == -1414812757 )
      {
        ++v27;
        ++v26;
        if ( v27 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v28 = 0;
      else
        v28 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v28,
        1uLL,
        v23,
        PagesForMdl,
        v34,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v29 = 0;
      else
        v29 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v29,
        1uLL,
        v23,
        *(union _LARGE_INTEGER *)((char *)this + 504),
        0);
      v8 = v39;
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v19);
      WdLogEvent5_WdWarning(v20);
    }
    v4 = v37;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v30 = WdLogNewEntry5_WdWarning(v15);
  WdLogEvent5_WdWarning(v30);
  v5 = BaseAddress;
LABEL_33:
  v16 = v45;
LABEL_34:
  if ( v40 )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 208LL))(this, 1LL, v10);
  if ( v5 )
    MmUnmapLockedPages(v5, PagesForMdl);
  if ( v8 )
    MmUnmapLockedPages(v8, v10);
  if ( v10 )
  {
    MmFreePagesFromMdl(v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( PagesForMdl )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
  }
  if ( v16 )
    MmFreeContiguousMemory(v16);
  return (unsigned int)v7;
}
