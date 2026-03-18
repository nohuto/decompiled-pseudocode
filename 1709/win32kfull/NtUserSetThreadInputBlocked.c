/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C00F9A20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( a1 != 4096 )
  {
    UserSetLastError(87LL, v4);
    v5 = 0LL;
    goto LABEL_6;
  }
  v5 = 0LL;
  v6 = *(_DWORD *)(gptiCurrent + 1184LL);
  if ( !a2 )
  {
    if ( (v6 & 0x8000) != 0 )
    {
      v7 = v6 & 0xFFFF7FFF;
      goto LABEL_5;
    }
LABEL_9:
    UserSetLastError(87LL, 0x8000LL);
    goto LABEL_6;
  }
  if ( (v6 & 0x8000) != 0 )
    goto LABEL_9;
  v7 = v6 | 0x8000;
LABEL_5:
  *(_DWORD *)(gptiCurrent + 1184LL) = v7;
  v5 = 1LL;
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
