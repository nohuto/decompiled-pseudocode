/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C00D6914 (--1DXGPROCESS@@AEAA@XZ.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001BB8 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0022EFC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00232E0 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?RemoveNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AAA0 (-RemoveNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendDestroyProcess@@YAXI@Z @ 0x1C002FF88 (-VmBusSendDestroyProcess@@YAXI@Z.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0038520 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008BFBC (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00A3D28 (OutputDuplProcessTerminate.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00A6DA8 (DxgkDestroyCsrssProcess.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CF778 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D5FD4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00D7354 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C00DDE5C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     VidSchTerminateProcessX @ 0x1C00FA5D0 (VidSchTerminateProcessX.c)
 *     VidMmTerminateProcessX @ 0x1C00FEF38 (VidMmTerminateProcessX.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C016B2F0 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01708E8 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01981A4 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A65A0 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGSESSIONMGR *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGFASTMUTEX *const *v29; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  DXGADAPTER *v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  _QWORD *v39; // r14
  int v40; // ecx
  unsigned int i; // edi
  __int64 v42; // rcx
  struct DXGSYNCOBJECT *v43; // rsi
  unsigned int v44; // ebx
  DXGGLOBAL *v45; // rcx
  unsigned int v46; // esi
  unsigned int v47; // eax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r9
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r14
  __int64 v55; // r13
  char v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rsi
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned int v79; // ebx
  DXGKEYEDMUTEX *v80; // rcx
  int v81; // r8d
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned int v88; // edi
  struct DXGSYNCOBJECT **v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  DXGGLOBAL *Global; // rax
  unsigned int v95; // edi
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct DXGPROCESS *EntryObject; // rbx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rax
  struct DXGGLOBAL *v103; // rax
  __int64 **v104; // rsi
  __int64 *v105; // rbx
  __int64 v106; // rax
  char *v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  ADAPTER_RENDER *v110; // rcx
  PERESOURCE Resource; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v112[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+40h] [rbp-C0h]
  char v114; // [rsp+48h] [rbp-B8h]
  _BYTE v115[16]; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v116; // [rsp+68h] [rbp-98h]
  char v117; // [rsp+70h] [rbp-90h]
  _BYTE v118[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v119; // [rsp+88h] [rbp-78h]
  char v120; // [rsp+90h] [rbp-70h]
  _BYTE v121[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-58h]
  __int64 v123; // [rsp+B0h] [rbp-50h]
  char v124; // [rsp+B8h] [rbp-48h]
  _BYTE v125[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v126[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v127[56]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v128[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v129[32]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v130[40]; // [rsp+148h] [rbp+48h] BYREF
  struct _DXGKARG_DESTROYVIRTUALGPU v131; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v132; // [rsp+1C0h] [rbp+C0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+1C8h] [rbp+C8h] BYREF

  while ( *((_DWORD *)this + 71) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C006FF38 && qword_1C006FF38 == *((_QWORD *)this + 7) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)this + 272) && (*((_BYTE *)this + 275) & 4) == 0 )
    DxgkDestroyCsrssProcess();
  v7 = (_QWORD *)((char *)this + 224);
  if ( (_QWORD *)*v7 != v7 )
  {
    DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2, v5, v6);
    while ( (_QWORD *)*v7 != v7 )
    {
      if ( *v7 )
        v51 = *v7 - 24LL;
      else
        v51 = 0LL;
      v52 = *(_QWORD *)(v51 + 16);
      v53 = *(_QWORD *)(v51 + 1800);
      v54 = *(_QWORD *)(v52 + 16);
      if ( v53 )
        OutputDuplProcessTerminate(0LL, *(PERESOURCE **)(v52 + 16), v53, v50);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v125, v51, 2LL, v50, 0);
      v55 = *(_QWORD *)(v54 + 2288);
      if ( *(_DWORD *)(v51 + 328) == 2 )
      {
        v56 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v55 + 40, 0LL);
        *(_QWORD *)(v55 + 48) = KeGetCurrentThread();
      }
      else
      {
        v56 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v55 + 24, 0LL);
        *(_QWORD *)(v55 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v125);
      if ( !*(_QWORD *)(v54 + 2288) )
      {
        v62 = WdLogNewEntry5_WdAssertion(v58, v57, v59, v60);
        *(_QWORD *)(v62 + 24) = 1389LL;
        WdLogEvent5_WdAssertion(v62);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 16) + 16LL) + 176LL) == 4 )
      {
        v63 = *(_QWORD *)(v51 + 24);
        v64 = v51 + 24;
        v65 = *(_QWORD **)(v64 + 8);
        if ( *(_QWORD *)(v63 + 8) != v64 || *v65 != v64 )
          __fastfail(3u);
        *v65 = v63;
        *(_QWORD *)(v63 + 8) = v65;
      }
      else
      {
        if ( !*(_BYTE *)(v54 + 186) && *(_DWORD *)(v51 + 408) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v125);
          v113 = v54;
          v114 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
          if ( *(_DWORD *)(v54 + 176) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v51, 4);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v125);
          if ( v114 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v54 + 2288), (struct DXGDEVICE *)v51, 0LL);
      }
      if ( v56 )
        v61 = v55 + 40;
      else
        v61 = v55 + 24;
      *(_QWORD *)(v61 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v61, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v127);
      COREACCESS::~COREACCESS((COREACCESS *)v126);
    }
  }
  if ( !DXGPROCESS::GetCurrent(v4) )
  {
    v66 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v66 + 24) = 2906LL;
    WdLogEvent5_WdWarning(v66);
    goto LABEL_14;
  }
  v116 = 0LL;
  v117 = 0;
  v119 = 0LL;
  v120 = 0;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v17[3] = 1LL;
    v17[4] = 0LL;
    v17[5] = 0LL;
  }
  v24 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18, v20, v21) + 73);
  if ( !v24
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v23, v22, v25, v26),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v24, CurrentProcessSessionId)) == 0LL) )
  {
    v67 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v67 + 24) = 2953LL;
    goto LABEL_90;
  }
  v29 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v29 )
  {
    v67 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v67 + 24) = 2960LL;
LABEL_90:
    WdLogEvent5_WdError(v67);
    goto LABEL_12;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v23);
  OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v29, CurrentProcess, v31, v32);
LABEL_12:
  v36 = v119;
  if ( v119 )
  {
    if ( v120 )
    {
      COREACCESS::Release((COREACCESS *)v118);
      v36 = v119;
    }
    DXGADAPTER::ReleaseReference(v36);
  }
  v37 = (__int64)v116;
  if ( v116 )
  {
    if ( v117 )
    {
      COREACCESS::Release((COREACCESS *)v115);
      v37 = (__int64)v116;
    }
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v37);
  }
LABEL_14:
  v38 = (_QWORD *)((char *)this + 248);
  if ( (_QWORD *)*v38 != v38 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 33));
    while ( (_QWORD *)*v38 != v38 )
    {
      v71 = *v38 - 24LL;
      if ( !*v38 )
        v71 = 0LL;
      v72 = *(_QWORD *)(*(_QWORD *)(v71 + 16) + 16LL);
      v123 = v72;
      v124 = 0;
      if ( v72 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v72 + 24));
        v122 = -1LL;
      }
      COREACCESS::AcquireShared((COREACCESS *)v121);
      if ( !*(_QWORD *)(v72 + 2280) )
      {
        v77 = WdLogNewEntry5_WdAssertion(v74, v73, v75, v76);
        *(_QWORD *)(v77 + 24) = 1464LL;
        WdLogEvent5_WdAssertion(v77);
      }
      if ( *(_DWORD *)(v72 + 176) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, (struct DXGCOPYPROTECTION *)v71, v75, v76);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v72 + 2280),
          *(_DWORD *)(v71 + 52),
          *(_DWORD *)(v71 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v121);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 33), v68, v69, v70);
  }
  v39 = (_QWORD *)((char *)this + 192);
  if ( *((_DWORD *)this + 53) != *((_DWORD *)this + 52) )
  {
    for ( i = 0; i < *((_DWORD *)this + 52); ++i )
    {
      if ( i >= *((_DWORD *)this + 52) )
      {
        v78 = WdLogNewEntry5_WdAssertion(v37, v33, v34, v35);
        *(_QWORD *)(v78 + 24) = 211LL;
        WdLogEvent5_WdAssertion(v78);
      }
      if ( (*(_DWORD *)(*v39 + 16LL * i + 8) & 0xF) == 8 )
      {
        if ( i >= *((_DWORD *)this + 52) )
        {
          v83 = WdLogNewEntry5_WdAssertion(v37, v33, v34, v35);
          *(_QWORD *)(v83 + 24) = 227LL;
          WdLogEvent5_WdAssertion(v83);
        }
        v42 = *(unsigned int *)(*v39 + 16LL * i + 8);
        if ( (v42 & 0xF) == 0 )
        {
          v84 = WdLogNewEntry5_WdAssertion(v42, v33, v34, v35);
          *(_QWORD *)(v84 + 24) = 228LL;
          WdLogEvent5_WdAssertion(v84);
        }
        v43 = *(struct DXGSYNCOBJECT **)(*v39 + 16LL * i);
        if ( i >= *((_DWORD *)this + 52) )
        {
          v85 = WdLogNewEntry5_WdAssertion(v42, v33, v34, v35);
          *(_QWORD *)(v85 + 24) = 195LL;
          WdLogEvent5_WdAssertion(v85);
        }
        v44 = (*(_DWORD *)(*v39 + 16LL * i + 8) >> 6) & 0x3F | (((*(_DWORD *)(*v39 + 16LL * i + 8) << 20) ^ (i ^ (*(_DWORD *)(*v39 + 16LL * i + 8) << 20)) & 0xFFFFFF) << 6);
        v45 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v86 = WdLogNewEntry5_WdAssertion(0LL, v33, v34, v35);
          *(_QWORD *)(v86 + 24) = 1815LL;
          WdLogEvent5_WdAssertion(v86);
          v45 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
        }
        DXGGLOBAL::DestroySyncObject(v45, v43, v44);
      }
      else if ( (*(_DWORD *)(*v39 + 16LL * i + 8) & 0xF) == 9 )
      {
        HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 192), i);
        v79 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 192), i);
        DXGKEYEDMUTEX::SignalAbandoned(v80, v79, v81);
        if ( !DXGKEYEDMUTEX::DestroyHandle(v79) )
        {
          v82 = WdLogNewEntry5_WdAssertion(v37, v33, v34, v35);
          *(_QWORD *)(v82 + 24) = 1511LL;
          WdLogEvent5_WdAssertion(v82);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 53) != *((_DWORD *)this + 52) )
  {
    v46 = 0;
    if ( *((_DWORD *)this + 52) )
    {
      while ( 1 )
      {
        if ( v46 >= *((_DWORD *)this + 52) )
        {
          v87 = WdLogNewEntry5_WdAssertion(v37, v33, v34, v35);
          *(_QWORD *)(v87 + 24) = 211LL;
          WdLogEvent5_WdAssertion(v87);
        }
        v37 = 2LL * v46;
        v33 = *(_DWORD *)(*v39 + 16LL * v46 + 8) & 0xF;
        if ( !(_DWORD)v33 )
          break;
        if ( (_DWORD)v33 == 1 )
        {
          v47 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 192), v46);
          DXGADAPTER::DestroyHandle(this, v47, v48, v49);
        }
        else
        {
          v37 = (unsigned int)(v33 - 12);
          if ( (_DWORD)v33 == 12 )
          {
            v95 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 192), v46);
            EntryObject = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 192), v46);
            if ( (*((_BYTE *)EntryObject + 275) & 4) == 0 )
            {
              v101 = WdLogNewEntry5_WdAssertion(v97, v96, v99, v100);
              *(_QWORD *)(v101 + 24) = 1549LL;
              WdLogEvent5_WdAssertion(v101);
            }
            v132 = 0LL;
            CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v132, EntryObject);
            if ( v132 )
              DXGPROCESS::DestroyDxgProcess(EntryObject);
            else
              DXGPROCESS::FreeHandleSafe(this, v95);
            CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v132);
            goto LABEL_45;
          }
          if ( (_DWORD)v33 != 13 )
            break;
          v88 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 192), v46);
          v89 = (struct DXGSYNCOBJECT **)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 192), v46);
          Global = DXGGLOBAL::GetGlobal(v91, v90, v92, v93);
          DXGGLOBAL::DestroySyncObject(Global, v89[2], 0);
          DXGPROCESS::RemoveNtSharedObject(this, (struct _LIST_ENTRY *)v89);
          ExFreePoolWithTag(v89, 0);
          DXGPROCESS::FreeHandleSafe(this, v88);
        }
LABEL_45:
        if ( ++v46 >= *((_DWORD *)this + 52) )
          goto LABEL_17;
      }
      if ( (_DWORD)v33 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v37, v33, v34, v35);
        *(_QWORD *)(v102 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v102);
      }
      goto LABEL_45;
    }
  }
LABEL_17:
  if ( (*((_BYTE *)this + 275) & 1) != 0 )
  {
    v103 = DXGGLOBAL::GetGlobal(v37, v33, v34, v35);
    DXGGLOBAL::IterateAdaptersWithCallback(v103, DestroyProcessCallback, this, 2LL);
  }
  if ( (*((_BYTE *)this + 275) & 2) != 0 )
  {
    v104 = (__int64 **)((char *)this + 336);
    while ( 1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 464, 0LL);
      *((_QWORD *)this + 59) = KeGetCurrentThread();
      v105 = *v104;
      v106 = **v104;
      if ( (__int64 **)(*v104)[1] != v104 || *(__int64 **)(v106 + 8) != v105 )
        __fastfail(3u);
      *v104 = (__int64 *)v106;
      *(_QWORD *)(v106 + 8) = v104;
      v107 = (char *)this + 464;
      if ( v105 == (__int64 *)v104 )
        break;
      *v105 = 0LL;
      v105[1] = 0LL;
      *((_QWORD *)this + 59) = 0LL;
      ExReleasePushLockExclusiveEx(v107, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::COREADAPTERACCESS(
        (COREADAPTERACCESS *)v128,
        *(struct DXGADAPTER *const *)(*(v105 - 12) + 16),
        0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v128) >= 0 )
      {
        v110 = (ADAPTER_RENDER *)*(v105 - 12);
        v131.PartitionId = *((_DWORD *)v105 - 20);
        ADAPTER_RENDER::DestroyVirtualGpu(v110, &v131, v108, v109);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v130);
      COREACCESS::~COREACCESS((COREACCESS *)v129);
    }
    *((_QWORD *)this + 59) = 0LL;
    ExReleasePushLockExclusiveEx(v107, 0LL);
    KeLeaveCriticalRegion();
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  KeLeaveCriticalRegion();
  v40 = *((_DWORD *)this + 96);
  *((_DWORD *)this + 8) = 2;
  if ( v40 )
  {
    VmBusSendDestroyProcess(v40);
    *((_DWORD *)this + 96) = 0;
  }
}
