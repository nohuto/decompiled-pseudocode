/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C01E6740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _FindPointerDevice @ 0x1C00B3C84 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(unsigned __int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( a1 && a2 && (unsigned int)FindPointerDevice(a1, &v10, 0LL) )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *v6 = *v6;
    *a2 = *(_OWORD *)(v10 + 140);
    v4 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
