/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0005180 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C008B3E8 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C009F570 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00C18A0 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C74C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00CCF10 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01888D0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v8; // r12d
  __int64 v9; // rbp
  int v10; // r13d
  BOOL v12; // r15d
  struct DXGALLOCATION *v13; // rsi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ebp
  ADAPTER_RENDER *v26; // rbp
  __int64 v27; // rbx
  PSLIST_ENTRY v28; // rsi
  char v29; // r12
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 CurrentProcess; // rax
  __int64 v33; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  _QWORD *v40; // rax
  __int64 v41; // rcx
  struct _SLIST_ENTRY *v42; // rcx
  __int64 v43; // rcx
  struct _SLIST_ENTRY *Next; // r13
  __int64 v45; // rbx
  unsigned int v46; // ebp
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // r12
  PERESOURCE *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct _KTHREAD **v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r13
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  unsigned int v68; // r12d
  struct DXGPROCESS *v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct DXGPROCESS *v72; // rbx
  char v73; // bl
  __int64 v74; // rdx
  __int64 (__fastcall *v75)(__int64, __int64, __int64, __int64); // rax
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  int v83; // r9d
  __int64 v84; // rax
  __int64 *ThreadProperty; // rax
  __int64 v86; // rax
  unsigned int v87; // ebp
  struct DXGALLOCATION *v88; // r9
  __int64 *v89; // rax
  int v90; // r9d
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  int v94; // r9d
  int v95; // r9d
  __int64 v96; // [rsp+30h] [rbp-58h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
  __int64 v99; // [rsp+90h] [rbp+8h]
  __int64 v100; // [rsp+90h] [rbp+8h]
  int v102; // [rsp+A0h] [rbp+18h]
  char v103; // [rsp+A0h] [rbp+18h]
  struct DXGALLOCATION *v105; // [rsp+A8h] [rbp+20h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v106; // [rsp+B8h] [rbp+30h]

  v102 = a3;
  v99 = 0LL;
  v106.0 = 0;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v9 = 0LL;
  v10 = a3;
  v12 = *((_DWORD *)this + 82) == 2;
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( (v14 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v13 + 18) & 0x800) != 0 )
        break;
      if ( (v14 & 0x800) != 0 )
        break;
      a3 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 186LL) || !*((_QWORD *)v13 + 3) )
        break;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a3 + 432) + 8LL) + 624LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 440LL));
      if ( !v17 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
        *(_QWORD *)(v82 + 24) = 857LL;
        WdLogEvent5_WdAssertion(v82);
      }
      v99 = v17 + v9;
      v20 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
      v21 = *(_QWORD *)(v20 + 440);
      v96 = *(_QWORD *)(*((_QWORD *)this + 2) + 432LL);
      v97 = *((_QWORD *)v13 + 3);
      Current = DXGPROCESS::GetCurrent(v20);
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v83 = *((_DWORD *)Current + 32);
              if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v23, &EventBlockThread, v24, v83);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 112, 0LL);
          }
          *((_QWORD *)Current + 15) = KeGetCurrentThread();
        }
      }
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v96 + 8) + 640LL))(v21, v97);
      if ( Current )
      {
        *((_QWORD *)Current + 15) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_DWORD *)&v106.0 += v25;
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 432LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 440LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      v9 = v99;
      if ( !v13 )
        goto LABEL_21;
    }
    v8 = 0;
LABEL_21:
    v10 = v102;
  }
  if ( v10 )
    DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, a2, a3, 0LL);
  if ( !v8 || v12 || (!v10 || !*((_QWORD *)a2 + 3)) && a2 )
    goto LABEL_99;
  v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v27 = *((_QWORD *)v26 + 125);
  ++*(_DWORD *)(v27 + 20);
  v28 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v27);
  if ( !v28 )
  {
    v74 = *(unsigned int *)(v27 + 44);
    v75 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v27 + 48);
    v76 = *(unsigned int *)(v27 + 40);
    v77 = *(unsigned int *)(v27 + 36);
    ++*(_DWORD *)(v27 + 24);
    v28 = (PSLIST_ENTRY)v75(v77, v74, v76, v27);
    if ( !v28 )
    {
      v84 = WdLogNewEntry5_WdLowResource(v78);
      *(_QWORD *)(v84 + 24) = 3858LL;
      WdLogEvent5_WdLowResource(v84);
      goto LABEL_99;
    }
  }
  v29 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v26 + 984, 0LL);
  *((_QWORD *)v26 + 124) = KeGetCurrentThread();
  v30 = *((_QWORD *)v26 + 121) + v99;
  CurrentProcess = PsGetCurrentProcess(v31);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v33);
  v39 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v39 = *ThreadProperty;
    }
  }
  if ( *(_BYTE *)(v39 + 274) )
    goto LABEL_35;
  v40 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v86 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
    *(_QWORD *)(v86 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v86);
    v40 = DXGGLOBAL::m_pGlobal;
  }
  if ( v30 <= v40[66] )
  {
LABEL_35:
    if ( v30 >= *((_QWORD *)v26 + 121) )
    {
      v29 = 1;
      *((_QWORD *)v26 + 121) = v30;
    }
  }
  *((_QWORD *)v26 + 124) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v26 + 984, 0LL);
  KeLeaveCriticalRegion();
  if ( !v29 )
  {
    v79 = WdLogNewEntry5_WdLowResource(v41);
    *(_QWORD *)(v79 + 24) = 3849LL;
    WdLogEvent5_WdLowResource(v79);
    ADAPTER_RENDER::DeleteTerminationTracker(v26, v28, v80, v81);
    v10 = v102;
LABEL_99:
    if ( v10 )
      DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)a2, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, a2, 0, a4, a5, a6);
    return;
  }
  v28->Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&v28->Next + 1) = a4;
  v42 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 48LL);
  *((_QWORD *)&v28[2].Next + 1) = v99;
  LODWORD(v28[2].Next) = v106;
  v28[1].Next = v42;
  *((_QWORD *)&v28[1].Next + 1) = this;
  LODWORD(v28[3].Next) = a6;
  ObfReferenceObject(v42);
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  Next = v28->Next;
  v103 = 0;
  if ( v28->Next )
  {
    v72 = DXGPROCESS::GetCurrent(v43);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v72 + 168));
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v72 + 192), (unsigned int)Next[1].Next);
    DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)Next);
    *((_QWORD *)v72 + 22) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v72 + 168, 0LL);
    KeLeaveCriticalRegion();
    v73 = 0;
    if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[3]) )
    {
      v73 = 1;
      if ( *((_BYTE *)a5 + 80) )
        COREACCESS::Release((COREACCESS *)(a5 + 5));
      COREACCESS::Release((COREACCESS *)(a5 + 1));
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
    if ( v73 )
    {
      COREACCESS::AcquireShared((COREACCESS *)(a5 + 1));
      if ( *((_BYTE *)a5 + 80) )
        COREACCESS::AcquireShared((COREACCESS *)(a5 + 5));
    }
  }
  v45 = *((_QWORD *)&v28->Next + 1);
  if ( v45 )
  {
    do
    {
      v46 = *(_DWORD *)(*(_QWORD *)(v45 + 48) + 4LL);
      if ( (v46 & 0x2000) != 0 && *(_QWORD *)(v45 + 24) )
      {
        v87 = (v46 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v87, (struct DXGALLOCATION *)v45);
        DXGDEVICE::TestAndSetDisplayedPrimary(this, v87, (const struct DXGALLOCATION *)v45, v88);
      }
      v47 = PsGetCurrentProcess(v43);
      v49 = PsGetProcessDxgProcess(v47, v48);
      v50 = v49;
      if ( v49 )
      {
        if ( (*(_BYTE *)(v49 + 275) & 2) != 0 )
        {
          v89 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          if ( v89 )
            v50 = *v89;
        }
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v50 + 168, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v90 = *(_DWORD *)(v50 + 184);
          if ( v90 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v51, &EventBlockThread, v52, v90);
        }
        ExAcquirePushLockExclusiveEx(v50 + 168, 0LL);
      }
      *(_QWORD *)(v50 + 176) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v50 + 192), *(_DWORD *)(v45 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v45);
      *(_QWORD *)(v50 + 176) = 0LL;
      ExReleasePushLockExclusiveEx(v50 + 168, 0LL);
      KeLeaveCriticalRegion();
      v53 = 0;
      if ( a5 )
      {
        v54 = a5[3];
        if ( KeGetCurrentThread() != (struct _KTHREAD *)v54[20] && !ExIsResourceAcquiredExclusiveLite(v54[18]) )
        {
          v53 = 1;
          if ( *((_BYTE *)a5 + 80) )
            COREACCESS::Release((COREACCESS *)(a5 + 5));
          if ( !*((_BYTE *)a5 + 32) )
          {
            v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v56, v55, v57);
            v91[3] = 275LL;
            v91[4] = 4LL;
            v91[5] = a5 + 1;
            v91[6] = 0LL;
            v91[7] = 0LL;
            WdLogEvent5_WdCriticalError(v91);
          }
          v58 = (struct _KTHREAD **)a5[3];
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v58[20] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v58);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v45 + 88));
      if ( v53 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v59, v60);
          v92[3] = 275LL;
          v92[4] = 4LL;
          v92[5] = a5 + 1;
          v92[6] = 0LL;
          v92[7] = 0LL;
          WdLogEvent5_WdCriticalError(v92);
        }
        v43 = (__int64)a5[3];
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v43 + 160) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v43 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v62, &EventBlockThread, v63, 72);
            KeWaitForSingleObject(a5[3] + 6, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a5[3]);
        }
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::AcquireShared((COREACCESS *)(a5 + 5));
      }
      v64 = *(_QWORD *)(v45 + 64);
      if ( *(_QWORD *)(v45 + 24) )
      {
        if ( !v103 )
        {
          v103 = 1;
          if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
          {
            v93 = WdLogNewEntry5_WdAssertion(v43, v59, v60, v61);
            *(_QWORD *)(v93 + 24) = 1167LL;
            WdLogEvent5_WdAssertion(v93);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v94 = *((_DWORD *)this + 38);
              if ( v94 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v65, &EventBlockThread, v66, v94);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
          }
          *((_QWORD *)this + 18) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 456) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 229));
          *((_QWORD *)this + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
          KeLeaveCriticalRegion();
        }
        v67 = *((_QWORD *)this + 2);
        v105 = *(struct DXGALLOCATION **)(v67 + 432);
        v98 = *(_QWORD *)(v67 + 440);
        v68 = (*(_DWORD *)(*(_QWORD *)(v45 + 48) + 4LL) >> 6) & 0xF;
        v100 = *(_QWORD *)(v45 + 24);
        v69 = DXGPROCESS::GetCurrent(v98);
        if ( v69 )
        {
          if ( *((struct _KTHREAD **)v69 + 15) == KeGetCurrentThread() )
          {
            v69 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v69 + 112, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v95 = *((_DWORD *)v69 + 32);
                if ( v95 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_q(v70, &EventBlockThread, v71, v95);
              }
              ExAcquirePushLockExclusiveEx((char *)v69 + 112, 0LL);
            }
            *((_QWORD *)v69 + 15) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, PSLIST_ENTRY))(*((_QWORD *)v105 + 1) + 144LL))(
          v98,
          v100,
          v68,
          a6.Value,
          v28);
        if ( v69 )
        {
          *((_QWORD *)v69 + 15) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v69 + 112, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v45 = v64;
    }
    while ( v64 );
  }
}
