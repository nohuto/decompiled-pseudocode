/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01D5E3C
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C01D7460 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01BB81C (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01BB90C (_DelegateCapturePointers.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r13
  CInpLockGuard *TouchProcessorLock; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v26; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuard::LockExclusive(TouchProcessorLock);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
  if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000) != 0 )
  {
    if ( (_DWORD)v5 && a2 && a3 && a2 != a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gptiCurrent, v7, v8, v9);
      ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
      v16 = PsGetCurrentProcessWow64Process(v13, v12, v14, v15);
      ProbeForRead(a3, 4 * v5, v16 != 0 ? 1 : 4);
      v17 = 208 * v5;
      if ( (unsigned __int64)(208 * v5) <= 0xFFFFFFFF )
      {
        if ( v17 < 0x2710000 )
        {
          v18 = Win32AllocPoolZInit(v17, 1885631317LL);
          v19 = v18;
          if ( v18 )
          {
            if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v18) )
            {
              v20 = DelegateCapturePointers(v5, v19);
            }
            else
            {
              v20 = 0;
              UserSetLastError(87LL);
            }
            Win32FreePool(v19);
            goto LABEL_18;
          }
        }
        v10 = 8LL;
      }
      else
      {
        v10 = 87LL;
      }
    }
    else
    {
      v10 = 87LL;
    }
  }
  else
  {
    v10 = 5LL;
  }
  v20 = 0;
  UserSetLastError(v10);
LABEL_18:
  if ( !v26 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v26);
  }
  CInpLockGuard::UnLock(TouchProcessorLock);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v20;
}
