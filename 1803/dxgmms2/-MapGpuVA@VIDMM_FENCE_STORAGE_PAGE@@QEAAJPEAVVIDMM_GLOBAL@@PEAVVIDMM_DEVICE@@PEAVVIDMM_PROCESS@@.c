/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0077E54
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006B3BC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005A7D4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005ECE4 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073DE0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073EE0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00781B4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0078204 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A2E6C (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        bool a8)
{
  VIDMM_PROCESS *v8; // r12
  __int64 v11; // rcx
  int v12; // esi
  char *v13; // rdi
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v14; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *i; // r15
  char *v16; // r13
  char *j; // rax
  struct _RTL_BALANCED_NODE *v18; // r8
  __int64 v19; // r10
  struct VIDMM_VAD **v20; // r11
  int v21; // r12d
  __int64 v22; // rbx
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  char *PoolWithTag; // rax
  struct DXGPROCESS **v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  char **v33; // rcx
  char *v34; // rax
  char *v35; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v39; // rsi
  int v40; // eax
  __int64 v41; // rax
  int v42; // esi
  char v43; // bl
  __int64 v44; // rax
  bool v45; // r8
  __int64 v46; // rax
  int v47; // eax
  VIDMM_FENCE_STORAGE_PAGE *v48; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v49; // rax
  VIDMM_FENCE_STORAGE_PAGE **v50; // rdx
  CVirtualAddressAllocator *v51; // rax
  struct _KTHREAD **VirtualAddressAllocator; // [rsp+78h] [rbp-81h]
  unsigned __int64 v53; // [rsp+80h] [rbp-79h] BYREF
  __int64 v54; // [rsp+88h] [rbp-71h]
  struct VIDMM_ALLOC *v55; // [rsp+90h] [rbp-69h] BYREF
  _QWORD v56[20]; // [rsp+98h] [rbp-61h] BYREF
  char v58; // [rsp+150h] [rbp+57h]

  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 41448) & 2) == 0 )
    return 0LL;
  v11 = *((unsigned int *)a2 + 1748);
  if ( (unsigned int)v11 > 1 )
  {
    v12 = a7;
    if ( a7 )
    {
      if ( (~((1 << v11) - 1) & a7) != 0 )
      {
        v41 = WdLogNewEntry5_WdWarning(v11, 1LL);
        WdLogEvent5_WdWarning(v41);
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
  v54 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v13 = 0LL;
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  v14 = (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56);
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)*((_QWORD *)this + 7);
        i != v14;
        i = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)i )
  {
    if ( a2 == *((struct VIDMM_GLOBAL **)i + 6) )
      goto LABEL_7;
  }
  i = VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v42 = -1073741801;
    v43 = 0;
    goto LABEL_63;
  }
LABEL_7:
  v16 = (char *)i + 32;
  for ( j = (char *)*((_QWORD *)i + 4); j != v16; j = *(char **)j )
  {
    if ( v8 == *((VIDMM_PROCESS **)j - 1) )
    {
      ++*((_DWORD *)j + 4);
      v13 = j - 32;
      break;
    }
  }
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  v8,
                                                  *(_DWORD *)(*((_QWORD *)a2 + 3) + 200LL),
                                                  0);
  v20 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v58 = 1, *(_BYTE *)(v19 + 2403) != (_BYTE)v18) )
    v58 = (char)v18;
  v21 = (int)v18;
  v22 = v54 | 0x11;
  if ( v13 )
  {
    v21 = *((_DWORD *)v13 + 13);
    *((_DWORD *)v13 + 13) = v12 | v21;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x68536956u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v42 = -1073741801;
      v43 = 0;
      goto LABEL_62;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    v27 = (struct DXGPROCESS **)a4;
    v18 = 0LL;
    *((_QWORD *)v13 + 3) = a4;
    *((_DWORD *)v13 + 12) = 1;
    *((_QWORD *)v13 + 1) = i;
    *((_DWORD *)v13 + 13) = v12;
    ++*((_DWORD *)i + 16);
    if ( v58 )
    {
      v28 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        v13[17] = 1;
      }
      else
      {
        v29 = *(_QWORD *)(v28 + 2328);
        v30 = *(_QWORD *)(v28 + 2320);
        v53 = 0LL;
        v42 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                VirtualAddressAllocator,
                0x1000uLL,
                0LL,
                v30,
                v29,
                0x1000u,
                &v53);
        if ( v42 < 0 )
        {
LABEL_49:
          v44 = WdLogNewEntry5_WdWarning(v32, v31);
          WdLogEvent5_WdWarning(v44);
          goto LABEL_55;
        }
        *(_QWORD *)v13 = v53;
        v27 = (struct DXGPROCESS **)a4;
      }
      v13[16] = 1;
      VIDMM_PROCESS::OpenAdapter(v27, a2);
      v18 = 0LL;
    }
    else
    {
      *(_QWORD *)v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 48LL) << 12;
      v13[16] = 0;
    }
    v33 = (char **)*((_QWORD *)i + 5);
    v34 = v13 + 32;
    if ( *v33 != v16 )
      __fastfail(3u);
    v20 = VirtualAddressAllocator;
    *(_QWORD *)v34 = v16;
    *((_QWORD *)v13 + 5) = v33;
    *v33 = v34;
    *((_QWORD *)i + 5) = v34;
  }
  if ( v58 == (_BYTE)v18 || (v23 = (unsigned int)v18, (v24 = *((_DWORD *)v13 + 13) & ~v21) == 0) )
  {
LABEL_17:
    *a6 = *(_QWORD *)v13 + *((unsigned int *)a5 + 4);
    *((_QWORD *)this + 10) = v18;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    if ( (v24 & 1) == 0 )
      goto LABEL_37;
    v35 = (char *)this + 112;
    if ( v13[17] == (_BYTE)v18 )
    {
      v36 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                              v20,
                                              (__int64)v35,
                                              0LL,
                                              2,
                                              0x1000uLL,
                                              *(struct _RTL_BALANCED_NODE **)v13,
                                              (unsigned __int64)v18,
                                              (unsigned __int64)v18,
                                              0x1000u,
                                              v22,
                                              (__int64)v18,
                                              v23,
                                              (void **)v18->Children);
    }
    else
    {
      v36 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                              v20,
                                              (__int64)v35,
                                              0LL,
                                              2,
                                              0x1000uLL,
                                              v18,
                                              *((_QWORD *)a2 + 5182),
                                              *((_QWORD *)a2 + 5183),
                                              0x1000u,
                                              v22,
                                              (__int64)v18,
                                              v23,
                                              (void **)v18->Children);
      v38 = *((_QWORD *)v36 + 12);
      *(_QWORD *)v13 = v38;
    }
    v39 = v36;
    if ( !v36 )
      break;
    if ( v13[17] )
    {
      v40 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              (CVirtualAddressAllocator *)VirtualAddressAllocator,
              v36,
              v23,
              0,
              0LL,
              *((struct _MDL **)this + 14),
              0,
              &v55);
    }
    else if ( a3 == *((struct VIDMM_DEVICE **)a2 + 5113) )
    {
      memset(v56, 0, 0x58uLL);
      v56[5] = VirtualAddressAllocator;
      LODWORD(v56[0]) = 113;
      v56[6] = v39;
      HIDWORD(v56[0]) = v23;
      v56[7] = *((_QWORD *)this + 14);
      v40 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v56, v45);
    }
    else
    {
      v40 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 160LL * v23),
              v36,
              0,
              *((struct _MDL **)this + 14),
              0LL,
              0LL);
    }
    v18 = 0LL;
    v42 = v40;
    if ( v40 < 0 )
      goto LABEL_49;
LABEL_37:
    ++v23;
    v24 >>= 1;
    if ( !v24 )
      goto LABEL_17;
    v20 = VirtualAddressAllocator;
  }
  v46 = WdLogNewEntry5_WdWarning(v38, v37);
  WdLogEvent5_WdWarning(v46);
  v42 = -1073741823;
LABEL_55:
  v47 = *((_DWORD *)v13 + 12);
  v43 = 0;
  if ( v47 == 1 )
  {
    v48 = (VIDMM_FENCE_STORAGE_PAGE *)(v13 + 32);
    v43 = 1;
    v49 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v13 + 4);
    if ( v49 )
    {
      if ( v49[1] != v48 || (v50 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v13 + 5), *v50 != v48) )
        __fastfail(3u);
      *v50 = (VIDMM_FENCE_STORAGE_PAGE *)v49;
      v49[1] = (VIDMM_FENCE_STORAGE_PAGE *)v50;
    }
    VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v48, i);
    v47 = *((_DWORD *)v13 + 12);
  }
  *((_DWORD *)v13 + 12) = v47 - 1;
LABEL_62:
  v8 = a4;
LABEL_63:
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v43 )
  {
    if ( v13[16] )
    {
      v51 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 200LL), 0xFFFFFFFF);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v51, *(_QWORD *)v13);
      VIDMM_PROCESS::CloseAdapter(v8, a2);
    }
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)v42;
}
