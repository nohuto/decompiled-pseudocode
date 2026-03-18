/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F79B0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C01740E8 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AECC (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AEF8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C001AC80 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0028020 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003323C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C009C42C (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CB0C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A59D4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00AA958 (OutputDuplProcessTerminate.c)
 *     VidMmTerminateProcessX @ 0x1C00C0764 (VidMmTerminateProcessX.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00D2540 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     VidSchTerminateProcessX @ 0x1C00D6E90 (VidSchTerminateProcessX.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00F8124 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00F8618 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C01473BC (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0152B5C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A82A8 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B6688 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C01B6788 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B748C (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7CA0 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BA850 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C1570 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01D0F50 (DxgkDestroyCsrssProcess.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E7970 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2, char a3)
{
  int v3; // eax
  char v4; // r12
  __int64 v7; // r9
  _QWORD *v8; // r15
  __int64 v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  unsigned int v16; // r14d
  unsigned int i; // r14d
  DXGSYNCOBJECT *EntryObject; // rbx
  __int64 v19; // rcx
  unsigned int v20; // r15d
  DXGGLOBAL *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // r13
  int v28; // r12d
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  void *v42; // rbx
  unsigned int v43; // eax
  unsigned int v44; // ebx
  DXGKEYEDMUTEX *v45; // rcx
  int v46; // r8d
  __int64 v47; // rax
  PERESOURCE *Global; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // ebx
  void *v52; // rax
  unsigned int v53; // r15d
  __int64 v54; // rcx
  struct DXGPROCESS *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  DXGSESSIONMGR *v59; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  DXGSESSIONMGR *v64; // rbx
  unsigned int v65; // eax
  DXGSESSIONDATA *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  struct DXGGLOBAL *v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rax
  struct DXGGLOBAL *v74; // rax
  struct VMBCHANNEL__ **v75; // rcx
  struct _MDL *v76; // [rsp+28h] [rbp-B1h]
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-A9h] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v79[16]; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v80[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v81; // [rsp+58h] [rbp-81h]
  char v82; // [rsp+60h] [rbp-79h]
  __int64 v83; // [rsp+68h] [rbp-71h] BYREF
  int v84; // [rsp+70h] [rbp-69h]
  int v85; // [rsp+74h] [rbp-65h]
  int v86; // [rsp+78h] [rbp-61h]
  DXGADAPTER *v87[3]; // [rsp+80h] [rbp-59h] BYREF
  char v88; // [rsp+98h] [rbp-41h]
  _BYTE v89[8]; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE v90[32]; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v91[104]; // [rsp+C8h] [rbp-11h] BYREF
  char v92; // [rsp+140h] [rbp+67h] BYREF
  char v93; // [rsp+141h] [rbp+68h]
  char v94; // [rsp+150h] [rbp+77h]
  __int64 v95; // [rsp+158h] [rbp+7Fh] BYREF

  v94 = a3;
  v3 = *((_DWORD *)this + 84);
  v4 = a3;
  while ( v3 )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    v3 = *((_DWORD *)this + 84);
  }
  if ( qword_1C007AED8 && qword_1C007AED8 == *((_QWORD *)this + 8) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  v93 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v92);
  if ( *((_BYTE *)this + 320) && (*((_BYTE *)this + 323) & 8) == 0 )
    DxgkDestroyCsrssProcess();
  v8 = (_QWORD *)((char *)this + 272);
  if ( (_QWORD *)*v8 != v8 )
  {
    if ( !v4 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( (_QWORD *)*v8 != v8 )
    {
      v23 = (*v8 - 24LL) & -(__int64)(*v8 != 0LL);
      v24 = *(_QWORD *)(v23 + 0x10);
      v25 = *(_QWORD *)(v23 + 0x698);
      v26 = *(_QWORD *)(v24 + 16);
      if ( v25 )
        OutputDuplProcessTerminate(0LL, *(PERESOURCE **)(v24 + 16), v25);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, v23, 2, v7, 0);
      v27 = *(_QWORD *)(v26 + 2464);
      v28 = *(_DWORD *)(v23 + 328);
      KeEnterCriticalRegion();
      if ( v28 == 2 )
      {
        ExAcquirePushLockExclusiveEx(v27 + 40, 0LL);
        *(_QWORD *)(v27 + 48) = KeGetCurrentThread();
      }
      else
      {
        ExAcquirePushLockExclusiveEx(v27 + 24, 0LL);
        *(_QWORD *)(v27 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v89);
      if ( !*(_QWORD *)(v26 + 2464) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v31 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v31);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 176LL) == 4 )
      {
        v32 = v23 + 24;
        v33 = -v23;
        v34 = v32 & -(__int64)(v33 != 0);
        v35 = *(_QWORD *)v34;
        if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34
          || (v36 = *(_QWORD **)((v32 & -(__int64)(v33 != 0)) + 8), *v36 != v34) )
        {
          __fastfail(3u);
        }
        *v36 = v35;
        *(_QWORD *)(v35 + 8) = v36;
      }
      else
      {
        if ( !*(_BYTE *)(v26 + 185) && *(_DWORD *)(v23 + 424) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v89);
          v81 = v26;
          v82 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
          if ( *(_DWORD *)(v26 + 176) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v23, 4u);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v89);
          if ( v82 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v26 + 2464), (struct DXGDEVICE *)v23, 0LL);
      }
      v30 = v27 + 40;
      if ( v28 != 2 )
        v30 = v27 + 24;
      *(_QWORD *)(v30 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v91);
      COREACCESS::~COREACCESS((COREACCESS *)v90);
    }
    v4 = v94;
  }
  OutputDuplProcessTerminate(1LL, 0LL, 0LL);
  v10 = (_QWORD *)((char *)this + 296);
  if ( (_QWORD *)*v10 != v10 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 39));
    while ( (_QWORD *)*v10 != v10 )
    {
      v37 = (*v10 - 24LL) & -(__int64)(*v10 != 0LL);
      v38 = *(_QWORD *)(*(_QWORD *)(v37 + 0x10) + 16LL);
      v87[2] = (DXGADAPTER *)v38;
      v88 = 0;
      if ( v38 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24));
        v87[1] = (DXGADAPTER *)-1LL;
      }
      COREACCESS::AcquireShared(v87);
      if ( !*(_QWORD *)(v38 + 2456) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v40 + 24) = 1644LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( *(_DWORD *)(v38 + 176) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v37);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v38 + 2456),
          *(_DWORD *)(v37 + 52),
          *(_DWORD *)(v37 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v87);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 39));
  }
  if ( (*((_BYTE *)this + 323) & 4) != 0 )
    DXGVIRTUALMACHINE::PauseVmBusChannels(*((DXGVIRTUALMACHINE **)this + 57));
  v11 = (_QWORD *)((char *)this + 232);
  v12 = *((_DWORD *)this + 63);
  if ( v12 != *((_DWORD *)this + 62) )
  {
    v16 = 0;
    if ( *((_DWORD *)this + 62) )
    {
      do
      {
        if ( v16 >= *((_DWORD *)this + 62) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v9);
          *(_QWORD *)(v41 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v41);
        }
        v9 = 2LL * v16;
        switch ( *(_DWORD *)(*v11 + 16LL * v16 + 8) & 0x1F )
        {
          case 8:
            EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v16);
            v20 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v16);
            if ( (*((_BYTE *)this + 323) & 4) != 0 )
            {
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v19);
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v79, Global);
              DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v79);
              DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
              *((_DWORD *)EntryObject + 18) = 0;
              DXGPROCESS::FreeHandleSafe(this, v20);
              if ( v79[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v79);
            }
            else
            {
              v21 = DXGGLOBAL::GetGlobal(v19);
              DXGGLOBAL::DestroySyncObject(v21, EntryObject, v20);
            }
            break;
          case 9:
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v16);
            v44 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v16);
            DXGKEYEDMUTEX::SignalAbandoned(v45, v44, v46);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v44) )
            {
              v47 = WdLogNewEntry5_WdAssertion(v9);
              *(_QWORD *)(v47 + 24) = 1716LL;
              WdLogEvent5_WdAssertion(v47);
            }
            break;
          case 14:
            v42 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v16);
            v43 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v16);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v42, v43);
            break;
        }
        ++v16;
      }
      while ( v16 < *((_DWORD *)this + 62) );
      v12 = *((_DWORD *)this + 63);
    }
    if ( v12 != *((_DWORD *)this + 62) )
    {
      for ( i = 0; i < *((_DWORD *)this + 62); ++i )
      {
        if ( i >= *((_DWORD *)this + 62) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v9);
          *(_QWORD *)(v49 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v49);
        }
        if ( (*(_DWORD *)(*v11 + 16LL * i + 8) & 0x1F) == 1 )
        {
          v22 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), i);
          DXGADAPTER::DestroyHandle((struct _KTHREAD **)this, v22);
        }
        else
        {
          v9 = (*(_DWORD *)(*v11 + 16LL * i + 8) & 0x1Fu) - 12;
          if ( (*(_DWORD *)(*v11 + 16LL * i + 8) & 0x1F) == 0xC )
          {
            v53 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), i);
            v55 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), i);
            if ( (*((_BYTE *)v55 + 323) & 8) == 0 )
            {
              v56 = WdLogNewEntry5_WdAssertion(v54);
              *(_QWORD *)(v56 + 24) = 1759LL;
              WdLogEvent5_WdAssertion(v56);
            }
            v95 = 0LL;
            CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v95, v55);
            if ( v95 )
              DXGPROCESS::DestroyDxgProcess(v55);
            else
              DXGPROCESS::FreeHandleSafe(this, v53);
            CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v95);
          }
          else if ( (*(_DWORD *)(*v11 + 16LL * i + 8) & 0x1F) == 0xD )
          {
            v51 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), i);
            v52 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), i);
            DXGSHAREDVMOBJECT::ReleaseReference(v52);
            DXGPROCESS::FreeHandleSafe(this, v51);
          }
          else if ( (*(_DWORD *)(*v11 + 16LL * i + 8) & 0x1F) != 0 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v9);
            *(_QWORD *)(v50 + 24) = 1780LL;
            WdLogEvent5_WdAssertion(v50);
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 55) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 55) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v57 + 24) = 1793LL;
      WdLogEvent5_WdAssertion(v57);
    }
  }
  if ( *((_BYTE *)this + 448) )
  {
    v59 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9) + 74);
    if ( v59 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v58);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v59, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v62 = WdLogNewEntry5_WdAssertion(v58);
      *(_QWORD *)(v62 + 24) = 1801LL;
      WdLogEvent5_WdAssertion(v62);
    }
    v64 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v58) + 74);
    if ( v64 )
    {
      v65 = PsGetCurrentProcessSessionId(v63);
      v66 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v64, v65);
    }
    else
    {
      v66 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v66) < 0 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v67);
      *(_QWORD *)(v68 + 24) = 1803LL;
      WdLogEvent5_WdAssertion(v68);
    }
    *((_BYTE *)this + 448) = 0;
  }
  VidSchTerminateProcessX((__int64)this);
  VidMmTerminateProcessX((__int64)this);
  if ( v4 )
  {
    DXGVIRTUALMACHINE::ResetVirtualMachine(*((DXGVIRTUALMACHINE **)this + 57));
    v70 = DXGPROCESS::DeferredInitialize(this, 1u);
    v72 = v70;
    if ( v70 < 0 )
    {
      v73 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v73 + 24) = v72;
      WdLogEvent5_WdError(v73);
      *((_BYTE *)this + 472) = 0;
    }
  }
  else
  {
    v14 = *((_BYTE *)this + 323);
    if ( (v14 & 2) != 0 )
    {
      v69 = DXGGLOBAL::GetGlobal(v13);
      DXGGLOBAL::IterateAdaptersWithCallback(v69, DestroyProcessCallback, this, 2LL);
    }
    else if ( (v14 & 4) != 0 )
    {
      DXGVIRTUALMACHINE::DestroyVirtualMachine(*((DXGVIRTUALMACHINE **)this + 57));
    }
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v92);
  if ( (*((_BYTE *)this + 323) & 8) != 0 )
    DXGPROCESSVM::DestroyVmProcess(this);
  if ( !v4 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 98) )
  {
    v74 = DXGGLOBAL::GetGlobal(v15);
    v84 = *((_DWORD *)this + 98);
    v83 = 0LL;
    v75 = (struct VMBCHANNEL__ **)*((_QWORD *)v74 + 152);
    v85 = 1;
    v86 = 52;
    VmBusSendSyncMessage(*v75, (struct DXGKVMB_COMMAND_BASE *)&v83, 0x18u, 0LL, 0LL, v76);
    *((_DWORD *)this + 98) = 0;
  }
  if ( v93 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v92);
}
