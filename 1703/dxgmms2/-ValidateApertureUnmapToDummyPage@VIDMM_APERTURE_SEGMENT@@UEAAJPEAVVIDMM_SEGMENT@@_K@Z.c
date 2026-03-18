/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00A0340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AE04 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0093F30 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00958F4 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  UINT v25; // r9d
  union _LARGE_INTEGER v26; // rbx
  SIZE_T v27; // r13
  UINT v28; // r9d
  VIDMM_GLOBAL *v29; // rcx
  _DWORD *v30; // rax
  unsigned int v31; // ecx
  UINT v32; // r9d
  UINT v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v37; // [rsp+38h] [rbp-51h]
  unsigned int v38; // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER v39; // [rsp+60h] [rbp-29h] BYREF
  union _LARGE_INTEGER v40; // [rsp+68h] [rbp-21h] BYREF
  struct _VIDMM_POOL_BLOCK *v41; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v42; // [rsp+78h] [rbp-11h]
  _DWORD *v43; // [rsp+80h] [rbp-9h]
  __int64 v44; // [rsp+88h] [rbp-1h]
  union _LARGE_INTEGER v45; // [rsp+90h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h]
  PVOID v49; // [rsp+108h] [rbp+7Fh]

  v4 = 0LL;
  v42.QuadPart = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 144);
  v7 = 0;
  v41 = 0LL;
  v8 = 0LL;
  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, v6, gs_PhysicalAddressZero, 0x1000uLL);
  v10 = MmAllocatePagesForMdl(
          gs_PhysicalAddressZero,
          *(PHYSICAL_ADDRESS *)((char *)this + 144),
          gs_PhysicalAddressZero,
          0x1000uLL);
  v11 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                  4096LL,
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  *((_QWORD *)this + 18),
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  516,
                  0x80000000);
  v49 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v35 = WdLogNewEntry5_WdWarning(v13, v12);
    WdLogEvent5_WdWarning(v35);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 22), v4);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v15 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v43 = v15;
  v8 = v15;
  if ( BaseAddress && v15 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v18 = v49;
    memset(v49, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 184LL))(
           this,
           1LL,
           v10);
    if ( v7 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v20, v19);
      WdLogEvent5_WdWarning(v21);
      v5 = BaseAddress;
      goto LABEL_34;
    }
    v7 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 22),
           4096LL,
           0,
           1,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v45,
           (void **)&v41);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v25 = 0;
      else
        v25 = *((_DWORD *)this + 4) + 1;
      v26 = v45;
      v27 = (unsigned __int64)v45.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v25,
        1uLL,
        (unsigned __int64)v45.QuadPart >> 12,
        PagesForMdl,
        v37,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v28 = 0;
      else
        v28 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v28,
        1uLL,
        v27,
        PhysicalAddress,
        0);
      v40 = v26;
      v29 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v39 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v29, 0, 0LL, 0x1000uLL, 0LL, this, &v40, 0LL, a2, &v39, 0LL, 0);
      v39 = v42;
      v40 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        0x1000uLL,
        0LL,
        a2,
        &v40,
        0LL,
        this,
        &v39,
        0LL,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v30 = v43;
      v31 = 0;
      while ( *v30 == -1414812757 )
      {
        ++v31;
        ++v30;
        if ( v31 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v32 = 0;
      else
        v32 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v32,
        1uLL,
        v27,
        PagesForMdl,
        v38,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v33 = 0;
      else
        v33 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v33,
        1uLL,
        v27,
        *(union _LARGE_INTEGER *)((char *)this + 520),
        0);
      v8 = v43;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v23, v22);
      WdLogEvent5_WdWarning(v24);
    }
    v4 = v41;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v34 = WdLogNewEntry5_WdWarning(v17, v16);
  WdLogEvent5_WdWarning(v34);
  v5 = BaseAddress;
LABEL_33:
  v18 = v49;
LABEL_34:
  if ( v44 )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 192LL))(this, 1LL, v10);
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
  if ( v18 )
    MmFreeContiguousMemory(v18);
  return (unsigned int)v7;
}
