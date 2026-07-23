/*
 * XREFs of ExCallSessionCallBack @ 0x14052F85C
 * Callers:
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x14003E9E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallSessionCallBack(int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v7; // edi
  _KPROCESS *SessionById; // rax
  _KPROCESS *v9; // rsi
  int v10; // ebx
  _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbp
  _KPROCESS *NextSession; // rbx
  __int64 v16; // r15
  int SessionId; // r12d
  int v18; // esi
  _RTL_RUN_ONCE *v19; // r14
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rbp
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
        if ( SessionId )
          v18 = v7;
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
