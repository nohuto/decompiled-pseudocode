/*
 * XREFs of ?BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z @ 0x1800316A0
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1800535E0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801D04F8 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ViewEventDispatcher::BoostShellPriority(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v5; // r10
  int Ptr; // eax
  REGHANDLE v7; // rcx
  HANDLE CurrentProcess; // rax
  int v9; // eax
  PVOID v10; // rcx
  NTSTATUS v11; // eax
  int UserDataCount; // [rsp+28h] [rbp-19h]
  char ProcessInformation; // [rsp+38h] [rbp-9h] BYREF
  char v14[3]; // [rsp+39h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-5h] BYREF
  int v16; // [rsp+40h] [rbp-1h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+7h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+1Fh] BYREF
  void *v20; // [rsp+70h] [rbp+2Fh]
  int v21; // [rsp+78h] [rbp+37h]
  int v22; // [rsp+7Ch] [rbp+3Bh]
  int *v23; // [rsp+80h] [rbp+3Fh]
  int v24; // [rsp+88h] [rbp+47h]
  int v25; // [rsp+8Ch] [rbp+4Bh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v2 = a1 + 37;
  AcquireSRWLockExclusive(a1 + 37);
  if ( !a2 )
    ++a1[72].Ptr;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    Ptr = (int)a1[72].Ptr;
    v25 = 0;
    v16 = Ptr;
    v23 = &v16;
    v24 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180393804 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_18039380F;
    UserData.Reserved = 2;
    v21 = 39;
    v22 = 1;
    EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v9 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDBC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      UserDataCount);
  v10 = a1[77].Ptr;
  if ( (((unsigned __int64)v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v14[0] = 1;
    v11 = NtSetInformationProcess(v10, ProcessForegroundInformation, v14, 1u);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xD9C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        UserDataCount);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xD93,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8000FFFFLL,
      UserDataCount);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
