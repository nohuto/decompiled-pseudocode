/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01D7340
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C01EE254 (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rax
  void *v14; // rbx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v6);
  v11 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v13 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v14 = (void *)v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v13, v16, (__int64)Win32FreePool);
    memmove(v14, (const void *)a2, v3);
    v12 = CtxDisplayIOCtl(a1, v14, (unsigned int)v3);
    if ( v14 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
