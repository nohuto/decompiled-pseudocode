/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01E2614
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C01E3C70 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01BF534 (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01BF628 (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  CInpLockGuard *TouchProcessorLock; // rbx
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE v22[56]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuard::LockExclusive(TouchProcessorLock);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
  v8 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x2000) == 0 )
  {
    v9 = 5LL;
LABEL_16:
    UserSetLastError(v9, v7);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gptiCurrent),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v12 = PsGetCurrentProcessWow64Process(v11),
        ProbeForRead(a3, 4 * v5, v12 != 0 ? 1 : 4),
        v7 = 0xFFFFFFFFLL,
        (unsigned __int64)(208 * v5) > 0xFFFFFFFF) )
  {
    v9 = 87LL;
    goto LABEL_16;
  }
  v13 = (unsigned int)(208 * v5);
  if ( (unsigned int)v13 >= 0x2710000 || (v14 = Win32AllocPoolZInit(v13, 1885631317LL), (v15 = v14) == 0) )
  {
    v9 = 8LL;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v14) )
    v8 = DelegateCapturePointers(v5, v15);
  else
    UserSetLastError(87LL, v16);
  Win32FreePool(v15, v17, v18);
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  CInpLockGuard::UnLock(TouchProcessorLock);
  UserSessionSwitchLeaveCrit(v20, v19);
  return v8;
}
