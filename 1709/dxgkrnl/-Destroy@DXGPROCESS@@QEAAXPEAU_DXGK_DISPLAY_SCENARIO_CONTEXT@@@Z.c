/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0
 * Callers:
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C0088F9C (--1DXGPROCESS@@AEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001354 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E814 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E840 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0020D18 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0021680 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C0024B7C (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00286B0 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082E60 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089338 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C008A354 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009077C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     VidMmTerminateProcessX @ 0x1C0091E9C (VidMmTerminateProcessX.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchTerminateProcessX @ 0x1C00B2FE4 (VidSchTerminateProcessX.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00F77D4 (OutputDuplProcessTerminate.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00FAB8C (DxgkDestroyCsrssProcess.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00FAECC (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C016EF70 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0173FEC (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0188E04 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0189974 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C018FB28 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01AE004 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C02E0 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  OUTPUTDUPL_SESSION_MGR *v17; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  DXGADAPTER *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  __int64 v23; // rcx
  bool v24; // zf
  unsigned int i; // esi
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct DXGSYNCOBJECT *v28; // rdi
  unsigned int v29; // ebx
  __int64 v30; // rcx
  DXGGLOBAL *v31; // rax
  unsigned int v32; // ebx
  int v33; // edx
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r13
  char v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  void *EntryObject; // rbx
  unsigned int v56; // eax
  unsigned int v57; // ebx
  DXGKEYEDMUTEX *v58; // rcx
  int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rax
  unsigned int v65; // esi
  struct DXGSYNCOBJECT **v66; // rdi
  __int64 v67; // rcx
  DXGGLOBAL *v68; // rax
  unsigned int v69; // esi
  __int64 v70; // rcx
  struct DXGPROCESS *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  char *v74; // rsi
  char *v75; // rbx
  __int64 v76; // rax
  char *v77; // rcx
  __int64 v78; // rcx
  _BOOL8 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rdi
  _QWORD *v82; // rbx
  struct DXGPROCESS *v83; // rbx
  unsigned int v84; // edx
  struct DXGGLOBAL *v85; // rax
  struct VMBCHANNEL__ **v86; // rcx
  struct _MDL *v87; // [rsp+28h] [rbp-D8h]
  char v88; // [rsp+30h] [rbp-D0h] BYREF
  char v89; // [rsp+31h] [rbp-CFh]
  int v90; // [rsp+34h] [rbp-CCh] BYREF
  int v91; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+48h] [rbp-B8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE Resource; // [rsp+58h] [rbp-A8h] BYREF
  char v96[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v97; // [rsp+68h] [rbp-98h]
  char v98; // [rsp+70h] [rbp-90h]
  __int64 v99; // [rsp+78h] [rbp-88h] BYREF
  int v100; // [rsp+80h] [rbp-80h]
  int v101; // [rsp+84h] [rbp-7Ch]
  int v102; // [rsp+88h] [rbp-78h]
  char v103[16]; // [rsp+98h] [rbp-68h] BYREF
  DXGADAPTER *v104; // [rsp+A8h] [rbp-58h]
  char v105; // [rsp+B0h] [rbp-50h]
  char v106[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v107; // [rsp+C8h] [rbp-38h]
  char v108; // [rsp+D0h] [rbp-30h]
  char v109[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v110; // [rsp+E8h] [rbp-18h]
  __int64 v111; // [rsp+F0h] [rbp-10h]
  char v112; // [rsp+F8h] [rbp-8h]
  char v113[8]; // [rsp+100h] [rbp+0h] BYREF
  char v114[32]; // [rsp+108h] [rbp+8h] BYREF
  char v115[56]; // [rsp+128h] [rbp+28h] BYREF
  char v116[8]; // [rsp+160h] [rbp+60h] BYREF
  char v117[32]; // [rsp+168h] [rbp+68h] BYREF
  char v118[40]; // [rsp+188h] [rbp+88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( (*((_BYTE *)this + 307) & 2) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    DXGGLOBAL::IterateAdaptersWithCallback(Global, DestroyProcessCallback, this, 2LL);
  }
  while ( *((_DWORD *)this + 80) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C0060DC0 && qword_1C0060DC0 == *((_QWORD *)this + 7) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  v89 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v88);
  if ( *((_BYTE *)this + 304) && (*((_BYTE *)this + 307) & 8) == 0 )
    DxgkDestroyCsrssProcess();
  v4 = (_QWORD *)((char *)this + 256);
  if ( (_QWORD *)*v4 != v4 )
  {
    DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( (_QWORD *)*v4 != v4 )
    {
      if ( *v4 )
        v36 = *v4 - 24LL;
      else
        v36 = 0LL;
      v37 = *(_QWORD *)(v36 + 16);
      v38 = *(_QWORD *)(v37 + 16);
      if ( *(_QWORD *)(v36 + 1672) )
        OutputDuplProcessTerminate(0LL, *(_QWORD *)(v37 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, v36, 2, v35, 0);
      v39 = *(_QWORD *)(v38 + 2312);
      if ( *(_DWORD *)(v36 + 328) == 2 )
      {
        v40 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v39 + 40, 0LL);
        *(_QWORD *)(v39 + 48) = KeGetCurrentThread();
      }
      else
      {
        v40 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v39 + 24, 0LL);
        *(_QWORD *)(v39 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v113);
      if ( !*(_QWORD *)(v38 + 2312) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v44 + 24) = 1429LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 176LL) == 4 )
      {
        v45 = *(_QWORD *)(v36 + 24);
        v46 = v36 + 24;
        if ( *(_QWORD *)(v45 + 8) != v46 || (v47 = *(_QWORD **)(v46 + 8), *v47 != v46) )
          __fastfail(3u);
        *v47 = v45;
        *(_QWORD *)(v45 + 8) = v47;
      }
      else
      {
        if ( !*(_BYTE *)(v38 + 185) && *(_DWORD *)(v36 + 408) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v113);
          v97 = v38;
          v98 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
          if ( *(_DWORD *)(v38 + 176) == 1 )
            DXGDEVICE::FlushScheduler(v36, 4LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v113);
          if ( v98 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v96);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v38 + 2312), (struct DXGDEVICE *)v36, 0LL);
      }
      if ( v40 )
        v42 = v39 + 40;
      else
        v42 = v39 + 24;
      *(_QWORD *)(v42 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v42, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v115);
      COREACCESS::~COREACCESS((COREACCESS *)v114);
    }
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v48 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v48 + 24) = 2987LL;
    WdLogEvent5_WdWarning(v48);
    goto LABEL_16;
  }
  v104 = 0LL;
  v105 = 0;
  v107 = 0LL;
  v108 = 0;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v11[3] = 1LL;
    v11[4] = 0LL;
    v11[5] = 0LL;
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 73);
  if ( !v14
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId)) == 0LL) )
  {
    v49 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v49 + 24) = 3034LL;
    goto LABEL_90;
  }
  v17 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v17 )
  {
    v49 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v49 + 24) = 3041LL;
LABEL_90:
    WdLogEvent5_WdError(v49);
    goto LABEL_14;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
  OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v17, CurrentProcess);
LABEL_14:
  v19 = v107;
  if ( v107 )
  {
    if ( v108 )
    {
      COREACCESS::Release((COREACCESS *)v106);
      v19 = v107;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v19);
  }
  v20 = (__int64)v104;
  if ( v104 )
  {
    if ( v105 )
    {
      COREACCESS::Release((COREACCESS *)v103);
      v20 = (__int64)v104;
    }
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v20);
  }
LABEL_16:
  v21 = (_QWORD *)((char *)this + 280);
  if ( (_QWORD *)*v21 != v21 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 37));
    while ( (_QWORD *)*v21 != v21 )
    {
      v50 = *v21 - 24LL;
      if ( !*v21 )
        v50 = 0LL;
      v51 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL);
      v111 = v51;
      v112 = 0;
      if ( v51 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v51 + 24));
        v110 = -1LL;
      }
      COREACCESS::AcquireShared((COREACCESS *)v109);
      if ( !*(_QWORD *)(v51 + 2304) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v52);
        *(_QWORD *)(v53 + 24) = 1504LL;
        WdLogEvent5_WdAssertion(v53);
      }
      if ( *(_DWORD *)(v51 + 176) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v50);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v51 + 2304),
          *(_DWORD *)(v50 + 52),
          *(_DWORD *)(v50 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v109);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 37));
  }
  v22 = (_QWORD *)((char *)this + 224);
  if ( *((_DWORD *)this + 61) != *((_DWORD *)this + 60) )
  {
    for ( i = 0; i < *((_DWORD *)this + 60); ++i )
    {
      if ( i >= *((_DWORD *)this + 60) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v54 + 24) = 211LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v20 = *(_DWORD *)(*v22 + 16LL * i + 8) & 0x1F;
      if ( (unsigned int)v20 >= 8 )
      {
        v26 = (unsigned int)(v20 - 8);
        if ( (_DWORD)v26 )
        {
          v20 = (unsigned int)(v26 - 1);
          if ( (_DWORD)v20 )
          {
            if ( (_DWORD)v20 == 5 )
            {
              EntryObject = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 224), i);
              v56 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), i);
              DXGPROTECTEDSESSION::DestroyProtectedSession(EntryObject, v56);
            }
          }
          else
          {
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 224), i);
            v57 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), i);
            DXGKEYEDMUTEX::SignalAbandoned(v58, v57, v59);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v57) )
            {
              v60 = WdLogNewEntry5_WdAssertion(v20);
              *(_QWORD *)(v60 + 24) = 1563LL;
              WdLogEvent5_WdAssertion(v60);
            }
          }
        }
        else if ( (*((_BYTE *)this + 307) & 4) != 0 )
        {
          v63 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), i);
          DXGPROCESS::FreeHandleSafe(this, v63);
        }
        else
        {
          if ( i >= *((_DWORD *)this + 60) )
          {
            v61 = WdLogNewEntry5_WdAssertion(v26);
            *(_QWORD *)(v61 + 24) = 227LL;
            WdLogEvent5_WdAssertion(v61);
          }
          v27 = *(unsigned int *)(*v22 + 16LL * i + 8);
          if ( (v27 & 0x1F) == 0 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v27);
            *(_QWORD *)(v62 + 24) = 228LL;
            WdLogEvent5_WdAssertion(v62);
          }
          v28 = *(struct DXGSYNCOBJECT **)(*v22 + 16LL * i);
          v29 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), i);
          v31 = DXGGLOBAL::GetGlobal(v30);
          DXGGLOBAL::DestroySyncObject(v31, v28, v29);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 61) != *((_DWORD *)this + 60) )
  {
    v32 = 0;
    if ( *((_DWORD *)this + 60) )
    {
      while ( 1 )
      {
        if ( v32 >= *((_DWORD *)this + 60) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v64 + 24) = 211LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v20 = 2LL * v32;
        v33 = *(_DWORD *)(*v22 + 16LL * v32 + 8) & 0x1F;
        if ( !v33 )
          break;
        if ( v33 == 1 )
        {
          v34 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), v32);
          DXGADAPTER::DestroyHandle(this, v34);
        }
        else
        {
          v20 = (unsigned int)(v33 - 12);
          if ( v33 == 12 )
          {
            v69 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), v32);
            v71 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 224), v32);
            if ( (*((_BYTE *)v71 + 307) & 8) == 0 )
            {
              v72 = WdLogNewEntry5_WdAssertion(v70);
              *(_QWORD *)(v72 + 24) = 1607LL;
              WdLogEvent5_WdAssertion(v72);
            }
            v92 = 0LL;
            CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v92, v71);
            if ( v92 )
              DXGPROCESS::DestroyDxgProcess(v71);
            else
              DXGPROCESS::FreeHandleSafe(this, v69);
            CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v92);
            goto LABEL_45;
          }
          if ( v33 != 13 )
            break;
          v65 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 224), v32);
          v66 = (struct DXGSYNCOBJECT **)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 224), v32);
          v68 = DXGGLOBAL::GetGlobal(v67);
          DXGGLOBAL::DestroySyncObject(v68, *v66, 0);
          ExFreePoolWithTag(v66, 0);
          DXGPROCESS::FreeHandleSafe(this, v65);
        }
LABEL_45:
        if ( ++v32 >= *((_DWORD *)this + 60) )
          goto LABEL_19;
      }
      if ( v33 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v73 + 24) = 1628LL;
        WdLogEvent5_WdAssertion(v73);
      }
      goto LABEL_45;
    }
  }
LABEL_19:
  if ( (*((_BYTE *)this + 307) & 4) != 0 )
  {
    KeStackAttachProcess(*((PRKPROCESS *)this + 6), &ApcState);
    v74 = (char *)this + 376;
    while ( 1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 512, 0LL);
      *((_QWORD *)this + 65) = KeGetCurrentThread();
      v75 = *(char **)v74;
      if ( *(char **)(*(_QWORD *)v74 + 8LL) != v74 || (v76 = *(_QWORD *)v75, *(char **)(*(_QWORD *)v75 + 8LL) != v75) )
        __fastfail(3u);
      *(_QWORD *)v74 = v76;
      *(_QWORD *)(v76 + 8) = v74;
      v77 = (char *)this + 512;
      if ( v75 == v74 )
        break;
      *(_QWORD *)v75 = 0LL;
      *((_QWORD *)v75 + 1) = 0LL;
      *((_QWORD *)this + 65) = 0LL;
      ExReleasePushLockExclusiveEx(v77, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::COREADAPTERACCESS(
        (COREADAPTERACCESS *)v116,
        *(struct DXGADAPTER *const *)(*((_QWORD *)v75 - 20) + 16LL),
        0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v116) >= 0 )
      {
        v78 = *((_QWORD *)v75 - 20);
        v79 = *(v75 - 64) != 0;
        v90 = *((_DWORD *)v75 - 36);
        ADAPTER_RENDER::ResetVirtualFunction(v78, v79, &v90);
        v80 = *((_QWORD *)v75 - 20);
        v91 = *((_DWORD *)v75 - 36);
        ADAPTER_RENDER::DestroyVirtualGpu(v80, 1LL, &v91);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v118);
      COREACCESS::~COREACCESS((COREACCESS *)v117);
    }
    *((_QWORD *)this + 65) = 0LL;
    ExReleasePushLockExclusiveEx(v77, 0LL);
    KeLeaveCriticalRegion();
    v81 = (_QWORD *)((char *)this + 392);
    while ( (_QWORD *)*v81 != v81 )
    {
      v82 = (_QWORD *)*v81;
      v93 = 0LL;
      v83 = (struct DXGPROCESS *)(v82 - 49);
      if ( v83 )
        CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v93, v83);
      DXGPROCESS::DestroyDxgProcess(v83);
      CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v93);
    }
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXGPROCESS *)((char *)this + 456));
    KeUnstackDetachProcess(&ApcState);
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v88);
  if ( (*((_BYTE *)this + 307) & 8) != 0 )
  {
    v84 = *((_DWORD *)this + 107);
    if ( v84 )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 55), v84);
      *((_DWORD *)this + 107) = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 55) + 448LL));
    DXGPROCESS::ReleaseReferenceSafe(*((__int64 **)this + 55));
    *((_QWORD *)this + 55) = 0LL;
  }
  v24 = *((_DWORD *)this + 106) == 0;
  *((_DWORD *)this + 8) = 2;
  if ( !v24 )
  {
    v85 = DXGGLOBAL::GetGlobal(v23);
    v100 = *((_DWORD *)this + 106);
    v99 = 0LL;
    v86 = (struct VMBCHANNEL__ **)*((_QWORD *)v85 + 142);
    v101 = 1;
    v102 = 49;
    VmBusSendSyncMessage(*v86, (struct DXGKVMB_COMMAND_BASE *)&v99, 0x18u, 0LL, 0LL, v87);
    *((_DWORD *)this + 106) = 0;
  }
  if ( v89 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v88);
}
