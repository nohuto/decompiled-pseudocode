/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00167C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _BYTE *v14; // rdi
  __int64 v15; // rax
  unsigned int InformationThread; // esi
  _BYTE *v18; // [rsp+20h] [rbp-A8h]
  _BYTE v19[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v8);
  v13 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v15 = Win32AllocPoolWithQuota((unsigned int)v4, 1230271317LL);
        v14 = (_BYTE *)v15;
        v18 = (_BYTE *)v15;
        if ( !v15 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v15, v19, Win32FreePool);
      }
      else
      {
        v14 = Src;
        v18 = Src;
      }
      memmove(v14, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v14 = 0LL;
      v18 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v14, (unsigned int)v4, v18);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v14, v4);
    }
    if ( v14 != Src && v14 )
      PopAndFreeAlwaysW32ThreadLock(v19);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v13, v10, v11, v12);
  return InformationThread;
}
