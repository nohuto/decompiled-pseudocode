/*
 * XREFs of NtUserCheckMenuItem @ 0x1C013D510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C007AB6C (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // [rsp+58h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
LABEL_6:
    v8 = -1;
    goto LABEL_5;
  }
  v7 = ValidateHmenu(a1);
  if ( !v7 || (*(_DWORD *)(v7 + 56) & 0x40) != 0 )
    goto LABEL_6;
  v8 = MenuItemState((struct tagMENU *)v7, a2, a3, 8LL, 0LL);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v8;
}
