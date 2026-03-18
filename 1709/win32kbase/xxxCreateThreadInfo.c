/*
 * XREFs of xxxCreateThreadInfo @ 0x1C00052F0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     UserThreadCallout @ 0x1C003B840 (UserThreadCallout.c)
 * Callees:
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0011460 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     AllocQueue @ 0x1C0016FA0 (AllocQueue.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0017C2C (ApiSetEditionUpdateRawMouseMode.c)
 *     CloseProtectedHandle @ 0x1C0023524 (CloseProtectedHandle.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003C3DC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     LockObjectAssignment @ 0x1C003C770 (LockObjectAssignment.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ValidateHmonitor @ 0x1C005ABD0 (ValidateHmonitor.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0074094 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 *     SetUnavailableInputSource @ 0x1C00742B0 (SetUnavailableInputSource.c)
 *     InitClientInfo @ 0x1C007D3D8 (InitClientInfo.c)
 *     RtlGetExpWinVer @ 0x1C008078C (RtlGetExpWinVer.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C009BAA0 (-ParseReserved@@YAKPEBG0@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00A7078 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00DE2D0 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     zzzDestroyQueue @ 0x1C00DE6A0 (zzzDestroyQueue.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00E1150 (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C00E2A1C (McTemplateK0qq.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rsi
  struct _NT_TIB *Self; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r12d
  __int64 ThreadWin32Thread; // rdi
  ULONG64 v9; // rdx
  void *v10; // rsi
  ULONG64 v11; // rdx
  void *v12; // rax
  ULONG64 v13; // rdx
  int v14; // ecx
  unsigned __int16 *v15; // r8
  ULONG64 v16; // r9
  __int64 CurrentProcessWin32Process; // r14
  int v18; // r13d
  __int128 *v19; // rcx
  struct _NT_TIB *v20; // rax
  __int64 ProcessSectionBaseAddress; // rax
  int v22; // r13d
  HANDLE *v23; // r15
  signed int Event; // esi
  __int64 v25; // rdx
  __int64 v26; // r9
  const unsigned __int16 *v27; // rdx
  int v28; // r12d
  unsigned int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r15
  LeaveEnterCrit *v33; // rcx
  unsigned int CurrentProcessId; // eax
  const GUID *v35; // r8
  __int64 v36; // rdx
  PVOID v37; // r15
  __int64 JournallingQueue; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v40; // rcx
  int v41; // eax
  struct tagDESKTOP *v43; // [rsp+40h] [rbp-198h]
  HANDLE v44; // [rsp+48h] [rbp-190h] BYREF
  __int64 v45; // [rsp+50h] [rbp-188h] BYREF
  __int64 v46; // [rsp+58h] [rbp-180h]
  int v47; // [rsp+60h] [rbp-178h]
  int v48; // [rsp+64h] [rbp-174h]
  int v49; // [rsp+68h] [rbp-170h]
  int v50; // [rsp+6Ch] [rbp-16Ch]
  int v51; // [rsp+70h] [rbp-168h]
  int v52; // [rsp+74h] [rbp-164h]
  int v53; // [rsp+78h] [rbp-160h] BYREF
  void *v54; // [rsp+80h] [rbp-158h]
  int v55; // [rsp+88h] [rbp-150h]
  unsigned __int16 *v56; // [rsp+90h] [rbp-148h]
  char v57[8]; // [rsp+A0h] [rbp-138h] BYREF
  void *v58; // [rsp+A8h] [rbp-130h]
  __int64 v59; // [rsp+B0h] [rbp-128h]
  _QWORD v60[2]; // [rsp+C0h] [rbp-118h] BYREF
  struct _NT_TIB *v61; // [rsp+D0h] [rbp-108h]
  PVOID Object; // [rsp+D8h] [rbp-100h] BYREF
  char v63[8]; // [rsp+E0h] [rbp-F8h] BYREF
  PVOID v64; // [rsp+E8h] [rbp-F0h] BYREF
  __int128 v65; // [rsp+F0h] [rbp-E8h]
  __int128 v66; // [rsp+100h] [rbp-D8h]
  int v67; // [rsp+110h] [rbp-C8h] BYREF
  __int64 CurrentProcess; // [rsp+118h] [rbp-C0h]
  PVOID v69; // [rsp+120h] [rbp-B8h]
  int v70; // [rsp+128h] [rbp-B0h]
  int v71; // [rsp+12Ch] [rbp-ACh]
  __int64 *v72; // [rsp+130h] [rbp-A8h]
  __int128 v73; // [rsp+150h] [rbp-88h] BYREF
  __int128 v74; // [rsp+160h] [rbp-78h] BYREF
  _BYTE v75[24]; // [rsp+170h] [rbp-68h] BYREF
  _BYTE v76[80]; // [rsp+188h] [rbp-50h] BYREF
  int v77; // [rsp+1E8h] [rbp+10h]
  struct _EPROCESS *Process; // [rsp+1F0h] [rbp+18h]
  HANDLE Handle; // [rsp+1F8h] [rbp+20h] BYREF

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  v43 = 0LL;
  Handle = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v61 = Self;
  v58 = 0LL;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0(Self, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process() )
  {
    ++gdwGuiThreads;
    v7 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v7 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread, v4, v5, v6);
    *(_QWORD *)(ThreadWin32Thread + 368) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 376) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 384) = 0;
    *(_QWORD *)(ThreadWin32Thread + 520) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 528) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 536) = 0;
    *(_QWORD *)(ThreadWin32Thread + 824) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 832) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 840) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1432) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 504) = ThreadWin32Thread + 496;
    *(_QWORD *)(ThreadWin32Thread + 496) = ThreadWin32Thread + 496;
    *(_QWORD *)(ThreadWin32Thread + 1176) = ThreadWin32Thread + 1168;
    *(_QWORD *)(ThreadWin32Thread + 1168) = ThreadWin32Thread + 1168;
    *(_QWORD *)(ThreadWin32Thread + 1064) = ThreadWin32Thread + 1056;
    *(_QWORD *)(ThreadWin32Thread + 1056) = ThreadWin32Thread + 1056;
    *(_DWORD *)(ThreadWin32Thread + 1072) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1104) = ThreadWin32Thread + 1096;
    *(_QWORD *)(ThreadWin32Thread + 1096) = ThreadWin32Thread + 1096;
    *(_BYTE *)(ThreadWin32Thread + 1196) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1344) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 804) = 1;
    v54 = 0LL;
    v59 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32);
    v72 = &v45;
    v45 = *(_QWORD *)(v59 + 32);
    v46 = *(_QWORD *)(v59 + 40);
    v47 = *(_DWORD *)(v59 + 136);
    v48 = *(_DWORD *)(v59 + 140);
    v49 = *(_DWORD *)(v59 + 144);
    v50 = *(_DWORD *)(v59 + 148);
    v51 = *(_DWORD *)(v59 + 164);
    v52 = *(_DWORD *)(v59 + 168);
    v9 = v59 + 192;
    if ( v59 + 192 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v53 = *(_DWORD *)v9;
    v10 = *(void **)(v9 + 8);
    v54 = v10;
    if ( (_WORD)v53 )
    {
      if ( ((unsigned __int8)v10 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (ULONG64)v10 + (unsigned __int16)v53 + 2;
      if ( v11 >= MmUserProbeAddress
        || (unsigned __int16)v53 > HIWORD(v53)
        || (v53 & 1) != 0
        || v11 <= (unsigned __int64)v10 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      v12 = (void *)Win32AllocPoolWithQuota((unsigned __int16)v53, 2037674837LL);
      v58 = v12;
      v54 = v12;
      if ( !v12 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v12, v76, Win32FreePool);
      memmove(v54, v10, (unsigned __int16)v53);
    }
    else
    {
      v54 = 0LL;
    }
    v13 = v59 + 208;
    if ( v59 + 208 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v14 = *(_DWORD *)v13;
    v77 = *(_DWORD *)v13;
    v55 = *(_DWORD *)v13;
    v15 = *(unsigned __int16 **)(v13 + 8);
    v56 = v15;
    if ( ((unsigned __int8)v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
    if ( v16 >= MmUserProbeAddress
      || (unsigned __int16)v14 > HIWORD(v77)
      || (v14 & 1) != 0
      || v16 <= (unsigned __int64)v15 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v18 = v7 | 0x100;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
      v18 = v7;
    if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
      v18 |= 0x2000000u;
    if ( (unsigned int)IsCurrentProcessDwm() )
      *(_DWORD *)(ThreadWin32Thread + 1184) |= 4u;
    *(_DWORD *)(ThreadWin32Thread + 340) = 0;
    *(_DWORD *)(ThreadWin32Thread + 464) = v18;
    *(_DWORD *)(ThreadWin32Thread + 1328) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1332) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1320) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1324) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1372) = 0;
    if ( (dword_1C018E154 & 0x80u) == 0 )
    {
      if ( !gspklGlobalActive )
      {
        v60[0] = &gspklGlobalActive;
        v60[1] = gspklBaseLayout;
        HMAssignmentLock(v60);
      }
      *(_QWORD *)&v66 = ThreadWin32Thread + 416;
      *((_QWORD *)&v66 + 1) = gspklGlobalActive;
      v74 = v66;
      v19 = &v74;
    }
    else
    {
      *(_QWORD *)&v65 = ThreadWin32Thread + 416;
      *((_QWORD *)&v65 + 1) = gspklBaseLayout;
      v73 = v65;
      v19 = &v73;
    }
    HMAssignmentLock(v19);
    *(_QWORD *)(ThreadWin32Thread + 424) = ThreadWin32Thread + 1008;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 464) |= 0x2000000u;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x400) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 1184) |= 0x20u;
    *(_QWORD *)(ThreadWin32Thread + 400) = CurrentProcessWin32Process;
    *(_QWORD *)(ThreadWin32Thread + 640) = *(_QWORD *)(CurrentProcessWin32Process + 296);
    *(_QWORD *)(CurrentProcessWin32Process + 296) = ThreadWin32Thread;
    ++*(_DWORD *)(CurrentProcessWin32Process + 360);
    v20 = v61;
    if ( v61 )
      v61[2].StackBase = (PVOID)ThreadWin32Thread;
    *(_QWORD *)(ThreadWin32Thread + 456) = (char *)v20 + 2048;
    LODWORD(v20[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 236LL) = 0;
    *(_QWORD *)(ThreadWin32Thread + 352) = *(_QWORD *)(ThreadWin32Thread + 456) + 232LL;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 464) |= 0x20000000u;
    if ( !*(_DWORD *)(ThreadWin32Thread + 608) )
    {
      if ( PsGetProcessPeb(Process) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
        *(_DWORD *)(ThreadWin32Thread + 608) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(ThreadWin32Thread + 608) = 1536;
      }
    }
    if ( (int)IsSetManifestWinVerSupported() >= 0 )
      SetManifestWinVer();
    v22 = v18 & 0xC;
    if ( !v22 && (int)IsSetAppCompatFlagsSupported() >= 0 && (unsigned int)SetAppCompatFlags(ThreadWin32Thread) )
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
    v23 = (HANDLE *)(ThreadWin32Thread + 696);
    Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 696), 0x1F0003u, 0LL, SynchronizationEvent, 0);
    if ( Event >= 0 )
    {
      Event = ObReferenceObjectByHandle(*v23, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      *(_QWORD *)(ThreadWin32Thread + 704) = Object;
      if ( Event < 0 )
      {
        if ( Event != -1073741816 )
          ObCloseHandle(*v23, 1);
      }
      else
      {
        LOBYTE(v26) = 1;
        Event = ProtectHandle(*v23, v25, ExEventObjectType, v26);
      }
    }
    if ( Event < 0 )
    {
      *v23 = 0LL;
LABEL_179:
      if ( v43 )
        PopAndFreeW32ThreadLock(v75);
      if ( v58 )
        PopAndFreeAlwaysW32ThreadLock(v76);
      xxxDestroyThreadInfo();
      return (unsigned int)Event;
    }
    Event = ObDuplicateObject(Process, *v23, Process, ThreadWin32Thread + 1400, 0, 512, 2, 0);
    if ( Event < 0 )
    {
      *(_QWORD *)(ThreadWin32Thread + 1400) = 0LL;
      goto LABEL_179;
    }
    Event = InitializeThreadInfoIocp(Process, (struct tagTHREADINFO *)ThreadWin32Thread);
    if ( Event < 0 )
      goto LABEL_179;
    v28 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 748) && v51 )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 748) = 28;
      *(_DWORD *)(CurrentProcessWin32Process + 752) = v47;
      *(_DWORD *)(CurrentProcessWin32Process + 756) = v48;
      *(_DWORD *)(CurrentProcessWin32Process + 760) = v49;
      *(_DWORD *)(CurrentProcessWin32Process + 764) = v50;
      *(_DWORD *)(CurrentProcessWin32Process + 768) = v51;
      *(_WORD *)(CurrentProcessWin32Process + 772) = v52;
    }
    if ( v28 )
    {
LABEL_82:
      v31 = AllocQueue(0LL, 0LL);
      v32 = v31;
      if ( !v31 )
      {
        Event = -1073741801;
        goto LABEL_179;
      }
      *(_QWORD *)(ThreadWin32Thread + 408) = v31;
      *(_QWORD *)(v31 + 96) = ThreadWin32Thread;
      *(_QWORD *)(v31 + 88) = ThreadWin32Thread;
      ApiSetEditionUpdateRawMouseMode(v31);
      ++*(_DWORD *)(v32 + 384);
      if ( Process == gpepCSRSS )
      {
        *(_QWORD *)(v32 + 420) = 0x2000LL;
      }
      else
      {
        *(_DWORD *)(v32 + 420) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 832LL);
        *(_DWORD *)(v32 + 424) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 836LL);
      }
      if ( (*(_DWORD *)(ThreadWin32Thread + 464) & 0xC) != 0 || !grpWinStaList )
      {
        *(_DWORD *)(ThreadWin32Thread + 1184) |= 0x10u;
        if ( (int)IsxxxSetProcessWindowStationSupported() < 0 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
      }
      else
      {
        v44 = 0LL;
        Event = IsxxxResolveDesktopSupported();
        if ( Event >= 0 )
          Event = xxxResolveDesktop(-1LL, &v53, &v44, v51 & 0x40000000, &Handle);
        if ( Event < 0 )
        {
          if ( Event == -1073741205 )
          {
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
            ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
            LeaveEnterCrit::~LeaveEnterCrit(v33);
          }
          else
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              McTemplateK0qq(
                Microsoft_Windows_Win32kEnableBits,
                &DesktopResolutionFailure,
                v35,
                CurrentProcessId,
                Event);
            Event = -1073741502;
          }
          goto LABEL_179;
        }
        Event = IsxxxSetProcessWindowStationSupported();
        if ( Event >= 0 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v63);
          LOBYTE(v36) = 1;
          Event = xxxSetProcessWindowStation(v44, v36);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v63);
        }
        if ( Event < 0 )
        {
          CloseProtectedHandle(Handle);
          CloseProtectedHandle(v44);
          Handle = 0LL;
          v44 = 0LL;
          goto LABEL_179;
        }
        Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v64, 0LL);
        v37 = v64;
        v43 = (struct tagDESKTOP *)v64;
        if ( Event < 0 )
          goto LABEL_179;
        PushW32ThreadLock(v64, v75, CompositionObject::Release);
        if ( v37 )
          ObfReferenceObject(v37);
        ObfDereferenceObject(v37);
        v67 = 1;
        CurrentProcess = PsGetCurrentProcess();
        v69 = v37;
        v70 = 0;
        v71 = 1;
        Event = IsMapDesktopSupported();
        if ( Event >= 0 )
          Event = MapDesktop(&v67);
        if ( Event < 0 )
          goto LABEL_179;
        if ( !*(_QWORD *)(CurrentProcessWin32Process + 368) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
        {
          LockObjectAssignment(CurrentProcessWin32Process + 312, v37);
          *(_QWORD *)(CurrentProcessWin32Process + 368) = Handle;
        }
      }
      if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
        goto LABEL_179;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v57);
      Event = IszzzSetDesktopSupported();
      if ( Event >= 0 )
        Event = zzzSetDesktop(ThreadWin32Thread, v43, Handle);
      if ( Event < 0 )
      {
        UserAtomicCheck::Detach((UserAtomicCheck *)v57);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v57);
        goto LABEL_179;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v57);
      if ( v43 == grpdeskRitInput )
      {
        JournallingQueue = 0LL;
        if ( (int)IsGetJournallingQueueSupported() >= 0 )
          JournallingQueue = GetJournallingQueue(ThreadWin32Thread);
        if ( JournallingQueue && JournallingQueue != *(_QWORD *)(ThreadWin32Thread + 408) )
        {
          if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
            DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 408), ThreadWin32Thread);
          zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 408), ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 408) = JournallingQueue;
          ++*(_DWORD *)(JournallingQueue + 384);
        }
      }
      if ( v51 < 0 )
      {
        if ( !v28 )
        {
          if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
          {
            v51 &= ~0x80000000;
            goto LABEL_139;
          }
          gppiScreenSaver = CurrentProcessWin32Process;
          gptSSCursor = *((_QWORD *)gpsi + 618);
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
          EtwTraceScreenSaverProcessEvent(1LL);
        }
        if ( (int)IsSetForegroundPrioritySupported() >= 0 )
          SetForegroundPriority(ThreadWin32Thread, 1LL);
        if ( !v28 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
        *(_DWORD *)(ThreadWin32Thread + 464) |= 0x2000000u;
      }
LABEL_139:
      if ( (*(_DWORD *)(ThreadWin32Thread + 464) & 0xC) == 0 && !v28 )
      {
        ++gdwDeferWinEvent;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(Process);
          zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
        }
        --gdwDeferWinEvent;
        if ( grpWinStaList )
        {
          if ( !*(_QWORD *)(CurrentProcessWin32Process + 640) )
          {
            UserSetLastError(1003LL);
LABEL_146:
            Event = -1073741823;
            goto LABEL_179;
          }
        }
      }
      if ( (int)IsxxxUpdateInputHangInfoSupported((unsigned int)_InterlockedExchange(
                                                                  (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread
                                                                                                 + 424)
                                                                                     + 12LL),
                                                                  (MEMORY[0xFFFFF78000000320]
                                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)) >= 0 )
        xxxUpdateInputHangInfo(0LL, 1LL);
      SetUnavailableInputSource(ThreadWin32Thread + 1188);
      v40 = *(_QWORD *)(ThreadWin32Thread + 408);
      if ( v40 )
        SetUnavailableInputSource(v40 + 412);
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 464) |= 0x4000u;
      *(_DWORD *)(ThreadWin32Thread + 464) |= 0x1000000u;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
        && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 50)
         || CInputGlobals::GetPtiLastWoken(gpInputGlobals)
         && CurrentProcessWin32Process == *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 50)
         && (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x30) != 0x10) )
      {
        *(_DWORD *)(ThreadWin32Thread + 464) |= 0x20u;
      }
      if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported() >= 0 )
        CreateInputContext(0LL);
      if ( !v22 )
      {
        Event = IsxxxClientThreadSetupSupported();
        if ( Event >= 0 )
          Event = xxxClientThreadSetup();
        if ( Event < 0 )
          goto LABEL_179;
      }
      if ( !v28 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 && (int)IsxxxPlayEventSoundSupported() >= 0 )
        xxxPlayEventSound(7LL);
      if ( v43 )
      {
        if ( (*((_DWORD *)v43 + 12) & 8) != 0 )
          goto LABEL_146;
        PopAndFreeW32ThreadLock(v75);
      }
      if ( v58 )
        PopAndFreeAlwaysW32ThreadLock(v76);
      v41 = *(_DWORD *)(ThreadWin32Thread + 1184);
      if ( (v41 & 1) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 1184) = v41 & 0xFFFFFFFE;
      return (unsigned int)Event;
    }
    if ( (v51 & 0x200) != 0 )
    {
      v29 = v45;
    }
    else
    {
      if ( !(_WORD)v55 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 660) = 0;
        goto LABEL_79;
      }
      v29 = ParseReserved(v56, v27);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 660) = v29;
LABEL_79:
    if ( (v51 & 0x400) != 0 )
    {
      v30 = v46;
      if ( ValidateHmonitor(v46) )
        *(_QWORD *)(CurrentProcessWin32Process + 664) = v30;
    }
    goto LABEL_82;
  }
  return 3221225738LL;
}
