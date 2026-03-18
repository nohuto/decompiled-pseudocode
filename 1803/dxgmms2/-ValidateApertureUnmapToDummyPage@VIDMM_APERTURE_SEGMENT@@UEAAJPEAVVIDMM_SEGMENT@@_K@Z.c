/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00AFF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00541C0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00543D0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00627D8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00A1984 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00A4134 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
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
  VIDMM_GLOBAL *v30; // rcx
  _DWORD *v31; // rax
  unsigned int v32; // ecx
  UINT v33; // r9d
  UINT v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v38; // [rsp+38h] [rbp-51h]
  unsigned int v39; // [rsp+38h] [rbp-51h]
  union _LARGE_INTEGER v40; // [rsp+60h] [rbp-29h] BYREF
  union _LARGE_INTEGER v41; // [rsp+68h] [rbp-21h] BYREF
  struct _VIDMM_POOL_BLOCK *v42; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v43; // [rsp+78h] [rbp-11h]
  struct _DXGK_TRANSFERFLAGS v44[2]; // [rsp+80h] [rbp-9h]
  _DWORD *v45; // [rsp+88h] [rbp-1h]
  __int64 v46; // [rsp+90h] [rbp+7h]
  union _LARGE_INTEGER v47; // [rsp+98h] [rbp+Fh] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h]
  PVOID v51; // [rsp+108h] [rbp+7Fh]

  v4 = 0LL;
  v43.QuadPart = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 120);
  v46 = 0LL;
  v7 = 0;
  *(_QWORD *)&v44[0].0 = 0LL;
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
  v51 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v36 = WdLogNewEntry5_WdWarning(v13, v12);
    WdLogEvent5_WdWarning(v36);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 19), v4);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v15 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v45 = v15;
  v8 = v15;
  if ( BaseAddress && v15 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v18 = v51;
    memset(v51, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 200LL))(
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
           *((VIDMM_LINEAR_POOL **)this + 19),
           4096LL,
           0,
           1,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v47,
           (void **)&v42);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v25 = 0;
      else
        v25 = *((_DWORD *)this + 4) + 1;
      v26 = v47;
      v27 = (unsigned __int64)v47.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v25,
        1uLL,
        (unsigned __int64)v47.QuadPart >> 12,
        PagesForMdl,
        v38,
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
      v41 = v26;
      v29 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v40 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v29, 0, 0LL, 0x1000uLL, 0LL, this, &v41, 0LL, a2, &v40, 0LL, v44[0]);
      v30 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v40 = v43;
      v41 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v30, 0, 0LL, 0x1000uLL, 0LL, a2, &v41, 0LL, this, &v40, 0LL, v44[0]);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v31 = v45;
      v32 = 0;
      while ( *v31 == -1414812757 )
      {
        ++v32;
        ++v31;
        if ( v32 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v33 = 0;
      else
        v33 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v33,
        1uLL,
        v27,
        PagesForMdl,
        v39,
        0,
        0);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v34 = 0;
      else
        v34 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v34,
        1uLL,
        v27,
        *(union _LARGE_INTEGER *)((char *)this + 504),
        0);
      v8 = v45;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v23, v22);
      WdLogEvent5_WdWarning(v24);
    }
    v4 = v42;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v35 = WdLogNewEntry5_WdWarning(v17, v16);
  WdLogEvent5_WdWarning(v35);
  v5 = BaseAddress;
LABEL_33:
  v18 = v51;
LABEL_34:
  if ( v46 )
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
  if ( v18 )
    MmFreeContiguousMemory(v18);
  return (unsigned int)v7;
}
