/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70
 * Callers:
 *     ?VmBusCddGdiCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B5A0 (-VmBusCddGdiCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendCddGdiCommand@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C002EE68 (-VmBusSendCddGdiCommand@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0087038 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01A3BD4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _D3DKMT_RENDER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  D3DKMT_HANDLE hDevice; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  struct DXGDEVICE **v18; // rdi
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  struct DXGDEVICE *v24; // r14
  struct _KEVENT *v25; // rbx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGDEVICE *v29; // r14
  __int64 v30; // rcx
  ULONG BroadcastContextCount; // eax
  __int64 v32; // rbx
  _BYTE *PoolWithTag; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned int v37; // ebx
  void *v38; // r14
  __int64 v39; // rbx
  _BYTE *v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  struct DXGDEVICE **v47; // r14
  unsigned __int64 v48; // rdx
  volatile signed __int64 *v49; // rcx
  volatile signed __int64 *v50; // rcx
  struct DXGALLOCATION **v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  bool v56; // r15
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r14
  unsigned __int64 AllocationCount; // rsi
  _BYTE *v59; // rbx
  int v60; // eax
  __int64 v61; // rdx
  struct DXGALLOCATION *v62; // rcx
  int v63; // r14d
  int v64; // eax
  unsigned int v65; // esi
  struct DXGADAPTER *v66; // rcx
  DXGADAPTER *v67; // rcx
  struct DXGADAPTER *v68; // rbx
  _QWORD *v69; // rcx
  unsigned __int64 i; // rbx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned __int8 v75; // bl
  __int64 v76; // r8
  __int64 *ThreadProperty; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  int v80; // r9d
  _QWORD *v81; // rbx
  int v82; // eax
  __int64 v83; // rbx
  _QWORD *v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rax
  _QWORD *v87; // r11
  int v88; // r8d
  __int64 v89; // rax
  D3DKMT_HANDLE v90; // r14d
  unsigned int v91; // ecx
  __int64 v92; // r8
  int v93; // edx
  __int64 v94; // r14
  __int64 v95; // r8
  _QWORD *v96; // rax
  int v97; // r9d
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rbx
  struct DXGDEVICE *v106; // rax
  __int64 v107; // r9
  DXGCONTEXT *v108; // [rsp+38h] [rbp-D0h]
  void *Base; // [rsp+48h] [rbp-C0h]
  _BYTE v110[24]; // [rsp+50h] [rbp-B8h] BYREF
  size_t NumOfElements; // [rsp+70h] [rbp-98h]
  char v112; // [rsp+78h] [rbp-90h]
  char v113[8]; // [rsp+88h] [rbp-80h] BYREF
  char v114[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v115; // [rsp+98h] [rbp-70h]
  DXGADAPTER *v116; // [rsp+A0h] [rbp-68h]
  char v117; // [rsp+A8h] [rbp-60h]
  char v118[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-50h]
  struct DXGADAPTER *v120; // [rsp+C0h] [rbp-48h]
  char v121; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-38h]
  char v123; // [rsp+D8h] [rbp-30h]
  __int64 v124; // [rsp+E8h] [rbp-20h] BYREF
  struct DXGADAPTER *v125; // [rsp+F0h] [rbp-18h]
  char v126; // [rsp+F8h] [rbp-10h]
  void *Src; // [rsp+100h] [rbp-8h]
  _BYTE v128[32]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v129; // [rsp+128h] [rbp+20h]
  struct DXGDEVICE *v130; // [rsp+130h] [rbp+28h]
  PERESOURCE *v131; // [rsp+138h] [rbp+30h]
  char v132[8]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v133; // [rsp+148h] [rbp+40h]
  char v134; // [rsp+150h] [rbp+48h]
  _QWORD v135[4]; // [rsp+158h] [rbp+50h] BYREF
  char v136[8]; // [rsp+178h] [rbp+70h] BYREF
  char v137[32]; // [rsp+180h] [rbp+78h] BYREF
  char v138[56]; // [rsp+1A0h] [rbp+98h] BYREF
  char v139[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v140[32]; // [rsp+1E0h] [rbp+D8h] BYREF
  char v141[56]; // [rsp+200h] [rbp+F8h] BYREF
  PVOID P; // [rsp+238h] [rbp+130h]
  _BYTE v143[256]; // [rsp+240h] [rbp+138h] BYREF
  __int64 v144; // [rsp+340h] [rbp+238h]
  char v145; // [rsp+390h] [rbp+288h]
  unsigned int v146; // [rsp+398h] [rbp+290h] BYREF
  struct DXGDEVICE **v147; // [rsp+3A0h] [rbp+298h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v11 = *ThreadProperty;
    }
  }
  if ( !v11 )
  {
    v65 = -1073741811;
    v78 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v78 + 24) = -1073741811LL;
    *(_QWORD *)(v78 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v78);
    goto LABEL_101;
  }
  hDevice = a1->hDevice;
  if ( v11 != -168 && *(struct _KTHREAD **)(v11 + 176) == KeGetCurrentThread() )
  {
    v79 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v79 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v79);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v80 = *(_DWORD *)(v11 + 184);
      if ( v80 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v13, &EventBlockThread, v14, v80);
    }
    ExAcquirePushLockSharedEx(v11 + 168, 0LL);
  }
  v15 = (hDevice >> 6) & 0xFFFFFF;
  if ( v15 >= *(_DWORD *)(v11 + 208) )
    goto LABEL_118;
  v16 = *(_QWORD *)(v11 + 192);
  v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
  if ( ((hDevice >> 26) & 0x30) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30)
    || (v17 & 0x1000) != 0
    || (v17 & 0xF) == 0
    || (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) != 7 )
  {
    goto LABEL_118;
  }
  v18 = *(struct DXGDEVICE ***)(v16 + 16LL * v15);
  v108 = (DXGCONTEXT *)v18;
  if ( !v18 )
    goto LABEL_17;
  _m_prefetchw(v18 + 4);
  v19 = (signed __int64)v18[4];
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 4, v19 + 1, v19);
      if ( v20 == v19 )
        break;
      if ( !v19 )
        goto LABEL_118;
    }
  }
  else
  {
LABEL_118:
    v18 = 0LL;
    v108 = 0LL;
  }
LABEL_17:
  ExReleasePushLockSharedEx(v11 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v65 = -1073741811;
    v81 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v81[3] = -1073741811LL;
    v81[4] = PsGetCurrentProcess();
    v81[5] = a1->hDevice;
    WdLogEvent5_WdError(v81);
    goto LABEL_101;
  }
  if ( !*((_BYTE *)v18 + 369) )
  {
    v24 = v18[2];
    v147 = v18 + 2;
    v131 = (PERESOURCE *)v24;
    v135[2] = v24;
    v25 = (struct _KEVENT *)(*((_QWORD *)v24 + 2) + 96LL);
    if ( !KeReadStateEvent(v25) )
      KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v24 + 13), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 96LL));
      v75 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v24 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v76, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v24 + 13), 1u);
      if ( v75 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v24 + 2) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v29 = *v147;
    v130 = v29;
    v30 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL);
    if ( !*(_BYTE *)(v30 + 2210)
      || (*(_DWORD *)&a1->Flags & 0x40) != 0
      || *(int *)(v30 + 1944) < 0x2000
      || (v85 = *(_DWORD *)(v30 + 248), v85 <= 1) )
    {
      v145 = 0;
    }
    else
    {
      v145 = 1;
      a1->BroadcastContextCount = v85 - 1;
    }
    BroadcastContextCount = a1->BroadcastContextCount;
    v32 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v86 = WdLogNewEntry5_WdWarning(v30, v26, v27, v28);
      v65 = -1073741811;
      *(_QWORD *)(v86 + 24) = v18;
      *(_QWORD *)(v86 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v86);
      v47 = v147;
LABEL_99:
      ExReleaseResourceLite(v131[13]);
      KeLeaveCriticalRegion();
      goto LABEL_100;
    }
    Src = 0LL;
    v129 = 0;
    if ( (unsigned int)v32 > 4 )
    {
      v30 = (unsigned int)v32;
      v26 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v32;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 < 8 )
        goto LABEL_194;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v32, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v128;
    }
    Src = PoolWithTag;
    v129 = v32;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v32);
      *(_QWORD *)Src = v18;
      if ( v145 )
      {
        v87 = Src;
        v34 = *((_QWORD *)v29 + 43);
        v36 = 0LL;
        v88 = 0;
        while ( (struct DXGDEVICE *)v34 != (struct DXGDEVICE *)((char *)v29 + 344) && v34 )
        {
          v35 = *(unsigned int *)(v34 + 344);
          if ( (unsigned int)v35 >= (unsigned int)v32 )
          {
            v89 = WdLogNewEntry5_WdError(v35, v34);
            *(_QWORD *)(v89 + 32) = 2736LL;
            goto LABEL_143;
          }
          if ( ((1 << v35) & (unsigned int)v36) != 0 )
          {
            v89 = WdLogNewEntry5_WdError(v35, v34);
            *(_QWORD *)(v89 + 32) = 2743LL;
            goto LABEL_143;
          }
          v36 = (1 << v35) | (unsigned int)v36;
          v87[v35] = v34;
          v34 = *(_QWORD *)v34;
          ++v88;
        }
        if ( v88 == (_DWORD)v32 )
          goto LABEL_30;
        v89 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v89 + 32) = 2756LL;
LABEL_143:
        *(_QWORD *)(v89 + 24) = v18;
        WdLogEvent5_WdError(v89);
        v65 = -1073741811;
      }
      else
      {
        v37 = 0;
        if ( !a1->BroadcastContextCount )
        {
LABEL_30:
          v38 = Src;
LABEL_31:
          v39 = v129;
          v40 = 0LL;
          v41 = 0LL;
          Base = 0LL;
          LODWORD(NumOfElements) = 0;
          if ( v129 > 4 )
          {
            v34 = 0xFFFFFFFFFFFFFFFFuLL % v129;
            if ( 0xFFFFFFFFFFFFFFFFuLL / v129 < 8 )
            {
LABEL_35:
              v112 = 1;
              if ( !v40 )
                goto LABEL_191;
              memmove(v40, v38, 8 * v41);
              qsort(
                Base,
                (unsigned int)NumOfElements,
                8uLL,
                (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
              v34 = (unsigned int)NumOfElements;
              v41 = 1LL;
              v40 = Base;
              if ( (unsigned int)NumOfElements > 1uLL )
              {
                while ( *((_QWORD *)Base + v41) != *((_QWORD *)Base + v41 - 1) )
                {
                  if ( ++v41 >= (unsigned __int64)(unsigned int)NumOfElements )
                    goto LABEL_37;
                }
              }
              else
              {
LABEL_37:
                v42 = 0LL;
                if ( (_DWORD)NumOfElements )
                {
                  do
                  {
                    v43 = *(_QWORD *)&v40[8 * v42];
                    KeEnterCriticalRegion();
                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v43 + 376, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v97 = *(_DWORD *)(v43 + 392);
                        if ( v97 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          Template_q(v44, &EventBlockThread, v41, v97);
                      }
                      ExAcquirePushLockExclusiveEx(v43 + 376, 0LL);
                    }
                    ++v42;
                    *(_QWORD *)(v43 + 384) = KeGetCurrentThread();
                    v40 = Base;
                  }
                  while ( v42 < (unsigned int)NumOfElements );
                  v18 = (struct DXGDEVICE **)v108;
                }
                v112 = 0;
              }
              if ( !v40 )
              {
LABEL_191:
                v103 = WdLogNewEntry5_WdWarning(v40, v34, v41, v36);
                *(_QWORD *)(v103 + 24) = 2792LL;
                WdLogEvent5_WdWarning(v103);
                v47 = v147;
                v65 = -1073741801;
LABEL_93:
                v69 = Base;
                if ( Base )
                {
                  if ( !v112 )
                  {
                    for ( i = 0LL; i < (unsigned int)NumOfElements; v69 = Base )
                    {
                      v71 = v69[i] + 376LL;
                      *(_QWORD *)(v71 + 8) = 0LL;
                      ExReleasePushLockExclusiveEx(v71, 0LL);
                      KeLeaveCriticalRegion();
                      ++i;
                    }
                  }
                }
                if ( v69 != (_QWORD *)v110 && v69 )
                  ExFreePoolWithTag(v69, 0);
                goto LABEL_98;
              }
              v125 = *(struct DXGADAPTER **)(*((_QWORD *)v130 + 2) + 16LL);
              _InterlockedIncrement64((volatile signed __int64 *)v125 + 3);
              v124 = -1LL;
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx((char *)v125 + 120, 0LL);
              v47 = v147;
              v126 = 1;
              v48 = (unsigned __int64)*v147;
              v49 = *(volatile signed __int64 **)(*((_QWORD *)*v147 + 2) + 16LL);
              v116 = (DXGADAPTER *)v49;
              v117 = 0;
              if ( v49 )
              {
                _InterlockedIncrement64(v49 + 3);
                v115 = -1LL;
              }
              v50 = *(volatile signed __int64 **)(*(_QWORD *)(v48 + 16) + 16LL);
              v120 = (struct DXGADAPTER *)v50;
              v121 = 0;
              if ( v50 )
              {
                _InterlockedIncrement64(v50 + 3);
                v119 = -1LL;
              }
              v122 = v48;
              v123 = 0;
              if ( v117 )
              {
                v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v48, v45);
                v51 = 0LL;
                v98[5] = v114;
                v98[3] = 275LL;
                v98[4] = 4LL;
                v98[6] = 0LL;
                v98[7] = 0LL;
                WdLogEvent5_WdCriticalError(v98);
              }
              else
              {
                v51 = 0LL;
              }
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 20) )
              {
                if ( !KeReadStateEvent((PRKEVENT)v116 + 2) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_q(v52, &EventBlockThread, v53, 72);
                  KeWaitForSingleObject((char *)v116 + 48, Executive, 0, 0, 0LL);
                }
                DXGADAPTER::AcquireCoreResourceShared(v116);
              }
              v117 = 1;
              if ( *(_DWORD *)(v122 + 408) != 1 )
                goto LABEL_173;
              if ( v123 )
              {
                COREACCESS::AcquireShared((COREACCESS *)v118);
                if ( *((_DWORD *)v120 + 44) != 1 )
                {
                  COREACCESS::Release((COREACCESS *)v118);
LABEL_173:
                  COREACCESS::Release((COREACCESS *)v114);
                  v99 = (_QWORD *)WdLogNewEntry5_WdEvent();
                  v18 = (struct DXGDEVICE **)v108;
                  v99[3] = -1073741130LL;
                  v99[4] = v108;
                  v99[5] = v11;
                  WdLogEvent5_WdEvent(v99);
                  v65 = -1073741130;
LABEL_76:
                  v66 = v120;
                  if ( v120 )
                  {
                    if ( v121 )
                    {
                      COREACCESS::Release((COREACCESS *)v118);
                      v66 = v120;
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v66 + 2), v66);
                    v18 = (struct DXGDEVICE **)v108;
                  }
                  v67 = v116;
                  if ( v116 )
                  {
                    if ( v117 )
                    {
                      v117 = 0;
                      v67 = v116;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 20) )
                      {
                        DXGADAPTER::ReleaseCoreResource(v116);
                        v67 = v116;
                      }
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v67 + 2), v67);
                    v18 = (struct DXGDEVICE **)v108;
                  }
                  if ( v126 )
                  {
                    v68 = v125;
                    ExReleasePushLockSharedEx((char *)v125 + 120, 0LL);
                    KeLeaveCriticalRegion();
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v125 + 2), v125);
                    v18 = (struct DXGDEVICE **)v108;
                  }
                  goto LABEL_93;
                }
              }
              v54 = *((_QWORD *)*v47 + 2);
              v55 = *(_QWORD *)(v54 + 16);
              v56 = *(int *)(v55 + 1944) >= 0x2000 || *(_BYTE *)(v55 + 2228);
              v18 = (struct DXGDEVICE **)v108;
              if ( (*(_DWORD *)&a1->Flags & 0x20) != 0 )
                pNewAllocationList = a1->pNewAllocationList;
              else
                pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v108 + 11);
              AllocationCount = a1->AllocationCount;
              v146 = a1->AllocationCount;
              P = 0LL;
              LODWORD(v144) = 0;
              if ( !v56 )
              {
LABEL_64:
                if ( v145 )
                  v64 = DXGCONTEXT::RenderKmLda(a1, (struct COREDEVICEACCESS *)v113, (struct DXGCONTEXT **)Src, v51);
                else
                  v64 = DXGCONTEXT::Render(
                          v108,
                          a1,
                          (struct COREDEVICEACCESS *)v113,
                          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v124,
                          (struct DXGCONTEXT **)Src,
                          v51);
                v63 = v64;
LABEL_67:
                if ( v56 && (_DWORD)AllocationCount )
                {
                  do
                  {
                    v62 = *v51;
                    if ( *v51 )
                      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v62 + 11);
                    ++v51;
                    --AllocationCount;
                  }
                  while ( AllocationCount );
                }
                if ( v63 >= 0 )
                  goto LABEL_73;
                switch ( v63 )
                {
                  case -1073741811:
                  case -1073741592:
                    v102 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
                    v102[3] = v63;
                    v102[4] = v108;
                    v102[5] = v11;
                    WdLogEvent5_WdError(v102);
                    goto LABEL_73;
                  case -1071775482:
                    v101 = (_QWORD *)WdLogNewEntry5_WdEvent();
                    v101[3] = -1071775482LL;
                    break;
                  case -1071774910:
                    goto LABEL_73;
                  default:
                    v101 = (_QWORD *)WdLogNewEntry5_WdEvent();
                    v101[3] = v63;
                    break;
                }
                v101[4] = v108;
                v101[5] = v11;
                WdLogEvent5_WdEvent(v101);
LABEL_73:
                v65 = v63;
                goto LABEL_74;
              }
              if ( (unsigned int)AllocationCount > 0x20 )
              {
                v48 = 0xFFFFFFFFFFFFFFFFuLL % AllocationCount;
                if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
                  goto LABEL_179;
                v59 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
                P = v59;
              }
              else
              {
                v59 = v143;
                P = v143;
              }
              LODWORD(v144) = AllocationCount;
              if ( v59 )
              {
                memset(v59, 0, 8 * AllocationCount);
                v51 = (struct DXGALLOCATION **)P;
                if ( P )
                {
                  v60 = DxgkReferenceAllocationList(&v146, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                  AllocationCount = v146;
                  v63 = v60;
                  if ( v60 < 0 )
                    goto LABEL_67;
                  goto LABEL_64;
                }
              }
LABEL_179:
              v100 = WdLogNewEntry5_WdWarning(v54, v48, v45, v46);
              *(_QWORD *)(v100 + 24) = 2832LL;
              WdLogEvent5_WdWarning(v100);
              v65 = -1073741801;
LABEL_74:
              if ( P != v143 && P )
                ExFreePoolWithTag(P, 0);
              v47 = v147;
              goto LABEL_76;
            }
            v40 = ExAllocatePoolWithTag(PagedPool, 8LL * v129, 0x4B677844u);
            Base = v40;
          }
          else
          {
            v40 = v110;
            Base = v110;
          }
          LODWORD(NumOfElements) = v39;
          v41 = v39;
          if ( v40 )
          {
            memset(v40, 0, 8 * v39);
            v41 = (unsigned int)NumOfElements;
            v40 = Base;
          }
          goto LABEL_35;
        }
        while ( 1 )
        {
          v90 = a1->BroadcastContext[v37];
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 168));
          v91 = (v90 >> 6) & 0xFFFFFF;
          if ( v91 < *(_DWORD *)(v11 + 208)
            && (v92 = *(_QWORD *)(v11 + 192),
                v93 = *(_DWORD *)(v92 + 16LL * v91 + 8),
                ((v90 >> 26) & 0x30) == (*(_BYTE *)(v92 + 16LL * v91 + 8) & 0x30))
            && (v93 & 0x1000) == 0
            && (v93 & 0xF) != 0
            && (*(_BYTE *)(v92 + 16LL * v91 + 8) & 0xF) == 7 )
          {
            v94 = *(_QWORD *)(v92 + 16LL * v91);
          }
          else
          {
            v94 = 0LL;
          }
          ExReleasePushLockSharedEx(v11 + 168, 0LL);
          KeLeaveCriticalRegion();
          v95 = v37 + 1;
          *((_QWORD *)Src + v95) = v94;
          v38 = Src;
          v34 = *((_QWORD *)Src + v95);
          if ( !v34 || *(struct DXGDEVICE **)(v34 + 16) != *v147 )
            break;
          ++v37;
          if ( (unsigned int)v95 >= a1->BroadcastContextCount )
            goto LABEL_31;
        }
        v96 = (_QWORD *)WdLogNewEntry5_WdError(8 * v95, v34);
        v65 = -1073741811;
        v96[3] = v18;
        v96[4] = a1->BroadcastContext[v37];
        v96[5] = v37;
        v96[6] = -1073741811LL;
        WdLogEvent5_WdError(v96);
      }
LABEL_195:
      v47 = v147;
LABEL_98:
      if ( Src != v128 && Src )
        ExFreePoolWithTag(Src, 0);
      goto LABEL_99;
    }
LABEL_194:
    v104 = WdLogNewEntry5_WdWarning(v30, v26, v27, v28);
    *(_QWORD *)(v104 + 24) = 2711LL;
    WdLogEvent5_WdWarning(v104);
    v65 = -1073741801;
    goto LABEL_195;
  }
  v47 = v18 + 2;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v139, (__int64)v18[2], 0LL, v23, 0);
  v82 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v139);
  v83 = v82;
  if ( v82 >= 0 )
  {
    LODWORD(v83) = DXGADAPTER::VmBusSendCddGdiCommand(
                     *(DXGADAPTER **)(*((_QWORD *)*v47 + 2) + 16LL),
                     (struct DXGPROCESS *)v11,
                     (struct DXGCONTEXT *)v18,
                     a1);
  }
  else
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v84[3] = v83;
    v84[4] = v18;
    v84[5] = v11;
    WdLogEvent5_WdEvent(v84);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v141);
  COREACCESS::~COREACCESS((COREACCESS *)v140);
  v65 = v83;
LABEL_100:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v105 = (__int64)*v47;
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v135, *v47);
    v106 = *v47;
    v134 = 0;
    v133 = *(_QWORD *)(*((_QWORD *)v106 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v132);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v136, v105, 2LL, v107, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v136);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v105, v108, (struct COREDEVICEACCESS *)v136);
    COREACCESS::~COREACCESS((COREACCESS *)v138);
    COREACCESS::~COREACCESS((COREACCESS *)v137);
    if ( v134 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v132);
    if ( v135[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v135);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v105 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v105 + 16), (struct DXGDEVICE *)v105);
  }
LABEL_101:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v72, &EventProfilerExit, v73, 3020);
  return v65;
}
