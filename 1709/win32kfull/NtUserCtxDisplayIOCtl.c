/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x1C01E3B50
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     CtxDisplayIOCtl @ 0x1C01F86FC (CtxDisplayIOCtl.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r9
  void *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6) == gpepCSRSS )
  {
    ProbeForRead(a2, v3, 1u);
    v11 = Win32AllocPoolWithQuota(v3, 1950643029LL);
    v13 = (void *)v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v11, v17, (__int64)Win32FreePool, v12);
    memmove(v13, (const void *)a2, v3);
    v10 = CtxDisplayIOCtl(a1, v13, (unsigned int)v3);
    if ( v13 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v17, v8, v14, v15);
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
