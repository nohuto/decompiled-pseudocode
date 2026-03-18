/*
 * XREFs of NtUserFindWindowEx @ 0x1C00A41E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C00A44D0 (_FindWindowEx.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C019532C (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, int *a3, int *a4)
{
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  EnterLeaveCrit *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // edx
  unsigned __int64 v17; // r8
  int v18; // ecx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r11
  __int64 *Window; // rax
  __int64 v23; // rbx
  unsigned int v24; // edx
  int v26; // [rsp+30h] [rbp-68h]
  int v27; // [rsp+4Ch] [rbp-4Ch]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v27 = ++gdwAtomicCheckSerial;
    v8 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v8 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v8 >= gdwAtomicCheckLogSize )
          goto LABEL_7;
      }
      v9 = (unsigned __int64)v8 << 6;
      *(_DWORD *)(v9 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v9 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v9 + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v9 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
LABEL_7:
  if ( a1 == -3 )
  {
    v11 = 0LL;
    v12 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    if ( v12 )
    {
      v14 = *(_QWORD *)(v12 + 408);
      if ( v14 )
        v11 = *(_QWORD *)(v14 + 104);
    }
  }
  else if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
    {
LABEL_42:
      v23 = 0LL;
      goto LABEL_43;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( a2 )
  {
    v15 = ValidateHwnd(a2);
    if ( !v15 )
      goto LABEL_42;
  }
  else
  {
    v15 = 0LL;
  }
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (int *)W32UserProbeAddress;
  v16 = *a3;
  v17 = *((_QWORD *)a3 + 1);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v18 = *a4;
  v26 = *a4;
  v19 = *((_QWORD *)a4 + 1);
  if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v16 + v17 + 2;
    if ( v20 >= W32UserProbeAddress
      || (unsigned __int16)v16 > (unsigned __int16)HIWORD(*a3)
      || (v16 & 1) != 0
      || v20 <= v17 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  if ( (v19 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (unsigned __int16)v18 + v19 + 2;
  if ( v21 >= W32UserProbeAddress || (unsigned __int16)v18 > HIWORD(v26) || (v18 & 1) != 0 || v21 <= v19 )
    *W32UserProbeAddress = 0;
  Window = (__int64 *)FindWindowEx(v11, v15);
  if ( !Window )
    goto LABEL_42;
  v23 = *Window;
LABEL_43:
  --gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v24 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( 1 )
      {
        v10 = (EnterLeaveCrit *)((unsigned __int64)v24 << 6);
        if ( *(_DWORD *)((char *)v10 + gpAtomickCheckStacks) == v27 )
          break;
        if ( ++v24 >= gdwAtomicCheckLogSize )
          goto LABEL_49;
      }
      v10 = (EnterLeaveCrit *)((unsigned __int64)v24 << 6);
      *(_DWORD *)((char *)v10 + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_49:
  EnterLeaveCrit::~EnterLeaveCrit(v10);
  return v23;
}
