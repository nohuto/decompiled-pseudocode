/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C005F870
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C00691C0 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005EA18 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00AC1AC (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // r12
  unsigned __int64 *p_PagingFenceValue; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // r14
  _QWORD *v13; // r8
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v15; // rdx
  D3DGPU_SIZE_T v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  struct VIDMM_VAD **v22; // r15
  __int64 v23; // r8
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rdi
  bool v30; // zf
  int v31; // ebx
  unsigned __int64 *v32; // r14
  bool v33; // r9
  unsigned int v34; // ebx
  struct VIDMM_PAGING_QUEUE *v35; // r9
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _RTL_BALANCED_NODE *BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  __int64 Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  _OWORD v49[14]; // [rsp+70h] [rbp-90h] BYREF
  struct VIDMM_VAD_PENDING_OPERATION *v51; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 *v52; // [rsp+178h] [rbp+78h]

  v5 = *((_DWORD *)a2 + 36);
  v6 = 0LL;
  LODWORD(v51) = v5;
  p_PagingFenceValue = 0LL;
  if ( a5 )
    p_PagingFenceValue = &a4->PagingFenceValue;
  v52 = p_PagingFenceValue;
  v11 = 4096;
  v12 = a4->SizeInPages << 12;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v12 = *(_QWORD *)(**(_QWORD **)a3 + 16LL);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v13 = *(_QWORD **)a3;
    OffsetInPages = a4->OffsetInPages;
    v15 = *v13;
    v16 = *(_QWORD *)(*v13 + 16LL) >> 12;
    if ( OffsetInPages >= v16 )
    {
      v39 = WdLogNewEntry5_WdWarning(v16, v15);
      *(_QWORD *)(v39 + 24) = a4->OffsetInPages;
      *(_QWORD *)(v39 + 32) = 19344LL;
      WdLogEvent5_WdWarning(v39);
      return 3221225485LL;
    }
    v17 = v16 - OffsetInPages;
    if ( v17 < v12 >> 12 && (*((_BYTE *)this + 41449) & 4) == 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v17, v15);
      *(_QWORD *)(v40 + 24) = a4->SizeInPages;
      *(_QWORD *)(v40 + 32) = 19355LL;
      WdLogEvent5_WdWarning(v40);
      return 3221225485LL;
    }
    v18 = 1;
    v19 = v13[1];
    if ( *(_DWORD *)(v15 + 32) > 0x1000u )
      v11 = *(_DWORD *)(v15 + 32);
  }
  else
  {
    v38 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v38 )
      v19 = *(_QWORD *)(v38 + 8);
    else
      v19 = 0LL;
    v5 = (unsigned int)v51;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v18 = 6;
    else
      v18 = 0;
  }
  if ( !v12 )
  {
    v41 = WdLogNewEntry5_WdWarning(v17, v15);
    *(_QWORD *)(v41 + 24) = a4->SizeInPages;
    *(_QWORD *)(v41 + 32) = 19377LL;
    WdLogEvent5_WdWarning(v41);
    return 3221225485LL;
  }
  v20 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
  v21 = *(_QWORD **)(*(_QWORD *)(v19 + 16) + 8 * v20);
  if ( !v21
    || !*(_DWORD *)(*v21 + 41440LL)
    || ((*(_DWORD *)(v19 + 88) & 2) != 0
      ? (v22 = *(struct VIDMM_VAD ***)(*v21 + 0x800009FD8LL))
      : (v22 = (struct VIDMM_VAD **)v21[62]),
        !v22) )
  {
    v43 = WdLogNewEntry5_WdWarning(v20, v21);
    WdLogEvent5_WdWarning(v43);
    return 3221225495LL;
  }
  DriverProtection = a4->DriverProtection;
  Value = a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = (struct _RTL_BALANCED_NODE *)a4->BaseAddress;
  v23 = a4->OffsetInPages << 12;
  v51 = 0LL;
  v24 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v22,
          (__int64)a3,
          v23,
          v18,
          v12,
          BaseAddress,
          MinimumAddress,
          MaximumAddress,
          v11,
          Value,
          DriverProtection,
          v5,
          (void **)&v51);
  v29 = v24;
  if ( !v24 )
  {
    v42 = WdLogNewEntry5_WdError(v26, v25, v27, v28);
    *(_QWORD *)(v42 + 24) = 19408LL;
    WdLogEvent5_WdError(v42);
    return 3221225473LL;
  }
  v30 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *((_QWORD *)v24 + 12);
  a4->PagingFenceValue = 0LL;
  if ( v30 )
  {
    _InterlockedIncrement(v24 + 32);
    memset(&v49[5], 0, 0x58uLL);
    v31 = v29[16] << 28;
    v49[8] = (unsigned __int64)v29;
    *((_QWORD *)&v49[7] + 1) = v22;
    *(_QWORD *)&v49[9] = v51;
    memset(v49, 0, 0x50uLL);
    LODWORD(v49[0]) = 113;
    *((_QWORD *)&v49[0] + 1) = *((_QWORD *)a2 + 17);
    if ( v31 >> 28 == 1 )
      *(_QWORD *)&v49[1] = *((_QWORD *)v29 + 7);
    v32 = v52;
    v49[2] = *(_OWORD *)((char *)&v49[7] + 8);
    *(_QWORD *)&v49[4] = *((_QWORD *)&v49[9] + 1);
    LOBYTE(v49[4]) = 1;
    v49[3] = *(_OWORD *)((char *)&v49[8] + 8);
    v33 = !v52 || !dword_1C0047348;
    v34 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v49, v33, v52);
    if ( v34 == 259 )
    {
      v35 = a2;
      if ( a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
      {
        *((_QWORD *)a3 + 31) = a2;
        *((_QWORD *)a3 + 34) = *v32;
      }
      goto LABEL_29;
    }
  }
  else
  {
    v37 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)v22,
            (struct VIDMM_MAPPED_VA_RANGE *)v24,
            0,
            v51);
    v32 = v52;
    v34 = v37;
  }
  v35 = a2;
LABEL_29:
  if ( *((_QWORD *)this + 5187) )
  {
    if ( v32 )
      v6 = *v32;
    VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(this, v22[11], (struct VIDMM_MAPPED_VA_RANGE *)v29, v35, v6);
  }
  return v34;
}
