/*
 * XREFs of xxxCreateThreadInfo @ 0x1C004AFA0
 * Callers:
 *     UserThreadCallout @ 0x1C004ACF0 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     ValidateHmonitor @ 0x1C0028100 (ValidateHmonitor.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002EB80 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004206C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004208C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     LockObjectAssignment @ 0x1C0043540 (LockObjectAssignment.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0044D34 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0044EA0 (ProtectHandle.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00452F8 (ApiSetEditionUpdateRawMouseMode.c)
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0049320 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     AllocQueue @ 0x1C0049F90 (AllocQueue.c)
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 *     RtlGetExpWinVer @ 0x1C004BE90 (RtlGetExpWinVer.c)
 *     CloseProtectedHandle @ 0x1C0051C20 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     SetUnavailableInputSource @ 0x1C007B9C0 (SetUnavailableInputSource.c)
 *     InitClientInfo @ 0x1C007CED0 (InitClientInfo.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C0092478 (-ParseReserved@@YAKPEBG0@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00DA5C0 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1C00DC97C (Template_qq.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  __int64 v2; // rcx
  struct _KPROCESS *ThreadProcess; // rsi
  __int64 v4; // r8
  struct _NT_TIB *Self; // r13
  __int64 v6; // rdx
  int v7; // r15d
  __int64 ThreadWin32Thread; // rdi
  CTouchProcessor *v9; // rcx
  void *v10; // rsi
  unsigned __int64 v11; // rcx
  void *v12; // rax
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 *v15; // r8
  unsigned __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // r14
  int v18; // esi
  __int128 *v19; // rcx
  __int64 v20; // rcx
  struct _EPROCESS *v21; // r13
  __int64 ProcessSectionBaseAddress; // rax
  HANDLE *v23; // r15
  int Event; // esi
  int v25; // edx
  const unsigned __int16 *v26; // rdx
  int v27; // r12d
  unsigned int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r14
  int v41; // ecx
  LARGE_INTEGER v42; // rdi
  int v43; // r8d
  char v44; // al
  unsigned int CurrentProcessId; // eax
  __int64 v46; // r8
  __int64 v47; // rdx
  PVOID v48; // r15
  __int64 JournallingQueue; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v54; // [rsp+40h] [rbp-198h] BYREF
  char v55[8]; // [rsp+48h] [rbp-190h] BYREF
  __int64 v56; // [rsp+50h] [rbp-188h] BYREF
  __int64 v57; // [rsp+58h] [rbp-180h]
  int v58; // [rsp+60h] [rbp-178h]
  int v59; // [rsp+64h] [rbp-174h]
  int v60; // [rsp+68h] [rbp-170h]
  int v61; // [rsp+6Ch] [rbp-16Ch]
  int v62; // [rsp+70h] [rbp-168h]
  int v63; // [rsp+74h] [rbp-164h]
  int v64; // [rsp+78h] [rbp-160h] BYREF
  void *v65; // [rsp+80h] [rbp-158h]
  int v66; // [rsp+88h] [rbp-150h]
  unsigned __int16 *v67; // [rsp+90h] [rbp-148h]
  void *v68; // [rsp+A0h] [rbp-138h]
  __int64 v69; // [rsp+A8h] [rbp-130h]
  PEPROCESS Process; // [rsp+B0h] [rbp-128h]
  _QWORD v71[2]; // [rsp+C0h] [rbp-118h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v73[8]; // [rsp+D8h] [rbp-100h] BYREF
  PVOID v74; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-E8h]
  __int128 v76; // [rsp+100h] [rbp-D8h]
  int v77; // [rsp+110h] [rbp-C8h] BYREF
  __int64 CurrentProcess; // [rsp+118h] [rbp-C0h]
  PVOID v79; // [rsp+120h] [rbp-B8h]
  int v80; // [rsp+128h] [rbp-B0h]
  int v81; // [rsp+12Ch] [rbp-ACh]
  __int64 *v82; // [rsp+130h] [rbp-A8h]
  __int128 v83; // [rsp+150h] [rbp-88h] BYREF
  __int128 v84; // [rsp+160h] [rbp-78h] BYREF
  _BYTE v85[24]; // [rsp+170h] [rbp-68h] BYREF
  _BYTE v86[80]; // [rsp+188h] [rbp-50h] BYREF
  int v87; // [rsp+1E8h] [rbp+10h]
  int v88; // [rsp+1E8h] [rbp+10h]
  HANDLE Handle; // [rsp+1F0h] [rbp+18h] BYREF
  struct tagDESKTOP *v90; // [rsp+1F8h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  v90 = 0LL;
  Handle = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v68 = 0LL;
  v6 = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v2, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v2, v6, v4) )
  {
    ++gdwGuiThreads;
    v7 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v7 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_QWORD *)(ThreadWin32Thread + 1344) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 480) = ThreadWin32Thread + 472;
    *(_QWORD *)(ThreadWin32Thread + 472) = ThreadWin32Thread + 472;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 1080) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 976) = ThreadWin32Thread + 968;
    *(_QWORD *)(ThreadWin32Thread + 968) = ThreadWin32Thread + 968;
    *(_DWORD *)(ThreadWin32Thread + 984) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1016) = ThreadWin32Thread + 1008;
    *(_QWORD *)(ThreadWin32Thread + 1008) = ThreadWin32Thread + 1008;
    *(_BYTE *)(ThreadWin32Thread + 1108) = 0;
    *(_DWORD *)(ThreadWin32Thread + 748) = 1;
    v65 = 0LL;
    v69 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32);
    v82 = &v56;
    v56 = *(_QWORD *)(v69 + 32);
    v57 = *(_QWORD *)(v69 + 40);
    v58 = *(_DWORD *)(v69 + 136);
    v59 = *(_DWORD *)(v69 + 140);
    v60 = *(_DWORD *)(v69 + 144);
    v61 = *(_DWORD *)(v69 + 148);
    v62 = *(_DWORD *)(v69 + 164);
    v63 = *(_DWORD *)(v69 + 168);
    v9 = (CTouchProcessor *)(v69 + 192);
    if ( v69 + 192 >= (unsigned __int64)W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    v64 = *(_DWORD *)v9;
    v10 = (void *)*((_QWORD *)v9 + 1);
    v65 = v10;
    if ( (_WORD)v64 )
    {
      if ( ((unsigned __int8)v10 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (unsigned __int64)v10 + (unsigned __int16)v64 + 2;
      if ( v11 >= (unsigned __int64)W32UserProbeAddress
        || (unsigned __int16)v64 > HIWORD(v64)
        || (v64 & 1) != 0
        || v11 <= (unsigned __int64)v10 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      v12 = (void *)Win32AllocPoolWithQuota((unsigned __int16)v64, 0x79747355u);
      v68 = v12;
      v65 = v12;
      if ( !v12 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v12, v86, Win32FreePool);
      memmove(v65, v10, (unsigned __int16)v64);
    }
    else
    {
      v65 = 0LL;
    }
    v13 = (CTouchProcessor *)(v69 + 208);
    if ( v69 + 208 >= (unsigned __int64)W32UserProbeAddress )
      v13 = W32UserProbeAddress;
    v14 = *(unsigned int *)v13;
    v87 = *(_DWORD *)v13;
    v66 = *(_DWORD *)v13;
    v15 = (unsigned __int16 *)*((_QWORD *)v13 + 1);
    v67 = v15;
    if ( ((unsigned __int8)v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (unsigned __int64)v15 + (unsigned __int16)v14 + 2;
    if ( v16 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v14 > HIWORD(v87)
      || (v14 & 1) != 0
      || v16 <= (unsigned __int64)v15 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, v14, v15);
    v18 = v7 | 0x100;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
      v18 = v7;
    if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
      v18 |= 0x2000000u;
    if ( IsCurrentProcessDwm() )
      *(_DWORD *)(ThreadWin32Thread + 1096) |= 4u;
    *(_DWORD *)(ThreadWin32Thread + 340) = 0;
    *(_DWORD *)(ThreadWin32Thread + 440) = v18;
    *(_DWORD *)(ThreadWin32Thread + 1240) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1244) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1232) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1236) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1284) = 0;
    if ( (dword_1C01895D4 & 0x80u) == 0 )
    {
      v20 = gspklGlobalActive;
      if ( !gspklGlobalActive )
      {
        v71[0] = &gspklGlobalActive;
        v71[1] = gspklBaseLayout;
        HMAssignmentLock((__int64)v71);
        v20 = gspklGlobalActive;
      }
      *(_QWORD *)&v76 = ThreadWin32Thread + 392;
      *((_QWORD *)&v76 + 1) = v20;
      v84 = v76;
      v19 = &v84;
    }
    else
    {
      *(_QWORD *)&v75 = ThreadWin32Thread + 392;
      *((_QWORD *)&v75 + 1) = gspklBaseLayout;
      v83 = v75;
      v19 = &v83;
    }
    HMAssignmentLock((__int64)v19);
    *(_QWORD *)(ThreadWin32Thread + 400) = ThreadWin32Thread + 920;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 440) |= 0x2000000u;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x400) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 1096) |= 0x20u;
    *(_QWORD *)(ThreadWin32Thread + 376) = CurrentProcessWin32Process;
    *(_QWORD *)(ThreadWin32Thread + 584) = *(_QWORD *)(CurrentProcessWin32Process + 288);
    *(_QWORD *)(CurrentProcessWin32Process + 288) = ThreadWin32Thread;
    ++*(_DWORD *)(CurrentProcessWin32Process + 352);
    if ( Self )
      Self[2].StackBase = (PVOID)ThreadWin32Thread;
    *(_QWORD *)(ThreadWin32Thread + 432) = (char *)Self + 2048;
    LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
    *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 236LL) = 0;
    *(_QWORD *)(ThreadWin32Thread + 352) = *(_QWORD *)(ThreadWin32Thread + 432) + 232LL;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20000000u;
    v21 = Process;
    if ( !*(_DWORD *)(ThreadWin32Thread + 552) )
    {
      if ( PsGetProcessPeb(Process) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v21);
        *(_DWORD *)(ThreadWin32Thread + 552) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(ThreadWin32Thread + 552) = 1536;
      }
    }
    if ( (int)IsSetManifestWinVerSupported() >= 0 )
      SetManifestWinVer();
    v88 = v18 & 0xC;
    if ( (v18 & 0xC) == 0
      && (int)IsSetAppCompatFlagsSupported() >= 0
      && (unsigned int)SetAppCompatFlags(ThreadWin32Thread) )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
    }
    v23 = (HANDLE *)(ThreadWin32Thread + 640);
    Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 640), 0x1F0003u, 0LL, SynchronizationEvent, 0);
    if ( Event >= 0 )
    {
      Event = ObReferenceObjectByHandle(*v23, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      *(_QWORD *)(ThreadWin32Thread + 648) = Object;
      if ( Event < 0 )
      {
        if ( Event != -1073741816 )
          ObCloseHandle(*v23, 1);
      }
      else
      {
        Event = ProtectHandle(*v23, v25, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      }
    }
    if ( Event < 0 )
    {
      *v23 = 0LL;
LABEL_194:
      if ( v90 )
        PopAndFreeW32ThreadLock(v85);
      if ( v68 )
        PopAndFreeAlwaysW32ThreadLock(v86);
      xxxDestroyThreadInfo();
      return (unsigned int)Event;
    }
    Event = ObDuplicateObject(v21, *v23, v21, ThreadWin32Thread + 1312, 0, 512, 2, 0);
    if ( Event < 0 )
    {
      *(_QWORD *)(ThreadWin32Thread + 1312) = 0LL;
      goto LABEL_194;
    }
    Event = InitializeThreadInfoIocp(v21, (void **)ThreadWin32Thread);
    if ( Event < 0 )
      goto LABEL_194;
    v27 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 740) && v62 )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 740) = 28;
      *(_DWORD *)(CurrentProcessWin32Process + 744) = v58;
      *(_DWORD *)(CurrentProcessWin32Process + 748) = v59;
      *(_DWORD *)(CurrentProcessWin32Process + 752) = v60;
      *(_DWORD *)(CurrentProcessWin32Process + 756) = v61;
      *(_DWORD *)(CurrentProcessWin32Process + 760) = v62;
      *(_WORD *)(CurrentProcessWin32Process + 764) = v63;
    }
    if ( v27 )
    {
LABEL_82:
      v30 = AllocQueue(0LL, 0LL);
      v31 = v30;
      if ( !v30 )
      {
        Event = -1073741801;
        goto LABEL_194;
      }
      *(_QWORD *)(ThreadWin32Thread + 384) = v30;
      *(_QWORD *)(v30 + 64) = ThreadWin32Thread;
      *(_QWORD *)(v30 + 56) = ThreadWin32Thread;
      ApiSetEditionUpdateRawMouseMode(v30);
      ++*(_DWORD *)(v31 + 344);
      if ( v21 == gpepCSRSS )
      {
        *(_QWORD *)(v31 + 380) = 0x2000LL;
      }
      else
      {
        *(_DWORD *)(v31 + 380) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 824LL);
        *(_DWORD *)(v31 + 384) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 828LL);
      }
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0xC) != 0 || !grpWinStaList )
      {
        *(_DWORD *)(ThreadWin32Thread + 1096) |= 0x10u;
        if ( (int)IsxxxSetProcessWindowStationSupported() < 0 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
      }
      else
      {
        v54 = 0LL;
        Event = IsxxxResolveDesktopSupported();
        if ( Event >= 0 )
          Event = xxxResolveDesktop(-1LL, &v64, &v54, v62 & 0x40000000, &Handle);
        if ( Event < 0 )
        {
          if ( Event == -1073741205 )
          {
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit();
            ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v33, v32, v34);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v36 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v40 = PsGetCurrentThreadWin32Thread(v38, v37, v39);
            if ( v40 )
            {
              v42 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v40 + 8));
              if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
              {
                if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
                  || (qword_1C0186D80 & 0x200000010000000LL) == 0
                  || (v44 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
                {
                  v44 = 0;
                }
                if ( v44 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  LOBYTE(v41) = byte_1C0186D98 - 1;
                  Template_xqx(
                    v41,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v43,
                    v42.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
              }
              if ( v42.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
              {
                Template_xqx(
                  (_DWORD)gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v43,
                  0,
                  1000 * v42.QuadPart / gliQpcFreq.QuadPart,
                  (char)gullUserCritAcquireToken);
              }
              *(_QWORD *)(v40 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
            }
            gptiCurrent = v36;
            gbValidateHandleForIL = 1;
          }
          else
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              Template_qq(Microsoft_Windows_Win32kEnableBits, &DesktopResolutionFailure, v46, CurrentProcessId, Event);
            Event = -1073741502;
          }
          goto LABEL_194;
        }
        Event = IsxxxSetProcessWindowStationSupported();
        if ( Event >= 0 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v73);
          LOBYTE(v47) = 1;
          Event = xxxSetProcessWindowStation(v54, v47);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v73);
        }
        if ( Event < 0 )
        {
          CloseProtectedHandle(Handle);
          CloseProtectedHandle(v54);
          Handle = 0LL;
          v54 = 0LL;
          goto LABEL_194;
        }
        Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v74, 0LL);
        v48 = v74;
        v90 = (struct tagDESKTOP *)v74;
        if ( Event < 0 )
          goto LABEL_194;
        PushW32ThreadLock(v74, v85, CompositionObject::Release);
        if ( v48 )
          ObfReferenceObject(v48);
        ObfDereferenceObject(v48);
        v77 = 1;
        CurrentProcess = PsGetCurrentProcess();
        v79 = v48;
        v80 = 0;
        v81 = 1;
        Event = IsMapDesktopSupported();
        if ( Event >= 0 )
          Event = MapDesktop(&v77);
        if ( Event < 0 )
          goto LABEL_194;
        if ( !*(_QWORD *)(CurrentProcessWin32Process + 360) && PsGetProcessId(v21) != (HANDLE)gpidLogon )
        {
          LockObjectAssignment((void **)(CurrentProcessWin32Process + 304), v48);
          *(_QWORD *)(CurrentProcessWin32Process + 360) = Handle;
        }
      }
      if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
        goto LABEL_194;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v55);
      Event = IszzzSetDesktopSupported();
      if ( Event >= 0 )
        Event = zzzSetDesktop(ThreadWin32Thread, v90, Handle);
      if ( Event < 0 )
      {
        v55[0] = 1;
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v55);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v55);
        goto LABEL_194;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v55);
      if ( v90 == grpdeskRitInput )
      {
        JournallingQueue = 0LL;
        if ( (int)IsGetJournallingQueueSupported() >= 0 )
          JournallingQueue = GetJournallingQueue(ThreadWin32Thread);
        if ( JournallingQueue && JournallingQueue != *(_QWORD *)(ThreadWin32Thread + 384) )
        {
          if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
            DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 384), ThreadWin32Thread);
          zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 384), ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 384) = JournallingQueue;
          ++*(_DWORD *)(JournallingQueue + 344);
        }
      }
      if ( v62 < 0 )
      {
        if ( !v27 )
        {
          if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(v21) != gpidLogon )
          {
            v62 &= ~0x80000000;
            goto LABEL_154;
          }
          gppiScreenSaver = CurrentProcessWin32Process;
          gptSSCursor = *((_QWORD *)gpsi + 671);
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
          EtwTraceScreenSaverProcessEvent(1LL);
        }
        if ( (int)IsSetForegroundPrioritySupported() >= 0 )
          SetForegroundPriority(ThreadWin32Thread, 1LL);
        if ( !v27 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x2000000u;
      }
LABEL_154:
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0xC) == 0 && !v27 )
      {
        ++gdwDeferWinEvent;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(v21);
          zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
        }
        --gdwDeferWinEvent;
        if ( grpWinStaList )
        {
          if ( !*(_QWORD *)(CurrentProcessWin32Process + 632) )
          {
            UserSetLastError(1003LL);
LABEL_161:
            Event = -1073741823;
            goto LABEL_194;
          }
        }
      }
      if ( (int)IsxxxUpdateInputHangInfoSupported((unsigned int)_InterlockedExchange(
                                                                  (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread
                                                                                                 + 400)
                                                                                     + 12LL),
                                                                  (MEMORY[0xFFFFF78000000320]
                                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)) >= 0 )
        xxxUpdateInputHangInfo(0LL, 1LL);
      SetUnavailableInputSource(ThreadWin32Thread + 1100);
      v51 = *(_QWORD *)(ThreadWin32Thread + 384);
      if ( v51 )
        SetUnavailableInputSource(v51 + 372);
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x4000u;
      *(_DWORD *)(ThreadWin32Thread + 440) |= 0x1000000u;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
        && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 47)
         || CInputGlobals::GetPtiLastWoken(gpInputGlobals)
         && CurrentProcessWin32Process == *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 47)
         && (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x30) != 0x10) )
      {
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20u;
      }
      if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported() >= 0 )
        CreateInputContext(0LL);
      if ( !v88 )
      {
        Event = IsxxxClientThreadSetupSupported();
        if ( Event >= 0 )
          Event = xxxClientThreadSetup();
        if ( Event < 0 )
          goto LABEL_194;
      }
      if ( !v27 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 && (int)IsxxxPlayEventSoundSupported() >= 0 )
        xxxPlayEventSound(7LL);
      if ( v90 )
      {
        if ( (*((_DWORD *)v90 + 12) & 8) != 0 )
          goto LABEL_161;
        PopAndFreeW32ThreadLock(v85);
      }
      if ( v68 )
        PopAndFreeAlwaysW32ThreadLock(v86);
      v52 = *(_DWORD *)(ThreadWin32Thread + 1096);
      if ( (v52 & 1) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 1096) = v52 & 0xFFFFFFFE;
      return (unsigned int)Event;
    }
    if ( (v62 & 0x200) != 0 )
    {
      v28 = v56;
    }
    else
    {
      if ( !(_WORD)v66 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 652) = 0;
        goto LABEL_79;
      }
      v28 = ParseReserved(v67, v26);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 652) = v28;
LABEL_79:
    if ( (v62 & 0x400) != 0 )
    {
      v29 = v57;
      if ( ValidateHmonitor() )
        *(_QWORD *)(CurrentProcessWin32Process + 656) = v29;
    }
    goto LABEL_82;
  }
  return 3221225738LL;
}
