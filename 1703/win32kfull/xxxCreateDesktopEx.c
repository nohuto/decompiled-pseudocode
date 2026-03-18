/*
 * XREFs of xxxCreateDesktopEx @ 0x1C0011B6C
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000FB0C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C000FE54 (xxxConnectService.c)
 *     NtUserCreateDesktopEx @ 0x1C0010310 (NtUserCreateDesktopEx.c)
 *     xxxResolveDesktop @ 0x1C0010FB0 (xxxResolveDesktop.c)
 * Callees:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000FB0C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C0012728 (OpenDesktopCompletion.c)
 *     DwmAsyncDesktopCreate @ 0x1C0015D6C (DwmAsyncDesktopCreate.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     zzzSetDesktop @ 0x1C001A520 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C001B370 (MapDesktop.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     DwmAsyncDesktopFree @ 0x1C00A1814 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     _CloseDesktop @ 0x1C00C726C (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00C736C (CloseProtectedHandle.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01C32F0 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  __int64 Window; // r12
  int v8; // r14d
  NTSTATUS v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 *v12; // rsi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  int v17; // r15d
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // r11d
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rax
  struct tagWND *v26; // r15
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v30; // zf
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *v43; // rcx
  ULONG v44; // eax
  ULONG v45; // eax
  ULONG v46; // eax
  ULONG v47; // eax
  void *v48; // rax
  UserAtomicCheck *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 ThreadWin32Thread; // rax
  _QWORD *v56; // rcx
  int v57; // r11d
  __int64 v58; // r14
  void *v59; // rax
  int Object; // [rsp+20h] [rbp-288h]
  __int64 v61; // [rsp+90h] [rbp-218h]
  HANDLE Handle; // [rsp+98h] [rbp-210h] BYREF
  _BYTE v63[8]; // [rsp+A0h] [rbp-208h] BYREF
  int v64; // [rsp+A8h] [rbp-200h]
  __int64 v65; // [rsp+B0h] [rbp-1F8h]
  __int64 v66; // [rsp+B8h] [rbp-1F0h] BYREF
  int v67; // [rsp+C0h] [rbp-1E8h]
  HWINSTA v68[2]; // [rsp+C8h] [rbp-1E0h] BYREF
  _QWORD *v69; // [rsp+D8h] [rbp-1D0h]
  PVOID v70; // [rsp+E0h] [rbp-1C8h]
  __int128 v71; // [rsp+F0h] [rbp-1B8h]
  struct _OBJECT_HANDLE_INFORMATION v72; // [rsp+100h] [rbp-1A8h] BYREF
  _BYTE v73[8]; // [rsp+108h] [rbp-1A0h] BYREF
  _BYTE v74[8]; // [rsp+110h] [rbp-198h] BYREF
  PVOID v75; // [rsp+118h] [rbp-190h] BYREF
  __int64 v76; // [rsp+120h] [rbp-188h]
  _BYTE v77[8]; // [rsp+128h] [rbp-180h] BYREF
  __int64 v78; // [rsp+130h] [rbp-178h]
  __int64 v79; // [rsp+138h] [rbp-170h]
  __int64 v80; // [rsp+140h] [rbp-168h]
  union _LARGE_INTEGER Timeout; // [rsp+150h] [rbp-158h] BYREF
  __int128 v82; // [rsp+160h] [rbp-148h]
  __int128 v83; // [rsp+170h] [rbp-138h]
  __int128 v84; // [rsp+180h] [rbp-128h]
  __int128 v85; // [rsp+190h] [rbp-118h]
  int v86; // [rsp+1A0h] [rbp-108h] BYREF
  __int64 v87; // [rsp+1A8h] [rbp-100h]
  __int64 *v88; // [rsp+1B0h] [rbp-F8h]
  int v89; // [rsp+1B8h] [rbp-F0h]
  int v90; // [rsp+1BCh] [rbp-ECh]
  HWINSTA v91; // [rsp+1C0h] [rbp-E8h]
  __int128 v92; // [rsp+1D0h] [rbp-D8h] BYREF
  __int128 v93; // [rsp+1E0h] [rbp-C8h] BYREF
  __int128 v94; // [rsp+1F0h] [rbp-B8h] BYREF
  __int128 v95; // [rsp+200h] [rbp-A8h] BYREF
  __int128 v96; // [rsp+210h] [rbp-98h] BYREF
  __int128 v97; // [rsp+220h] [rbp-88h] BYREF
  _QWORD v98[3]; // [rsp+230h] [rbp-78h] BYREF
  _QWORD v99[3]; // [rsp+248h] [rbp-60h] BYREF
  _QWORD v100[3]; // [rsp+260h] [rbp-48h] BYREF
  _QWORD v101[3]; // [rsp+278h] [rbp-30h] BYREF

  Window = 0LL;
  v65 = 0LL;
  v61 = 0LL;
  v8 = 0;
  v64 = -1;
  v67 = 0;
  v68[0] = *(HWINSTA *)(a1 + 8);
  v91 = v68[0];
  v72.HandleAttributes = gSessionId;
  v72.GrantedAccess = a4;
  Object = a3;
  LOBYTE(a3) = a6 == 0;
  v9 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, Object, &v72, &Handle);
  v10 = v9;
  if ( v9 < 0 )
  {
    v44 = RtlNtStatusToDosError(v9);
    UserSetLastError(v44);
    CleanupDirtyDesktops();
    goto LABEL_115;
  }
  if ( v9 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v45 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v45);
      CloseProtectedHandle(Handle);
LABEL_91:
      v10 = -1073741801;
      goto LABEL_115;
    }
    *a5 = Handle;
    v8 = 1;
  }
  v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v75, 0LL);
  v10 = v11;
  v12 = (__int64 *)v75;
  v70 = v75;
  if ( v11 < 0 )
  {
    v46 = RtlNtStatusToDosError(v11);
    UserSetLastError(v46);
    CloseProtectedHandle(Handle);
    goto LABEL_115;
  }
  if ( v8 )
  {
    v10 = OpenDesktopCompletion(v75, Handle, a2);
    if ( v10 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v12);
    return (unsigned int)v10;
  }
  v14 = *((_QWORD *)v75 + 5);
  v66 = v14;
  v15 = *(_QWORD *)(v14 + 24);
  v69 = (_QWORD *)*((_QWORD *)v75 + 1);
  v69[21] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle);
    ObfDereferenceObject(v12);
    goto LABEL_91;
  }
  if ( gpepCSRSS )
  {
    v86 = 1;
    v87 = gpepCSRSS;
    v88 = v12;
    v89 = 0;
    v90 = 1;
    v10 = MapDesktop(&v86);
    if ( v10 < 0 )
    {
      CloseProtectedHandle(Handle);
      ObfDereferenceObject(v12);
      v47 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v47);
      goto LABEL_115;
    }
    v14 = v66;
  }
  v16 = ReferenceDwmApiPort();
  if ( v16 )
  {
    if ( (*(_DWORD *)(v14 + 32) & 0x200) != 0 )
    {
      v48 = (void *)ReferenceDwmApiPort();
      DwmAsyncDesktopCreate(v48);
      zzzComposeDesktop((struct tagDESKTOP *)v12);
      v67 = 1;
      v14 = v66;
    }
    DereferenceDwmApiPort(v16);
  }
  v76 = *(_QWORD *)(gptiCurrent + 376LL);
  v80 = *(_QWORD *)(v76 + 304);
  v79 = *(_QWORD *)(gptiCurrent + 408LL);
  v78 = *(_QWORD *)(gptiCurrent + 512LL);
  *(_QWORD *)(gptiCurrent + 376LL) = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL);
  PushW32ThreadLock(v12, v101, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v63);
  v17 = zzzSetDesktop(gptiCurrent);
  if ( v17 < 0 )
    goto LABEL_97;
  v18 = *(_DWORD *)(gptiCurrent + 440LL);
  v64 = v18 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 440LL) = v18 | 0x10000000;
  if ( !((__int64 (*)(void))PsGetCurrentProcessWin32Process)()
    || (v19 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)(), v20 = IsImmersiveAppRestricted(v19), v21 = 1, !v20) )
  {
    v21 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             32769,
             32769,
             0,
             -2113929216,
             *(_DWORD *)(*gpDispInfo + 24LL),
             *(_DWORD *)(*gpDispInfo + 28LL),
             *(_DWORD *)(*gpDispInfo + 32LL) - *(_DWORD *)(*gpDispInfo + 24LL),
             *(_DWORD *)(*gpDispInfo + 36LL) - *(_DWORD *)(*gpDispInfo + 28LL),
             0LL,
             0LL,
             hModuleWin,
             0LL,
             1,
             778,
             v21,
             0LL);
  if ( !Window )
    goto LABEL_103;
  v98[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v98;
  v98[1] = Window;
  ++*(_DWORD *)(Window + 8);
  if ( !((__int64 (*)(void))PsGetCurrentProcessWin32Process)()
    || (v22 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)(), v23 = IsImmersiveAppRestricted(v22), v24 = 1, !v23) )
  {
    v24 = 0;
  }
  v25 = xxxCreateWindowEx(
          0,
          (unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
          0,
          -2113929216,
          0,
          0,
          100,
          100,
          0LL,
          0LL,
          hModuleWin,
          0LL,
          1,
          778,
          v24,
          0LL);
  v26 = (struct tagWND *)v25;
  v65 = v25;
  if ( !v25 )
  {
LABEL_103:
    v17 = -1073741801;
    if ( v63[0] )
      goto LABEL_102;
    goto LABEL_99;
  }
  v99[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v99;
  v99[1] = v25;
  ++*(_DWORD *)(v25 + 8);
  *(_WORD *)(v25 + 82) = *(_WORD *)(v25 + 82) & 0xC000 | 0x29F;
  v27 = v69 + 2;
  *(_QWORD *)(*v69 + 8LL) = *(_QWORD *)(Window + 48);
  *(_QWORD *)&v71 = v27;
  *((_QWORD *)&v71 + 1) = Window;
  v92 = v71;
  HMAssignmentLock(&v92);
  SetOrClrWF(0LL, Window, 1799LL, 1LL);
  SetOrClrWF(1LL, Window, 1794LL, 1LL);
  if ( (*(_DWORD *)(v14 + 32) & 4) == 0 && !gspwndFullScreen )
  {
    *(_QWORD *)&v71 = &gspwndFullScreen;
    *((_QWORD *)&v71 + 1) = Window;
    v93 = v71;
    HMAssignmentLock(&v93);
  }
  *(_QWORD *)&v82 = (char *)v26 + 104;
  *((_QWORD *)&v82 + 1) = *(_QWORD *)(v15 + 8);
  v94 = v82;
  HMAssignmentLock(&v94);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v73);
  xxxInheritWindowMonitor(v26);
  if ( !v73[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v73);
  }
  LinkWindow(v26);
  *(_QWORD *)&v83 = v12 + 13;
  *((_QWORD *)&v83 + 1) = v65;
  v95 = v83;
  HMAssignmentLock(&v95);
  HMAssignmentUnlock(v65 + 120);
  *(_QWORD *)&v84 = Window + 104;
  *((_QWORD *)&v84 + 1) = *(_QWORD *)(v15 + 8);
  v96 = v84;
  HMAssignmentLock(&v96);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v74);
  xxxInheritWindowMonitor((struct tagWND *)Window);
  if ( !v74[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v74);
  }
  LinkWindow((struct tagWND *)Window);
  HMAssignmentUnlock(Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 148LL) & 1) == 0 )
    *(_QWORD *)(Window + 216) = *(_QWORD *)(gpDispInfo + 120LL);
  if ( (*(_DWORD *)(v14 + 32) & 4) == 0 )
  {
    if ( !((__int64 (*)(void))PsGetCurrentProcessWin32Process)()
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28, 0LL),
          v30 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
          v31 = 1,
          v30) )
    {
      v31 = 0;
    }
    v32 = xxxCreateWindowEx(
            136,
            32774,
            32774,
            0,
            -2139095040,
            0,
            0,
            100,
            100,
            v12[13],
            0LL,
            hModuleWin,
            0LL,
            1,
            778,
            v31,
            0LL);
    v33 = v32;
    v61 = v32;
    if ( v32 )
    {
      *(_QWORD *)&v85 = v12 + 14;
      *((_QWORD *)&v85 + 1) = v32;
      v97 = v85;
      HMAssignmentLock(&v97);
      v100[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v100;
      v100[1] = v33;
      ++*(_DWORD *)(v33 + 8);
      goto LABEL_40;
    }
    v17 = -1073741801;
    if ( v63[0] )
    {
      v38 = 0LL;
      goto LABEL_117;
    }
LABEL_99:
    --gdwInAtomicOperation;
    goto LABEL_100;
  }
  v33 = 0LL;
LABEL_40:
  HMChangeOwnerThread(v69[2], *(_QWORD *)(v15 + 16));
  HMChangeOwnerThread(v65, *(_QWORD *)(v15 + 16));
  if ( (*(_DWORD *)(v14 + 32) & 4) == 0 )
    HMChangeOwnerThread(v33, *(_QWORD *)(v15 + 16));
  *(_QWORD *)(gptiCurrent + 376LL) = v76;
  *(_DWORD *)(gptiCurrent + 440LL) = v64 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
  v17 = zzzSetDesktop(gptiCurrent);
  if ( v17 < 0 )
  {
LABEL_97:
    if ( v63[0] )
      goto LABEL_102;
    --gdwInAtomicOperation;
LABEL_100:
    v49 = (UserAtomicCheck *)v63;
LABEL_101:
    UserAtomicCheck::UnregisterStack(v49);
    goto LABEL_102;
  }
  if ( !v63[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v63);
  }
  v37 = (_DWORD *)gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
  {
    xxxFlushDeferredWindowEvents();
    v37 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( *(_QWORD *)(v15 + 56) )
  {
    if ( (*(_DWORD *)v15 & 2) == 0 )
    {
      *(_QWORD *)(gptiRit + 536LL) = v14;
      *(_QWORD *)(*(_QWORD *)(v15 + 16) + 536LL) = v14;
LABEL_72:
      KeSetEvent(*(PRKEVENT *)(v15 + 56), 1, 0);
      if ( (*(_DWORD *)v15 & 2) == 0 )
      {
        if ( gdwInAtomicOperation )
        {
          v42 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v42, gdwInAtomicOperation, v35, v36);
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
      v43 = *(void **)(v15 + 56);
      if ( v43 )
      {
        ObfDereferenceObject(v43);
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      v37 = (_DWORD *)gpsi;
      *gpsi |= 0x800u;
      goto LABEL_49;
    }
    ++*v37;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v66);
    v17 = zzzSetDesktop(*(struct tagTHREADINFO **)(v15 + 16));
    if ( v17 >= 0 )
    {
      if ( !(_BYTE)v66 )
      {
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v66);
      }
      if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
      goto LABEL_72;
    }
    if ( !(_BYTE)v66 )
    {
      --gdwInAtomicOperation;
      v49 = (UserAtomicCheck *)&v66;
      goto LABEL_101;
    }
LABEL_102:
    v38 = v61;
    goto LABEL_117;
  }
LABEL_49:
  if ( v15 == gTermIO )
    xxxSetWindowPos((struct tagWND *)Window, 0, 0, 1115);
  if ( !v80 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 376LL) + 304LL);
  if ( !gspdeskDisconnect && v12 == grpdeskLogon )
  {
    if ( (unsigned int)xxxCreateDisconnectDesktop(v68[0], (struct tagWINDOWSTATION *)v14) )
    {
      KeSetEvent(gpEventDiconnectDesktop, 1, 0);
      gdwHydraHint |= 0x40000u;
      goto LABEL_54;
    }
    if ( v61 )
      ThreadUnlock1(v41, v40);
    ThreadUnlock1(v41, v40);
    ThreadUnlock1(v51, v50);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v52, v53, v54);
    *(_QWORD *)(ThreadWin32Thread + 16) = v101[0];
    ObfDereferenceObject(v75);
    CloseDesktop(Handle);
    v10 = -1073741823;
LABEL_115:
    *a5 = 0LL;
    return (unsigned int)v10;
  }
LABEL_54:
  v38 = v61;
  while ( 1 )
  {
    if ( v38 )
    {
      v38 = ThreadUnlock1(v37, v34);
      v61 = v38;
    }
    if ( v65 )
      v65 = ThreadUnlock1(v37, v34);
    if ( Window )
      Window = ThreadUnlock1(v37, v34);
    v39 = W32GetThreadWin32Thread(KeGetCurrentThread(), v34, v35, v36);
    *(_QWORD *)(v39 + 16) = v101[0];
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v17 = -1073741801;
    v12 = (__int64 *)v70;
LABEL_117:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v77);
    if ( v38 )
    {
      xxxDestroyWindow(v38);
      HMAssignmentUnlock(v12 + 14);
    }
    if ( v65 )
    {
      xxxDestroyWindow(v65);
      HMAssignmentUnlock(v12 + 13);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      v56 = v69 + 2;
      *(_QWORD *)(*v69 + 8LL) = 0LL;
      HMAssignmentUnlock(v56);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 376LL) = v76;
    v57 = -1;
    if ( v64 != -1 )
      *(_DWORD *)(gptiCurrent + 440LL) = v64 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
    if ( !v77[0] )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v77);
    }
    gdwDeferWinEvent += v57;
    if ( !(v57 + gdwDeferWinEvent) && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v68);
    zzzSetDesktop(gptiCurrent);
    if ( !LOBYTE(v68[0]) )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v68);
    }
    if ( v67 )
    {
      v58 = ReferenceDwmApiPort();
      if ( v58 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v12);
        v59 = (void *)ReferenceDwmApiPort();
        DwmAsyncDesktopFree(v59);
        DereferenceDwmApiPort(v58);
        v38 = v61;
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v80 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 376LL) + 304LL);
  }
  if ( v17 >= 0 )
    *((_DWORD *)v70 + 12) |= 0x10u;
  ObfDereferenceObject(v70);
  *a5 = Handle;
  return (unsigned int)v17;
}
