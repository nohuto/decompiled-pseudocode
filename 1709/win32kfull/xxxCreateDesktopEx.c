/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00D9EA0
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D7E24 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C00D8164 (xxxConnectService.c)
 *     NtUserCreateDesktopEx @ 0x1C00D8640 (NtUserCreateDesktopEx.c)
 *     xxxResolveDesktop @ 0x1C00D92F0 (xxxResolveDesktop.c)
 * Callees:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x1C0045B38 (DwmAsyncDesktopCreate.c)
 *     _CloseDesktop @ 0x1C0048EAC (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C0048FAC (CloseProtectedHandle.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     zzzSetDesktop @ 0x1C008C630 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C008E520 (MapDesktop.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D7E24 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C00DA9E8 (OpenDesktopCompletion.c)
 *     DwmAsyncDesktopFree @ 0x1C00E3988 (DwmAsyncDesktopFree.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01C600C (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  _DWORD *Window; // r13
  volatile signed __int32 *v9; // r12
  NTSTATUS v10; // eax
  int v11; // ebx
  int v12; // eax
  _QWORD *v13; // rsi
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r9
  int v20; // esi
  int v21; // eax
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v24; // zf
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  char v33; // cl
  __int64 v34; // rdx
  volatile signed __int32 *v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // r9
  UserAtomicCheck *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  volatile signed __int32 *v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  void *v58; // rcx
  __int64 v59; // r9
  ULONG v60; // eax
  __int64 v61; // rdx
  ULONG v62; // eax
  __int64 v63; // rdx
  ULONG v64; // eax
  __int64 v65; // rdx
  ULONG v66; // eax
  __int64 v67; // rdx
  __int64 **v68; // rax
  __int64 v69; // rbx
  void *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  _QWORD *v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rcx
  _QWORD *v82; // rbx
  void *v83; // rax
  HANDLE Handle; // [rsp+90h] [rbp-238h] BYREF
  int v85; // [rsp+98h] [rbp-230h] BYREF
  int v86; // [rsp+A0h] [rbp-228h]
  PVOID Object; // [rsp+A8h] [rbp-220h] BYREF
  int v88; // [rsp+B0h] [rbp-218h]
  volatile signed __int32 *v89; // [rsp+B8h] [rbp-210h]
  PVOID v90; // [rsp+C0h] [rbp-208h]
  __int64 v91; // [rsp+C8h] [rbp-200h]
  __int64 v92; // [rsp+D0h] [rbp-1F8h]
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp-1E8h] BYREF
  _QWORD *v94; // [rsp+E8h] [rbp-1E0h]
  struct _OBJECT_HANDLE_INFORMATION v95; // [rsp+F0h] [rbp-1D8h] BYREF
  _BYTE v96[8]; // [rsp+F8h] [rbp-1D0h] BYREF
  __int64 v97; // [rsp+100h] [rbp-1C8h]
  void *v98; // [rsp+108h] [rbp-1C0h]
  int v99[4]; // [rsp+110h] [rbp-1B8h]
  _QWORD v100[2]; // [rsp+120h] [rbp-1A8h] BYREF
  _BYTE v101[8]; // [rsp+130h] [rbp-198h] BYREF
  HWINSTA v102; // [rsp+138h] [rbp-190h]
  _BYTE v103[8]; // [rsp+140h] [rbp-188h] BYREF
  _BYTE v104[24]; // [rsp+148h] [rbp-180h] BYREF
  __int128 v105; // [rsp+160h] [rbp-168h]
  _BYTE v106[16]; // [rsp+170h] [rbp-158h] BYREF
  __int128 v107; // [rsp+180h] [rbp-148h]
  __int128 v108; // [rsp+190h] [rbp-138h]
  __int128 v109; // [rsp+1A0h] [rbp-128h]
  __int128 v110; // [rsp+1B0h] [rbp-118h]
  int v111; // [rsp+1C0h] [rbp-108h] BYREF
  __int64 v112; // [rsp+1C8h] [rbp-100h]
  _QWORD *v113; // [rsp+1D0h] [rbp-F8h]
  int v114; // [rsp+1D8h] [rbp-F0h]
  int v115; // [rsp+1DCh] [rbp-ECh]
  __int128 v116; // [rsp+1F0h] [rbp-D8h] BYREF
  __int128 v117; // [rsp+200h] [rbp-C8h] BYREF
  __int128 v118; // [rsp+210h] [rbp-B8h] BYREF
  __int128 v119; // [rsp+220h] [rbp-A8h] BYREF
  __int128 v120; // [rsp+230h] [rbp-98h] BYREF
  _QWORD v121[3]; // [rsp+240h] [rbp-88h] BYREF
  _QWORD v122[3]; // [rsp+258h] [rbp-70h] BYREF
  _QWORD v123[3]; // [rsp+270h] [rbp-58h] BYREF
  _QWORD v124[3]; // [rsp+288h] [rbp-40h] BYREF
  char v125; // [rsp+2D8h] [rbp+10h]

  v125 = a2;
  v6 = a3;
  Window = 0LL;
  v89 = 0LL;
  v9 = 0LL;
  v85 = 0;
  v86 = -1;
  v88 = 0;
  v102 = *(HWINSTA *)(a1 + 8);
  v95.HandleAttributes = gSessionId;
  v95.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v95, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v60 = RtlNtStatusToDosError(v10);
    UserSetLastError(v60, v61);
    CleanupDirtyDesktops();
    goto LABEL_91;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v62 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v62, v63);
      CloseProtectedHandle(Handle, 0);
LABEL_76:
      v11 = -1073741801;
      goto LABEL_91;
    }
    *a5 = Handle;
    v85 = 1;
  }
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v12;
  v13 = Object;
  v90 = Object;
  if ( v12 < 0 )
  {
    v64 = RtlNtStatusToDosError(v12);
    UserSetLastError(v64, v65);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_91;
  }
  if ( v85 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v11;
  }
  v15 = *((_QWORD *)Object + 5);
  v92 = v15;
  v16 = *(_QWORD *)(v15 + 24);
  v94 = (_QWORD *)*((_QWORD *)Object + 1);
  v94[21] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v125 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v13);
    goto LABEL_76;
  }
  v17 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v111 = 1;
    v112 = gpepCSRSS;
    v113 = v13;
    v114 = 0;
    v115 = 1;
    v85 = MapDesktop((__int64)&v111);
    if ( v85 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v13);
      v66 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v66, v67);
      v11 = v85;
      goto LABEL_91;
    }
  }
  v91 = ReferenceDwmApiPort(v17);
  if ( v91 )
  {
    if ( (*(_DWORD *)(v15 + 32) & 0x200) != 0 )
    {
      v68 = (__int64 **)v13[1];
      v69 = **v68;
      v70 = (void *)ReferenceDwmApiPort(*v68);
      DwmAsyncDesktopCreate(v70, v69);
      zzzComposeDesktop((struct tagDESKTOP *)v13);
      v88 = 1;
      v15 = v92;
    }
    DereferenceDwmApiPort(v91);
  }
  v97 = *(_QWORD *)(gptiCurrent + 400LL);
  v92 = *(_QWORD *)(v97 + 312);
  v91 = *(_QWORD *)(gptiCurrent + 432LL);
  v98 = *(void **)(gptiCurrent + 568LL);
  *(_QWORD *)(gptiCurrent + 400LL) = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 400LL);
  PushW32ThreadLock((__int64)v13, v124, UserDereferenceObject, v18);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v85);
  v20 = zzzSetDesktop(gptiCurrent, (__int64)v13, Handle, v19);
  if ( v20 < 0 )
    goto LABEL_83;
  v21 = *(_DWORD *)(gptiCurrent + 464LL);
  v86 = v21 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 464LL) = v21 | 0x10000000;
  *(_OWORD *)v99 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !PsGetCurrentProcessWin32Process(gpDispInfo)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22),
        v24 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
        v25 = 1,
        v24) )
  {
    v25 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)0x8001,
             32769LL,
             0LL,
             0x82000000,
             v99[0],
             v99[1],
             v99[2] - v99[0],
             v99[3] - v99[1],
             0LL,
             0LL,
             hModuleWin,
             0LL,
             1u,
             0x30Au,
             v25,
             0LL);
  if ( !Window )
    goto LABEL_82;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28);
  v121[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v121;
  v121[1] = Window;
  _InterlockedAdd(Window + 2, 1u);
  if ( !PsGetCurrentProcessWin32Process(v121)
    || (v31 = PsGetCurrentProcessWin32Process(v30), v32 = IsImmersiveAppRestricted(v31), v33 = 1, !v32) )
  {
    v33 = 0;
  }
  v35 = xxxCreateWindowEx(
          0,
          (wchar_t *)(unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
          0LL,
          0x82000000,
          0,
          0,
          0x64u,
          0x64u,
          0LL,
          0LL,
          hModuleWin,
          0LL,
          1u,
          0x30Au,
          v33,
          0LL);
  v89 = v35;
  if ( !v35 )
  {
LABEL_82:
    v20 = -1073741801;
LABEL_83:
    v48 = (UserAtomicCheck *)&v85;
    goto LABEL_84;
  }
  v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v36, v37);
  v122[0] = *(_QWORD *)(v38 + 392);
  *(_QWORD *)(v38 + 392) = v122;
  v122[1] = v35;
  _InterlockedAdd(v35 + 2, 1u);
  *((_WORD *)v35 + 41) = *((_WORD *)v35 + 41) & 0xC000 | 0x29F;
  v39 = v94 + 2;
  *(_QWORD *)(*v94 + 8LL) = *((_QWORD *)Window + 6);
  *(_QWORD *)&v107 = v39;
  *((_QWORD *)&v107 + 1) = Window;
  v116 = v107;
  HMAssignmentLock(&v116);
  SetOrClrWF(0, Window, 0x707u, 1);
  SetOrClrWF(1, Window, 0x702u, 1);
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 && !gspwndFullScreen )
  {
    v100[0] = &gspwndFullScreen;
    v100[1] = Window;
    HMAssignmentLock(v100);
  }
  *(_QWORD *)&v108 = v35 + 26;
  *((_QWORD *)&v108 + 1) = *(_QWORD *)(v16 + 8);
  v117 = v108;
  HMAssignmentLock(&v117);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v106);
  xxxInheritWindowMonitor((struct tagWND *)v35, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v106);
  LinkWindow((struct tagWND *)v35, 0LL, *(_QWORD *)(v16 + 8));
  *(_QWORD *)&v105 = (char *)Object + 104;
  *((_QWORD *)&v105 + 1) = v35;
  v118 = v105;
  HMAssignmentLock(&v118);
  HMAssignmentUnlock(v35 + 30);
  *(_QWORD *)&v109 = Window + 26;
  *((_QWORD *)&v109 + 1) = *(_QWORD *)(v16 + 8);
  v119 = v109;
  HMAssignmentLock(&v119);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v101);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v101);
  LinkWindow((struct tagWND *)Window, 0LL, *(_QWORD *)(v16 + 8));
  HMAssignmentUnlock(Window + 30);
  if ( (*(_DWORD *)(gpDispInfo + 124LL) & 1) == 0 )
    *((_QWORD *)Window + 27) = *(_QWORD *)(gpDispInfo + 112LL);
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
  {
    if ( !PsGetCurrentProcessWin32Process(gpDispInfo)
      || (v41 = PsGetCurrentProcessWin32Process(v40),
          v24 = (unsigned int)IsImmersiveAppRestricted(v41) == 0,
          v42 = 1,
          v24) )
    {
      v42 = 0;
    }
    v9 = xxxCreateWindowEx(
           136,
           (wchar_t *)0x8006,
           32774LL,
           0LL,
           0x80800000,
           0,
           0,
           0x64u,
           0x64u,
           *(struct tagWND **)v105,
           0LL,
           hModuleWin,
           0LL,
           1u,
           0x30Au,
           v42,
           0LL);
    if ( v9 )
    {
      *(_QWORD *)&v110 = (char *)Object + 112;
      *((_QWORD *)&v110 + 1) = v9;
      v120 = v110;
      HMAssignmentLock(&v120);
      v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45);
      v123[0] = *(_QWORD *)(v46 + 392);
      *(_QWORD *)(v46 + 392) = v123;
      v123[1] = v9;
      _InterlockedAdd(v9 + 2, 1u);
      goto LABEL_35;
    }
    goto LABEL_82;
  }
LABEL_35:
  HMChangeOwnerThread(v94[2], *(_QWORD *)(v16 + 16));
  HMChangeOwnerThread(v35, *(_QWORD *)(v16 + 16));
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
    HMChangeOwnerThread(v9, *(_QWORD *)(v16 + 16));
  *(_QWORD *)(gptiCurrent + 400LL) = v97;
  *(_DWORD *)(gptiCurrent + 464LL) = v86 | *(_DWORD *)(gptiCurrent + 464LL) & 0xEFFFFFFF;
  v20 = zzzSetDesktop(gptiCurrent, v91, v98, v47);
  v48 = (UserAtomicCheck *)&v85;
  if ( v20 < 0 )
    goto LABEL_84;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v85);
  zzzEndDeferWinEventNotify();
  if ( !*(_QWORD *)(v16 + 56) )
    goto LABEL_39;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v96);
    v20 = zzzSetDesktop(*(struct tagTHREADINFO **)(v16 + 16), (__int64)Object, 0LL, v59);
    v48 = (UserAtomicCheck *)v96;
    if ( v20 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v96);
      zzzEndDeferWinEventNotify();
      goto LABEL_61;
    }
LABEL_84:
    UserAtomicCheck::~UserAtomicCheck(v48);
    goto LABEL_93;
  }
  *(_QWORD *)(gptiRit + 592LL) = v15;
  *(_QWORD *)(*(_QWORD *)(v16 + 16) + 592LL) = v15;
LABEL_61:
  KeSetEvent(*(PRKEVENT *)(v16 + 56), 1, 0);
  if ( (*(_DWORD *)v16 & 2) == 0 )
  {
    if ( gdwInAtomicOperation )
    {
      v57 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v57, gdwInAtomicOperation);
    while ( !grpdeskRitInput )
    {
      if ( gpEventSwitchDesktop )
      {
        Timeout.QuadPart = -200000LL;
        KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
      }
      else
      {
        UserSleep(20LL);
      }
    }
    EnterCrit(0LL, 1LL);
  }
  v58 = *(void **)(v16 + 56);
  if ( v58 )
  {
    ObfDereferenceObject(v58);
    *(_QWORD *)(v16 + 56) = 0LL;
  }
  v50 = gpsi;
  *gpsi |= 0x800u;
LABEL_39:
  if ( v16 == gTermIO[0] )
    xxxSetWindowPos((struct tagWND *)Window, 1LL, 0LL, 0LL, 0, 0, 1115);
  if ( !v92 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 400LL) + 312LL);
  if ( !gspdeskDisconnect && Object == grpdeskLogon )
  {
    if ( (unsigned int)xxxCreateDisconnectDesktop(v102, (struct tagWINDOWSTATION *)v15, v51) )
    {
      KeSetEvent(gpEventDiconnectDesktop, 1, 0);
      gdwHydraHint |= 0x40000u;
      goto LABEL_44;
    }
    if ( v9 )
      ThreadUnlock1(v56, v55);
    ThreadUnlock1(v56, v55);
    ThreadUnlock1(v72, v71);
    v76 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75);
    *(_QWORD *)(v76 + 16) = v124[0];
    ObfDereferenceObject(Object);
    CloseDesktop((unsigned __int64)Handle, 0);
    v11 = -1073741823;
LABEL_91:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
LABEL_44:
  v53 = v89;
  while ( 1 )
  {
    if ( v9 )
      v9 = (volatile signed __int32 *)ThreadUnlock1(v50, v49);
    if ( v53 )
      v89 = (volatile signed __int32 *)ThreadUnlock1(v50, v49);
    if ( Window )
      Window = (_DWORD *)ThreadUnlock1(v50, v49);
    v54 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v51, v52);
    *(_QWORD *)(v54 + 16) = v124[0];
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v20 = -1073741801;
LABEL_93:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v103);
    if ( v9 )
    {
      xxxDestroyWindow(v9, v77, v78);
      HMAssignmentUnlock((char *)v90 + 112);
    }
    v53 = v89;
    if ( v89 )
    {
      xxxDestroyWindow(v89, v77, v78);
      HMAssignmentUnlock((char *)v90 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window, v77, v78);
      v79 = v94 + 2;
      *(_QWORD *)(*v94 + 8LL) = 0LL;
      HMAssignmentUnlock(v79);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 400LL) = v97;
    if ( v86 != -1 )
      *(_DWORD *)(gptiCurrent + 464LL) = v86 | *(_DWORD *)(gptiCurrent + 464LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v103);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v104);
    zzzSetDesktop(gptiCurrent, v91, v98, v80);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v104);
    if ( v88 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v81);
      if ( Timeout.QuadPart )
      {
        v82 = v90;
        zzzDecomposeDesktop((struct tagDESKTOP *)v90);
        v83 = (void *)ReferenceDwmApiPort(v82[1]);
        DwmAsyncDesktopFree(v83);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v92 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 400LL) + 312LL);
  }
  if ( v20 >= 0 )
    *((_DWORD *)v90 + 12) |= 0x10u;
  ObfDereferenceObject(v90);
  *a5 = Handle;
  return (unsigned int)v20;
}
