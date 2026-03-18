/*
 * XREFs of NtUserSetCursorContents @ 0x1C01EB330
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     _SetCursorContents @ 0x1C01C73C4 (_SetCursorContents.c)
 */

__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v19; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v11 = 0;
  v12 = v7;
  if ( v7 )
  {
    LOBYTE(v8) = 3;
    v13 = HMValidateHandle(a2, v8, v9, v10);
    if ( v13 )
      v11 = SetCursorContents(v12, v13, v14, v15);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  UserSessionSwitchLeaveCrit(v17, v16);
  return v11;
}
