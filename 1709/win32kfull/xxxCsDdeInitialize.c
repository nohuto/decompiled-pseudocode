/*
 * XREFs of xxxCsDdeInitialize @ 0x1C01189A4
 * Callers:
 *     NtUserDdeInitialize @ 0x1C01188B0 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetWindowLongPtr @ 0x1C00A3D38 (xxxSetWindowLongPtr.c)
 *     xxxChangeMonitorFlags @ 0x1C0118BE0 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // eax
  char v12; // r8
  volatile signed __int32 *Window; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  struct tagWND **v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v31[8]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-29h]
  __int128 v33; // [rsp+A8h] [rbp-21h]
  __int128 v34; // [rsp+B8h] [rbp-11h] BYREF
  _QWORD v35[3]; // [rsp+C8h] [rbp-1h] BYREF
  _QWORD v36[3]; // [rsp+E0h] [rbp+17h] BYREF

  v32 = gptiCurrent;
  v9 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8),
        v11 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
        v12 = 1,
        !v11) )
  {
    v12 = 0;
  }
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 868LL),
             *(unsigned __int16 *)(gpsi + 868LL),
             0LL,
             0xC0000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             hModuleWin,
             0LL,
             0,
             0x30Au,
             v12,
             0LL);
  if ( !Window )
    return 16399LL;
  LOBYTE(v14) = 9;
  v15 = HMAllocObject(gptiCurrent, 0LL, v14, 64LL);
  v18 = v15;
  if ( !v15 )
  {
    xxxDestroyWindow(Window, v16, v17);
    return 16399LL;
  }
  v19 = (struct tagWND **)(v15 + 48);
  *((_QWORD *)&v33 + 1) = Window;
  *(_QWORD *)&v33 = v15 + 48;
  v34 = v33;
  HMAssignmentLock(&v34);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
  xxxSetWindowLongPtr(*v19, 0LL, *(_QWORD *)v18, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v31);
  v20 = v32;
  *(_QWORD *)(v18 + 56) = a5;
  *(_QWORD *)(v18 + 24) = WPP_MAIN_CB.Dpc.DeferredRoutine;
  *(_DWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 32) = *(_QWORD *)(v20 + 600);
  v21 = *(_QWORD *)(v20 + 392);
  *(_QWORD *)(v20 + 600) = v18;
  v35[0] = v21;
  *(_QWORD *)(v20 + 392) = v35;
  v35[1] = v18;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)v18;
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  v36[0] = *(_QWORD *)(v20 + 392);
  *(_QWORD *)(v20 + 392) = v36;
  v36[1] = Window;
  _InterlockedIncrement(Window + 2);
  xxxChangeMonitorFlags(v18, a4);
  v22 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v18;
  LOBYTE(v22) = *(_BYTE *)(v22 + gSharedInfo[1] + 25);
  if ( (v22 & 1) != 0 )
  {
    HMAssignmentUnlock(v19);
    if ( ThreadUnlock1(v27, v26) )
      xxxDestroyWindow(Window, v28, v30);
    ThreadUnlock1(v29, v28);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v18;
  if ( *v19 )
    v9 = *(_QWORD *)*v19;
  *a2 = v9;
  ThreadUnlock1(v22, gSharedInfo[0]);
  ThreadUnlock1(v24, v23);
  *a3 = MonitorFlags;
  return 0LL;
}
