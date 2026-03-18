/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00B8848
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00B7D90 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0025848 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0025884 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp @ 0x1C0025DB8 (McTemplateK0qpxp.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00541C0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00543D0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00B8358 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00B8EA8 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00B9338 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        union _LARGE_INTEGER **a5,
        LONGLONG *a6,
        _BYTE *a7,
        char a8)
{
  __int64 v8; // rbx
  _QWORD *v11; // rax
  struct _PAGED_LOOKASIDE_LIST *v12; // r13
  union _LARGE_INTEGER *v13; // rax
  __int64 v14; // rcx
  union _LARGE_INTEGER *v15; // rsi
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD **BlockListHead; // r13
  _QWORD *v22; // r12
  struct _VIDMM_PROCESS_HEAP_BLOCK *v23; // rdi
  VIDMM_LINEAR_POOL *v24; // rcx
  __int64 v25; // rdx
  char v26; // r13
  union _LARGE_INTEGER v27; // rbx
  int v28; // edx
  ULONG AllocationType; // ecx
  __int64 v30; // rax
  struct _VIDMM_POOL_BLOCK *v31; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  ULONG_PTR v35; // rax
  __int64 v36; // r8
  LONGLONG v37; // rax
  __int64 v38; // rdx
  char v39; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v40; // [rsp+68h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v42; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v43[8]; // [rsp+80h] [rbp-9h] BYREF
  char v44; // [rsp+D0h] [rbp+47h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp+4Fh] BYREF

  RegionSize = a2;
  v8 = a3;
  BaseAddress = 0LL;
  v42.QuadPart = 0LL;
  v40 = 0LL;
  v43[0] = 0LL;
  v44 = 0;
  v39 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v11[3] = RegionSize;
    v11[4] = v8;
    v11[5] = a1;
  }
  v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v15 = v13;
  if ( !v13 )
  {
    v16 = -1073741801;
    _InterlockedIncrement(&dword_1C00475C0);
    v17 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v17 + 24) = 676LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_25:
    v23 = v40;
LABEL_26:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    v31 = v43[0];
    if ( v43[0] && v23 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v23 + 9), v43[0]);
    if ( v44 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v23);
    if ( v15 )
      ExFreeToPagedLookasideList(v12, v15);
    if ( v39 )
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), (__int64)v31, v18);
    return (unsigned int)v16;
  }
  memset(v13, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(a1 + 16));
  v39 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v19);
  v22 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v20);
    v26 = a8;
    v16 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v8, a4, &v40, a8);
    if ( v16 < 0 )
      goto LABEL_24;
    v44 = 1;
    v23 = v40;
    v16 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v40 + 9),
            RegionSize,
            v8,
            1,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v42,
            (void **)v43);
    if ( v16 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v20);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_26;
    }
  }
  else
  {
    while ( 1 )
    {
      v23 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v22 - 1);
      v24 = (VIDMM_LINEAR_POOL *)v22[8];
      v22 = (_QWORD *)*v22;
      v40 = v23;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v24, RegionSize, v8, 1, 0LL, 0LL, 0, 0, 0LL, &v42, (void **)v43) >= 0 )
        break;
      if ( v22 == BlockListHead )
        goto LABEL_8;
    }
    v26 = a8;
  }
  v27 = v42;
  if ( !*((_QWORD *)v23 + 7) && !*((_QWORD *)v23 + 11) )
  {
    v28 = 4096;
    if ( *((_DWORD *)v23 + 20) != 2 )
      v28 = 8392704;
    BaseAddress = (PVOID)(v42.QuadPart + *((_QWORD *)v23 + 4));
    AllocationType = v28 | 0x800000;
    if ( !v26 )
      AllocationType = v28;
    v16 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v23 + 12));
    if ( v16 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C004764C);
      v30 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v30 + 24) = 799LL;
      WdLogEvent5_WdLowResource(v30);
LABEL_24:
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_25;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v20);
    v33[4] = v42.HighPart;
    v33[5] = v27.LowPart;
    v33[3] = v23;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) += RegionSize;
  v34 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v34[19] += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v34[21] += RegionSize;
  }
  else
  {
    v34[23] += RegionSize;
  }
  v15->LowPart &= ~1u;
  v35 = RegionSize;
  v15[4].QuadPart = 0LL;
  v15[7].QuadPart = v35;
  v15[3] = (union _LARGE_INTEGER)v43[0];
  LOBYTE(v15[9].LowPart) = 0;
  v15[1].QuadPart = (LONGLONG)v23;
  v15[2] = v27;
  ++*((_DWORD *)v23 + 6);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), v25, v18);
  *a5 = v15;
  if ( a4 - 3 > 1 )
    v37 = v15[2].QuadPart + *(_QWORD *)(v15[1].QuadPart + 32);
  else
    v37 = 0LL;
  *a6 = v37;
  if ( bTracingEnabled )
  {
    v38 = a4 - 3 > 3 ? *((_QWORD *)v23 + 4) : *((_QWORD *)v23 + 11);
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp(
        *(_QWORD *)(a1 + 8),
        &EventCreateProcessAllocationDetails,
        v36,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v15,
        RegionSize,
        v38);
  }
  *a7 = 1;
  return 0LL;
}
