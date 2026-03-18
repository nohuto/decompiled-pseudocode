/*
 * XREFs of NtUserSetTimer @ 0x1C00876E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // rbx
  int v21; // [rsp+60h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive(v9) && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
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
      v20 = (unsigned __int64)(unsigned int)v9 << 6;
      *(_DWORD *)(v20 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v20 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v20 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v20 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v10 = v21;
  }
LABEL_5:
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
LABEL_29:
      v17 = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v13 = a5;
  v14 = 10;
  if ( a3 >= 0xA )
    v14 = a3;
  if ( v14 > 0x7FFFFFFF )
    v14 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v13 = 0x7FFFFFFF - v14;
  }
  else if ( a5 != -1 )
  {
    v15 = v14 + a5;
    if ( v14 + a5 < v14 || (v9 = v15, v15 > 0x7FFFFFFF) )
    {
      v17 = 0LL;
      UserSetLastError(87LL, 0x7FFFFFFFLL);
      goto LABEL_18;
    }
  }
  if ( v12 && PsGetCurrentProcessWin32Process(v9) != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 400LL) )
  {
    UserSetLastError(5LL, v16);
    goto LABEL_29;
  }
  v17 = InternalSetTimer(v12, a2, v14, a4, v13, 0);
LABEL_18:
  v18 = gpresUser;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(gpresUser) )
    {
      --gdwInAtomicOperation;
      v18 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v11 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v18 = (unsigned int)v11;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v11 << 6) + gpAtomickCheckStacks) == v10 )
              break;
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= gdwAtomicCheckLogSize )
              goto LABEL_21;
          }
          v18 = (unsigned __int64)(unsigned int)v11 << 6;
          *(_DWORD *)(v18 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v18, v11);
  return v17;
}
