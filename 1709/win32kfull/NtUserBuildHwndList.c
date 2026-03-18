/*
 * XREFs of NtUserBuildHwndList @ 0x1C006D090
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C006F5B0 (CallerCanSeeImmersiveWindows.c)
 *     MapDesktop @ 0x1C008E520 (MapDesktop.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        ULONG64 a8)
{
  __int64 v10; // r15
  ULONG64 v11; // rdx
  unsigned int v12; // esi
  __int64 ThreadDesktopWindow; // rax
  char *v14; // rcx
  __int64 v15; // r13
  PVOID v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // esi
  _DWORD *v20; // r12
  _DWORD *v21; // r8
  int v22; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int v29; // r8d
  int v30; // [rsp+48h] [rbp-50h] BYREF
  __int64 CurrentProcess; // [rsp+50h] [rbp-48h]
  PVOID v32; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+60h] [rbp-38h]
  int v34; // [rsp+64h] [rbp-34h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v37 = a3;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)((__int64 (*)(void))UserIsUserCritSecInExclusive)() )
    {
      ++gdwInAtomicOperation;
      v11 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v38 = ++gdwAtomicCheckSerial;
        v26 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v26 << 6) + gpAtomickCheckStacks) )
          {
            if ( ++v26 >= gdwAtomicCheckLogSize )
              goto LABEL_4;
          }
          v27 = (unsigned __int64)v26 << 6;
          *(_DWORD *)(v27 + gpAtomickCheckStacks) = v38;
          *(_DWORD *)(gpAtomickCheckStacks + v27 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v27 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v27 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_4:
  v12 = 2 * (*gpsi & 4 | 1);
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v12 |= 0x20u;
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_48;
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v24 = PtiFromThreadId(a5);
    v15 = v24;
    if ( !v24 )
      goto LABEL_42;
    v25 = *(_QWORD *)(v24 + 432);
    if ( !v25 )
      goto LABEL_42;
    ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 16LL) + 112LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( !a1 )
  {
    v16 = 0LL;
    Object = 0LL;
    goto LABEL_13;
  }
  LOBYTE(v11) = 1;
  if ( (int)ValidateHdesk(a1, v11, 1LL, &Object) < 0 )
  {
LABEL_48:
    v22 = -1073741816;
    goto LABEL_28;
  }
  v33 = 0;
  v34 = 0;
  v32 = Object;
  v30 = 1;
  CurrentProcess = PsGetCurrentProcess(v14, v11);
  v22 = MapDesktop(&v30);
  if ( v22 < 0 )
  {
    v28 = 6LL;
    goto LABEL_51;
  }
  v16 = Object;
  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 112LL);
LABEL_13:
  if ( !ThreadDesktopWindow )
  {
    if ( v16 )
      goto LABEL_17;
    ThreadDesktopWindow = GetThreadDesktopWindow(v15);
    if ( ThreadDesktopWindow )
      goto LABEL_16;
LABEL_42:
    v22 = -1073741816;
    UserSetLastError(87LL, v11);
    goto LABEL_28;
  }
  if ( v37 )
  {
    v12 |= 1u;
LABEL_16:
    ThreadDesktopWindow = *(_QWORD *)(ThreadDesktopWindow + 112);
  }
LABEL_17:
  v17 = BuildHwndList(ThreadDesktopWindow, v12, v15);
  v10 = v17;
  if ( v17 )
  {
    v19 = ((*(_QWORD *)(v17 + 8) - v17 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v20 = (_DWORD *)a8;
    v11 = MmUserProbeAddress;
    v21 = (_DWORD *)a8;
    if ( a8 >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = *v21;
    if ( v19 > a6 )
    {
      v22 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v10 + 32), 8LL * v19);
      v22 = 0;
    }
    *v20 = v19;
    goto LABEL_24;
  }
  v22 = -1073741816;
  v28 = 8LL;
LABEL_51:
  UserSetLastError(v28, v18);
LABEL_24:
  if ( v10 )
    FreeHwndList(v10);
  v14 = (char *)Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_28:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v14) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v29 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v11 = v29;
            v14 = (char *)((unsigned __int64)v29 << 6);
            if ( *(_DWORD *)&v14[gpAtomickCheckStacks] == v38 )
              break;
            if ( ++v29 >= gdwAtomicCheckLogSize )
              goto LABEL_31;
          }
          v11 = (unsigned __int64)v29 << 6;
          *(_DWORD *)(v11 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_31:
  UserSessionSwitchLeaveCrit(v14, v11);
  return (unsigned int)v22;
}
