/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00C7210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     _RegisterRawInputDevices @ 0x1C00C7368 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  SIZE_T v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  void *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+48h] [rbp-30h] BYREF
  char v19; // [rsp+98h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  if ( Src && a2 && a3 == 16 && (v7 = 16LL * a2, ProbeForRead(Src, v7, 8u), v7 <= 0xFFFFFFFF) )
  {
    v8 = Win32AllocPoolWithQuota((unsigned int)v7, 1769108309LL);
    v10 = (void *)v8;
    if ( !v8 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v8, v18, (__int64)Win32FreePool, v9);
    if ( (unsigned int)v7 >= v7 )
      LODWORD(v7) = 16 * a2;
    memmove(v10, Src, (unsigned int)v7);
    v11 = (unsigned int)RegisterRawInputDevices(v10, a2, 0LL);
    EtwTraceAuditApiRegisterRawInputDevices(v11);
    if ( v10 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v18, v12, v13, v14);
  }
  else
  {
    LODWORD(v11) = 0;
    UserSetLastError(87LL, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  UserSessionSwitchLeaveCrit(v16, v15);
  return (int)v11;
}
