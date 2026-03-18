/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009B620
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003DEC (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007FFB4 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082398 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0086F80 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0094FE8 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AE14 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AEB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C00FF96C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        DXGADAPTER **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v8; // r14d
  int v9; // r13d
  __int64 v11; // r15
  BOOL v12; // r12d
  struct DXGALLOCATION *v13; // rsi
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r15d
  ADAPTER_RENDER *v23; // rbx
  __int64 v24; // r14
  PSLIST_ENTRY v25; // rsi
  char v26; // r12
  unsigned __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 CurrentProcess; // rax
  __int64 v31; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rcx
  struct _SLIST_ENTRY *v36; // rcx
  DXGADAPTER *v37; // rcx
  struct DXGALLOCATION *v38; // r9
  __int64 v39; // rbx
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rcx
  __int64 v47; // r8
  char v48; // r15
  DXGADAPTER *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  DXGADAPTER *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r12
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  unsigned int v62; // r15d
  struct DXGPROCESS *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  int v67; // r9d
  __int64 v68; // rdx
  __int64 (__fastcall *v69)(__int64, __int64, __int64, __int64); // rax
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r9d
  int v75; // r9d
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v79; // rax
  __int64 *v80; // r15
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // [rsp+30h] [rbp-58h]
  __int64 v85; // [rsp+38h] [rbp-50h]
  __int64 v86; // [rsp+38h] [rbp-50h]
  __int64 *v87; // [rsp+38h] [rbp-50h]
  __int64 v88; // [rsp+90h] [rbp+8h]
  __int64 v89; // [rsp+90h] [rbp+8h]
  char v92; // [rsp+A0h] [rbp+18h]
  struct DXGALLOCATION *v94; // [rsp+A8h] [rbp+20h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v95; // [rsp+B8h] [rbp+30h]

  v88 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v95.0 = 0;
  v9 = a3;
  v11 = 0LL;
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
      v15 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 185LL) || !*((_QWORD *)v13 + 3) )
        break;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 528) + 8LL) + 624LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 536LL));
      if ( !v17 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v76 + 24) = 914LL;
        WdLogEvent5_WdAssertion(v76);
      }
      v88 = v17 + v11;
      v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 536LL);
      v84 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
      v85 = *((_QWORD *)v13 + 3);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 18) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 136, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v66 = *((_DWORD *)Current + 38);
              if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v20, &EventBlockThread, v21, v66);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 136, 0LL);
          }
          *((_QWORD *)Current + 18) = KeGetCurrentThread();
        }
      }
      v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v84 + 8) + 640LL))(v18, v85);
      if ( Current )
      {
        *((_QWORD *)Current + 18) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 136, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_DWORD *)&v95.0 += v22;
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 536LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      v11 = v88;
      if ( !v13 )
        goto LABEL_19;
    }
    v8 = 0;
LABEL_19:
    v9 = a3;
  }
  if ( v9 )
    DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, a2);
  if ( !v8 || v12 || (!v9 || !*((_QWORD *)a2 + 3)) && a2 )
    goto LABEL_98;
  v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v24 = *((_QWORD *)v23 + 137);
  ++*(_DWORD *)(v24 + 20);
  v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v24);
  if ( !v25 )
  {
    v68 = *(unsigned int *)(v24 + 44);
    v69 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v24 + 48);
    v70 = *(unsigned int *)(v24 + 40);
    v71 = *(unsigned int *)(v24 + 36);
    ++*(_DWORD *)(v24 + 24);
    v25 = (PSLIST_ENTRY)v69(v71, v68, v70, v24);
    if ( !v25 )
    {
      v77 = WdLogNewEntry5_WdLowResource(v72);
      *(_QWORD *)(v77 + 24) = 4101LL;
      WdLogEvent5_WdLowResource(v77);
      goto LABEL_98;
    }
  }
  v26 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v23 + 1080, 0LL);
  *((_QWORD *)v23 + 136) = KeGetCurrentThread();
  v27 = v11 + *((_QWORD *)v23 + 133);
  CurrentProcess = PsGetCurrentProcess(v29, v28);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v31);
  v34 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v87 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v34 = *v87;
      }
    }
  }
  if ( (*(_BYTE *)(v34 + 306) || v27 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v33) + 66)) && v27 >= *((_QWORD *)v23 + 133) )
  {
    v26 = 1;
    *((_QWORD *)v23 + 133) = v27;
  }
  *((_QWORD *)v23 + 136) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v23 + 1080, 0LL);
  KeLeaveCriticalRegion();
  if ( !v26 )
  {
    v73 = WdLogNewEntry5_WdLowResource(v35);
    *(_QWORD *)(v73 + 24) = 4092LL;
    WdLogEvent5_WdLowResource(v73);
    ADAPTER_RENDER::DeleteTerminationTracker(v23, v25);
    v9 = a3;
LABEL_98:
    if ( v9 )
      DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)a2, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, (unsigned __int64)a2, 0, a4, (PERESOURCE **)a5, a6);
    return;
  }
  v25->Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&v25->Next + 1) = a4;
  v36 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 48LL);
  *((_QWORD *)&v25[2].Next + 1) = v88;
  LODWORD(v25[2].Next) = v95;
  v25[1].Next = v36;
  *((_QWORD *)&v25[1].Next + 1) = this;
  LODWORD(v25[3].Next) = a6;
  ObfReferenceObject(v36);
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v92 = 0;
  if ( v25->Next )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      v37,
      (struct DXGRESOURCE *)v25->Next,
      (struct COREDEVICEACCESS *)a5);
  v39 = *((_QWORD *)&v25->Next + 1);
  if ( v39 )
  {
    do
    {
      v40 = *(_DWORD *)(*(_QWORD *)(v39 + 48) + 4LL);
      if ( (v40 & 0x2000) != 0 && *(_QWORD *)(v39 + 24) )
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v40 >> 6) & 0xF, (struct DXGALLOCATION *)v39);
      v41 = *(unsigned int *)(*(_QWORD *)(v39 + 48) + 4LL);
      if ( (v41 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          ((unsigned int)v41 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v39,
          v38);
      v42 = PsGetCurrentProcess(v37, v41);
      v44 = PsGetProcessDxgProcess(v42, v43);
      v45 = v44;
      if ( v44 )
      {
        if ( (*(_BYTE *)(v44 + 307) & 4) != 0 )
        {
          v79 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v80 = v79;
          if ( v79 )
          {
            ObfDereferenceObject(v79);
            v45 = *v80;
          }
        }
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v45 + 200, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v75 = *(_DWORD *)(v45 + 216);
          if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v46, &EventBlockThread, v47, v75);
        }
        ExAcquirePushLockExclusiveEx(v45 + 200, 0LL);
      }
      *(_QWORD *)(v45 + 208) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v45 + 224), *(_DWORD *)(v39 + 16));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v39);
      *(_QWORD *)(v45 + 208) = 0LL;
      ExReleasePushLockExclusiveEx(v45 + 200, 0LL);
      KeLeaveCriticalRegion();
      v48 = 0;
      if ( a5 )
      {
        v49 = a5[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v49 + 20)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v49 + 18)) )
        {
          v48 = 1;
          if ( *((_BYTE *)a5 + 80) )
            COREACCESS::Release((COREACCESS *)(a5 + 5));
          if ( !*((_BYTE *)a5 + 32) )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v52);
            v81[3] = 275LL;
            v81[4] = 4LL;
            v81[5] = a5 + 1;
            v81[6] = 0LL;
            v81[7] = 0LL;
            WdLogEvent5_WdCriticalError(v81);
          }
          v53 = a5[3];
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 20) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v53);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v39 + 88));
      if ( v48 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v54, v55);
          v82[3] = 275LL;
          v82[4] = 4LL;
          v82[5] = a5 + 1;
          v82[6] = 0LL;
          v82[7] = 0LL;
          WdLogEvent5_WdCriticalError(v82);
        }
        v37 = a5[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v37 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v37 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v56, &EventBlockThread, v57, 72);
            KeWaitForSingleObject((char *)a5[3] + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(a5[3]);
        }
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::AcquireShared((COREACCESS *)(a5 + 5));
      }
      v58 = *(_QWORD *)(v39 + 64);
      if ( *(_QWORD *)(v39 + 24) )
      {
        if ( !v92 )
        {
          v92 = 1;
          if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
          {
            v83 = WdLogNewEntry5_WdAssertion(v37);
            *(_QWORD *)(v83 + 24) = 1214LL;
            WdLogEvent5_WdAssertion(v83);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v74 = *((_DWORD *)this + 38);
              if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v59, &EventBlockThread, v60, v74);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
          }
          *((_QWORD *)this + 18) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 424) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 213));
          *((_QWORD *)this + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
          KeLeaveCriticalRegion();
        }
        v61 = *((_QWORD *)this + 2);
        v94 = *(struct DXGALLOCATION **)(v61 + 528);
        v86 = *(_QWORD *)(v61 + 536);
        v62 = (*(_DWORD *)(*(_QWORD *)(v39 + 48) + 4LL) >> 6) & 0xF;
        v89 = *(_QWORD *)(v39 + 24);
        v63 = DXGPROCESS::GetCurrent();
        if ( v63 )
        {
          if ( *((struct _KTHREAD **)v63 + 18) == KeGetCurrentThread() )
          {
            v63 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v63 + 136, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v67 = *((_DWORD *)v63 + 38);
                if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v64, &EventBlockThread, v65, v67);
              }
              ExAcquirePushLockExclusiveEx((char *)v63 + 136, 0LL);
            }
            *((_QWORD *)v63 + 18) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, PSLIST_ENTRY))(*((_QWORD *)v94 + 1) + 144LL))(
          v86,
          v89,
          v62,
          a6.Value,
          v25);
        if ( v63 )
        {
          *((_QWORD *)v63 + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v63 + 136, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v39 = v58;
    }
    while ( v58 );
  }
}
