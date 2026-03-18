/*
 * XREFs of NtUserBuildHwndList @ 0x1C0068D00
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C001B370 (MapDesktop.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C0069640 (CallerCanSeeImmersiveWindows.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned __int64 a8)
{
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 ThreadDesktopWindow; // rax
  PVOID v15; // rcx
  _DWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  PVOID v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // esi
  _DWORD *v22; // r15
  int v23; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _BYTE v28[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+50h] [rbp-48h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-40h]
  PVOID v32; // [rsp+60h] [rbp-38h]
  int v33; // [rsp+68h] [rbp-30h]
  int v34; // [rsp+6Ch] [rbp-2Ch]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  int v36; // [rsp+B0h] [rbp+18h]

  v36 = a3;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v28[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v28);
  v13 = 2 * (*gpsi & 4 | 1);
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v13 |= 0x20u;
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_39;
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v25 = PtiFromThreadId();
    v18 = v25;
    if ( !v25 )
      goto LABEL_38;
    v26 = *(_QWORD *)(v25 + 408);
    if ( !v26 )
      goto LABEL_38;
    ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL) + 112LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !a1 )
  {
    v19 = 0LL;
    Object = 0LL;
    goto LABEL_10;
  }
  LOBYTE(v12) = 1;
  if ( (int)ValidateHdesk(a1, v12, 1LL, &Object) < 0 )
  {
LABEL_39:
    v23 = -1073741816;
    goto LABEL_25;
  }
  v33 = 0;
  v34 = 0;
  v32 = Object;
  v30 = 1;
  CurrentProcess = PsGetCurrentProcess(v15);
  v23 = MapDesktop((__int64)&v30);
  if ( v23 < 0 )
  {
    v27 = 6LL;
    goto LABEL_42;
  }
  v19 = Object;
  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 112LL);
LABEL_10:
  if ( !ThreadDesktopWindow )
  {
    if ( v19 )
      goto LABEL_14;
    ThreadDesktopWindow = GetThreadDesktopWindow(v18);
    if ( ThreadDesktopWindow )
      goto LABEL_13;
LABEL_38:
    v23 = -1073741816;
    UserSetLastError(87LL);
    goto LABEL_25;
  }
  if ( v36 )
  {
    v13 |= 1u;
LABEL_13:
    ThreadDesktopWindow = *(_QWORD *)(ThreadDesktopWindow + 112);
  }
LABEL_14:
  v20 = BuildHwndList(ThreadDesktopWindow, v13, v18);
  v11 = v20;
  v29 = v20;
  if ( v20 )
  {
    v21 = ((*(_QWORD *)(v20 + 8) - v20 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v22 = (_DWORD *)a8;
    v16 = (_DWORD *)a8;
    if ( a8 >= W32UserProbeAddress )
      v16 = (_DWORD *)W32UserProbeAddress;
    *v16 = *v16;
    if ( v21 > a6 )
    {
      v23 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v11 + 32), 8LL * v21);
      v23 = 0;
    }
    *v22 = v21;
    goto LABEL_21;
  }
  v23 = -1073741816;
  v27 = 8LL;
LABEL_42:
  UserSetLastError(v27);
LABEL_21:
  if ( v11 )
    FreeHwndList(v11);
  v15 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_25:
  if ( !v28[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v28);
  }
  UserSessionSwitchLeaveCrit(v15, v12, v16, v17);
  return (unsigned int)v23;
}
