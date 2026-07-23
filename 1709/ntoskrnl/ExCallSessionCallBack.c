/*
 * XREFs of ExCallSessionCallBack @ 0x1404F0184
 * Callers:
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     MmSessionGetWin32Callouts @ 0x1400A54D0 (MmSessionGetWin32Callouts.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallSessionCallBack(int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r14
  int v7; // edi
  _KPROCESS *SessionById; // rax
  _KPROCESS *v9; // rsi
  int v10; // ebx
  _RTL_RUN_ONCE *Win32Callouts; // r15
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbp
  _KPROCESS *NextSession; // rbx
  __int64 v16; // r14
  int SessionId; // r12d
  int v18; // ebp
  _RTL_RUN_ONCE *v19; // r15
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rsi
  _BYTE v23[48]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a4;
  v7 = -1073741811;
  if ( a1 )
  {
    SessionById = (_KPROCESS *)MmGetSessionById(*a1);
    v9 = SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741811;
    v10 = MmAttachSession(SessionById, (__int64)v23);
    if ( v10 < 0 )
    {
      v10 = -1073741811;
    }
    else
    {
      Win32Callouts = MmSessionGetWin32Callouts();
      v12 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
      v13 = v12;
      if ( v12 )
      {
        v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v12[1].Count)(v12[2].Count, a2, a3);
        ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v13);
      }
      else
      {
        v10 = -1073741811;
      }
      MmDetachSession((__int64)v9, (__int64)v23);
    }
    ObfDereferenceObject(v9);
  }
  else
  {
    NextSession = (_KPROCESS *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      v16 = a3;
      do
      {
        SessionId = MmGetSessionId((__int64)NextSession);
        v18 = MmAttachSession(NextSession, (__int64)v23);
        if ( v18 >= 0 )
        {
          v19 = MmSessionGetWin32Callouts();
          v20 = ExReferenceCallBackBlock((signed __int64 *)v19);
          v21 = v20;
          if ( v20 )
          {
            v18 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v20[1].Count)(v20[2].Count, a2, v16);
            ExDereferenceCallBackBlock((signed __int64 *)v19, v21);
          }
          MmDetachSession((__int64)NextSession, (__int64)v23);
        }
        if ( !SessionId )
          v7 = v18;
        NextSession = (_KPROCESS *)MmGetNextSession(NextSession);
      }
      while ( NextSession );
      v4 = a4;
    }
    v10 = 0;
  }
  if ( v10 >= 0 && v4 )
    *v4 = v7;
  return (unsigned int)v10;
}
