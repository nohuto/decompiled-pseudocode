/*
 * XREFs of ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C01A84F4
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A8204 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0025F70 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C019D3A4 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgEscapeEvictWorker(struct _D3DKMT_VIDMM_ESCAPE *a1, struct DXGPROCESS *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  char *v6; // rbx
  _QWORD *v7; // r14
  __int64 Current; // rax
  __int64 v9; // r9
  DXGDEVICE *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r8d
  struct _EX_RUNDOWN_REF *v19; // rdx
  struct _EX_RUNDOWN_REF *v20; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  D3DKMT_HANDLE AllocationHandle; // r8d
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // edx
  __int64 v29; // r14
  int v30; // eax
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  ULONG_PTR v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rax
  ULONG_PTR v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // r8d
  struct _EX_RUNDOWN_REF *v50; // rdx
  struct _EX_RUNDOWN_REF *v51; // rbx
  ULONG_PTR v52; // rdx
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // edx
  __int64 v59; // r15
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  int DriverVersion; // eax
  ULONG_PTR v64; // r14
  int v65; // eax
  unsigned __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rax
  ULONG_PTR v72; // rcx
  struct _EX_RUNDOWN_REF *v73; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v74[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v75[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v76[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v77[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v78[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v79[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v80[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v81[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v82[40]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v83[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v84[32]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v85[104]; // [rsp+148h] [rbp+48h] BYREF
  struct _EX_RUNDOWN_REF *v86; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _EX_RUNDOWN_REF *v87; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EX_RUNDOWN_REF *v88; // [rsp+1D8h] [rbp+D8h] BYREF

  LODWORD(v4) = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v4;
  }
  if ( a1->Evict.AllocationHandle )
  {
    v87 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v76, a2);
    v16 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *((_DWORD *)a2 + 60)
      && (v17 = *((_QWORD *)a2 + 28),
          v18 = *(_DWORD *)(v17 + 16 * v16 + 8),
          ((a1->Evict.AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60))
      && (v18 & 0x2000) == 0
      && (v18 & 0x1F) != 0
      && (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0x1F) == 5 )
    {
      v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
    }
    else
    {
      v19 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88, v19);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v87, (struct DXGALLOCATION **)&v88);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88);
    v20 = v87;
    if ( v87 )
    {
      Count = v87[1].Count;
      if ( Count )
      {
        _m_prefetchw((const void *)(Count + 64));
        v22 = *(_QWORD *)(Count + 64);
        while ( v22 )
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v22 + 1, v22);
          if ( v23 == v22 )
          {
            AllocationHandle = a1->Evict.AllocationHandle;
            v26 = (AllocationHandle >> 6) & 0xFFFFFF;
            if ( (unsigned int)v26 < *((_DWORD *)a2 + 60) )
            {
              v27 = *((_QWORD *)a2 + 28);
              v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
              if ( ((AllocationHandle >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
                && (v28 & 0x2000) == 0
                && (v28 & 0x1F) != 0 )
              {
                *(_DWORD *)(v27 + 16 * (((unsigned __int64)AllocationHandle >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
            v29 = *(_QWORD *)(v20[1].Count + 16);
            if ( v29 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS(
                (COREADAPTERACCESS *)v80,
                *(struct DXGADAPTER *const *)(v29 + 16),
                0LL);
              v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80);
              v4 = v30;
              if ( v30 < 0 )
              {
                v31 = a1->Evict.AllocationHandle;
                DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 200));
                v32 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v32 < *((_DWORD *)a2 + 60) )
                {
                  v33 = *((_QWORD *)a2 + 28);
                  v34 = ((unsigned int)v31 >> 25) & 0x60;
                  if ( (((unsigned int)v31 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60)
                    && (*(_DWORD *)(v33 + 16 * v32 + 8) & 0x1F) != 0 )
                  {
                    v35 = 2 * ((v31 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v33 + 8 * v35 + 8) & 0x2000) == 0 )
                    {
                      v36 = WdLogNewEntry5_WdAssertion(v34);
                      *(_QWORD *)(v36 + 24) = 191LL;
                      WdLogEvent5_WdAssertion(v36);
                    }
                    *(_DWORD *)(*((_QWORD *)a2 + 28) + 8 * v35 + 8) &= ~0x2000u;
                  }
                }
                *((_QWORD *)a2 + 26) = 0LL;
                ExReleasePushLockExclusiveEx((char *)a2 + 200, 0LL);
                KeLeaveCriticalRegion();
                v37 = v20[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v37 + 16), (struct DXGDEVICE *)v37);
                v38 = WdLogNewEntry5_WdError(v37);
                *(_QWORD *)(v38 + 24) = v4;
                WdLogEvent5_WdError(v38);
                COREACCESS::~COREACCESS((COREACCESS *)v82);
                COREACCESS::~COREACCESS((COREACCESS *)v81);
                goto LABEL_28;
              }
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v20[1].Count + 16) + 16LL)) < 2000 )
                VIDMM_EXPORT::VidMmEvictAllocation(
                  *(VIDMM_EXPORT **)(v29 + 528),
                  *(struct VIDMM_GLOBAL **)(v29 + 536),
                  (struct _VIDMM_MULTI_ALLOC *)v87[3].Count,
                  0LL,
                  0LL);
              else
                LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(v29 + 528) + 8LL)
                                                                                           + 872LL))(
                                *(_QWORD *)(v29 + 536),
                                *(_QWORD *)(v39 + 592),
                                v87[3].Count,
                                0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              COREACCESS::~COREACCESS((COREACCESS *)v81);
            }
            v40 = a1->Evict.AllocationHandle;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 200));
            v41 = ((unsigned int)v40 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v41 < *((_DWORD *)a2 + 60) )
            {
              v42 = *((_QWORD *)a2 + 28);
              v43 = ((unsigned int)v40 >> 25) & 0x60;
              if ( (((unsigned int)v40 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60)
                && (*(_DWORD *)(v42 + 16 * v41 + 8) & 0x1F) != 0 )
              {
                v44 = 2 * ((v40 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v42 + 8 * v44 + 8) & 0x2000) == 0 )
                {
                  v45 = WdLogNewEntry5_WdAssertion(v43);
                  *(_QWORD *)(v45 + 24) = 191LL;
                  WdLogEvent5_WdAssertion(v45);
                }
                *(_DWORD *)(*((_QWORD *)a2 + 28) + 8 * v44 + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)a2 + 26) = 0LL;
            ExReleasePushLockExclusiveEx((char *)a2 + 200, 0LL);
            KeLeaveCriticalRegion();
            v46 = v20[1].Count;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v46 + 16), (struct DXGDEVICE *)v46);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v87);
            goto LABEL_59;
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
    LODWORD(v4) = -1073741811;
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v87);
    return (unsigned int)v4;
  }
  if ( !a1->SetFault.Value )
  {
    v6 = (char *)a2 + 160;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v7 = (_QWORD *)*((_QWORD *)a2 + 32);
    v74[0] = (char *)a2 + 256;
    while ( 1 )
    {
      v74[1] = v7;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v74);
      v10 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, Current, 0, v9, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83);
      v4 = v11;
      if ( v11 < 0
        || ((int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL)) < 2000
          ? (v14 = DXGDEVICE::EvictAllAllocations(v10))
          : (v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 528) + 8LL)
                                                                             + 872LL))(
                     *(_QWORD *)(v13 + 536),
                     *((_QWORD *)v10 + 74),
                     0LL,
                     0LL)),
            v4 = v14,
            v14 < 0) )
      {
        v15 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v15 + 24) = v4;
        WdLogEvent5_WdError(v15);
        COREACCESS::~COREACCESS((COREACCESS *)v85);
        COREACCESS::~COREACCESS((COREACCESS *)v84);
        break;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v85);
      COREACCESS::~COREACCESS((COREACCESS *)v84);
      v7 = (_QWORD *)*v7;
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v4;
  }
LABEL_59:
  if ( !a1->SetFault.Value )
    return (unsigned int)v4;
  v86 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v75, a2);
  v47 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
  if ( (unsigned int)v47 < *((_DWORD *)a2 + 60)
    && (v48 = *((_QWORD *)a2 + 28),
        v49 = *(_DWORD *)(v48 + 16 * v47 + 8),
        ((a1->SetFault.Value >> 25) & 0x60) == (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60))
    && (v49 & 0x2000) == 0
    && (v49 & 0x1F) != 0
    && (*(_BYTE *)(v48 + 16LL * (unsigned int)v47 + 8) & 0x1F) == 4 )
  {
    v50 = *(struct _EX_RUNDOWN_REF **)(v48 + 16LL * (unsigned int)v47);
  }
  else
  {
    v50 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73, v50);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v86, (struct DXGRESOURCE **)&v73);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v73);
  v51 = v86;
  if ( v86 )
  {
    v52 = v86[1].Count;
    if ( v52 )
    {
      _m_prefetchw((const void *)(v52 + 64));
      v53 = *(_QWORD *)(v52 + 64);
      while ( v53 )
      {
        v54 = v53;
        v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 64), v53 + 1, v53);
        if ( v54 == v53 )
        {
          Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
          v56 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
          if ( (unsigned int)v56 < *((_DWORD *)a2 + 60) )
          {
            v57 = *((_QWORD *)a2 + 28);
            v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
            if ( ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60)
              && (v58 & 0x2000) == 0
              && (v58 & 0x1F) != 0 )
            {
              *(_DWORD *)(v57 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v75);
          v59 = *(_QWORD *)(v51[1].Count + 16);
          if ( v59 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, *(struct DXGADAPTER *const *)(v59 + 16), 0LL);
            v60 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77);
            v4 = v60;
            if ( v60 >= 0 )
            {
              DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v51[1].Count + 16) + 16LL));
              v64 = v86[3].Count;
              if ( DriverVersion < 2000 )
              {
                while ( v64 )
                {
                  VIDMM_EXPORT::VidMmEvictAllocation(
                    *(VIDMM_EXPORT **)(v59 + 528),
                    *(struct VIDMM_GLOBAL **)(v59 + 536),
                    *(struct _VIDMM_MULTI_ALLOC **)(v64 + 24),
                    0LL,
                    0LL);
                  v64 = *(_QWORD *)(v64 + 64);
                }
              }
              else
              {
                while ( v64 )
                {
                  v65 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v59 + 528)
                                                                                              + 8LL)
                                                                                  + 872LL))(
                          *(_QWORD *)(v59 + 536),
                          *(_QWORD *)(v51[1].Count + 592),
                          *(_QWORD *)(v64 + 24),
                          0LL);
                  v4 = v65;
                  if ( v65 < 0 )
                    goto LABEL_80;
                  v64 = *(_QWORD *)(v64 + 64);
                }
              }
            }
            else
            {
LABEL_80:
              v62 = WdLogNewEntry5_WdError(v61);
              *(_QWORD *)(v62 + 24) = v4;
              WdLogEvent5_WdError(v62);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v79);
            COREACCESS::~COREACCESS((COREACCESS *)v78);
          }
          v66 = a1->SetFault.Value;
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 200));
          v67 = ((unsigned int)v66 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v67 < *((_DWORD *)a2 + 60) )
          {
            v68 = *((_QWORD *)a2 + 28);
            v69 = ((unsigned int)v66 >> 25) & 0x60;
            if ( (((unsigned int)v66 >> 25) & 0x60) == (*(_BYTE *)(v68 + 16 * v67 + 8) & 0x60)
              && (*(_DWORD *)(v68 + 16 * v67 + 8) & 0x1F) != 0 )
            {
              v70 = 2 * ((v66 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v68 + 8 * v70 + 8) & 0x2000) == 0 )
              {
                v71 = WdLogNewEntry5_WdAssertion(v69);
                *(_QWORD *)(v71 + 24) = 191LL;
                WdLogEvent5_WdAssertion(v71);
              }
              *(_DWORD *)(*((_QWORD *)a2 + 28) + 8 * v70 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)a2 + 26) = 0LL;
          ExReleasePushLockExclusiveEx((char *)a2 + 200, 0LL);
          KeLeaveCriticalRegion();
          v72 = v51[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v72 + 16), (struct DXGDEVICE *)v72);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v86);
          return (unsigned int)v4;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v75);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v86);
  return -1073741811LL;
}
