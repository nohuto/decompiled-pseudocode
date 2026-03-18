/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0
 * Callers:
 *     ?VmBusSignalFenceNtSharedByRef@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033280 (-VmBusSignalFenceNtSharedByRef@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0031820 (-VmBusSendSignalFenceNtSharedByRef@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0039490 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5C5C (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(int *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  struct DXGCONTEXT *v18; // rdi
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  struct _KEVENT *v24; // rbx
  struct _KEVENT *v25; // rbx
  __int64 v26; // rdx
  volatile signed __int64 *v27; // rcx
  volatile signed __int64 *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  PERESOURCE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  PERESOURCE *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  int *v42; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v44; // rcx
  struct ADAPTER_RENDER *v45; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // esi
  DXGFASTMUTEX *v55; // rbx
  struct DXGADAPTER *v57; // rcx
  DXGADAPTER *v58; // rcx
  unsigned __int8 v60; // bl
  __int64 v61; // r8
  __int64 *ThreadProperty; // rax
  __int64 v63; // rax
  int v64; // r9d
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r9
  DXGFASTMUTEX *v83; // [rsp+40h] [rbp-C0h] BYREF
  char v84; // [rsp+48h] [rbp-B8h]
  PERESOURCE *v85; // [rsp+50h] [rbp-B0h] BYREF
  char v86; // [rsp+58h] [rbp-A8h]
  struct DXGCONTEXT *v87; // [rsp+60h] [rbp-A0h]
  char v88[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h]
  DXGADAPTER *v90; // [rsp+98h] [rbp-68h]
  char v91; // [rsp+A0h] [rbp-60h]
  char v92[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v94; // [rsp+B8h] [rbp-48h]
  char v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h]
  char v97; // [rsp+D0h] [rbp-30h]
  __int64 v98; // [rsp+E0h] [rbp-20h] BYREF
  char v99[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-10h]
  char v101; // [rsp+F8h] [rbp-8h]
  int v102; // [rsp+108h] [rbp+8h]
  _QWORD v103[2]; // [rsp+110h] [rbp+10h] BYREF
  char v104[8]; // [rsp+120h] [rbp+20h] BYREF
  char v105[32]; // [rsp+128h] [rbp+28h] BYREF
  char v106[56]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v107; // [rsp+1C8h] [rbp+C8h] BYREF
  int v108; // [rsp+1D0h] [rbp+D0h]
  __int64 v109; // [rsp+1D8h] [rbp+D8h] BYREF

  v107 = a2;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v12 = *ThreadProperty;
    }
  }
  if ( v12 != -168 && *(struct _KTHREAD **)(v12 + 176) == KeGetCurrentThread() )
  {
    v63 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v63 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v63);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 168, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v64 = *(_DWORD *)(v12 + 184);
      if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v13, &EventBlockThread, v14, v64);
    }
    ExAcquirePushLockSharedEx(v12 + 168, 0LL);
  }
  v15 = (a3 >> 6) & 0xFFFFFF;
  if ( v15 >= *(_DWORD *)(v12 + 208) )
    goto LABEL_98;
  v16 = *(_QWORD *)(v12 + 192);
  v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
  if ( ((a3 >> 26) & 0x30) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30)
    || (v17 & 0x1000) != 0
    || (v17 & 0xF) == 0
    || (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) != 7 )
  {
    goto LABEL_98;
  }
  v18 = *(struct DXGCONTEXT **)(v16 + 16LL * v15);
  v87 = v18;
  if ( !v18 )
    goto LABEL_16;
  _m_prefetchw((char *)v18 + 32);
  v19 = *((_QWORD *)v18 + 4);
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 4, v19 + 1, v19);
      if ( v20 == v19 )
        break;
      if ( !v19 )
        goto LABEL_98;
    }
    v18 = v87;
  }
  else
  {
LABEL_98:
    v18 = 0LL;
    v87 = 0LL;
  }
LABEL_16:
  ExReleasePushLockSharedEx(v12 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v65[3] = v12;
    v54 = -1073741811;
    v65[5] = -1073741811LL;
    v65[4] = 0LL;
    WdLogEvent5_WdError(v65);
    return v54;
  }
  v23 = *((_QWORD *)v18 + 2);
  v102 = 0;
  if ( v23 )
  {
    v24 = *(struct _KEVENT **)(v23 + 16);
    if ( *(_DWORD *)(v23 + 328) == 2 )
    {
      v25 = v24 + 4;
      if ( KeReadStateEvent(v25) )
        goto LABEL_20;
    }
    else
    {
      v25 = v24 + 3;
      if ( KeReadStateEvent(v25) )
      {
LABEL_20:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
          v60 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v61, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 1u);
          if ( v60 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v102 = 1;
        goto LABEL_22;
      }
    }
    KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
    goto LABEL_20;
  }
LABEL_22:
  v26 = *((_QWORD *)v18 + 2);
  v27 = *(volatile signed __int64 **)(*(_QWORD *)(v26 + 16) + 16LL);
  v90 = (DXGADAPTER *)v27;
  v91 = 0;
  if ( v27 )
  {
    _InterlockedIncrement64(v27 + 3);
    v89 = -1LL;
  }
  v28 = *(volatile signed __int64 **)(*(_QWORD *)(v26 + 16) + 16LL);
  v94 = (struct DXGADAPTER *)v28;
  v95 = 0;
  if ( v28 )
  {
    _InterlockedIncrement64(v28 + 3);
    v93 = -1LL;
  }
  v96 = v26;
  v97 = 0;
  COREACCESS::AcquireShared((COREACCESS *)v88);
  if ( *(_DWORD *)(v96 + 408) != 1 )
    goto LABEL_106;
  if ( !v97 || (COREACCESS::AcquireShared((COREACCESS *)v92), *((_DWORD *)v94 + 44) == 1) )
  {
    v32 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v66 = WdLogNewEntry5_WdAssertion(0LL, v29, v30, v31);
      *(_QWORD *)(v66 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v66);
      v32 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    }
    v85 = v32;
    v86 = 0;
    if ( !v32 )
    {
      v67 = WdLogNewEntry5_WdAssertion(0LL, v29, v30, v31);
      *(_QWORD *)(v67 + 24) = 1823LL;
      WdLogEvent5_WdAssertion(v67);
      v32 = v85;
    }
    if ( ExIsResourceAcquiredSharedLite(v32[42]) )
    {
      v68 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
      *(_QWORD *)(v68 + 24) = 1828LL;
      WdLogEvent5_WdAssertion(v68);
    }
    if ( v86 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
      v69[5] = &v85;
      v69[3] = 275LL;
      v69[4] = 4LL;
      v69[6] = 0LL;
      v69[7] = 0LL;
      WdLogEvent5_WdCriticalError(v69);
    }
    v37 = v85;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v37[42], 1u);
    v86 = 1;
    v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v41 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v41 + 144)) )
    {
      v70 = WdLogNewEntry5_WdAssertion(v41, v38, v39, v40);
      *(_QWORD *)(v70 + 24) = 1145LL;
      WdLogEvent5_WdAssertion(v70);
    }
    if ( (*(_BYTE *)(v12 + 275) & 4) != 0 )
    {
      v42 = a1;
    }
    else
    {
      v42 = *(int **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 225LL) )
      {
        v54 = DXGADAPTER::VmBusSendSignalFenceNtSharedByRef(
                (DXGADAPTER *)v41,
                (struct DXGPROCESS *)v12,
                v87,
                a1[2],
                v107);
LABEL_68:
        if ( v86 )
        {
          v86 = 0;
          ExReleaseResourceLite(v85[42]);
          KeLeaveCriticalRegion();
        }
        goto LABEL_70;
      }
    }
    if ( v42[36] != 3 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v41, v38, v39, v40);
      *(_QWORD *)(v71 + 24) = 1172LL;
      WdLogEvent5_WdAssertion(v71);
    }
    v84 = 0;
    v83 = (DXGFASTMUTEX *)(v42 + 8);
    if ( v42 == (int *)-32LL )
    {
      v72 = WdLogNewEntry5_WdAssertion(v41, v38, v39, v40);
      *(_QWORD *)(v72 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v72);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v83 + 1) == CurrentThread )
    {
      v73 = WdLogNewEntry5_WdAssertion(CurrentThread, v38, v39, v40);
      *(_QWORD *)(v73 + 24) = 460LL;
      WdLogEvent5_WdAssertion(v73);
    }
    if ( v84 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v38, v39);
      v74[5] = &v83;
      v74[3] = 275LL;
      v74[4] = 4LL;
      v74[6] = 0LL;
      v74[7] = 0LL;
      WdLogEvent5_WdCriticalError(v74);
    }
    DXGFASTMUTEX::Acquire(v83);
    v84 = 1;
    v44 = *((_QWORD *)v87 + 29);
    v98 = v44;
    v45 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v18 + 2) + 16LL);
    if ( (v42[37] & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v42, v45);
    }
    else
    {
      if ( v45 && *((struct ADAPTER_RENDER **)v42 + 31) != v45 )
        goto LABEL_110;
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v42 + 58);
    }
    if ( DxgAdapterSyncObject )
    {
      if ( (v42[37] & 4) != 0 )
        v47 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                            (DXGSYNCOBJECTCA *)v42,
                            *(struct ADAPTER_RENDER **)(*((_QWORD *)v18 + 2) + 16LL))
              + 4);
      else
        v47 = *((_QWORD *)v42 + 33);
      v109 = v47;
      if ( v47 )
      {
        v48 = *((_QWORD *)v18 + 2);
        v108 = 0;
        v51 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 408LL) + 8LL) + 544LL))(
                1LL,
                &v98,
                1LL,
                &v109,
                0,
                &v107);
        if ( v51 < 0 )
        {
          v77 = WdLogNewEntry5_WdAssertion(v50, v49, v52, v53);
          *(_QWORD *)(v77 + 24) = 1220LL;
          WdLogEvent5_WdAssertion(v77);
        }
        v54 = v51;
      }
      else
      {
        v76 = WdLogNewEntry5_WdError(v44, v45);
        *(_QWORD *)(v76 + 24) = v42;
        WdLogEvent5_WdError(v76);
        v54 = -1073741811;
      }
      goto LABEL_60;
    }
LABEL_110:
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v44, v45);
    v75[3] = v12;
    v54 = -1073741811;
    v75[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 16LL);
    v75[5] = -1073741811LL;
    WdLogEvent5_WdError(v75);
LABEL_60:
    if ( v84 )
    {
      v55 = v83;
      v84 = 0;
      if ( *((struct _KTHREAD **)v83 + 1) != KeGetCurrentThread() )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49, v52);
        v78[3] = 275LL;
        v78[4] = 4LL;
        v78[5] = v55;
        v78[6] = 0LL;
        v78[7] = 0LL;
        WdLogEvent5_WdCriticalError(v78);
      }
      if ( *((int *)v55 + 6) <= 0 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v50, v49, v52, v53);
        *(_QWORD *)(v79 + 24) = 395LL;
        WdLogEvent5_WdAssertion(v79);
      }
      if ( (*((_DWORD *)v55 + 6))-- == 1 )
      {
        *((_QWORD *)v55 + 1) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v55 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_68;
  }
  COREACCESS::Release((COREACCESS *)v92);
LABEL_106:
  COREACCESS::Release((COREACCESS *)v88);
  v54 = -1073741130;
LABEL_70:
  v57 = v94;
  if ( v94 )
  {
    if ( v95 )
    {
      COREACCESS::Release((COREACCESS *)v92);
      v57 = v94;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
  }
  v58 = v90;
  if ( v90 )
  {
    if ( v91 )
    {
      v91 = 0;
      v58 = v90;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v90 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v90);
        v58 = v90;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
  }
  if ( v23 && v102 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v23 + 104));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v80 = *((_QWORD *)v18 + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v103,
      (struct DXGDEVICE *)v80);
    v81 = *((_QWORD *)v18 + 2);
    v101 = 0;
    v100 = *(_QWORD *)(*(_QWORD *)(v81 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, v80, 2LL, v82, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v104);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v80, v87, (struct COREDEVICEACCESS *)v104);
    COREACCESS::~COREACCESS((COREACCESS *)v106);
    COREACCESS::~COREACCESS((COREACCESS *)v105);
    if ( v101 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
    if ( v103[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v103);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v80 + 16), (struct DXGDEVICE *)v80);
  }
  return v54;
}
