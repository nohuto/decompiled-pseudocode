/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DD7C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0001BA8 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002358 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0002624 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?AddExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047008 (-AddExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C004EB0C (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0052438 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0052F84 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v9; // rbx
  __int64 v10; // rax
  SIZE_T v12; // rax
  unsigned __int64 v13; // r14
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rbp
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rsi
  PVOID PoolWithTag; // rax
  CVirtualAddressAllocator *v29; // rcx
  unsigned int i; // r8d
  __int64 v31; // r10
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rcx

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x1E0uLL, 0x33316956u, a3, PagedPool);
  if ( v6 )
    v9 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    _InterlockedAdd(&dword_1C003C5C8, 1u);
    v10 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v10 + 24) = 566LL;
    WdLogEvent5_WdLowResource(v10);
    return 0LL;
  }
  *((_DWORD *)v9 + 3) = v3;
  v12 = 184 * v3;
  v13 = v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v12 = -1LL;
  v14 = (char *)operator new(v12, 0x34316956u, v8, PagedPool);
  v16 = v14;
  if ( v14 )
    `vector constructor iterator'(
      v14,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v16 = 0LL;
  *((_QWORD *)v9 + 2) = v16;
  if ( !v16 )
  {
    _InterlockedAdd(&dword_1C003C5CC, 1u);
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = 579LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_34:
    operator delete(*((void **)v9 + 2));
    v29 = (CVirtualAddressAllocator *)*((_QWORD *)v9 + 58);
    if ( v29 )
      CVirtualAddressAllocator::DestroyVaAllocator(v29);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v9);
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 40872) & 1) != 0 && (*((_DWORD *)this + 12) & 2) == 0 )
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
    *((_QWORD *)v9 + 58) = v18;
    if ( !v18 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v21 + 24) = 588LL;
LABEL_21:
      WdLogEvent5_WdAssertion(v21);
      goto LABEL_34;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                (CVirtualAddressAllocator *)v18,
                1LL << *((_DWORD *)a2 + 10216),
                *((_DWORD *)a2 + 10229),
                a2,
                this) < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v21 + 24) = 600LL;
      goto LABEL_21;
    }
  }
  if ( (_DWORD)v3 )
  {
    v24 = 0LL;
    v25 = 0LL;
    do
    {
      *(_QWORD *)(v24 + *((_QWORD *)v9 + 2)) = this;
      *(_DWORD *)(v24 + *((_QWORD *)v9 + 2) + 8) = 0;
      *(_QWORD *)(v24 + *((_QWORD *)v9 + 2) + 16) = 0LL;
      *(_DWORD *)(v24 + *((_QWORD *)v9 + 2) + 168) = *(_DWORD *)(v24 + *((_QWORD *)v9 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v24 + *((_QWORD *)v9 + 2) + 24) = 0LL;
      *(_QWORD *)(v24 + *((_QWORD *)v9 + 2) + 32) = 0LL;
      v26 = (_QWORD *)(v24 + *((_QWORD *)v9 + 2) + 40LL);
      v26[1] = v26;
      *v26 = v26;
      memset((void *)(v25 + *((_QWORD *)v9 + 2) + 56LL), 0, 0x70uLL);
      v25 += 184LL;
      v24 += 184LL;
      --v13;
    }
    while ( v13 );
  }
  v27 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v27 <= 1 )
  {
    PoolWithTag = (char *)v9 + 56;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v27 < 0x108 )
      goto LABEL_34;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 264LL * (unsigned int)v27, 0x4B677844u);
  }
  *((_QWORD *)v9 + 6) = PoolWithTag;
  *((_DWORD *)v9 + 80) = v27;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 264 * v27);
  if ( !*((_QWORD *)v9 + 6) )
    goto LABEL_34;
  for ( i = 0; i < *((_DWORD *)a2 + 1604); ++i )
  {
    v31 = 0LL;
    v32 = *((_QWORD *)v9 + 6) + 264LL * i;
    v33 = 2LL;
    *(_QWORD *)(v32 + 16) = v9;
    v34 = 280LL * i + 64;
    do
    {
      v31 += 8LL;
      v35 = *(_QWORD *)(v34 + *((_QWORD *)a2 + 5150));
      v34 += 8LL;
      *(_QWORD *)(v32 + v31 + 16) = v35;
      --v33;
    }
    while ( v33 );
  }
  if ( dword_1C003C1F0 )
    *((_DWORD *)v9 + 108) = *((_DWORD *)v9 + 108) & 0xFFFFFFF8 | 6;
  else
    *((_DWORD *)v9 + 108) |= 7u;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 274) : 0 )
      *((_DWORD *)v9 + 111) = 1;
  }
  *(_QWORD *)v9 = a2;
  *((_DWORD *)v9 + 2) = 1;
  *((_QWORD *)v9 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40968));
  v37 = (_QWORD *)((char *)a2 + 41008);
  v38 = *((_QWORD *)a2 + 5126);
  v39 = (_QWORD *)((char *)v9 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v38 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41008) )
    __fastfail(3u);
  *v39 = v38;
  *((_QWORD *)v9 + 4) = v37;
  *(_QWORD *)(v38 + 8) = v39;
  *v37 = v39;
  *((_QWORD *)a2 + 5122) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40968, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  if ( *(_BYTE *)(*((_QWORD *)this + 4) + 494LL) )
    VIDMM_GLOBAL::AddExpandedResourceAppReference(a2);
  return v9;
}
