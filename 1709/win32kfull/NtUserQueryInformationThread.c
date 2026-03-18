/*
 * XREFs of NtUserQueryInformationThread @ 0x1C0047900
 * Callers:
 *     <none>
 * Callees:
 *     xxxQueryInformationThread @ 0x1C0047A8C (xxxQueryInformationThread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  __int64 v14; // rax
  unsigned int InformationThread; // esi
  _BYTE *v17; // [rsp+20h] [rbp-A8h]
  _BYTE v18[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v14 = Win32AllocPoolWithQuota((unsigned int)v4, 1230271317LL);
        v13 = (_BYTE *)v14;
        v17 = (_BYTE *)v14;
        if ( !v14 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v14, v18, Win32FreePool);
      }
      else
      {
        v13 = Src;
        v17 = Src;
      }
      memmove(v13, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v13 = 0LL;
      v17 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v13, (unsigned int)v4, v17);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v13, v4);
    }
    if ( v13 != Src && v13 )
      PopAndFreeAlwaysW32ThreadLock(v18);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return InformationThread;
}
