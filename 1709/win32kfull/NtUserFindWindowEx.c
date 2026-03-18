/*
 * XREFs of NtUserFindWindowEx @ 0x1C006E540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C006E920 (_FindWindowEx.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01A0580 (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  EnterLeaveCrit *v13; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // r10
  int v19; // edx
  ULONG64 v20; // r8
  int v21; // ecx
  ULONG64 v22; // r9
  ULONG64 v23; // r11
  ULONG64 v24; // rdx
  __int64 *Window; // rax
  __int64 v26; // rsi
  unsigned int v27; // r8d
  int v29; // [rsp+34h] [rbp-54h]
  int v30; // [rsp+90h] [rbp+8h]

  v4 = a4;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v9) )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v30 = ++gdwAtomicCheckSerial;
        v9 = 0LL;
        v8 = gdwAtomicCheckLogSize;
        if ( gdwAtomicCheckLogSize )
        {
          v10 = gpAtomickCheckStacks;
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v9 << 6) + gpAtomickCheckStacks) )
          {
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= gdwAtomicCheckLogSize )
              goto LABEL_10;
          }
          v12 = (unsigned __int64)(unsigned int)v9 << 6;
          *(_DWORD *)(v12 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v12 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v12 + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v12 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_10:
  if ( a1 == -3 )
  {
    a1 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 432);
      if ( v17 )
        a1 = *(_QWORD *)(v17 + 104);
    }
    v4 = a4;
  }
  else if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_45;
  }
  if ( a2 )
  {
    v18 = ValidateHwnd(a2);
    if ( !v18 )
      goto LABEL_45;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v19 = *(_DWORD *)a3;
  v20 = *(_QWORD *)(a3 + 8);
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v21 = *(_DWORD *)v4;
  v29 = *(_DWORD *)v4;
  v22 = *(_QWORD *)(v4 + 8);
  if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (unsigned __int16)v19 + v20 + 2;
    if ( v23 >= MmUserProbeAddress
      || (unsigned __int16)v19 > (unsigned __int16)HIWORD(*(_DWORD *)a3)
      || (v19 & 1) != 0
      || v23 <= v20 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  if ( (v22 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = v22 + (unsigned __int16)v21 + 2LL;
  if ( v24 >= MmUserProbeAddress || (unsigned __int16)v21 > HIWORD(v29) || (v21 & 1) != 0 || v24 <= v22 )
    *(_BYTE *)MmUserProbeAddress = 0;
  Window = (__int64 *)FindWindowEx(a1, v18);
  if ( Window )
  {
    v26 = *Window;
    goto LABEL_47;
  }
LABEL_45:
  v26 = 0LL;
LABEL_47:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v13) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v27 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v13 = (EnterLeaveCrit *)((unsigned __int64)v27 << 6);
            if ( *(_DWORD *)((char *)v13 + gpAtomickCheckStacks) == v30 )
              break;
            if ( ++v27 >= gdwAtomicCheckLogSize )
              goto LABEL_55;
          }
          *(_DWORD *)(((unsigned __int64)v27 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_55:
  EnterLeaveCrit::~EnterLeaveCrit(v13);
  return v26;
}
