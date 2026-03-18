/*
 * XREFs of NtUserDestroyCursor @ 0x1C009ADE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  char v18; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v12 = 0;
  v13 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
LABEL_4:
        v12 = DestroyCursor((struct tagCURSOR *)v13, a2, v10, v11);
        goto LABEL_5;
      }
      v17 = 87LL;
    }
    else
    {
      if ( PsGetCurrentProcess(v9, v8) == gpepCSRSS
        || *(_QWORD *)(v13 + 24) == PsGetCurrentProcessWin32Process(gpepCSRSS) )
      {
        goto LABEL_4;
      }
      v17 = 5LL;
    }
    UserSetLastError(v17, v8);
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  UserSessionSwitchLeaveCrit(v15, v14);
  return v12;
}
