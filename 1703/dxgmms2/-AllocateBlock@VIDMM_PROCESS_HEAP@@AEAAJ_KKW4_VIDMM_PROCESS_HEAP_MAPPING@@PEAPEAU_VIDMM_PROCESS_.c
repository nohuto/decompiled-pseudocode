/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00A73D4
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00A7920 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_pxqqt @ 0x1C00212D8 (Template_pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0021810 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C00761E8 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00762B4 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00A83E0 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
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
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rcx
  NTSTATUS inserted; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  VIDMM_LINEAR_POOL *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  _DWORD *v39; // rsi
  __int64 v40; // rax
  int v41; // eax
  int v42; // r14d
  _QWORD *v43; // rcx
  __int64 v44; // rax
  PVOID v45; // r9
  __int64 BlockListHead; // rax
  _QWORD *v47; // r8
  __int64 v48; // rdx
  ULONG Protect[2]; // [rsp+28h] [rbp-48h]
  __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-38h]
  HANDLE v53; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-20h] BYREF
  void *Handle; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR v57[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+38h] BYREF

  BaseAddress = 0LL;
  v8 = a2 + a3;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)dword_1C003C294;
  v53 = 0LL;
  v12 = 0;
  Handle = 0LL;
  if ( v8 > (unsigned int)dword_1C003C294 )
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
    v24 = 0;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_35:
      v57[0] = v15;
      LODWORD(v16) = MmCreateSection(&Object, 0LL, 0LL, v57, 4, v24 != 0 ? 0x8000000 : 1207959552, 0LL, 0LL);
      if ( (int)v16 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C003C664);
        v20 = WdLogNewEntry5_WdLowResource(v25);
        *(_QWORD *)(v20 + 24) = 1958LL;
        goto LABEL_19;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v16 = inserted;
      if ( inserted < 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v29 + 24) = Object;
        *(_QWORD *)(v29 + 32) = v16;
        WdLogEvent5_WdAssertion(v29);
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
    v24 = 1;
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
  if ( dword_1C003C118 )
    AllocationType &= ~0x1000u;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v12) < 0 )
  {
    AllocationType &= ~0x800000u;
    v18 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v12);
    v16 = v18;
    if ( v18 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C003C5B4);
      v20 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v20 + 24) = v16;
LABEL_19:
      WdLogEvent5_WdLowResource(v20);
LABEL_20:
      v9 = 0LL;
      goto LABEL_21;
    }
  }
  if ( (AllocationType & 0x1000) != 0 )
  {
    v53 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
    if ( !v53 )
    {
      v23 = WdLogNewEntry5_WdWarning(v22, v21);
      WdLogEvent5_WdWarning(v23);
LABEL_31:
      LODWORD(v16) = -1073741801;
LABEL_32:
      v9 = v53;
      goto LABEL_21;
    }
  }
LABEL_41:
  v30 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
  if ( v30 )
    v14 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v30);
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C003C5B8);
    v32 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v32 + 24) = 2074LL;
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_31;
  }
  v33 = VIDMM_LINEAR_POOL::Init(v14, RegionSize, 0, 0LL, 0LL);
  v16 = v33;
  if ( v33 < 0 )
  {
    _InterlockedIncrement(&dword_1C003C5BC);
    v35 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v35 + 24) = v16;
    WdLogEvent5_WdLowResource(v35);
    goto LABEL_32;
  }
  v36 = operator new[](0x68uLL, 0x31316956u, PagedPool);
  v39 = v36;
  if ( !v36 )
  {
    _InterlockedIncrement(&dword_1C003C5C0);
    v40 = WdLogNewEntry5_WdLowResource(v37);
    *(_QWORD *)(v40 + 24) = 2096LL;
    WdLogEvent5_WdLowResource(v40);
    v9 = v53;
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
  *(_QWORD *)v36 = a1;
  v36[6] = 0;
  *((_QWORD *)v36 + 4) = BaseAddress;
  *((_QWORD *)v36 + 5) = RegionSize;
  v41 = 2;
  v42 = (AllocationType >> 23) & 1;
  v39[12] = v12;
  *((_QWORD *)v39 + 9) = v14;
  v39[20] = a4;
  if ( a4 != 2 )
    v41 = 0;
  *((_QWORD *)v39 + 7) = v53;
  v39[16] = v41 | v42;
  *((_QWORD *)v39 + 11) = Object;
  *((_QWORD *)v39 + 12) = Handle;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v37) + 24) = v39;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) += *((_QWORD *)v39 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 104LL);
  v43 = *(_QWORD **)(a1 + 8);
  v44 = *((_QWORD *)v39 + 5);
  if ( a4 == 1 )
  {
    v43[15] += v44;
  }
  else if ( a4 == 2 )
  {
    v43[17] += v44;
  }
  else
  {
    v43[19] += v44;
  }
  if ( bTracingEnabled )
  {
    v45 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v45 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v52) = 1;
      LODWORD(v51) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      Template_pxqqt((__int64)v43, &EventCreateProcessAllocation, v38, v45, RegionSize, *(_QWORD *)Protect, v51, v52);
    }
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v39 + 2);
  v48 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v47[1] = BlockListHead;
  *v47 = v48;
  *(_QWORD *)(v48 + 8) = v47;
  *(_QWORD *)BlockListHead = v47;
  *a5 = v39;
  return (unsigned int)v16;
}
