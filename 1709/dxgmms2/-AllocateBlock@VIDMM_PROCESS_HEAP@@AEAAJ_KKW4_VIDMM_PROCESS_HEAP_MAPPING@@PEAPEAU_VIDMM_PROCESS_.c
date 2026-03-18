/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00AFA50
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00AFF94 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0pxqqt @ 0x1C0023360 (McTemplateK0pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002389C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C007C440 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C007C50C (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00B0A40 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        _QWORD *a5,
        char a6)
{
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  unsigned __int64 v10; // rax
  ULONG v12; // r12d
  ULONG AllocationType; // r14d
  VIDMM_LINEAR_POOL *v14; // r15
  ULONG_PTR v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  NTSTATUS inserted; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  VIDMM_LINEAR_POOL *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  _DWORD *v42; // rsi
  __int64 v43; // rax
  int v44; // eax
  int v45; // r14d
  _QWORD *v46; // rcx
  __int64 v47; // rax
  PVOID v48; // r9
  __int64 BlockListHead; // rax
  _QWORD *v50; // r8
  __int64 v51; // rdx
  ULONG Protect[2]; // [rsp+28h] [rbp-48h]
  __int64 v54; // [rsp+30h] [rbp-40h]
  __int64 v55; // [rsp+38h] [rbp-38h]
  HANDLE v56; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-20h] BYREF
  void *Handle; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR v60[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+38h] BYREF

  BaseAddress = 0LL;
  v8 = a2 + a3;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)dword_1C00402CC;
  v56 = 0LL;
  v12 = 0;
  Handle = 0LL;
  if ( v8 > (unsigned int)dword_1C00402CC )
    v10 = v8;
  AllocationType = 0;
  v14 = 0LL;
  v15 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v15;
  if ( v15 < a2 )
  {
    LODWORD(v16) = -1073741801;
    goto LABEL_21;
  }
  if ( a4 == 3 )
    goto LABEL_33;
  if ( a4 == 4 )
    goto LABEL_34;
  if ( a4 - 5 <= 1 )
  {
LABEL_33:
    v24 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_35:
      v60[0] = v15;
      LODWORD(v16) = MmCreateSection(&Object, 0LL, 0LL, v60, 4, v24, 0LL, 0LL);
      if ( (int)v16 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C0040674);
        v21 = WdLogNewEntry5_WdLowResource(v26, v25);
        *(_QWORD *)(v21 + 24) = 1973LL;
        goto LABEL_19;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v16 = inserted;
      if ( inserted < 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v29, v28);
        *(_QWORD *)(v30 + 24) = Object;
        *(_QWORD *)(v30 + 32) = v16;
        WdLogEvent5_WdAssertion(v30);
        goto LABEL_20;
      }
      if ( a4 - 5 <= 1 )
      {
        LODWORD(v16) = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        if ( (int)v16 < 0 )
          goto LABEL_20;
      }
      goto LABEL_41;
    }
LABEL_34:
    v24 = 134479872;
    goto LABEL_35;
  }
  v12 = 4;
  if ( a4 != 2 )
    v12 = 1028;
  v17 = 12288;
  if ( a4 != 2 )
    v17 = 8400896;
  AllocationType = v17 | 0x800000;
  if ( !a6 )
    AllocationType = v17;
  if ( dword_1C0040158 )
    AllocationType &= ~0x1000u;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v12) < 0 )
  {
    AllocationType &= ~0x800000u;
    v18 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v12);
    v16 = v18;
    if ( v18 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C00405C4);
      v21 = WdLogNewEntry5_WdLowResource(v20, v19);
      *(_QWORD *)(v21 + 24) = v16;
LABEL_19:
      WdLogEvent5_WdLowResource(v21);
LABEL_20:
      v9 = 0LL;
      goto LABEL_21;
    }
  }
  if ( (AllocationType & 0x1000) != 0 )
  {
    v56 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
    if ( !v56 )
    {
      v23 = WdLogNewEntry5_WdWarning(v22);
      WdLogEvent5_WdWarning(v23);
LABEL_31:
      LODWORD(v16) = -1073741801;
LABEL_32:
      v9 = v56;
      goto LABEL_21;
    }
  }
LABEL_41:
  v31 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
  if ( v31 )
    v14 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v31);
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C00405C8);
    v34 = WdLogNewEntry5_WdLowResource(v33, v32);
    *(_QWORD *)(v34 + 24) = 2089LL;
    WdLogEvent5_WdLowResource(v34);
    goto LABEL_31;
  }
  v35 = VIDMM_LINEAR_POOL::Init(v14, RegionSize, 0, 0LL, 0LL);
  v16 = v35;
  if ( v35 < 0 )
  {
    _InterlockedIncrement(&dword_1C00405CC);
    v38 = WdLogNewEntry5_WdLowResource(v37, v36);
    *(_QWORD *)(v38 + 24) = v16;
    WdLogEvent5_WdLowResource(v38);
    goto LABEL_32;
  }
  v39 = operator new[](0x68uLL, 0x31316956u, PagedPool);
  v42 = v39;
  if ( !v39 )
  {
    _InterlockedIncrement(&dword_1C00405D0);
    v43 = WdLogNewEntry5_WdLowResource(v40, 0LL);
    *(_QWORD *)(v43 + 24) = 2111LL;
    WdLogEvent5_WdLowResource(v43);
    v9 = v56;
    LODWORD(v16) = -1073741801;
LABEL_21:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_50;
      if ( a4 != 6 )
      {
        if ( v9 )
          MmUnsecureVirtualMemory(v9);
        if ( BaseAddress )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          BaseAddress = 0LL;
        }
LABEL_56:
        if ( v14 )
          VIDMM_LINEAR_POOL::`scalar deleting destructor'(v14);
        return (unsigned int)v16;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_52:
      if ( Object )
      {
        if ( Handle )
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
        ObfDereferenceObject(Object);
      }
      goto LABEL_56;
    }
LABEL_50:
    if ( BaseAddress )
      MmUnmapViewInSystemSpace(BaseAddress);
    goto LABEL_52;
  }
  *(_QWORD *)v39 = a1;
  v39[6] = 0;
  *((_QWORD *)v39 + 4) = BaseAddress;
  *((_QWORD *)v39 + 5) = RegionSize;
  v44 = 2;
  v45 = (AllocationType >> 23) & 1;
  v42[12] = v12;
  *((_QWORD *)v42 + 9) = v14;
  v42[20] = a4;
  if ( a4 != 2 )
    v44 = 0;
  *((_QWORD *)v42 + 7) = v56;
  v42[16] = v44 | v45;
  *((_QWORD *)v42 + 11) = Object;
  *((_QWORD *)v42 + 12) = Handle;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v40) + 24) = v42;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) += *((_QWORD *)v42 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 104LL);
  v46 = *(_QWORD **)(a1 + 8);
  v47 = *((_QWORD *)v42 + 5);
  if ( a4 == 1 )
  {
    v46[15] += v47;
  }
  else if ( a4 == 2 )
  {
    v46[17] += v47;
  }
  else
  {
    v46[19] += v47;
  }
  if ( bTracingEnabled )
  {
    v48 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v48 = Object;
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v55) = 1;
      LODWORD(v54) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt((__int64)v46, &EventCreateProcessAllocation, v41, v48, RegionSize, *(_QWORD *)Protect, v54, v55);
    }
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v42 + 2);
  v51 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v50[1] = BlockListHead;
  *v50 = v51;
  *(_QWORD *)(v51 + 8) = v50;
  *(_QWORD *)BlockListHead = v50;
  *a5 = v42;
  return (unsigned int)v16;
}
