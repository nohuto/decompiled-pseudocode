/*
 * XREFs of xxxCsDdeInitialize @ 0x1C010FB1C
 * Callers:
 *     NtUserDdeInitialize @ 0x1C010FA30 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxSetWindowLongPtr @ 0x1C004E638 (xxxSetWindowLongPtr.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxChangeMonitorFlags @ 0x1C010FD54 (xxxChangeMonitorFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // eax
  char v12; // r8
  _DWORD *Window; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  struct tagWND **v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD v29[2]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v30[3]; // [rsp+A8h] [rbp-11h] BYREF
  _QWORD v31[9]; // [rsp+C0h] [rbp+7h] BYREF

  v9 = 0LL;
  if ( !PsGetCurrentProcessWin32Process(a1, a2)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7),
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
             -1073741824,
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
    xxxDestroyWindow((__int64)Window, v16, v17);
    return 16399LL;
  }
  v29[1] = Window;
  v19 = (struct tagWND **)(v15 + 48);
  v29[0] = v15 + 48;
  HMAssignmentLock(v29);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  xxxSetWindowLongPtr(*v19, 0, *(_QWORD *)v18, 0LL, 0);
  if ( !LOBYTE(v29[0]) )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v29);
  }
  *(_QWORD *)(v18 + 56) = a5;
  *(_QWORD *)(v18 + 24) = psiiList;
  *(_DWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 32) = *(_QWORD *)(gptiCurrent + 544LL);
  v20 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 544LL) = v18;
  v30[0] = v20;
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = v18;
  ++*(_DWORD *)(v18 + 8);
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = Window;
  ++Window[2];
  psiiList = (struct tagSVR_INSTANCE_INFO *)v18;
  xxxChangeMonitorFlags(v18, a4);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v18 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    HMAssignmentUnlock(v19);
    if ( ThreadUnlock1(v25, v24) )
      xxxDestroyWindow((__int64)Window, v26, v28);
    ThreadUnlock1(v27, v26);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v18;
  if ( *v19 )
    v9 = *(_QWORD *)*v19;
  *a2 = v9;
  ThreadUnlock1(a1, gSharedInfo[0]);
  ThreadUnlock1(v22, v21);
  *a3 = MonitorFlags;
  return 0LL;
}
