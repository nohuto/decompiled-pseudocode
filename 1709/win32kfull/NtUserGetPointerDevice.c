/*
 * XREFs of NtUserGetPointerDevice @ 0x1C013B660
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsPointerDeviceAccessible @ 0x1C00B15D0 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C00B15EC (_GetPointerDeviceInfoProperties.c)
 *     _FindPointerDevice @ 0x1C00B3C84 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDevice(unsigned __int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v5 = 0;
  if ( !a1 || !a2 )
    goto LABEL_9;
  if ( !(unsigned int)FindPointerDevice(a1, &v10, 0LL) )
    goto LABEL_8;
  if ( !(unsigned int)IsPointerDeviceAccessible(v10) )
  {
LABEL_9:
    UserSetLastError(87LL, v4);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  if ( (int)GetPointerDeviceInfoProperties((__int64)a2, v10) < 0 )
    UserSetLastError(122LL, v6);
  else
    v5 = 1;
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}
