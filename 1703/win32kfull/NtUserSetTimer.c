/*
 * XREFs of NtUserSetTimer @ 0x1C00B24E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // ebp
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r9
  unsigned int v15; // edi
  unsigned int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v21; // [rsp+64h] [rbp+Ch]

  EnterCrit(0LL, 1LL);
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v9 = 0LL;
    v10 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v9 << 6) + gpAtomickCheckStacks) )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v11 = (unsigned __int64)(unsigned int)v9 << 6;
      *(_DWORD *)(v11 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v11 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v11 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v11 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v10 = v21;
  }
LABEL_5:
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
LABEL_30:
      v18 = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v15 = a5;
  v16 = 10;
  if ( a3 >= 0xA )
    v16 = a3;
  if ( v16 > 0x7FFFFFFF )
    v16 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v15 = 0x7FFFFFFF - v16;
  }
  else if ( a5 != -1 )
  {
    v17 = v16 + a5;
    if ( v16 + a5 < v16 || (v9 = v17, v17 > 0x7FFFFFFF) )
    {
      v18 = 0LL;
      UserSetLastError(87LL);
      goto LABEL_18;
    }
  }
  if ( v13 && PsGetCurrentProcessWin32Process(v9, 0x7FFFFFFFLL) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 376LL) )
  {
    UserSetLastError(5LL);
    goto LABEL_30;
  }
  v18 = InternalSetTimer(v13, a2, v16, a4, v15, 0);
LABEL_18:
  --gdwInAtomicOperation;
  v19 = gpAtomickCheckStacks;
  if ( gpAtomickCheckStacks )
  {
    v19 = gdwAtomicCheckLogSize;
    v12 = 0LL;
    v14 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v12 << 6) + gpAtomickCheckStacks) != v10 )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= gdwAtomicCheckLogSize )
          goto LABEL_22;
      }
      *(_DWORD *)(((unsigned __int64)(unsigned int)v12 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v19, v12, gpAtomickCheckStacks, v14);
  return v18;
}
