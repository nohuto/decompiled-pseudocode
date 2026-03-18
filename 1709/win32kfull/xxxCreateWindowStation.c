/*
 * XREFs of xxxCreateWindowStation @ 0x1C00DB1AC
 * Callers:
 *     xxxConnectService @ 0x1C00D8164 (xxxConnectService.c)
 *     NtUserCreateWindowStation @ 0x1C00DAB20 (NtUserCreateWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     zzzSetDesktop @ 0x1C008C630 (zzzSetDesktop.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00DC280 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00DC5C8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxInitWindowStation @ 0x1C00DC7B8 (xxxInitWindowStation.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011B920 (xxxCleanupMotherDesktopWindow.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0142520 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
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
  __int64 v10; // r14
  void *v11; // r12
  void *v12; // r15
  int v13; // edi
  int *v14; // r13
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  int GlobalAtomTable; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  struct tagWND **v19; // rdi
  NTSTATUS inserted; // eax
  void *v21; // rcx
  _QWORD *i; // rcx
  __int64 v23; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r9
  int v28; // esi
  int v29; // esi
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v32; // al
  _DWORD *Window; // rax
  void *v34; // r8
  __int64 v35; // r9
  ULONG v36; // esi
  ULONG v37; // edi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 ThreadWin32Thread; // rax
  ULONG v49; // eax
  __int64 v50; // rdx
  NTSTATUS v51; // ecx
  ULONG v52; // eax
  __int64 v53; // rdx
  void *v54; // r8
  __int64 v55; // r9
  ULONG v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // r8
  int v60; // edi
  __int64 v61; // rbx
  int v62; // edi
  ULONG v63; // eax
  __int64 v64; // rdx
  ULONG v65; // eax
  __int64 v66; // rdx
  int v67; // [rsp+98h] [rbp-80h]
  PVOID Object; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v69[8]; // [rsp+A8h] [rbp-70h] BYREF
  int v70; // [rsp+B0h] [rbp-68h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C8h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+D0h] [rbp-48h] BYREF
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-40h] BYREF
  __int128 v76; // [rsp+F8h] [rbp-20h]
  __int128 v77; // [rsp+108h] [rbp-10h] BYREF
  _QWORD v78[10]; // [rsp+118h] [rbp+0h] BYREF
  void *MemoryAllocated; // [rsp+178h] [rbp+60h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+188h] [rbp+70h]
  __int64 v81; // [rsp+190h] [rbp+78h]

  v81 = a4;
  DesiredAccess = a3;
  ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0;
  v67 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO[0];
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 184, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v49 = RtlNtStatusToDosError(v15);
    UserSetLastError(v49, v50);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xB8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 3) = v14;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 8) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 136);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v51 = GlobalAtomTable;
      goto LABEL_50;
    }
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v51 = -1073741801;
LABEL_50:
      v52 = RtlNtStatusToDosError(v51);
      UserSetLastError(v52, v53);
      goto LABEL_58;
    }
    v19 = (struct tagWND **)(v14 + 2);
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 8) & 4) == 0 )
      {
        v36 = RtlLengthSid(SeExports->SeWorldSid);
        v37 = v36 + 8;
        v38 = Win32AllocPoolWithQuota(v36 + 8, 1702064981LL);
        v39 = v38;
        if ( !v38
          || (*(_WORD *)v38 = 0,
              *(_WORD *)(v38 + 2) = v37,
              *(_DWORD *)(v38 + 4) = 0x100000,
              RtlCopySid(v36, (PSID)(v38 + 8), SeExports->SeWorldSid),
              v12 = (void *)CreateSecurityDescriptor(v39, v37, 0LL),
              Win32FreePool(v39, v40, v41),
              !v12) )
        {
          DesktopNotificationEvent = -1073741801;
          goto LABEL_57;
        }
        DesktopNotificationEvent = CreateDesktopNotificationEvent(v12);
        if ( DesktopNotificationEvent < 0 )
        {
LABEL_57:
          v13 = v67;
          goto LABEL_58;
        }
        Win32FreePool(v12, v42, v43);
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
      DesktopNotificationEvent = inserted;
      if ( inserted >= 0 )
      {
        if ( inserted == 0x40000000 )
        {
LABEL_23:
          ObfDereferenceObject(Object);
          *a10 = Handle;
          return 0LL;
        }
        SecurityDescriptor = 0LL;
        LOBYTE(MemoryAllocated) = 0;
        SeCaptureSubjectContext(&SubjectContext);
        SeLockSubjectContext(&SubjectContext);
        v21 = *(void **)ObQueryNameInfo(Object);
        if ( v21
          && (DesktopNotificationEvent = ObGetObjectSecurity(v21, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated),
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
          ObReleaseObjectSecurity(SecurityDescriptor, (BOOLEAN)MemoryAllocated);
          SeUnlockSubjectContext(&SubjectContext);
          SeReleaseSubjectContext(&SubjectContext);
          if ( DesktopNotificationEvent >= 0 )
          {
            v70 = 15;
            DesktopNotificationEvent = ObSetSecurityDescriptorInfo(
                                         Object,
                                         &v70,
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
                v44 = a8;
                if ( a8 )
                {
                  PushW32ThreadLock((__int64)Object, v78, UserDereferenceObject, v23);
                  if ( !xxxSafeLoadKeyboardLayoutEx(Object, v81, 0LL, a5, a6, a7, v44, a9, -2147483647) )
                    DesktopNotificationEvent = -1073741823;
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47);
                  *(_QWORD *)(ThreadWin32Thread + 16) = v78[0];
                }
              }
            }
LABEL_22:
            v12 = 0LL;
            if ( DesktopNotificationEvent >= 0 )
              goto LABEL_23;
            goto LABEL_57;
          }
          if ( DesktopNotificationEvent != -1073741790 )
          {
            v65 = RtlNtStatusToDosError(DesktopNotificationEvent);
            UserSetLastError(v65, v66);
            goto LABEL_22;
          }
          v63 = RtlNtStatusToDosError(-1073741790);
          UserSetLastError(v63, v64);
        }
        v12 = 0LL;
        goto LABEL_57;
      }
      Object = 0LL;
      goto LABEL_22;
    }
    v10 = gptiCurrent;
    v11 = *(void **)(gptiCurrent + 432LL);
    v25 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 400LL);
    v26 = *(_QWORD *)(gptiCurrent + 400LL);
    MemoryAllocated = *(void **)(gptiCurrent + 568LL);
    *(_QWORD *)(gptiCurrent + 400LL) = v25;
    if ( v11 )
      ObfReferenceObject(v11);
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v69);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL, v27);
    if ( DesktopNotificationEvent < 0 )
    {
      UserAtomicCheck::Detach((UserAtomicCheck *)v69);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 400LL) = v26;
    }
    else
    {
      v28 = *(_DWORD *)(gptiCurrent + 464LL);
      *(_DWORD *)(gptiCurrent + 464LL) = v28 | 0x10000000;
      v29 = v28 & 0x10000000;
      v32 = 0;
      if ( PsGetCurrentProcessWin32Process(0x10000000LL) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v32 = 1;
      }
      Window = xxxCreateWindowEx(
                 0,
                 (wchar_t *)0x8001,
                 32769LL,
                 0LL,
                 0x82000000,
                 -32768,
                 -32768,
                 0xFFFFu,
                 0xFFFFu,
                 0LL,
                 0LL,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v32,
                 0LL);
      if ( Window )
      {
        *((_QWORD *)&v76 + 1) = Window;
        *(_QWORD *)&v76 = v14 + 2;
        v77 = v76;
        HMAssignmentLock(&v77);
        *(_DWORD *)(gptiCurrent + 464LL) = v29 | *(_DWORD *)(gptiCurrent + 464LL) & 0xEFFFFFFF;
        SetVisible(*v19, 1);
        HMChangeOwnerThread(*v19, *((_QWORD *)v14 + 2));
        v34 = MemoryAllocated;
        v67 = 1;
        v13 = 1;
        *(_QWORD *)(gptiCurrent + 400LL) = v26;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v34, v35);
        if ( DesktopNotificationEvent < 0 )
        {
          UserAtomicCheck::Detach((UserAtomicCheck *)v69);
          zzzEndDeferWinEventNotify();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v69);
          goto LABEL_58;
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v69);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)v69);
      zzzEndDeferWinEventNotify();
      v54 = MemoryAllocated;
      *(_QWORD *)(gptiCurrent + 400LL) = v26;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v54, v55);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v69);
    v13 = 0;
    goto LABEL_58;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_58:
  v56 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v56, v57);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v60 = *(_DWORD *)(v10 + 464);
    v61 = *(_QWORD *)(v10 + 400);
    *(_DWORD *)(v10 + 464) = v60 | 0x10000000;
    *(_QWORD *)(v10 + 400) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 400LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&ExplicitDescriptor);
    v62 = (*(_DWORD *)(v10 + 464) ^ v60) & 0x10000000;
    *(_QWORD *)(v10 + 400) = v61;
    *(_DWORD *)(v10 + 464) ^= v62;
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v12 )
    Win32FreePool(v12, v58, v59);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)DesktopNotificationEvent;
}
