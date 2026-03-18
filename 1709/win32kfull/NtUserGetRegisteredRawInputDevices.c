/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C01E6C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01B67D8 (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int RegisteredRawInputDevices; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( a3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2, v7, v8);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87LL, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11, v10);
  return RegisteredRawInputDevices;
}
