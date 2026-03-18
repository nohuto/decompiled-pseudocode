/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0051EA0
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00660F4 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0050C48 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0050D6C (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0052364 (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        char a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rdi
  bool v7; // zf
  __int64 v8; // rdi
  struct VIDMM_ALLOC **v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edi
  _QWORD *v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // r14
  struct VIDMM_ALLOC **v19; // r10
  struct VIDMM_ALLOC **v20; // r12
  __int64 **v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  struct VIDMM_GLOBAL **v27; // r13
  unsigned int v28; // ebp
  unsigned __int64 *v29; // r15
  struct VIDMM_GLOBAL *v30; // rdx
  char v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r14
  struct VIDMM_ALLOC **v34; // rcx
  __int64 k; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rcx
  struct VIDMM_ALLOC *v39; // r9
  struct VIDMM_ALLOC **v40; // rcx
  VIDMM_DEVICE *v41; // rax
  VIDMM_DEVICE **v42; // rdx
  VIDMM_DEVICE **v43; // rdx
  __int64 v44; // r10
  __int64 v45; // r11
  __int64 v46; // rcx
  _QWORD *v47; // r9
  unsigned int m; // r8d
  __int64 v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  int v53; // r9d
  __int64 v54; // rax
  char v55[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v56; // [rsp+38h] [rbp-50h]
  int i; // [rsp+40h] [rbp-48h]
  unsigned __int64 v58; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 j; // [rsp+98h] [rbp+10h]
  char v60; // [rsp+A8h] [rbp+20h]

  v60 = a4;
  v5 = *((_QWORD *)this + 2);
  v7 = v5 == -360;
  v8 = v5 + 360;
  v9 = a2;
  v56 = v8;
  if ( !v7 && *(struct _KTHREAD **)(v8 + 8) == KeGetCurrentThread() )
  {
    v54 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v54 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v54);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v53 = *(_DWORD *)(v8 + 16);
      if ( v53 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v11, (__int64)&EventBlockThread, v12, v53);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v13 = 0;
  v14 = (_QWORD *)*((_QWORD *)this + 2);
  v15 = 0;
  for ( i = 2; v15 < *(_DWORD *)(*v14 + 6416LL); v17[16] = v17[12] )
  {
    v16 = v15++;
    v17 = (_QWORD *)(v14[6] + 296 * v16);
    v17[13] = v17[9];
    v17[14] = v17[10];
    v17[15] = v17[11];
  }
  v18 = 8 * a3;
  v19 = v9;
  v20 = (struct VIDMM_ALLOC **)((char *)v9 + v18);
  for ( j = v18; v19 != v20; v19 = (struct VIDMM_ALLOC **)(v22 + 8) )
  {
    if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v19)
      && !(*((_BYTE *)v21 + 25) & 1 | *((_DWORD *)v21 + 38))
      && !*((_BYTE *)v21 + 27) )
    {
      v24 = **v21;
      if ( (*((_BYTE *)v21 + 36) & 1) != 0 && (*(_DWORD *)(v24 + 76) & 0xF0000) == 0x20000 )
        v25 = 0LL;
      else
        v25 = *(_WORD *)(v24 + 78) & 0xF;
      v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v23 + 76) & 0x3F) + 8 * v25;
      *(_QWORD *)(v26 + 104) += *(_QWORD *)(v23 + 16);
      *((_BYTE *)v21 + 27) = 1;
    }
  }
  v27 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  v28 = 0;
  v29 = a5;
  *a5 = 0LL;
  v30 = *v27;
  if ( *((_DWORD *)*v27 + 1604) )
  {
    v31 = v60;
    do
    {
      VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        (struct VIDMM_GLOBAL *)((char *)v27[6] + 296 * v28),
        &v58,
        v31,
        0,
        v30,
        v28);
      v32 = *v29;
      if ( *v29 <= v58 )
        v32 = v58;
      *v29 = v32;
      ++v28;
      v30 = *v27;
    }
    while ( v28 < *((_DWORD *)*v27 + 1604) );
    v18 = j;
  }
  v33 = v18 >> 3;
  v34 = v9;
  k = 0LL;
  if ( v9 > v20 )
    v33 = 0LL;
  if ( v33 )
  {
    do
    {
      v36 = (__int64)*v34++;
      ++k;
      *(_BYTE *)(v36 + 27) = 0;
    }
    while ( k != v33 );
  }
  if ( *v29 )
  {
    v13 = -1073741801;
  }
  else
  {
    if ( bTracingEnabled )
    {
      v14 = (_QWORD *)*((_QWORD *)this + 2);
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(*v14 + 6416LL); v38[22] = v38[19] )
      {
        v37 = (unsigned int)k;
        k = (unsigned int)(k + 1);
        v38 = (_QWORD *)(v14[6] + 296 * v37);
        v38[20] = v38[17];
        v38[21] = v38[18];
      }
    }
    for ( ; v9 != v20; ++v9 )
    {
      v39 = *v9;
      if ( !(*((_BYTE *)*v9 + 25) & 1 | *((_DWORD *)*v9 + 38)) )
      {
        v40 = (struct VIDMM_ALLOC **)*((_QWORD *)v39 + 14);
        v41 = (struct VIDMM_ALLOC *)((char *)v39 + 112);
        if ( v40[1] != (struct VIDMM_ALLOC *)((char *)v39 + 112)
          || (v42 = (VIDMM_DEVICE **)*((_QWORD *)v39 + 15), *v42 != v41) )
        {
          __fastfail(3u);
        }
        *v42 = (VIDMM_DEVICE *)v40;
        v40[1] = (struct VIDMM_ALLOC *)v42;
        v43 = (VIDMM_DEVICE **)*((_QWORD *)this + 19);
        if ( *v43 != (VIDMM_DEVICE *)((char *)this + 144) )
          __fastfail(3u);
        *(_QWORD *)v41 = (char *)this + 144;
        *((_QWORD *)v39 + 15) = v43;
        *v43 = v41;
        *((_QWORD *)this + 19) = v41;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v39) )
        {
          v46 = (unsigned __int8)HIBYTE(*(_WORD *)(v44 + 76)) >> 4;
          *(_QWORD *)(v45 + 8 * v46 + 136) += *(_QWORD *)(v44 + 16);
        }
      }
      ++*((_DWORD *)v39 + 38);
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), k, (__int64)v14);
    v47 = (_QWORD *)*((_QWORD *)this + 2);
    for ( m = 0; m < *(_DWORD *)(*v47 + 6416LL); v50[12] = v51 )
    {
      v49 = m++;
      v50 = (_QWORD *)(v47[6] + 296 * v49);
      v51 = v50[16];
      v50[9] = v50[13];
      v50[10] = v50[14];
      v50[11] = v50[15];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
  return v13;
}
