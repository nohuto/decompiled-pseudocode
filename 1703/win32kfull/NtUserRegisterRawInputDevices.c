/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00B0990
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterRawInputDevices @ 0x1C00B0B10 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  SIZE_T v6; // rbx
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v15[9]; // [rsp+50h] [rbp-48h] BYREF
  char v16; // [rsp+B8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( Src && a2 && a3 == 16 && (v6 = 16LL * a2, ProbeForRead(Src, v6, 8u), v6 <= 0xFFFFFFFF) )
  {
    v7 = Win32AllocPoolWithQuota((unsigned int)v6, 1769108309LL);
    v8 = (void *)v7;
    if ( !v7 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v7, v15, (__int64)Win32FreePool);
    if ( (unsigned int)v6 >= v6 )
      LODWORD(v6) = 16 * a2;
    memmove(v8, Src, (unsigned int)v6);
    v9 = (unsigned int)RegisterRawInputDevices(v8, a2, 0LL);
    EtwTraceAuditApiRegisterRawInputDevices(v9);
    if ( v8 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v15);
  }
  else
  {
    LODWORD(v9) = 0;
    UserSetLastError(87LL);
  }
  if ( !v16 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v16);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return (int)v9;
}
