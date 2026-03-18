/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00A7920
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C00A6DA0 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0020F88 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     Template_qpxp @ 0x1C0021384 (Template_qpxp.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00A73D4 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00A7F50 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00A83E0 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        union _LARGE_INTEGER **a5,
        _QWORD **BlockListHead,
        _BYTE *a7,
        char a8)
{
  __int64 v8; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  _BYTE *v13; // rax
  union _LARGE_INTEGER *v14; // rax
  __int64 v15; // rcx
  union _LARGE_INTEGER *v16; // rsi
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // r8
  struct _VIDMM_PROCESS_HEAP_BLOCK *v20; // rdi
  struct _VIDMM_POOL_BLOCK *v21; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // r12
  VIDMM_LINEAR_POOL *v26; // rcx
  __int64 v27; // rdx
  union _LARGE_INTEGER v28; // rbx
  int v29; // edx
  ULONG AllocationType; // ecx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  ULONG_PTR v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  char v36; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v37; // [rsp+68h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v39; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v40[8]; // [rsp+80h] [rbp-9h] BYREF
  char v41; // [rsp+D0h] [rbp+47h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp+4Fh] BYREF

  RegionSize = a2;
  v8 = a3;
  BaseAddress = 0LL;
  v39.QuadPart = 0LL;
  v37 = 0LL;
  v40[0] = 0LL;
  v41 = 0;
  v36 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v11[3] = RegionSize;
    v11[4] = v8;
    v11[5] = a1;
  }
  v12 = BlockListHead;
  *a5 = 0LL;
  v13 = a7;
  *v12 = 0LL;
  *v13 = 0;
  v14 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v16 = v14;
  if ( !v14 )
  {
    v17 = -1073741801;
    _InterlockedIncrement(&dword_1C003C5B0);
    v18 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v18 + 24) = 675LL;
LABEL_5:
    WdLogEvent5_WdLowResource(v18);
LABEL_6:
    v20 = v37;
LABEL_7:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    v21 = v40[0];
    if ( v40[0] && v20 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v20 + 9), v40[0]);
    if ( v41 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v20);
    if ( v16 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64), v16);
    if ( v36 )
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), (__int64)v21, v19);
    return (unsigned int)v17;
  }
  memset(v14, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(a1 + 16));
  v36 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v23);
  v25 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
    v17 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v8, a4, &v37, a8);
    if ( v17 < 0 )
      goto LABEL_6;
    v41 = 1;
    v20 = v37;
    v17 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v37 + 9),
            RegionSize,
            v8,
            1,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v39,
            (void **)v40);
    if ( v17 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v24);
      goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v20 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v25 - 1);
      v26 = (VIDMM_LINEAR_POOL *)v25[8];
      v25 = (_QWORD *)*v25;
      v37 = v20;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v26, RegionSize, v8, 1, 0LL, 0LL, 0, 0, 0LL, &v39, (void **)v40) >= 0 )
        break;
      if ( v25 == BlockListHead )
        goto LABEL_22;
    }
  }
  v28 = v39;
  if ( !*((_QWORD *)v20 + 7) && !*((_QWORD *)v20 + 11) )
  {
    v29 = 4096;
    if ( *((_DWORD *)v20 + 20) != 2 )
      v29 = 8392704;
    BaseAddress = (PVOID)(v39.QuadPart + *((_QWORD *)v20 + 4));
    AllocationType = v29 | 0x800000;
    if ( !a8 )
      AllocationType = v29;
    v17 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v20 + 12));
    if ( v17 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C003C63C);
      v18 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v18 + 24) = 798LL;
      goto LABEL_5;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
    v31[4] = v39.HighPart;
    v31[5] = v28.LowPart;
    v31[3] = v20;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) += RegionSize;
  v32 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v32[14] += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v32[16] += RegionSize;
  }
  else
  {
    v32[18] += RegionSize;
  }
  v16->LowPart &= ~1u;
  v33 = RegionSize;
  v16[4].QuadPart = 0LL;
  v16[7].QuadPart = v33;
  v16[3] = (union _LARGE_INTEGER)v40[0];
  LOBYTE(v16[9].LowPart) = 0;
  v16[1].QuadPart = (LONGLONG)v20;
  v16[2] = v28;
  ++*((_DWORD *)v20 + 6);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), v27, v19);
  *a5 = v16;
  if ( a4 - 3 > 1 )
    *v12 = v16[2].QuadPart + *(_QWORD *)(v16[1].QuadPart + 32);
  else
    *v12 = 0LL;
  if ( bTracingEnabled )
  {
    v35 = a4 - 3 > 3 ? *((_QWORD *)v20 + 4) : *((_QWORD *)v20 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_qpxp(
        *(_QWORD *)(a1 + 8),
        &EventCreateProcessAllocationDetails,
        v34,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v16,
        RegionSize,
        v35);
  }
  *a7 = 1;
  return 0LL;
}
