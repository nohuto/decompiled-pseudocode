/*
 * XREFs of NtUserDestroyInputContext @ 0x1C013A760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     DestroyInputContext @ 0x1C013A7D0 (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v4 = gpsi;
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    v5 = HMValidateHandle(a1, v4, v2, v3);
    v6 = 0;
    if ( v5 )
      v6 = DestroyInputContext(v5);
  }
  else
  {
    UserSetLastError(120LL, gpsi);
    v6 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
