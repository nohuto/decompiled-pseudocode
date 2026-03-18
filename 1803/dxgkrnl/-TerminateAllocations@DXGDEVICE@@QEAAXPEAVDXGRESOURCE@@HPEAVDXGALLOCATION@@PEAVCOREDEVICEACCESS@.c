/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EFB40
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019A3C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00A2FB0 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00E2790 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00E84D0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF240 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF2DC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B0CC (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        PERESOURCE *this,
        struct DXGALLOCATION **a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v8; // r14d
  struct DXGALLOCATION **v9; // r13
  DXGDEVICE *v10; // rbp
  __int64 v11; // r12
  BOOL v12; // r15d
  struct DXGALLOCATION *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r12d
  int v25; // r12d
  __int64 v26; // rbx
  PSLIST_ENTRY v27; // r14
  char v28; // r12
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rcx
  struct _SLIST_ENTRY *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct DXGALLOCATION *v40; // r9
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // r15
  __int64 v52; // rcx
  __int64 v53; // rcx
  struct _KTHREAD **v54; // rcx
  __int64 v55; // rdx
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
  __int64 v67; // rcx
  __int64 v68; // r8
  struct DXGALLOCATION *v69; // rcx
  struct DXGALLOCATION *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // r8
  char v76; // r15
  __int64 v77; // rcx
  __int64 v78; // rcx
  struct _KTHREAD **v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r8
  int v82; // r9d
  __int64 v83; // rdx
  __int64 (__fastcall *v84)(__int64, __int64, __int64); // rax
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // r9d
  __int64 v89; // rax
  int v90; // r9d
  int v91; // r9d
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v98; // rax
  __int64 *v99; // r15
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  __int64 *v102; // rax
  __int64 *v103; // r15
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // [rsp+30h] [rbp-58h]
  __int64 v108; // [rsp+38h] [rbp-50h]
  __int64 v109; // [rsp+38h] [rbp-50h]
  __int64 *v110; // [rsp+38h] [rbp-50h]
  __int64 v111; // [rsp+90h] [rbp+8h]
  __int64 v112; // [rsp+90h] [rbp+8h]
  char v115; // [rsp+A0h] [rbp+18h]
  struct DXGALLOCATION *v117; // [rsp+A8h] [rbp+20h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v118; // [rsp+B8h] [rbp+30h]

  v111 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v118.0 = 0;
  v9 = a2;
  v10 = (DXGDEVICE *)this;
  v11 = 0LL;
  v12 = *((_DWORD *)this + 82) == 2;
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      this = (PERESOURCE *)*(unsigned int *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( ((unsigned __int8)this & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v13 + 18) & 0x800) != 0 )
        break;
      if ( ((unsigned __int16)this & 0x800) != 0 )
        break;
      v14 = *((_QWORD *)v10 + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 185LL) )
        break;
      v15 = *((_QWORD *)v13 + 3);
      if ( !v15 )
        break;
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 544) + 8LL) + 624LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 552LL),
              v15,
              0LL);
      if ( !v18 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v92 + 24) = 944LL;
        WdLogEvent5_WdAssertion(v92);
      }
      v111 = v18 + v11;
      v19 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
      v20 = *(_QWORD *)(v19 + 552);
      v107 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 544LL);
      v108 = *((_QWORD *)v13 + 3);
      Current = DXGPROCESS::GetCurrent(v19, v16);
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v66 = *((_DWORD *)Current + 40);
              if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v22, &EventBlockThread, v23, v66);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
          }
          *((_QWORD *)Current + 19) = KeGetCurrentThread();
        }
      }
      v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v107 + 8) + 640LL))(v20, v108);
      if ( Current )
      {
        *((_QWORD *)Current + 19) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_DWORD *)&v118.0 += v24;
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 544LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)v10 + 2) + 552LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      v11 = v111;
      if ( !v13 )
        goto LABEL_19;
    }
    v8 = 0;
LABEL_19:
    v9 = a2;
  }
  v25 = a3;
  if ( a3 )
  {
    if ( v10 != (DXGDEVICE *)-184LL && *((struct _KTHREAD **)v10 + 24) == KeGetCurrentThread() )
    {
      v93 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v93 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v93);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v10 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v94 = *((_DWORD *)v10 + 50);
        if ( v94 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v67, &EventBlockThread, v68, v94);
      }
      ExAcquirePushLockExclusiveEx((char *)v10 + 184, 0LL);
    }
    *((_QWORD *)v10 + 24) = KeGetCurrentThread();
    if ( v9 == *((struct DXGALLOCATION ***)v10 + 7) || v9[4] )
    {
      v69 = v9[5];
      if ( v69 )
        *((_QWORD *)v69 + 4) = v9[4];
      v70 = v9[4];
      if ( v70 )
      {
        *((_QWORD *)v70 + 5) = v9[5];
      }
      else
      {
        if ( *((struct DXGALLOCATION ***)v10 + 7) != v9 )
        {
          v95 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v95 + 24) = 8379LL;
          WdLogEvent5_WdAssertion(v95);
        }
        *((_QWORD *)v10 + 7) = v9[5];
      }
    }
    *((_QWORD *)v10 + 24) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v10 + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v8 || v12 || (!a3 || !v9[3]) && v9 )
    goto LABEL_133;
  v26 = *((_QWORD *)v10 + 2);
  ++*(_DWORD *)(v26 + 1236);
  v27 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v26 + 1216));
  if ( !v27 )
  {
    v83 = *(unsigned int *)(v26 + 1260);
    v84 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v26 + 1264);
    v85 = *(unsigned int *)(v26 + 1256);
    v86 = *(unsigned int *)(v26 + 1252);
    ++*(_DWORD *)(v26 + 1240);
    v27 = (PSLIST_ENTRY)v84(v86, v83, v85);
    if ( !v27 )
    {
      v96 = WdLogNewEntry5_WdLowResource(v87);
      *(_QWORD *)(v96 + 24) = 4608LL;
      WdLogEvent5_WdLowResource(v96);
      goto LABEL_133;
    }
  }
  v28 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v26 + 1096, 0LL);
  *(_QWORD *)(v26 + 1104) = KeGetCurrentThread();
  v29 = *(_QWORD *)(v26 + 1080) + v111;
  CurrentProcess = PsGetCurrentProcess(v31, v30);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v35 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v110 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v35 = *v110;
      }
    }
  }
  if ( (*(_BYTE *)(v35 + 322) || v29 <= *((_QWORD *)DXGGLOBAL::GetGlobal(v34) + 67)) && v29 >= *(_QWORD *)(v26 + 1080) )
  {
    v28 = 1;
    *(_QWORD *)(v26 + 1080) = v29;
  }
  *(_QWORD *)(v26 + 1104) = 0LL;
  ExReleasePushLockExclusiveEx(v26 + 1096, 0LL);
  KeLeaveCriticalRegion();
  if ( !v28 )
  {
    v89 = WdLogNewEntry5_WdLowResource(v36);
    *(_QWORD *)(v89 + 24) = 4599LL;
    WdLogEvent5_WdLowResource(v89);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v26, v27);
    v25 = a3;
LABEL_133:
    if ( v25 )
      DXGDEVICE::DestroyResource(v10, a2, (PERESOURCE **)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(v10, (unsigned __int64)a2, 0, a4, a5, a6);
    return;
  }
  v27->Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&v27->Next + 1) = a4;
  v37 = *(struct _SLIST_ENTRY **)(*((_QWORD *)v10 + 5) + 56LL);
  *((_QWORD *)&v27[2].Next + 1) = v111;
  LODWORD(v27[2].Next) = v118;
  v27[1].Next = v37;
  *((_QWORD *)&v27[1].Next + 1) = v10;
  LODWORD(v27[3].Next) = a6;
  ObfReferenceObject(v37);
  if ( !*((_DWORD *)v10 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v10 + 13));
  Next = v27->Next;
  v115 = 0;
  if ( v27->Next )
  {
    v71 = PsGetCurrentProcess(v39, v38);
    v72 = PsGetProcessDxgProcess(v71);
    v73 = v72;
    if ( v72 )
    {
      if ( (*(_BYTE *)(v72 + 323) & 4) != 0 )
      {
        v98 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v99 = v98;
        if ( v98 )
        {
          ObfDereferenceObject(v98);
          v73 = *v99;
        }
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v73 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v91 = *(_DWORD *)(v73 + 224);
        if ( v91 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v74, &EventBlockThread, v75, v91);
      }
      ExAcquirePushLockExclusiveEx(v73 + 208, 0LL);
    }
    *(_QWORD *)(v73 + 216) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v73 + 232), (unsigned int)Next[1].Next);
    DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)Next);
    *(_QWORD *)(v73 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v73 + 208, 0LL);
    KeLeaveCriticalRegion();
    v76 = 0;
    if ( a5 )
    {
      v77 = *((_QWORD *)a5 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v77 + 160)
        && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v77 + 144)) )
      {
        v76 = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::Release((struct _KTHREAD ***)a5 + 5);
        if ( !*((_BYTE *)a5 + 32) )
        {
          v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78);
          v100[3] = 275LL;
          v100[4] = 4LL;
          v100[5] = (char *)a5 + 8;
          v100[6] = 0LL;
          v100[7] = 0LL;
          WdLogEvent5_WdCriticalError(v100);
        }
        v79 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
        *((_BYTE *)a5 + 32) = 0;
        if ( KeGetCurrentThread() != v79[20] )
          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v79);
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Next[4].Next + 1);
    if ( v76 )
    {
      if ( *((_BYTE *)a5 + 32) )
      {
        v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39);
        v101[3] = 275LL;
        v101[4] = 4LL;
        v101[5] = (char *)a5 + 8;
        v101[6] = 0LL;
        v101[7] = 0LL;
        WdLogEvent5_WdCriticalError(v101);
      }
      v39 = *((_QWORD *)a5 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 160) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v39 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v80, &EventBlockThread, v81, 72);
          KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3));
      }
      *((_BYTE *)a5 + 32) = 1;
      if ( *((_BYTE *)a5 + 80) )
        COREACCESS::AcquireShared((DXGADAPTER **)a5 + 5);
    }
  }
  v42 = *((_QWORD *)&v27->Next + 1);
  if ( v42 )
  {
    do
    {
      v43 = *(_QWORD *)(v42 + 48);
      v44 = *(_DWORD *)(v43 + 4);
      if ( (v44 & 0x2000) != 0 && *(_QWORD *)(v42 + 24) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(v10, (v44 >> 6) & 0xF, (struct DXGALLOCATION *)v42);
        v43 = *(_QWORD *)(v42 + 48);
      }
      v45 = *(unsigned int *)(v43 + 4);
      if ( (v45 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)v10,
          ((unsigned int)v45 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v42,
          v40);
      v46 = PsGetCurrentProcess(v39, v45);
      v47 = PsGetProcessDxgProcess(v46);
      v48 = v47;
      if ( v47 )
      {
        if ( (*(_BYTE *)(v47 + 323) & 4) != 0 )
        {
          v102 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v103 = v102;
          if ( v102 )
          {
            ObfDereferenceObject(v102);
            v48 = *v103;
          }
        }
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v48 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v90 = *(_DWORD *)(v48 + 224);
          if ( v90 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v49, &EventBlockThread, v50, v90);
        }
        ExAcquirePushLockExclusiveEx(v48 + 208, 0LL);
      }
      *(_QWORD *)(v48 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v48 + 232), *(_DWORD *)(v42 + 16));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v42);
      *(_QWORD *)(v48 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v48 + 208, 0LL);
      KeLeaveCriticalRegion();
      v51 = 0;
      if ( a5 )
      {
        v52 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v52 + 160)
          && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v52 + 144)) )
        {
          v51 = 1;
          if ( *((_BYTE *)a5 + 80) )
            COREACCESS::Release((struct _KTHREAD ***)a5 + 5);
          if ( !*((_BYTE *)a5 + 32) )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53);
            v104[3] = 275LL;
            v104[4] = 4LL;
            v104[5] = (char *)a5 + 8;
            v104[6] = 0LL;
            v104[7] = 0LL;
            WdLogEvent5_WdCriticalError(v104);
          }
          v54 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v54[20] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v54);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v42 + 88));
      if ( v51 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39);
          v105[3] = 275LL;
          v105[4] = 4LL;
          v105[5] = (char *)a5 + 8;
          v105[6] = 0LL;
          v105[7] = 0LL;
          WdLogEvent5_WdCriticalError(v105);
        }
        v39 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 160) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v39 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v56, &EventBlockThread, v57, 72);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3));
        }
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::AcquireShared((DXGADAPTER **)a5 + 5);
      }
      v58 = *(_QWORD *)(v42 + 64);
      if ( *(_QWORD *)(v42 + 24) )
      {
        if ( !v115 )
        {
          v115 = 1;
          if ( v10 != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)v10 + 18) == KeGetCurrentThread() )
          {
            v106 = WdLogNewEntry5_WdAssertion(v39);
            *(_QWORD *)(v106 + 24) = 1306LL;
            WdLogEvent5_WdAssertion(v106);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v10 + 136, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v88 = *((_DWORD *)v10 + 38);
              if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v59, &EventBlockThread, v60, v88);
            }
            ExAcquirePushLockExclusiveEx((char *)v10 + 136, 0LL);
          }
          *((_QWORD *)v10 + 18) = KeGetCurrentThread();
          if ( ++*((_DWORD *)v10 + 428) == 1 )
            KeClearEvent(*((PRKEVENT *)v10 + 215));
          *((_QWORD *)v10 + 18) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v10 + 136, 0LL);
          KeLeaveCriticalRegion();
        }
        v61 = *((_QWORD *)v10 + 2);
        v117 = *(struct DXGALLOCATION **)(v61 + 544);
        v109 = *(_QWORD *)(v61 + 552);
        v62 = (*(_DWORD *)(*(_QWORD *)(v42 + 48) + 4LL) >> 6) & 0xF;
        v112 = *(_QWORD *)(v42 + 24);
        v63 = DXGPROCESS::GetCurrent(v109, v55);
        if ( v63 )
        {
          if ( *((struct _KTHREAD **)v63 + 19) == KeGetCurrentThread() )
          {
            v63 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v63 + 144, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v82 = *((_DWORD *)v63 + 40);
                if ( v82 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v64, &EventBlockThread, v65, v82);
              }
              ExAcquirePushLockExclusiveEx((char *)v63 + 144, 0LL);
            }
            *((_QWORD *)v63 + 19) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, PSLIST_ENTRY))(*((_QWORD *)v117 + 1) + 144LL))(
          v109,
          v112,
          v62,
          a6.Value,
          v27);
        if ( v63 )
        {
          *((_QWORD *)v63 + 19) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v63 + 144, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v42 = v58;
    }
    while ( v58 );
  }
}
