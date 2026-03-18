/*
 * XREFs of NtUserDestroyCursor @ 0x1C0045210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4);
  if ( v7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
LABEL_4:
        v10 = DestroyCursor((struct tagCURSOR *)v7, a2);
        goto LABEL_5;
      }
      v12 = 87LL;
    }
    else
    {
      if ( PsGetCurrentProcess(v6) == gpepCSRSS
        || *(_QWORD *)(v7 + 24) == PsGetCurrentProcessWin32Process(gpepCSRSS, v13) )
      {
        goto LABEL_4;
      }
      v12 = 5LL;
    }
    v10 = 0;
    UserSetLastError(v12);
  }
  else
  {
    v10 = 0;
  }
LABEL_5:
  if ( !v14 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
