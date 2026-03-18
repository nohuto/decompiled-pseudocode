/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00BFD00
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0190B60 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C007982C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0195244 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BD78C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _D3DKMT_RENDER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  D3DKMT_HANDLE hDevice; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rsi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r14
  struct _KEVENT *v21; // rbx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r14
  __int64 v25; // rcx
  ULONG BroadcastContextCount; // eax
  __int64 v27; // rbx
  _BYTE *PoolWithTag; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // ebx
  void *v32; // r14
  __int64 v33; // rbx
  _BYTE *v34; // rcx
  __int64 v35; // r8
  unsigned __int64 i; // rbx
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  volatile signed __int64 *v41; // rcx
  volatile signed __int64 *v42; // rcx
  struct DXGALLOCATION **v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  bool v48; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r14
  unsigned __int64 AllocationCount; // rdi
  _BYTE *v51; // rbx
  int v52; // eax
  struct DXGALLOCATION *v53; // rcx
  int v54; // r14d
  int v55; // eax
  unsigned int v56; // edi
  struct DXGADAPTER *v57; // rcx
  DXGADAPTER *v58; // rcx
  struct DXGADAPTER *v59; // rbx
  _QWORD *v60; // rcx
  unsigned __int64 j; // rbx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int8 v66; // bl
  __int64 v67; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r9d
  _QWORD *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rbx
  _QWORD *v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rax
  _QWORD *v83; // r11
  int v84; // r9d
  int v85; // r8d
  __int64 v86; // rax
  D3DKMT_HANDLE v87; // r14d
  __int64 v88; // rax
  __int64 v89; // r8
  int v90; // edx
  __int64 v91; // r14
  __int64 v92; // r8
  _QWORD *v93; // rax
  int v94; // r9d
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // r9
  void *Base; // [rsp+38h] [rbp-D0h]
  _BYTE v106[24]; // [rsp+40h] [rbp-C8h] BYREF
  size_t NumOfElements; // [rsp+60h] [rbp-A8h]
  char v108; // [rsp+68h] [rbp-A0h]
  char v109[8]; // [rsp+78h] [rbp-90h] BYREF
  char v110[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v111; // [rsp+88h] [rbp-80h]
  DXGADAPTER *v112; // [rsp+90h] [rbp-78h]
  char v113; // [rsp+98h] [rbp-70h]
  char v114[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v116; // [rsp+B0h] [rbp-58h]
  char v117; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v118; // [rsp+C0h] [rbp-48h]
  char v119; // [rsp+C8h] [rbp-40h]
  __int64 v120; // [rsp+D8h] [rbp-30h] BYREF
  struct DXGADAPTER *v121; // [rsp+E0h] [rbp-28h]
  char v122; // [rsp+E8h] [rbp-20h]
  void *Src; // [rsp+F0h] [rbp-18h]
  _BYTE v124[32]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v125; // [rsp+118h] [rbp+10h]
  __int64 v126; // [rsp+120h] [rbp+18h]
  char v127[8]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v128; // [rsp+130h] [rbp+28h]
  char v129; // [rsp+138h] [rbp+30h]
  _QWORD v130[3]; // [rsp+140h] [rbp+38h] BYREF
  char v131[8]; // [rsp+158h] [rbp+50h] BYREF
  char v132[32]; // [rsp+160h] [rbp+58h] BYREF
  char v133[56]; // [rsp+180h] [rbp+78h] BYREF
  char v134[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v135[32]; // [rsp+1C0h] [rbp+B8h] BYREF
  char v136[56]; // [rsp+1E0h] [rbp+D8h] BYREF
  PVOID P; // [rsp+218h] [rbp+110h]
  _BYTE v138[256]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v139; // [rsp+320h] [rbp+218h]
  char v140; // [rsp+370h] [rbp+268h]
  unsigned int v141; // [rsp+378h] [rbp+270h] BYREF
  __int64 v142; // [rsp+380h] [rbp+278h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3020);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v69 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v69;
      }
    }
  }
  if ( !v8 )
  {
    v56 = -1073741811;
    v70 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v70 + 24) = -1073741811LL;
    *(_QWORD *)(v70 + 32) = PsGetCurrentProcess(v72, v71);
    WdLogEvent5_WdError(v70);
    goto LABEL_96;
  }
  hDevice = a1->hDevice;
  if ( v8 != -200 && *(struct _KTHREAD **)(v8 + 208) == KeGetCurrentThread() )
  {
    v73 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v73 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v73);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v74 = *(_DWORD *)(v8 + 216);
      if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v74);
    }
    ExAcquirePushLockSharedEx(v8 + 200, 0LL);
  }
  v12 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *(_DWORD *)(v8 + 240) )
    goto LABEL_115;
  v13 = *(_QWORD *)(v8 + 224);
  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0
    || (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x1F) != 7 )
  {
    goto LABEL_115;
  }
  v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
  if ( !v15 )
    goto LABEL_17;
  _m_prefetchw((const void *)(v15 + 32));
  v16 = *(_QWORD *)(v15 + 32);
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 32), v16 + 1, v16);
      if ( v17 == v16 )
        break;
      if ( !v16 )
        goto LABEL_115;
    }
  }
  else
  {
LABEL_115:
    v15 = 0LL;
  }
LABEL_17:
  ExReleasePushLockSharedEx(v8 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v56 = -1073741811;
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v75[3] = -1073741811LL;
    v75[4] = PsGetCurrentProcess(v77, v76);
    v75[5] = a1->hDevice;
    WdLogEvent5_WdError(v75);
    goto LABEL_96;
  }
  if ( !*(_BYTE *)(v15 + 401) )
  {
    v20 = *(_QWORD *)(v15 + 16);
    v126 = v20;
    v21 = (struct _KEVENT *)(*(_QWORD *)(v20 + 16) + 96LL);
    if ( !KeReadStateEvent(v21) )
      KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
      v66 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v67, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 1u);
      if ( v66 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v24 = *(_QWORD *)(v15 + 16);
    v142 = v24;
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
    if ( !*(_BYTE *)(v25 + 2234)
      || (*(_DWORD *)&a1->Flags & 0x40) != 0
      || *(int *)(v25 + 1968) < 0x2000
      || (v81 = *(_DWORD *)(v25 + 248), v81 <= 1) )
    {
      v140 = 0;
    }
    else
    {
      v140 = 1;
      a1->BroadcastContextCount = v81 - 1;
    }
    BroadcastContextCount = a1->BroadcastContextCount;
    v27 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v82 = WdLogNewEntry5_WdWarning(v25, v22, v23);
      v56 = -1073741811;
      *(_QWORD *)(v82 + 24) = v15;
      *(_QWORD *)(v82 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v82);
LABEL_94:
      ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
      KeLeaveCriticalRegion();
      goto LABEL_95;
    }
    Src = 0LL;
    v125 = 0;
    if ( (unsigned int)v27 > 4 )
    {
      v25 = (unsigned int)v27;
      v22 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v27;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v27 < 8 )
        goto LABEL_189;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v27, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v124;
    }
    Src = PoolWithTag;
    v125 = v27;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v27);
      *(_QWORD *)Src = v15;
      if ( v140 )
      {
        v83 = Src;
        v29 = *(_QWORD *)(v24 + 344);
        v84 = 0;
        v85 = 0;
        while ( v29 != v24 + 344 && v29 )
        {
          v30 = *(unsigned int *)(v29 + 360);
          if ( (unsigned int)v30 >= (unsigned int)v27 )
          {
            v86 = WdLogNewEntry5_WdError(v30);
            *(_QWORD *)(v86 + 32) = 2769LL;
            goto LABEL_138;
          }
          if ( ((1 << v30) & v84) != 0 )
          {
            v86 = WdLogNewEntry5_WdError(v30);
            *(_QWORD *)(v86 + 32) = 2776LL;
            goto LABEL_138;
          }
          v84 |= 1 << v30;
          v83[v30] = v29;
          v29 = *(_QWORD *)v29;
          ++v85;
        }
        if ( v85 == (_DWORD)v27 )
          goto LABEL_30;
        v86 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v86 + 32) = 2789LL;
LABEL_138:
        *(_QWORD *)(v86 + 24) = v15;
        WdLogEvent5_WdError(v86);
        v56 = -1073741811;
        goto LABEL_93;
      }
      v31 = 0;
      if ( a1->BroadcastContextCount )
      {
        while ( 1 )
        {
          v87 = a1->BroadcastContext[v31];
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 200));
          v88 = (v87 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v88 < *(_DWORD *)(v8 + 240)
            && (v89 = *(_QWORD *)(v8 + 224),
                v90 = *(_DWORD *)(v89 + 16 * v88 + 8),
                ((v87 >> 25) & 0x60) == (*(_BYTE *)(v89 + 16 * v88 + 8) & 0x60))
            && (v90 & 0x2000) == 0
            && (v90 & 0x1F) != 0
            && (*(_BYTE *)(v89 + 16LL * (unsigned int)v88 + 8) & 0x1F) == 7 )
          {
            v91 = *(_QWORD *)(v89 + 16LL * (unsigned int)v88);
          }
          else
          {
            v91 = 0LL;
          }
          ExReleasePushLockSharedEx(v8 + 200, 0LL);
          KeLeaveCriticalRegion();
          v92 = v31 + 1;
          *((_QWORD *)Src + v92) = v91;
          v32 = Src;
          v29 = *((_QWORD *)Src + v92);
          if ( !v29 || *(_QWORD *)(v29 + 16) != *(_QWORD *)(v15 + 16) )
            break;
          ++v31;
          if ( (unsigned int)v92 >= a1->BroadcastContextCount )
            goto LABEL_31;
        }
        v93 = (_QWORD *)WdLogNewEntry5_WdError(8 * v92);
        v56 = -1073741811;
        v93[3] = v15;
        v93[4] = a1->BroadcastContext[v31];
        v93[5] = v31;
        v93[6] = -1073741811LL;
        WdLogEvent5_WdError(v93);
        goto LABEL_93;
      }
LABEL_30:
      v32 = Src;
LABEL_31:
      v33 = v125;
      v34 = 0LL;
      v35 = 0LL;
      Base = 0LL;
      LODWORD(NumOfElements) = 0;
      if ( v125 > 4 )
      {
        v29 = 0xFFFFFFFFFFFFFFFFuLL % v125;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v125 < 8 )
        {
LABEL_35:
          v108 = 1;
          if ( !v34 )
            goto LABEL_186;
          memmove(v34, v32, 8 * v35);
          qsort(
            Base,
            (unsigned int)NumOfElements,
            8uLL,
            (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
          v29 = (unsigned int)NumOfElements;
          v35 = 1LL;
          v34 = Base;
          if ( (unsigned int)NumOfElements > 1uLL )
          {
            while ( *((_QWORD *)Base + v35) != *((_QWORD *)Base + v35 - 1) )
            {
              if ( ++v35 >= (unsigned __int64)(unsigned int)NumOfElements )
                goto LABEL_37;
            }
          }
          else
          {
LABEL_37:
            for ( i = 0LL; i < (unsigned int)NumOfElements; v34 = Base )
            {
              v37 = *(_QWORD *)&v34[8 * i];
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37 + 408, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v94 = *(_DWORD *)(v37 + 424);
                  if ( v94 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v38, &EventBlockThread, v35, v94);
                }
                ExAcquirePushLockExclusiveEx(v37 + 408, 0LL);
              }
              ++i;
              *(_QWORD *)(v37 + 416) = KeGetCurrentThread();
            }
            v108 = 0;
          }
          if ( !v34 )
          {
LABEL_186:
            v100 = WdLogNewEntry5_WdWarning(v34, v29, v35);
            *(_QWORD *)(v100 + 24) = 2825LL;
            WdLogEvent5_WdWarning(v100);
            v56 = -1073741801;
LABEL_88:
            v60 = Base;
            if ( Base )
            {
              if ( !v108 )
              {
                for ( j = 0LL; j < (unsigned int)NumOfElements; v60 = Base )
                {
                  v62 = v60[j] + 408LL;
                  *(_QWORD *)(v62 + 8) = 0LL;
                  ExReleasePushLockExclusiveEx(v62, 0LL);
                  KeLeaveCriticalRegion();
                  ++j;
                }
              }
            }
            if ( v60 != (_QWORD *)v106 && v60 )
              ExFreePoolWithTag(v60, 0);
            goto LABEL_93;
          }
          v121 = *(struct DXGADAPTER **)(*(_QWORD *)(v142 + 16) + 16LL);
          _InterlockedIncrement64((volatile signed __int64 *)v121 + 3);
          v120 = -1LL;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)v121 + 120, 0LL);
          v40 = *(_QWORD *)(v15 + 16);
          v122 = 1;
          v41 = *(volatile signed __int64 **)(*(_QWORD *)(v40 + 16) + 16LL);
          v112 = (DXGADAPTER *)v41;
          v113 = 0;
          if ( v41 )
          {
            _InterlockedIncrement64(v41 + 3);
            v111 = -1LL;
          }
          v42 = *(volatile signed __int64 **)(*(_QWORD *)(v40 + 16) + 16LL);
          v116 = (struct DXGADAPTER *)v42;
          v117 = 0;
          if ( v42 )
          {
            _InterlockedIncrement64(v42 + 3);
            v115 = -1LL;
          }
          v118 = v40;
          v119 = 0;
          if ( v113 )
          {
            v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v40, v39);
            v43 = 0LL;
            v95[5] = v110;
            v95[3] = 275LL;
            v95[4] = 4LL;
            v95[6] = 0LL;
            v95[7] = 0LL;
            WdLogEvent5_WdCriticalError(v95);
          }
          else
          {
            v43 = 0LL;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v112 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v112 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v44, &EventBlockThread, v45, 72);
              KeWaitForSingleObject((char *)v112 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v112);
          }
          v113 = 1;
          if ( *(_DWORD *)(v118 + 408) != 1 )
            goto LABEL_168;
          if ( v119 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v114);
            if ( *((_DWORD *)v116 + 44) != 1 )
            {
              COREACCESS::Release((COREACCESS *)v114);
LABEL_168:
              COREACCESS::Release((COREACCESS *)v110);
              v96 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v96[3] = -1073741130LL;
              v96[4] = v15;
              v96[5] = v8;
              WdLogEvent5_WdEvent(v96);
              v56 = -1073741130;
LABEL_74:
              v57 = v116;
              if ( v116 )
              {
                if ( v117 )
                {
                  COREACCESS::Release((COREACCESS *)v114);
                  v57 = v116;
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
              }
              v58 = v112;
              if ( v112 )
              {
                if ( v113 )
                {
                  v113 = 0;
                  v58 = v112;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v112 + 20) )
                  {
                    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v112);
                    v58 = v112;
                  }
                }
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
              }
              if ( v122 )
              {
                v59 = v121;
                ExReleasePushLockSharedEx((char *)v121 + 120, 0LL);
                KeLeaveCriticalRegion();
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
              }
              goto LABEL_88;
            }
          }
          v46 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
          v47 = *(_QWORD *)(v46 + 16);
          v48 = *(int *)(v47 + 1968) >= 0x2000 || *(_BYTE *)(v47 + 2252);
          if ( (*(_DWORD *)&a1->Flags & 0x20) != 0 )
            pNewAllocationList = a1->pNewAllocationList;
          else
            pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v15 + 88);
          AllocationCount = a1->AllocationCount;
          v141 = a1->AllocationCount;
          P = 0LL;
          LODWORD(v139) = 0;
          if ( !v48 )
          {
LABEL_63:
            if ( v140 )
              v55 = DXGCONTEXT::RenderKmLda(a1, (struct COREDEVICEACCESS *)v109, (struct DXGCONTEXT **)Src, v43);
            else
              v55 = DXGCONTEXT::Render(
                      (DXGCONTEXT *)v15,
                      a1,
                      (struct COREDEVICEACCESS *)v109,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v120,
                      (struct DXGCONTEXT **)Src,
                      v43);
            v54 = v55;
LABEL_66:
            if ( v48 && (_DWORD)AllocationCount )
            {
              do
              {
                v53 = *v43;
                if ( *v43 )
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v53 + 11);
                ++v43;
                --AllocationCount;
              }
              while ( AllocationCount );
            }
            if ( v54 >= 0 )
              goto LABEL_72;
            switch ( v54 )
            {
              case -1073741811:
              case -1073741592:
                v99 = (_QWORD *)WdLogNewEntry5_WdError(v53);
                v99[3] = v54;
                v99[4] = v15;
                v99[5] = v8;
                WdLogEvent5_WdError(v99);
                goto LABEL_72;
              case -1071775482:
                v98 = (_QWORD *)WdLogNewEntry5_WdEvent();
                v98[3] = -1071775482LL;
                break;
              case -1071774910:
                goto LABEL_72;
              default:
                v98 = (_QWORD *)WdLogNewEntry5_WdEvent();
                v98[3] = v54;
                break;
            }
            v98[4] = v15;
            v98[5] = v8;
            WdLogEvent5_WdEvent(v98);
LABEL_72:
            v56 = v54;
LABEL_73:
            if ( P != v138 && P )
              ExFreePoolWithTag(P, 0);
            goto LABEL_74;
          }
          if ( (unsigned int)AllocationCount > 0x20 )
          {
            v40 = 0xFFFFFFFFFFFFFFFFuLL % AllocationCount;
            if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
              goto LABEL_174;
            v51 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
            P = v51;
          }
          else
          {
            v51 = v138;
            P = v138;
          }
          LODWORD(v139) = AllocationCount;
          if ( v51 )
          {
            memset(v51, 0, 8 * AllocationCount);
            v43 = (struct DXGALLOCATION **)P;
            if ( P )
            {
              v52 = DxgkReferenceAllocationList(&v141, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
              AllocationCount = v141;
              v54 = v52;
              if ( v52 < 0 )
                goto LABEL_66;
              goto LABEL_63;
            }
          }
LABEL_174:
          v97 = WdLogNewEntry5_WdWarning(v46, v40, v39);
          *(_QWORD *)(v97 + 24) = 2865LL;
          WdLogEvent5_WdWarning(v97);
          v56 = -1073741801;
          goto LABEL_73;
        }
        v34 = ExAllocatePoolWithTag(PagedPool, 8LL * v125, 0x4B677844u);
        Base = v34;
      }
      else
      {
        v34 = v106;
        Base = v106;
      }
      v35 = v33;
      LODWORD(NumOfElements) = v33;
      if ( v34 )
      {
        memset(v34, 0, 8 * v33);
        v35 = (unsigned int)NumOfElements;
        v34 = Base;
      }
      goto LABEL_35;
    }
LABEL_189:
    v101 = WdLogNewEntry5_WdWarning(v25, v22, v23);
    *(_QWORD *)(v101 + 24) = 2744LL;
    WdLogEvent5_WdWarning(v101);
    v56 = -1073741801;
LABEL_93:
    if ( Src != v124 && Src )
      ExFreePoolWithTag(Src, 0);
    goto LABEL_94;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v134, *(_QWORD *)(v15 + 16), 0, v19, 0);
  v78 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v134);
  v79 = v78;
  if ( v78 >= 0 )
  {
    LODWORD(v79) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL)
                                                  + 3888LL),
                     (struct DXGPROCESS *)v8,
                     (struct DXGCONTEXT *)v15,
                     a1);
  }
  else
  {
    v80 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v80[3] = v79;
    v80[4] = v15;
    v80[5] = v8;
    WdLogEvent5_WdEvent(v80);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v136);
  COREACCESS::~COREACCESS((COREACCESS *)v135);
  v56 = v79;
LABEL_95:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v102 = *(_QWORD *)(v15 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v130,
      (struct DXGDEVICE *)v102);
    v103 = *(_QWORD *)(v15 + 16);
    v129 = 0;
    v128 = *(_QWORD *)(*(_QWORD *)(v103 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v127);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v131, v102, 2, v104, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v131);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v102, (struct DXGCONTEXT *)v15, (struct COREDEVICEACCESS *)v131);
    COREACCESS::~COREACCESS((COREACCESS *)v133);
    COREACCESS::~COREACCESS((COREACCESS *)v132);
    if ( v129 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v127);
    if ( v130[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v130);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v102 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v102 + 16), (struct DXGDEVICE *)v102);
  }
LABEL_96:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v63, &EventProfilerExit, v64, 3020);
  return v56;
}
