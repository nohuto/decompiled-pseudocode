/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0052A50
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005274C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00017B0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000E614 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000EF90 (RtlStringCbPrintfW.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0050AE8 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0053F58 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0054AB8 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  VIDMM_PROCESS_ADAPTER_INFO *v11; // rbx
  SIZE_T v12; // rax
  unsigned __int64 v13; // r14
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rbp
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rsi
  PVOID PoolWithTag; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  wchar_t *v30; // r14
  unsigned int v31; // esi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v32; // ebp
  __int64 v33; // r15
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  NTSTATUS v38; // ebp
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  CVirtualAddressAllocator *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+28h] [rbp-60h]
  __int64 v51; // [rsp+30h] [rbp-58h]
  struct _PCW_DATA v52; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  NTSTATUS v54; // [rsp+98h] [rbp+10h]

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x200uLL, 0x33316956u, a3, PagedPool);
  v10 = 0LL;
  if ( v6 )
    v11 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    _InterlockedAdd(&dword_1C00405D8, 1u);
    v44 = WdLogNewEntry5_WdLowResource(v8, v7);
    *(_QWORD *)(v44 + 24) = 576LL;
    WdLogEvent5_WdLowResource(v44);
    return 0LL;
  }
  *((_DWORD *)v11 + 3) = v3;
  v12 = 184 * v3;
  v13 = v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v12 = -1LL;
  v14 = (char *)operator new(v12, 0x34316956u, v9, PagedPool);
  v17 = v14;
  if ( v14 )
    `vector constructor iterator'(
      v14,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v17 = 0LL;
  *((_QWORD *)v11 + 2) = v17;
  if ( !v17 )
  {
    _InterlockedAdd(&dword_1C00405DC, 1u);
    v45 = WdLogNewEntry5_WdLowResource(v16, v15);
    *(_QWORD *)(v45 + 24) = 589LL;
    WdLogEvent5_WdLowResource(v45);
LABEL_44:
    operator delete(*((void **)v11 + 2));
    v46 = (CVirtualAddressAllocator *)*((_QWORD *)v11 + 62);
    if ( v46 )
      CVirtualAddressAllocator::DestroyVaAllocator(v46);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v11);
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 40872) & 1) != 0 && ((_DWORD)this[6] & 2) == 0 )
  {
    v18 = operator new[](0x90uLL, 0x4B677844u, PagedPool);
    if ( v18 )
    {
      v18[2] = 0LL;
      v20 = (char *)(v18 + 15);
      v18[8] = 0LL;
      v18[7] = 0LL;
      *((_DWORD *)v18 + 18) = 64;
      v18[11] = 0LL;
      v18[12] = 0LL;
      v18[13] = 0LL;
      v18[14] = 0LL;
      v18[16] = v18 + 15;
      v18[15] = v18 + 15;
      *((_DWORD *)v18 + 34) = 0;
    }
    else
    {
      v18 = 0LL;
    }
    *((_QWORD *)v11 + 62) = v18;
    if ( !v18 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v47 + 24) = 598LL;
LABEL_51:
      WdLogEvent5_WdAssertion(v47);
      goto LABEL_44;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                (CVirtualAddressAllocator *)v18,
                1LL << *((_DWORD *)a2 + 10216),
                *((_DWORD *)a2 + 10229),
                a2,
                (struct VIDMM_PROCESS *)this) < 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v47 + 24) = 610LL;
      goto LABEL_51;
    }
  }
  if ( (_DWORD)v3 )
  {
    v23 = 0LL;
    v24 = 0LL;
    do
    {
      *(_QWORD *)(v23 + *((_QWORD *)v11 + 2)) = this;
      *(_DWORD *)(*((_QWORD *)v11 + 2) + v23 + 8) = 0;
      *(_QWORD *)(*((_QWORD *)v11 + 2) + v23 + 16) = 0LL;
      *(_DWORD *)(*((_QWORD *)v11 + 2) + v23 + 168) = *(_DWORD *)(*((_QWORD *)v11 + 2) + v23 + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(*((_QWORD *)v11 + 2) + v23 + 24) = 0LL;
      *(_QWORD *)(*((_QWORD *)v11 + 2) + v23 + 32) = 0LL;
      v25 = (_QWORD *)(v23 + *((_QWORD *)v11 + 2) + 40LL);
      v25[1] = v25;
      *v25 = v25;
      memset((void *)(v24 + *((_QWORD *)v11 + 2) + 56LL), 0, 0x70uLL);
      v24 += 184LL;
      v23 += 184LL;
      --v13;
    }
    while ( v13 );
  }
  v26 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v26 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v26 < 0x128 )
      goto LABEL_44;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 296 * v26, 0x4B677844u);
  }
  else
  {
    PoolWithTag = (char *)v11 + 56;
  }
  *((_QWORD *)v11 + 6) = PoolWithTag;
  *((_DWORD *)v11 + 88) = v26;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 296 * v26);
  if ( !*((_QWORD *)v11 + 6) )
    goto LABEL_44;
  v30 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v30 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v29, v28);
    goto LABEL_51;
  }
  v31 = 0;
  if ( *((_DWORD *)a2 + 1604) )
  {
    while ( 1 )
    {
      v32 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v33 = *((_QWORD *)v11 + 6) + 296LL * v31;
      *(_QWORD *)(v33 + 16) = v11;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v31, v32++, this[21]);
        v10 += 8LL;
        *(_QWORD *)(v33 + v10 + 16) = *((_QWORD *)SegmentGroupState + 3);
      }
      while ( v32 < 2 );
      v35 = *((_QWORD *)a2 + 3);
      LODWORD(v51) = v31;
      LODWORD(v50) = *(_DWORD *)(v35 + 268);
      LODWORD(Data) = *(_DWORD *)(v35 + 272);
      v10 = 0LL;
      v38 = RtlStringCbPrintfW(v30, 0x208uLL, L"pid_%u_luid_0x%08X_0x%08X_phys_%u", this[1], Data, v50, v51);
      if ( v38 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v30);
      v52.Data = (const void *)v33;
      v52.Size = 296;
      v38 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v33 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v52);
      if ( v38 < 0 )
        break;
      if ( ++v31 >= *((_DWORD *)a2 + 1604) )
        goto LABEL_30;
    }
    v48 = WdLogNewEntry5_WdAssertion(v37, v36);
    WdLogEvent5_WdAssertion(v48);
  }
  else
  {
    v38 = v54;
  }
LABEL_30:
  operator delete(v30);
  if ( v38 < 0 )
    goto LABEL_44;
  if ( dword_1C0040228 )
    *((_DWORD *)v11 + 116) = *((_DWORD *)v11 + 116) & 0xFFFFFFF8 | 6;
  else
    *((_DWORD *)v11 + 116) |= 7u;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 306) : 0 )
      *((_DWORD *)v11 + 119) = 1;
  }
  *(_QWORD *)v11 = a2;
  *((_DWORD *)v11 + 2) = 1;
  *((_QWORD *)v11 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40968));
  v40 = (_QWORD *)((char *)a2 + 41008);
  v41 = *((_QWORD *)a2 + 5126);
  v42 = (_QWORD *)((char *)v11 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v41 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41008) )
    __fastfail(3u);
  *v42 = v41;
  *((_QWORD *)v11 + 4) = v40;
  *(_QWORD *)(v41 + 8) = v42;
  *v40 = v42;
  *((_QWORD *)a2 + 5122) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40968, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v11;
}
