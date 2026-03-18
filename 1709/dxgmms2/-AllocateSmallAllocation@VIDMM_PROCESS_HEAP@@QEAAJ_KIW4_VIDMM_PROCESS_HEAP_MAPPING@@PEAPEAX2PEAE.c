/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00AFF94
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C00AF4C0 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0022E9C (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp @ 0x1C0023408 (McTemplateK0qpxp.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0050660 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00AFA50 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00B05B8 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00B0A40 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  union _LARGE_INTEGER *v17; // rsi
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r8
  struct _VIDMM_PROCESS_HEAP_BLOCK *v21; // rdi
  struct _VIDMM_POOL_BLOCK *v22; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // r12
  VIDMM_LINEAR_POOL *v27; // rcx
  __int64 v28; // rdx
  union _LARGE_INTEGER v29; // rbx
  int v30; // edx
  ULONG AllocationType; // ecx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  ULONG_PTR v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  char v37; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v38; // [rsp+68h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v40; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v41[8]; // [rsp+80h] [rbp-9h] BYREF
  char v42; // [rsp+D0h] [rbp+47h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp+4Fh] BYREF

  RegionSize = a2;
  v8 = a3;
  BaseAddress = 0LL;
  v40.QuadPart = 0LL;
  v38 = 0LL;
  v41[0] = 0LL;
  v42 = 0;
  v37 = 0;
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
  v17 = v14;
  if ( !v14 )
  {
    v18 = -1073741801;
    _InterlockedIncrement(&dword_1C00405C0);
    v19 = WdLogNewEntry5_WdLowResource(v16, v15);
    *(_QWORD *)(v19 + 24) = 675LL;
LABEL_5:
    WdLogEvent5_WdLowResource(v19);
LABEL_6:
    v21 = v38;
LABEL_7:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    v22 = v41[0];
    if ( v41[0] && v21 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v21 + 9), v41[0]);
    if ( v42 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v21);
    if ( v17 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64), v17);
    if ( v37 )
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), (__int64)v22, v20);
    return (unsigned int)v18;
  }
  memset(v14, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(a1 + 16));
  v37 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v24);
  v26 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v25);
    v18 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v8, a4, &v38, a8);
    if ( v18 < 0 )
      goto LABEL_6;
    v42 = 1;
    v21 = v38;
    v18 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v38 + 9),
            RegionSize,
            v8,
            1,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v40,
            (void **)v41);
    if ( v18 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v25);
      goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v21 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v26 - 1);
      v27 = (VIDMM_LINEAR_POOL *)v26[8];
      v26 = (_QWORD *)*v26;
      v38 = v21;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v27, RegionSize, v8, 1, 0LL, 0LL, 0, 0, 0LL, &v40, (void **)v41) >= 0 )
        break;
      if ( v26 == BlockListHead )
        goto LABEL_22;
    }
  }
  v29 = v40;
  if ( !*((_QWORD *)v21 + 7) && !*((_QWORD *)v21 + 11) )
  {
    v30 = 4096;
    if ( *((_DWORD *)v21 + 20) != 2 )
      v30 = 8392704;
    BaseAddress = (PVOID)(v40.QuadPart + *((_QWORD *)v21 + 4));
    AllocationType = v30 | 0x800000;
    if ( !a8 )
      AllocationType = v30;
    v18 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v21 + 12));
    if ( v18 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C004064C);
      v19 = WdLogNewEntry5_WdLowResource(v25, v28);
      *(_QWORD *)(v19 + 24) = 798LL;
      goto LABEL_5;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v25);
    v32[4] = v40.HighPart;
    v32[5] = v29.LowPart;
    v32[3] = v21;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) += RegionSize;
  v33 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v33[14] += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v33[16] += RegionSize;
  }
  else
  {
    v33[18] += RegionSize;
  }
  v17->LowPart &= ~1u;
  v34 = RegionSize;
  v17[4].QuadPart = 0LL;
  v17[7].QuadPart = v34;
  v17[3] = (union _LARGE_INTEGER)v41[0];
  LOBYTE(v17[9].LowPart) = 0;
  v17[1].QuadPart = (LONGLONG)v21;
  v17[2] = v29;
  ++*((_DWORD *)v21 + 6);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), v28, v20);
  *a5 = v17;
  if ( a4 - 3 > 1 )
    *v12 = v17[2].QuadPart + *(_QWORD *)(v17[1].QuadPart + 32);
  else
    *v12 = 0LL;
  if ( bTracingEnabled )
  {
    v36 = a4 - 3 > 3 ? *((_QWORD *)v21 + 4) : *((_QWORD *)v21 + 11);
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp(
        *(_QWORD *)(a1 + 8),
        &EventCreateProcessAllocationDetails,
        v35,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v17,
        RegionSize,
        v36);
  }
  *a7 = 1;
  return 0LL;
}
