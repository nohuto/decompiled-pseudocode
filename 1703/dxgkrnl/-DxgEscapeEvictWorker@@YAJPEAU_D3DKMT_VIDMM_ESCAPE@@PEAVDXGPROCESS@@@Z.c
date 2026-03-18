/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C01939D4
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01936E4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0034CAC (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C0187A5C (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  char *v9; // rbx
  _QWORD *v10; // r14
  __int64 Current; // rax
  __int64 v12; // r9
  DXGDEVICE *v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  D3DKMT_HANDLE v20; // ecx
  __int64 v21; // r9
  int v22; // r8d
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _EX_RUNDOWN_REF *v27; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  D3DKMT_HANDLE AllocationHandle; // r8d
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // edx
  __int64 v38; // r14
  int v39; // eax
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  ULONG_PTR v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  ULONG_PTR v61; // rcx
  ULONG v62; // ecx
  __int64 v63; // r9
  int v64; // r8d
  struct _EX_RUNDOWN_REF *v65; // rdx
  struct _EX_RUNDOWN_REF *v66; // rbx
  ULONG_PTR v67; // rdx
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v71; // rax
  __int64 v72; // r9
  int v73; // edx
  __int64 v74; // r15
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  int DriverVersion; // eax
  ULONG_PTR v80; // r14
  int v81; // eax
  unsigned __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r14
  __int64 v88; // rax
  ULONG_PTR v89; // rcx
  struct _EX_RUNDOWN_REF *v90; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v91[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v92[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v93[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v94[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v95[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v96[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v97[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v98[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v99[40]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v100[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v101[32]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v102[104]; // [rsp+148h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v103; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _EX_RUNDOWN_REF *v104; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EX_RUNDOWN_REF *v105; // [rsp+1D8h] [rbp+D8h] BYREF

  LODWORD(v6) = 0;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdError(a1, 0LL);
    LODWORD(v6) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v6;
  }
  if ( !a1->EvictByNtHandle.NtHandle )
  {
    v9 = (char *)a2 + 136;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v10 = (_QWORD *)*((_QWORD *)a2 + 28);
    v91[0] = (char *)a2 + 224;
    while ( 1 )
    {
      v91[1] = v10;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v91);
      v13 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v100, Current, 0LL, v12, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v100);
      v6 = v14;
      if ( v14 < 0
        || ((int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) < 2000
          ? (v18 = DXGDEVICE::EvictAllAllocations(v13))
          : (v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17 + 432) + 8LL)
                                                                             + 872LL))(
                     *(_QWORD *)(v17 + 440),
                     *((_QWORD *)v13 + 74),
                     0LL,
                     0LL)),
            v6 = v18,
            v18 < 0) )
      {
        v19 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v19 + 24) = v6;
        WdLogEvent5_WdError(v19);
        COREACCESS::~COREACCESS((COREACCESS *)v102);
        COREACCESS::~COREACCESS((COREACCESS *)v101);
        break;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v102);
      COREACCESS::~COREACCESS((COREACCESS *)v101);
      v10 = (_QWORD *)*v10;
    }
    *((_QWORD *)v9 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v6;
  }
  if ( a1->Evict.AllocationHandle )
  {
    v103 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v92, a2, a3, a4);
    v20 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
    if ( v20 < *((_DWORD *)a2 + 52)
      && (v21 = *((_QWORD *)a2 + 24),
          v22 = *(_DWORD *)(v21 + 16LL * v20 + 8),
          ((a1->Evict.AllocationHandle >> 26) & 0x30) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x30))
      && (v22 & 0x1000) == 0
      && (v22 & 0xF) != 0
      && (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0xF) == 5 )
    {
      v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * v20);
    }
    else
    {
      v23 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v105, v23);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v103, (struct DXGALLOCATION **)&v105);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v105, v24, v25, v26);
    v27 = v103;
    if ( v103 )
    {
      Count = v103[1].Count;
      if ( Count )
      {
        _m_prefetchw((const void *)(Count + 64));
        v29 = *(_QWORD *)(Count + 64);
        while ( v29 )
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v29 + 1, v29);
          if ( v30 == v29 )
          {
            AllocationHandle = a1->Evict.AllocationHandle;
            v35 = (AllocationHandle >> 6) & 0xFFFFFF;
            if ( (unsigned int)v35 < *((_DWORD *)a2 + 52) )
            {
              v36 = *((_QWORD *)a2 + 24);
              v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
              if ( ((AllocationHandle >> 26) & 0x30) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x30)
                && (v37 & 0x1000) == 0
                && (v37 & 0xF) != 0 )
              {
                *(_DWORD *)(v36 + 16 * (((unsigned __int64)AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v92);
            v38 = *(_QWORD *)(v27[1].Count + 16);
            if ( v38 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS(
                (COREADAPTERACCESS *)v97,
                *(struct DXGADAPTER *const *)(v38 + 16),
                0LL);
              v39 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v97);
              v6 = v39;
              if ( v39 < 0 )
              {
                v40 = a1->Evict.AllocationHandle;
                DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 168));
                v41 = ((unsigned int)v40 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v41 < *((_DWORD *)a2 + 52) )
                {
                  v42 = *((_QWORD *)a2 + 24);
                  v43 = ((unsigned int)v40 >> 26) & 0x30;
                  v44 = *(unsigned int *)(v42 + 16 * v41 + 8);
                  if ( (((unsigned int)v40 >> 26) & 0x30) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x30) && (v44 & 0xF) != 0 )
                  {
                    v45 = 2 * ((v40 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v42 + 8 * v45 + 8) & 0x1000) == 0 )
                    {
                      v46 = WdLogNewEntry5_WdAssertion(v43, v44, v42, 0xFFFFFFLL);
                      *(_QWORD *)(v46 + 24) = 190LL;
                      WdLogEvent5_WdAssertion(v46);
                    }
                    *(_DWORD *)(*((_QWORD *)a2 + 24) + 8 * v45 + 8) &= ~0x1000u;
                  }
                }
                *((_QWORD *)a2 + 22) = 0LL;
                ExReleasePushLockExclusiveEx((char *)a2 + 168, 0LL);
                KeLeaveCriticalRegion();
                v48 = v27[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v48 + 16), (struct DXGDEVICE *)v48);
                v49 = WdLogNewEntry5_WdError(v48, v47);
                *(_QWORD *)(v49 + 24) = v6;
                WdLogEvent5_WdError(v49);
                COREACCESS::~COREACCESS((COREACCESS *)v99);
                COREACCESS::~COREACCESS((COREACCESS *)v98);
                goto LABEL_29;
              }
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v27[1].Count + 16) + 16LL)) < 2000 )
                VIDMM_EXPORT::VidMmEvictAllocation(
                  *(VIDMM_EXPORT **)(v38 + 432),
                  *(struct VIDMM_GLOBAL **)(v38 + 440),
                  (struct _VIDMM_MULTI_ALLOC *)v103[3].Count,
                  0LL,
                  0LL);
              else
                LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(v38 + 432) + 8LL)
                                                                                           + 872LL))(
                                *(_QWORD *)(v38 + 440),
                                *(_QWORD *)(v50 + 592),
                                v103[3].Count,
                                0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v99);
              COREACCESS::~COREACCESS((COREACCESS *)v98);
            }
            v51 = a1->Evict.AllocationHandle;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 168));
            v52 = ((unsigned int)v51 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v52 < *((_DWORD *)a2 + 52) )
            {
              v53 = *((_QWORD *)a2 + 24);
              v54 = ((unsigned int)v51 >> 26) & 0x30;
              v55 = *(unsigned int *)(v53 + 16 * v52 + 8);
              if ( (((unsigned int)v51 >> 26) & 0x30) == (*(_BYTE *)(v53 + 16 * v52 + 8) & 0x30) && (v55 & 0xF) != 0 )
              {
                v56 = 2 * ((v51 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v53 + 8 * v56 + 8) & 0x1000) == 0 )
                {
                  v57 = WdLogNewEntry5_WdAssertion(v54, v55, v53, 0xFFFFFFLL);
                  *(_QWORD *)(v57 + 24) = 190LL;
                  WdLogEvent5_WdAssertion(v57);
                }
                *(_DWORD *)(*((_QWORD *)a2 + 24) + 8 * v56 + 8) &= ~0x1000u;
              }
            }
            *((_QWORD *)a2 + 22) = 0LL;
            ExReleasePushLockExclusiveEx((char *)a2 + 168, 0LL);
            KeLeaveCriticalRegion();
            v61 = v27[1].Count;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v61 + 16), (struct DXGDEVICE *)v61);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v103, v58, v59, v60);
            goto LABEL_59;
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v92);
    LODWORD(v6) = -1073741811;
LABEL_29:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v103, v31, v32, v33);
    return (unsigned int)v6;
  }
LABEL_59:
  if ( !a1->SetFault.Value )
    return (unsigned int)v6;
  v104 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v93, a2, a3, a4);
  v62 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
  if ( v62 < *((_DWORD *)a2 + 52)
    && (v63 = *((_QWORD *)a2 + 24),
        v64 = *(_DWORD *)(v63 + 16LL * v62 + 8),
        ((a1->SetFault.Value >> 26) & 0x30) == (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0x30))
    && (v64 & 0x1000) == 0
    && (v64 & 0xF) != 0
    && (*(_BYTE *)(v63 + 16LL * v62 + 8) & 0xF) == 4 )
  {
    v65 = *(struct _EX_RUNDOWN_REF **)(v63 + 16LL * v62);
  }
  else
  {
    v65 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90, v65);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v104, (struct DXGRESOURCE **)&v90);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v90);
  v66 = v104;
  if ( v104 )
  {
    v67 = v104[1].Count;
    if ( v67 )
    {
      _m_prefetchw((const void *)(v67 + 64));
      v68 = *(_QWORD *)(v67 + 64);
      while ( v68 )
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 64), v68 + 1, v68);
        if ( v69 == v68 )
        {
          Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
          v71 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
          if ( (unsigned int)v71 < *((_DWORD *)a2 + 52) )
          {
            v72 = *((_QWORD *)a2 + 24);
            v73 = *(_DWORD *)(v72 + 16 * v71 + 8);
            if ( ((*(unsigned int *)&Value >> 26) & 0x30) == (*(_BYTE *)(v72 + 16 * v71 + 8) & 0x30)
              && (v73 & 0x1000) == 0
              && (v73 & 0xF) != 0 )
            {
              *(_DWORD *)(v72 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v93);
          v74 = *(_QWORD *)(v66[1].Count + 16);
          if ( v74 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v94, *(struct DXGADAPTER *const *)(v74 + 16), 0LL);
            v75 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v94);
            v6 = v75;
            if ( v75 >= 0 )
            {
              DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v66[1].Count + 16) + 16LL));
              v80 = v104[3].Count;
              if ( DriverVersion < 2000 )
              {
                while ( v80 )
                {
                  VIDMM_EXPORT::VidMmEvictAllocation(
                    *(VIDMM_EXPORT **)(v74 + 432),
                    *(struct VIDMM_GLOBAL **)(v74 + 440),
                    *(struct _VIDMM_MULTI_ALLOC **)(v80 + 24),
                    0LL,
                    0LL);
                  v80 = *(_QWORD *)(v80 + 64);
                }
              }
              else
              {
                while ( v80 )
                {
                  v81 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v74 + 432)
                                                                                              + 8LL)
                                                                                  + 872LL))(
                          *(_QWORD *)(v74 + 440),
                          *(_QWORD *)(v66[1].Count + 592),
                          *(_QWORD *)(v80 + 24),
                          0LL);
                  v6 = v81;
                  if ( v81 < 0 )
                    goto LABEL_80;
                  v80 = *(_QWORD *)(v80 + 64);
                }
              }
            }
            else
            {
LABEL_80:
              v78 = WdLogNewEntry5_WdError(v77, v76);
              *(_QWORD *)(v78 + 24) = v6;
              WdLogEvent5_WdError(v78);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v96);
            COREACCESS::~COREACCESS((COREACCESS *)v95);
          }
          v82 = a1->SetFault.Value;
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 168));
          v83 = ((unsigned int)v82 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v83 < *((_DWORD *)a2 + 52) )
          {
            v84 = *((_QWORD *)a2 + 24);
            v85 = ((unsigned int)v82 >> 26) & 0x30;
            v86 = *(unsigned int *)(v84 + 16 * v83 + 8);
            if ( (((unsigned int)v82 >> 26) & 0x30) == (*(_BYTE *)(v84 + 16 * v83 + 8) & 0x30) && (v86 & 0xF) != 0 )
            {
              v87 = 2 * ((v82 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v84 + 8 * v87 + 8) & 0x1000) == 0 )
              {
                v88 = WdLogNewEntry5_WdAssertion(v85, v86, v84, 0xFFFFFFLL);
                *(_QWORD *)(v88 + 24) = 190LL;
                WdLogEvent5_WdAssertion(v88);
              }
              *(_DWORD *)(*((_QWORD *)a2 + 24) + 8 * v87 + 8) &= ~0x1000u;
            }
          }
          *((_QWORD *)a2 + 22) = 0LL;
          ExReleasePushLockExclusiveEx((char *)a2 + 168, 0LL);
          KeLeaveCriticalRegion();
          v89 = v66[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v89 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v89 + 16), (struct DXGDEVICE *)v89);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v104);
          return (unsigned int)v6;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v93);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v104);
  return -1073741811LL;
}
