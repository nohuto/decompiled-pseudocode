/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C004C4C0
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0062D50 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C004E884 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C004EC20 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        bool a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rdi
  bool v7; // zf
  __int64 v8; // rdi
  struct VIDMM_ALLOC **v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  unsigned int v15; // r8d
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  struct VIDMM_ALLOC **v19; // r14
  struct VIDMM_ALLOC **i; // r8
  struct VIDMM_ALLOC *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rcx
  struct VIDMM_GLOBAL **v26; // r12
  unsigned int v27; // edi
  unsigned __int64 *v28; // r15
  struct VIDMM_GLOBAL *j; // rdx
  unsigned __int64 v30; // rax
  struct VIDMM_ALLOC **v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  struct VIDMM_ALLOC *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r10
  VIDMM_DEVICE *v39; // r8
  VIDMM_DEVICE *v40; // rax
  VIDMM_DEVICE **v41; // rcx
  VIDMM_DEVICE **v42; // r8
  __int64 v43; // rcx
  _QWORD *v44; // r9
  unsigned int m; // r8d
  __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  __int64 v50; // rax
  int v51; // r9d
  unsigned int k; // r8d
  __int64 v53; // rax
  _QWORD *v54; // rcx
  char v55[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v56; // [rsp+38h] [rbp-40h]
  int v57; // [rsp+40h] [rbp-38h]
  unsigned __int64 v58; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 2);
  v7 = v5 == -328;
  v8 = v5 + 328;
  v56 = v8;
  v10 = a2;
  if ( !v7 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v50 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v50 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v50);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v51 = *(_DWORD *)(v8 + 16);
      if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v12, &EventBlockThread, v13, v51);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  v14 = 0;
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v15 = 0;
  v16 = (_QWORD *)*((_QWORD *)this + 2);
  v57 = 2;
  if ( *(_DWORD *)(*v16 + 6416LL) )
  {
    do
    {
      v17 = v15++;
      v18 = (_QWORD *)(v16[6] + 264 * v17);
      v18[13] = v18[9];
      v18[14] = v18[10];
      v18[15] = v18[11];
      v18[16] = v18[12];
    }
    while ( v15 < *(_DWORD *)(*v16 + 6416LL) );
  }
  v19 = &v10[a3];
  for ( i = v10; i != v19; ++i )
  {
    v21 = *i;
    v22 = **(_QWORD **)*i;
    if ( !(*((_BYTE *)*i + 25) & 1 | *((_DWORD *)*i + 38)) && !*((_BYTE *)v21 + 27) )
    {
      v23 = **(_QWORD **)v21;
      if ( (*((_BYTE *)v21 + 36) & 1) != 0 && (*(_DWORD *)(v23 + 76) & 0xF0000) == 0x20000 )
        v24 = 0LL;
      else
        v24 = *(_WORD *)(v23 + 78) & 0xF;
      v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 264LL * (*(_DWORD *)(v22 + 76) & 0x3F) + 8 * v24;
      *(_QWORD *)(v25 + 104) += *(_QWORD *)(v22 + 16);
      *((_BYTE *)v21 + 27) = 1;
    }
  }
  v26 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  v27 = 0;
  v28 = a5;
  *a5 = 0LL;
  for ( j = *v26; v27 < *((_DWORD *)*v26 + 1604); j = *v26 )
  {
    VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
      (struct VIDMM_GLOBAL *)((char *)v26[6] + 264 * v27),
      &v58,
      a4,
      0,
      j,
      v27);
    v30 = *v28;
    if ( *v28 <= v58 )
      v30 = v58;
    *v28 = v30;
    ++v27;
  }
  v31 = v10;
  v32 = 0LL;
  v33 = (unsigned __int64)((char *)v19 - (char *)v10 + 7) >> 3;
  if ( v10 > v19 )
    v33 = 0LL;
  if ( v33 )
  {
    do
    {
      v34 = (__int64)*v31++;
      ++v32;
      *(_BYTE *)(v34 + 27) = 0;
    }
    while ( v32 != v33 );
  }
  if ( *v28 )
  {
    v14 = -1073741801;
  }
  else
  {
    v35 = (_QWORD *)*((_QWORD *)this + 2);
    if ( bTracingEnabled )
    {
      for ( k = 0; k < *(_DWORD *)(*v35 + 6416LL); v54[22] = v54[19] )
      {
        v53 = k++;
        v54 = (_QWORD *)(v35[6] + 264 * v53);
        v54[20] = v54[17];
        v54[21] = v54[18];
      }
    }
    for ( ; v10 != v19; ++v10 )
    {
      v36 = *v10;
      v37 = **(_QWORD **)*v10;
      v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 264LL * (*(_DWORD *)(v37 + 76) & 0x3F);
      if ( !(*((_BYTE *)*v10 + 25) & 1 | *((_DWORD *)*v10 + 38)) )
      {
        v39 = (VIDMM_DEVICE *)*((_QWORD *)v36 + 14);
        v40 = (struct VIDMM_ALLOC *)((char *)v36 + 112);
        v41 = (VIDMM_DEVICE **)*((_QWORD *)v36 + 15);
        if ( *((struct VIDMM_ALLOC **)v39 + 1) != (struct VIDMM_ALLOC *)((char *)v36 + 112) || *v41 != v40 )
          __fastfail(3u);
        *v41 = v39;
        *((_QWORD *)v39 + 1) = v41;
        v42 = (VIDMM_DEVICE **)*((_QWORD *)this + 19);
        if ( *v42 != (VIDMM_DEVICE *)((char *)this + 144) )
          __fastfail(3u);
        *(_QWORD *)v40 = (char *)this + 144;
        *((_QWORD *)v36 + 15) = v42;
        *v42 = v40;
        *((_QWORD *)this + 19) = v40;
        v43 = (unsigned __int8)HIBYTE(*(_WORD *)(v37 + 76)) >> 4;
        *(_QWORD *)(v38 + 8 * v43 + 136) += *(_QWORD *)(v37 + 16);
      }
      ++*((_DWORD *)v36 + 38);
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
    v44 = (_QWORD *)*((_QWORD *)this + 2);
    for ( m = 0; m < *(_DWORD *)(*v44 + 6416LL); v47[12] = v48 )
    {
      v46 = m++;
      v47 = (_QWORD *)(v44[6] + 264 * v46);
      v48 = v47[16];
      v47[9] = v47[13];
      v47[10] = v47[14];
      v47[11] = v47[15];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
  return v14;
}
