/*
 * XREFs of ?DelegateCapturePointersMitOff@@YAHIPEAI0@Z @ 0x1C01D5C68
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
__int64 __fastcall DelegateCapturePointersMitOff(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v25; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
  if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000) != 0 )
  {
    if ( (_DWORD)v5 && a2 && a3 && a2 != a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8, gptiCurrent);
      ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
      v15 = PsGetCurrentProcessWow64Process(v12, v11, v13, v14);
      ProbeForRead(a3, 4 * v5, v15 != 0 ? 1 : 4);
      v16 = 208 * v5;
      if ( (unsigned __int64)(208 * v5) <= 0xFFFFFFFF )
      {
        if ( v16 < 0x2710000 )
        {
          v17 = Win32AllocPoolZInit(v16, 1885631317LL);
          v18 = v17;
          if ( v17 )
          {
            if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v17) )
            {
              v19 = DelegateCapturePointers(v5, v18);
            }
            else
            {
              v19 = 0;
              UserSetLastError(87LL);
            }
            Win32FreePool(v18);
            goto LABEL_18;
          }
        }
        v9 = 8LL;
      }
      else
      {
        v9 = 87LL;
      }
    }
    else
    {
      v9 = 87LL;
    }
  }
  else
  {
    v9 = 5LL;
  }
  v19 = 0;
  UserSetLastError(v9);
LABEL_18:
  if ( !v25 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v25);
  }
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v19;
}
