/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C005AF50
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0064D94 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A1A4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00A4DC4 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v7; // r12
  unsigned __int64 *p_PagingFenceValue; // r13
  VIDMM_GLOBAL *v10; // r9
  unsigned int v11; // edi
  unsigned __int64 v12; // r14
  _QWORD *v13; // r8
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v15; // rdx
  D3DGPU_SIZE_T v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // r10d
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  struct VIDMM_VAD **v23; // r15
  __int64 v24; // r8
  volatile signed __int32 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  volatile signed __int32 *v30; // rdi
  bool v31; // zf
  int v32; // ebx
  bool v33; // r9
  VIDMM_GLOBAL *v34; // r14
  unsigned int v35; // ebx
  struct VIDMM_PAGING_QUEUE *v36; // r9
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  __int64 Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  _OWORD v49[14]; // [rsp+70h] [rbp-90h] BYREF
  struct VIDMM_VAD_PENDING_OPERATION *v52; // [rsp+170h] [rbp+70h] BYREF

  v5 = *((_DWORD *)a2 + 36);
  v7 = 0LL;
  LODWORD(v52) = v5;
  p_PagingFenceValue = 0LL;
  v10 = this;
  v11 = 4096;
  if ( a5 )
    p_PagingFenceValue = &a4->PagingFenceValue;
  v12 = a4->SizeInPages << 12;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v12 = *(_QWORD *)(**(_QWORD **)a3 + 16LL);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v13 = *(_QWORD **)a3;
    OffsetInPages = a4->OffsetInPages;
    v16 = *(_QWORD *)(*v13 + 16LL) >> 12;
    if ( OffsetInPages >= v16 )
    {
      v39 = WdLogNewEntry5_WdWarning(v16);
      *(_QWORD *)(v39 + 24) = a4->OffsetInPages;
      *(_QWORD *)(v39 + 32) = 19163LL;
      WdLogEvent5_WdWarning(v39);
      return 3221225485LL;
    }
    v17 = v16 - OffsetInPages;
    if ( v17 < v12 >> 12 && (*((_BYTE *)v10 + 40873) & 2) == 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v17);
      *(_QWORD *)(v40 + 24) = a4->SizeInPages;
      *(_QWORD *)(v40 + 32) = 19174LL;
      WdLogEvent5_WdWarning(v40);
      return 3221225485LL;
    }
    v15 = *v13;
    v18 = *(_DWORD *)(*v13 + 32LL);
    v19 = 1;
    v20 = v13[1];
    if ( v18 > 0x1000 )
      v11 = *(_DWORD *)(v15 + 32);
  }
  else
  {
    v38 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v38 )
      v20 = *(_QWORD *)(v38 + 8);
    else
      v20 = 0LL;
    v10 = this;
    v5 = (unsigned int)v52;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v19 = 6;
    else
      v19 = 0;
  }
  if ( !v12 )
  {
    v41 = WdLogNewEntry5_WdWarning(v17);
    *(_QWORD *)(v41 + 24) = a4->SizeInPages;
    *(_QWORD *)(v41 + 32) = 19196LL;
    WdLogEvent5_WdWarning(v41);
    return 3221225485LL;
  }
  v21 = *(unsigned int *)(*((_QWORD *)v10 + 3) + 200LL);
  v22 = *(_QWORD **)(*(_QWORD *)(v20 + 16) + 8 * v21);
  if ( !v22
    || !*(_DWORD *)(*v22 + 40864LL)
    || ((*(_DWORD *)(v20 + 48) & 2) != 0
      ? (v23 = *(struct VIDMM_VAD ***)(*v22 + 0x800009D98LL))
      : (v23 = (struct VIDMM_VAD **)v22[62]),
        !v23) )
  {
    v43 = WdLogNewEntry5_WdWarning(v21);
    WdLogEvent5_WdWarning(v43);
    return 3221225495LL;
  }
  DriverProtection = a4->DriverProtection;
  Value = a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = a4->BaseAddress;
  v24 = a4->OffsetInPages << 12;
  v52 = 0LL;
  v25 = (volatile signed __int32 *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                     v23,
                                     (__int64)a3,
                                     v24,
                                     v19,
                                     v12,
                                     BaseAddress,
                                     MinimumAddress,
                                     MaximumAddress,
                                     v11,
                                     Value,
                                     DriverProtection,
                                     v5,
                                     (void **)&v52);
  v30 = v25;
  if ( !v25 )
  {
    v42 = WdLogNewEntry5_WdError(v27, v26, v28, v29);
    *(_QWORD *)(v42 + 24) = 19227LL;
    WdLogEvent5_WdError(v42);
    return 3221225473LL;
  }
  v31 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *((_QWORD *)v25 + 12);
  a4->PagingFenceValue = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement(v25 + 32);
    memset(&v49[5], 0, 0x58uLL);
    v32 = *((_DWORD *)v30 + 16) << 28;
    v49[8] = (unsigned __int64)v30;
    *((_QWORD *)&v49[7] + 1) = v23;
    *(_QWORD *)&v49[9] = v52;
    memset(v49, 0, 0x50uLL);
    LODWORD(v49[0]) = 113;
    *((_QWORD *)&v49[0] + 1) = *((_QWORD *)a2 + 17);
    if ( v32 >> 28 == 1 )
      *(_QWORD *)&v49[1] = *((_QWORD *)v30 + 7);
    v49[2] = *(_OWORD *)((char *)&v49[7] + 8);
    *(_QWORD *)&v49[4] = *((_QWORD *)&v49[9] + 1);
    LOBYTE(v49[4]) = 1;
    v49[3] = *(_OWORD *)((char *)&v49[8] + 8);
    v33 = !p_PagingFenceValue || !dword_1C0040348;
    v34 = this;
    v35 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v49, v33, p_PagingFenceValue);
    if ( v35 == 259 )
    {
      v36 = a2;
      if ( a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
      {
        *((_QWORD *)a3 + 31) = a2;
        *((_QWORD *)a3 + 34) = *p_PagingFenceValue;
      }
      goto LABEL_29;
    }
  }
  else
  {
    v34 = this;
    v35 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)v23,
            (struct VIDMM_MAPPED_VA_RANGE *)v25,
            0,
            v52);
  }
  v36 = a2;
LABEL_29:
  if ( *((_QWORD *)v34 + 5115) )
  {
    if ( p_PagingFenceValue )
      v7 = *p_PagingFenceValue;
    VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(v34, v23[11], (struct VIDMM_MAPPED_VA_RANGE *)v30, v36, v7);
  }
  return v35;
}
