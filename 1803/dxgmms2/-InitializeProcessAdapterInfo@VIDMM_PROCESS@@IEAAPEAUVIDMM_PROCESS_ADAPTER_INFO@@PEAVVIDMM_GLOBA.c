/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00740E4
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073DE0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0003220 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0004C4C (RtlStringCbPrintfW.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00055A0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005A59C (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005B0C0 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C006B9C4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C006BCB0 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C006D018 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r12
  VIDMM_PROCESS_ADAPTER_INFO *v10; // rbx
  SIZE_T v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbp
  _QWORD *v23; // rcx
  unsigned int v24; // ebp
  PVOID PoolWithTag; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  wchar_t *v28; // r14
  unsigned int v29; // esi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v30; // ebp
  __int64 v31; // r15
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  NTSTATUS v36; // ebp
  int v37; // eax
  unsigned int v38; // eax
  _QWORD *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rdx
  __int64 v43; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  CVirtualAddressAllocator *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+30h] [rbp-58h]
  struct _PCW_DATA v55; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  NTSTATUS v57; // [rsp+98h] [rbp+10h]

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x208uLL, 0x33316956u, a3, PagedPool);
  v9 = 0LL;
  if ( v6 )
    v10 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_1C00475D8, 1u);
    v45 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v45 + 24) = 607LL;
    WdLogEvent5_WdLowResource(v45);
    return 0LL;
  }
  *((_DWORD *)v10 + 3) = v3;
  v11 = 184 * v3;
  v12 = v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v11 = -1LL;
  v13 = (char *)operator new(v11, 0x34316956u, v8, PagedPool);
  v15 = v13;
  if ( v13 )
    `vector constructor iterator'(
      v13,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v15 = 0LL;
  *((_QWORD *)v10 + 2) = v15;
  if ( !v15 )
  {
    _InterlockedAdd(&dword_1C00475DC, 1u);
    v46 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v46 + 24) = 620LL;
    WdLogEvent5_WdLowResource(v46);
LABEL_43:
    operator delete(*((void **)v10 + 2));
    v49 = (CVirtualAddressAllocator *)*((_QWORD *)v10 + 62);
    if ( v49 )
      CVirtualAddressAllocator::DestroyVaAllocator(v49, v47, v48);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v10);
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 41448) & 2) != 0 && ((_DWORD)this[11] & 2) == 0 )
  {
    v16 = operator new[](0x90uLL, 0x4B677844u, PagedPool);
    if ( v16 )
    {
      v16[2] = 0LL;
      v18 = (char *)(v16 + 15);
      v16[8] = 0LL;
      v16[7] = 0LL;
      *((_DWORD *)v16 + 18) = 64;
      v16[11] = 0LL;
      v16[12] = 0LL;
      v16[13] = 0LL;
      v16[14] = 0LL;
      v16[16] = v16 + 15;
      v16[15] = v16 + 15;
      *((_DWORD *)v16 + 34) = 0;
    }
    else
    {
      v16 = 0LL;
    }
    *((_QWORD *)v10 + 62) = v16;
    if ( !v16 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v50 + 24) = 629LL;
LABEL_50:
      WdLogEvent5_WdAssertion(v50);
      goto LABEL_43;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                (CVirtualAddressAllocator *)v16,
                1LL << *((_DWORD *)a2 + 10360),
                *((_DWORD *)a2 + 10373),
                a2,
                (struct VIDMM_PROCESS *)this) < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v50 + 24) = 641LL;
      goto LABEL_50;
    }
  }
  if ( (_DWORD)v3 )
  {
    v21 = 0LL;
    v22 = 0LL;
    do
    {
      *(_QWORD *)(v21 + *((_QWORD *)v10 + 2)) = this;
      *(_DWORD *)(v21 + *((_QWORD *)v10 + 2) + 8) = 0;
      *(_QWORD *)(v21 + *((_QWORD *)v10 + 2) + 16) = 0LL;
      *(_DWORD *)(v21 + *((_QWORD *)v10 + 2) + 168) = *(_DWORD *)(v21 + *((_QWORD *)v10 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v21 + *((_QWORD *)v10 + 2) + 24) = 0LL;
      *(_QWORD *)(v21 + *((_QWORD *)v10 + 2) + 32) = 0LL;
      v23 = (_QWORD *)(v21 + *((_QWORD *)v10 + 2) + 40LL);
      v23[1] = v23;
      *v23 = v23;
      memset((void *)(v22 + *((_QWORD *)v10 + 2) + 56LL), 0, 0x70uLL);
      v22 += 184LL;
      v21 += 184LL;
      --v12;
    }
    while ( v12 );
  }
  v24 = *((_DWORD *)a2 + 1748);
  if ( v24 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 0x128 )
      goto LABEL_43;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 296LL * v24, 0x4B677844u);
  }
  else
  {
    PoolWithTag = (char *)v10 + 56;
  }
  *((_QWORD *)v10 + 6) = PoolWithTag;
  *((_DWORD *)v10 + 88) = v24;
  if ( !PoolWithTag )
    goto LABEL_43;
  memset(PoolWithTag, 0, 296LL * v24);
  if ( !*((_QWORD *)v10 + 6) )
    goto LABEL_43;
  v28 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v28 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v27, v26);
    goto LABEL_50;
  }
  v29 = 0;
  if ( *((_DWORD *)a2 + 1748) )
  {
    while ( 1 )
    {
      v30 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v31 = *((_QWORD *)v10 + 6) + 296LL * v29;
      *(_QWORD *)(v31 + 16) = v10;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v29, v30++, this[30]);
        v9 += 8LL;
        *(_QWORD *)(v9 + v31 + 16) = *((_QWORD *)SegmentGroupState + 3);
      }
      while ( v30 < 2 );
      v33 = *((_QWORD *)a2 + 3);
      LODWORD(v54) = v29;
      LODWORD(v53) = *(_DWORD *)(v33 + 268);
      LODWORD(Data) = *(_DWORD *)(v33 + 272);
      v9 = 0LL;
      v36 = RtlStringCbPrintfW(v28, 0x208uLL, L"pid_%u_luid_0x%08X_0x%08X_phys_%u", this[1], Data, v53, v54);
      if ( v36 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v28);
      v55.Data = (const void *)v31;
      v55.Size = 296;
      v36 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v31 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v55);
      if ( v36 < 0 )
        break;
      if ( ++v29 >= *((_DWORD *)a2 + 1748) )
        goto LABEL_29;
    }
    v51 = WdLogNewEntry5_WdAssertion(v35, v34);
    WdLogEvent5_WdAssertion(v51);
  }
  else
  {
    v36 = v57;
  }
LABEL_29:
  operator delete(v28);
  if ( v36 < 0 )
    goto LABEL_43;
  v37 = *((_DWORD *)v10 + 116);
  if ( dword_1C0047228 )
    v38 = v37 & 0xFFFFFFFC | 2;
  else
    v38 = v37 | 3;
  *((_DWORD *)v10 + 116) = v38 | 4;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 322) : 0 )
      *((_DWORD *)v10 + 119) = 1;
  }
  *(_QWORD *)v10 = a2;
  *((_DWORD *)v10 + 2) = 1;
  *((_QWORD *)v10 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 41544));
  v40 = (_QWORD *)((char *)a2 + 41584);
  v41 = *((_QWORD *)a2 + 5198);
  v42 = (_QWORD *)((char *)v10 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v41 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41584) )
    __fastfail(3u);
  *((_QWORD *)v10 + 4) = v40;
  *v42 = v41;
  *(_QWORD *)(v41 + 8) = v42;
  *v40 = v42;
  v43 = *((_QWORD *)a2 + 5253);
  *((_QWORD *)a2 + 5253) = v43 + 1;
  *((_QWORD *)v10 + 64) = v43;
  *((_QWORD *)a2 + 5194) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 41544, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v10;
}
