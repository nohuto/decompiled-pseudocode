/*
 * XREFs of ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1800919BC
 * Callers:
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800319A4 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        __int64 a1,
        const WCHAR **a2)
{
  ULONG result; // eax
  const WCHAR *v5; // rdx
  __int64 v6; // r10
  REGHANDLE v7; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  void *v12; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  __int64 v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF

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
  result = (unsigned int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    v17 = 0;
    v5 = *a2;
    v15 = a1;
    v16 = 8;
    TlgCreateWsz(&pDesc, v5);
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803936F9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v7 = *(_QWORD *)(v6 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v12 = &unk_180393704;
    UserData.Reserved = 2;
    v13 = 60;
    v14 = 1;
    return EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
