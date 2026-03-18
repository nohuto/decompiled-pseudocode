/*
 * XREFs of xxxCreateWindowStation @ 0x1C0012EC4
 * Callers:
 *     xxxConnectService @ 0x1C000FE54 (xxxConnectService.c)
 *     NtUserCreateWindowStation @ 0x1C0012850 (NtUserCreateWindowStation.c)
 * Callees:
 *     xxxInitWindowStation @ 0x1C000F9C0 (xxxInitWindowStation.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00134C4 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C0014300 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     zzzSetDesktop @ 0x1C001A520 (zzzSetDesktop.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0111B98 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        HANDLE *a10)
{
  void *v10; // rax
  void *v11; // rsi
  int v12; // r13d
  __int64 v13; // rdi
  void *v14; // r14
  _QWORD *v15; // r15
  NTSTATUS v16; // eax
  int DesktopNotificationEvent; // ebx
  int GlobalAtomTable; // eax
  _QWORD *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rdx
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  BOOL v28; // eax
  __int64 Window; // rax
  NTSTATUS inserted; // eax
  void *v31; // rcx
  _QWORD *i; // rcx
  ULONG v34; // r13d
  ULONG v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 ThreadWin32Thread; // rax
  ULONG v43; // eax
  NTSTATUS v44; // ecx
  ULONG v45; // eax
  int v46; // r11d
  int v47; // r11d
  ULONG v48; // eax
  int v49; // r12d
  __int64 v50; // r13
  int v51; // r12d
  unsigned int v52; // eax
  ULONG v53; // eax
  ULONG v54; // eax
  int v55; // [rsp+98h] [rbp-80h]
  PVOID Object; // [rsp+A0h] [rbp-78h] BYREF
  char v57[8]; // [rsp+A8h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+B0h] [rbp-68h] BYREF
  int v59; // [rsp+B8h] [rbp-60h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+C0h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+D0h] [rbp-48h] BYREF
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-40h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-20h]
  __int128 v65; // [rsp+108h] [rbp-10h] BYREF
  _QWORD v66[10]; // [rsp+118h] [rbp+0h] BYREF
  __int64 MemoryAllocated; // [rsp+178h] [rbp+60h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+188h] [rbp+70h]
  __int64 v69; // [rsp+190h] [rbp+78h]

  v69 = a4;
  DesiredAccess = a3;
  v10 = *(void **)(a1 + 32);
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0;
  ExplicitDescriptor = v10;
  v13 = 0LL;
  v14 = 0LL;
  v55 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v15 = &gTermNOIO;
  }
  else
  {
    v15 = (_QWORD *)gTermIO;
  }
  LOBYTE(a4) = a2;
  v16 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 184, 0, 0, &Object);
  DesktopNotificationEvent = v16;
  if ( v16 >= 0 )
  {
    if ( !ExAcquireRundownProtection(gWinstaRunRef) )
    {
      DesktopNotificationEvent = -1073741790;
LABEL_71:
      v48 = RtlNtStatusToDosError(DesktopNotificationEvent);
      UserSetLastError(v48);
      if ( Object )
        ObfDereferenceObject(Object);
      if ( v12 )
      {
        ++gdwDeferWinEvent;
        v49 = *(_DWORD *)(v13 + 440);
        v50 = *(_QWORD *)(v13 + 376);
        *(_DWORD *)(v13 + 440) = v49 | 0x10000000;
        v51 = v49 & 0x10000000;
        *(_QWORD *)(v13 + 376) = *(_QWORD *)(v15[2] + 376LL);
        HMChangeOwnerThread(v15[1], v13);
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
        xxxCleanupMotherDesktopWindow(v15);
        if ( !(_BYTE)ExplicitDescriptor )
        {
          --gdwInAtomicOperation;
          UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&ExplicitDescriptor);
        }
        v52 = *(_DWORD *)(v13 + 440) & 0xEFFFFFFF;
        *(_QWORD *)(v13 + 376) = v50;
        *(_DWORD *)(v13 + 440) = v51 | v52;
        if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
      }
      if ( Handle )
        ObCloseHandle(Handle, 1);
      if ( v11 )
        Win32FreePool(v11);
      if ( v14 )
        ObfDereferenceObject(v14);
      return (unsigned int)DesktopNotificationEvent;
    }
    memset(Object, 0, 0xB8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 3) = v15;
    if ( (*(_DWORD *)v15 & 2) != 0 )
      *((_DWORD *)Object + 8) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 136);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*(_DWORD *)v15 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v15),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v44 = GlobalAtomTable;
      goto LABEL_55;
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v44 = -1073741801;
LABEL_55:
      v45 = RtlNtStatusToDosError(v44);
      UserSetLastError(v45);
      goto LABEL_71;
    }
    v19 = v15 + 1;
    if ( !v15[1] )
    {
      v13 = gptiCurrent;
      v14 = *(void **)(gptiCurrent + 408LL);
      v20 = *(_QWORD *)(v15[2] + 376LL);
      v21 = *(_QWORD *)(gptiCurrent + 376LL);
      MemoryAllocated = *(_QWORD *)(gptiCurrent + 512LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v20;
      if ( v14 )
        ObfReferenceObject(v14);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v57);
      DesktopNotificationEvent = zzzSetDesktop(gptiCurrent);
      if ( DesktopNotificationEvent < 0 )
      {
        v57[0] = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v57);
        gdwDeferWinEvent += v46;
        if ( !(v46 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        *(_QWORD *)(gptiCurrent + 376LL) = v21;
      }
      else
      {
        v23 = *(_DWORD *)(gptiCurrent + 440LL);
        *(_DWORD *)(gptiCurrent + 440LL) = v23 | 0x10000000;
        v24 = v23 & 0x10000000;
        v28 = 0;
        if ( PsGetCurrentProcessWin32Process(0x10000000LL, v22) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26, v25);
          if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
            v28 = 1;
        }
        Window = xxxCreateWindowEx(
                   0,
                   32769,
                   32769,
                   0,
                   -2113929216,
                   -32768,
                   -32768,
                   0xFFFF,
                   0xFFFF,
                   0LL,
                   0LL,
                   hModuleWin,
                   0LL,
                   1,
                   778,
                   v28,
                   0LL);
        if ( Window )
        {
          *((_QWORD *)&v64 + 1) = Window;
          *(_QWORD *)&v64 = v15 + 1;
          v65 = v64;
          HMAssignmentLock(&v65);
          *(_DWORD *)(gptiCurrent + 440LL) = v24 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
          SetVisible(*v19, 1LL);
          HMChangeOwnerThread(*v19, v15[2]);
          v55 = 1;
          v12 = 1;
          *(_QWORD *)(gptiCurrent + 376LL) = v21;
          DesktopNotificationEvent = zzzSetDesktop(gptiCurrent);
          if ( DesktopNotificationEvent < 0 )
          {
            v57[0] = 1;
            --gdwInAtomicOperation;
            UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v57);
            if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
              xxxFlushDeferredWindowEvents();
            goto LABEL_71;
          }
          if ( !v57[0] )
          {
            --gdwInAtomicOperation;
            UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v57);
          }
          if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
            xxxFlushDeferredWindowEvents();
          if ( v14 )
          {
            ObfDereferenceObject(v14);
            v14 = 0LL;
          }
          goto LABEL_27;
        }
        v57[0] = 1;
        DesktopNotificationEvent = -1073741801;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v57);
        gdwDeferWinEvent += v47;
        if ( !(v47 + gdwDeferWinEvent) && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        *(_QWORD *)(gptiCurrent + 376LL) = v21;
        zzzSetDesktop(gptiCurrent);
      }
      v12 = 0;
      goto LABEL_71;
    }
LABEL_27:
    if ( (*((_DWORD *)Object + 8) & 4) == 0 )
    {
      v34 = RtlLengthSid(SeExports->SeWorldSid);
      v35 = v34 + 8;
      v36 = Win32AllocPoolWithQuota(v34 + 8, 1702064981LL);
      v37 = v36;
      if ( !v36
        || (*(_WORD *)v36 = 0,
            *(_WORD *)(v36 + 2) = v35,
            *(_DWORD *)(v36 + 4) = 0x100000,
            RtlCopySid(v34, (PSID)(v36 + 8), SeExports->SeWorldSid),
            v11 = (void *)CreateSecurityDescriptor(v37, v35, 0LL),
            Win32FreePool(v37),
            !v11) )
      {
        DesktopNotificationEvent = -1073741801;
        goto LABEL_70;
      }
      DesktopNotificationEvent = CreateDesktopNotificationEvent(v11);
      if ( DesktopNotificationEvent < 0 )
      {
LABEL_70:
        v12 = v55;
        goto LABEL_71;
      }
      Win32FreePool(v11);
    }
    inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
    DesktopNotificationEvent = inserted;
    if ( inserted >= 0 )
    {
      if ( inserted == 0x40000000 )
      {
LABEL_39:
        ObfDereferenceObject(Object);
        *a10 = Handle;
        return 0LL;
      }
      SecurityDescriptor = 0LL;
      LOBYTE(MemoryAllocated) = 0;
      SeCaptureSubjectContext(&SubjectContext);
      SeLockSubjectContext(&SubjectContext);
      v31 = *(void **)ObQueryNameInfo(Object);
      if ( v31
        && (DesktopNotificationEvent = ObGetObjectSecurity(v31, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated),
            DesktopNotificationEvent < 0) )
      {
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
      }
      else
      {
        DesktopNotificationEvent = SeAssignSecurity(
                                     SecurityDescriptor,
                                     ExplicitDescriptor,
                                     &NewDescriptor,
                                     1u,
                                     &SubjectContext,
                                     WinStaMapping,
                                     PagedPool);
        ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        if ( DesktopNotificationEvent >= 0 )
        {
          v59 = 15;
          DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                       Object,
                                       &v59,
                                       NewDescriptor,
                                       (char *)Object - 8,
                                       1,
                                       WinStaMapping);
          SeDeassignSecurity(&NewDescriptor);
          if ( DesktopNotificationEvent >= 0 )
          {
            for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
              ;
            LockObjectAssignment(i, Object);
            if ( (*((_DWORD *)Object + 8) & 4) == 0 )
            {
              v38 = a8;
              if ( a8 )
              {
                PushW32ThreadLock(Object, v66, UserDereferenceObject);
                if ( !xxxSafeLoadKeyboardLayoutEx(Object, v69, 0LL, a5, a6, a7, v38, a9, -2147483647) )
                  DesktopNotificationEvent = -1073741823;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v39, v40, v41);
                *(_QWORD *)(ThreadWin32Thread + 16) = v66[0];
              }
            }
          }
LABEL_38:
          v11 = 0LL;
          if ( DesktopNotificationEvent >= 0 )
            goto LABEL_39;
          goto LABEL_70;
        }
        if ( DesktopNotificationEvent != -1073741790 )
        {
          v54 = RtlNtStatusToDosError(DesktopNotificationEvent);
          UserSetLastError(v54);
          goto LABEL_38;
        }
        v53 = RtlNtStatusToDosError(-1073741790);
        UserSetLastError(v53);
      }
      v11 = 0LL;
      goto LABEL_70;
    }
    Object = 0LL;
    goto LABEL_38;
  }
  v43 = RtlNtStatusToDosError(v16);
  UserSetLastError(v43);
  return (unsigned int)DesktopNotificationEvent;
}
