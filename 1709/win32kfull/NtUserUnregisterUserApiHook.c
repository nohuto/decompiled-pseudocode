/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C01ED000
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterUserApiHook @ 0x1C0126000 (_UnregisterUserApiHook.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  v1 = (int)UnregisterUserApiHook(v0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v1;
}
