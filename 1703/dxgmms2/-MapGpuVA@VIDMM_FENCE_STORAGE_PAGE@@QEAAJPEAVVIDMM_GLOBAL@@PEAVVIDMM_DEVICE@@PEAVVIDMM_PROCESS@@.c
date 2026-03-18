/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C004F33C
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0063660 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DD7C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DE58 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00526A4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057614 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00637E4 (-RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0063868 (-AddMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0075568 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        void *a6,
        unsigned __int64 *a7,
        unsigned int a8)
{
  __int64 v11; // rcx
  int v12; // esi
  char *v13; // rbp
  char *v14; // rdi
  char *v15; // r12
  char *i; // rcx
  __int64 v17; // r10
  VIDMM_FENCE_STORAGE_PAGE *v18; // r11
  struct CVirtualAddressAllocator *v19; // rcx
  bool v20; // r13
  int v21; // r14d
  unsigned int v22; // r12d
  unsigned int v23; // r14d
  char *PoolWithTag; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // esi
  char **v31; // rcx
  char *v32; // rax
  struct _MDL **v33; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // bl
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  CVirtualAddressAllocator *v42; // rax
  char *v43; // rax
  __int64 v44; // rdx
  char **v45; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+C8h] [rbp+10h]

  *a7 = 0LL;
  if ( (*((_BYTE *)a2 + 40872) & 1) == 0 )
    return 0LL;
  v11 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v11 > 1 )
  {
    v12 = a8;
    if ( a8 )
    {
      if ( (~((1 << v11) - 1) & a8) != 0 )
      {
        v37 = WdLogNewEntry5_WdWarning(v11, a2);
        WdLogEvent5_WdWarning(v37);
        return 3221225485LL;
      }
    }
    else
    {
      v12 = (1 << v11) - 1;
    }
  }
  else
  {
    v12 = 1;
  }
  v13 = (char *)this + 48;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  v14 = 0LL;
  *((_QWORD *)v13 + 1) = KeGetCurrentThread();
  v15 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v15; i = *(char **)i )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)i - 4) && a2 == *((struct VIDMM_GLOBAL **)i - 3) )
    {
      ++*((_DWORD *)i + 4);
      v14 = i - 64;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a4,
                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 200LL),
                              0xFFFFFFFF);
  v19 = VirtualAddressAllocator;
  v20 = VirtualAddressAllocator && !*(_BYTE *)(v17 + 2235);
  v21 = 0;
  if ( v14 )
  {
    v21 = *((_DWORD *)v14 + 21);
    *((_DWORD *)v14 + 21) = v12 | v21;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x58uLL, 0x68536956u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v30 = -1073741801;
      v38 = 0;
      goto LABEL_41;
    }
    memset(PoolWithTag, 0, 0x58uLL);
    v18 = this;
    *((_DWORD *)v14 + 20) = 1;
    *((_QWORD *)v14 + 4) = a4;
    *((_QWORD *)v14 + 5) = a2;
    *((_QWORD *)v14 + 1) = *((_QWORD *)this + 11);
    *((_QWORD *)v14 + 3) = this;
    *((_DWORD *)v14 + 21) = v12;
    if ( v20 )
    {
      v27 = *((_QWORD *)a2 + 3);
      a6 = 0LL;
      v30 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v26,
              *(_QWORD *)(v27 + 2160),
              *(_QWORD *)(v27 + 2168),
              0x1000u,
              (unsigned __int64 *)&a6);
      if ( v30 < 0 )
      {
LABEL_37:
        v39 = WdLogNewEntry5_WdWarning(v29, v28);
        WdLogEvent5_WdWarning(v39);
        goto LABEL_40;
      }
      *(_QWORD *)v14 = a6;
      v14[16] = 1;
      VIDMM_PROCESS::OpenAdapter((struct DXGPROCESS **)a4, a2);
      VIDMM_GLOBAL::AddMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v14 + 3);
      v18 = this;
    }
    else
    {
      *(_QWORD *)v14 = *(_QWORD *)(*((_QWORD *)this + 11) + 48LL) << 12;
      v14[16] = 0;
    }
    v31 = (char **)*((_QWORD *)this + 5);
    v32 = v14 + 64;
    if ( *v31 != v15 )
      __fastfail(3u);
    *((_QWORD *)v14 + 9) = v31;
    *(_QWORD *)v32 = v15;
    *v31 = v32;
    v19 = VirtualAddressAllocator;
    *((_QWORD *)this + 5) = v32;
  }
  if ( !v20 || (v22 = 0, (v23 = *((_DWORD *)v14 + 21) & ~v21) == 0) )
  {
LABEL_16:
    *a7 = *(_QWORD *)v14 + *((unsigned int *)a5 + 4);
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v23 & 1) == 0 )
      goto LABEL_27;
    v33 = (struct _MDL **)((char *)v18 + 88);
    v34 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v19,
                                            (char *)v18 + 88,
                                            0LL,
                                            2LL,
                                            4096LL,
                                            *(_QWORD *)v14,
                                            0LL,
                                            0LL,
                                            4096,
                                            17LL,
                                            0LL,
                                            v22,
                                            0LL);
    if ( !v34 )
      break;
    v30 = VIDMM_GLOBAL::CommitVirtualAddressRange(
            a2,
            VirtualAddressAllocator,
            (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 160LL * v22),
            v34,
            0,
            *v33,
            0LL,
            0LL);
    if ( v30 < 0 )
      goto LABEL_37;
LABEL_27:
    ++v22;
    v23 >>= 1;
    if ( !v23 )
      goto LABEL_16;
    v18 = this;
    v19 = VirtualAddressAllocator;
  }
  v40 = WdLogNewEntry5_WdWarning(v36, v35);
  WdLogEvent5_WdWarning(v40);
  v30 = -1073741823;
LABEL_40:
  v41 = *((_DWORD *)v14 + 20);
  v38 = v41 == 1;
  *((_DWORD *)v14 + 20) = v41 - 1;
LABEL_41:
  *((_QWORD *)v13 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( v38 )
  {
    if ( v14[16] )
    {
      VIDMM_GLOBAL::RemoveMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v14 + 3);
      v42 = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 200LL), 0xFFFFFFFF);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v42, *(_QWORD *)v14);
      VIDMM_PROCESS::CloseAdapter(a4, a2);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *((_QWORD *)v13 + 1) = KeGetCurrentThread();
    v43 = v14 + 64;
    if ( *((_QWORD *)v14 + 8) )
    {
      v44 = *(_QWORD *)v43;
      v45 = (char **)*((_QWORD *)v14 + 9);
      if ( *(char **)(*(_QWORD *)v43 + 8LL) != v43 || *v45 != v43 )
        __fastfail(3u);
      *v45 = (char *)v44;
      *(_QWORD *)(v44 + 8) = v45;
    }
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v30;
}
