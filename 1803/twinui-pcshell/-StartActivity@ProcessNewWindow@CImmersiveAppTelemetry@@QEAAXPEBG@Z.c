/*
 * XREFs of ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18000DBD4
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800F1D88 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
        CImmersiveAppTelemetry::ProcessNewWindow *this,
        const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rdi
  char v5; // bl
  RTL_SRWLOCK *v6; // rdi
  PSRWLOCK *p_SRWLock; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  const GUID *v10; // rax
  __int64 v11; // r8
  REGHANDLE v12; // rcx
  ULONG UserDataCount; // r10d
  char *v14; // rsi
  __int64 v15; // rdi
  DWORD v16; // r14d
  unsigned __int64 v17; // rbx
  signed __int64 i; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v20; // rax
  signed __int64 v21; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-55h] BYREF
  WINBOOL v24; // [rsp+38h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-49h] BYREF
  LPVOID v26; // [rsp+48h] [rbp-41h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-39h] BYREF
  PSRWLOCK v28; // [rsp+58h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-19h] BYREF
  void *v31; // [rsp+80h] [rbp-9h]
  int v32; // [rsp+88h] [rbp-1h]
  int v33; // [rsp+8Ch] [rbp+3h]
  DWORD *p_CurrentThreadId; // [rsp+90h] [rbp+7h]
  __int64 v35; // [rsp+98h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+17h] BYREF

  CurrentThreadId = 0;
  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    v6 = v4 + 31;
    AcquireSRWLockExclusive(v6);
    p_SRWLock = &v28;
    v28 = v6;
    v5 = 1;
  }
  else
  {
    v5 = 2;
    SRWLock = 0LL;
    v6 = 0LL;
    p_SRWLock = &SRWLock;
  }
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v28 )
    ReleaseSRWLockExclusive(v28);
  v8 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  *(_DWORD *)v8 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v26 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v24, &v26) && v24 )
  {
    v26 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v9 = *((_QWORD *)v26 + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v35 = 4LL;
    p_CurrentThreadId = &CurrentThreadId;
    TlgCreateWsz(&pDesc, a2);
    v10 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v11 = *((_QWORD *)this + 6);
    *(_DWORD *)&EventDescriptor.Level = 261;
    v12 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388B10 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v31 = &unk_180388B1B;
    UserData.Reserved = 2;
    v32 = 51;
    v33 = 1;
    EventWriteTransfer(v12, &EventDescriptor, (LPCGUID)(v11 + 8), v10, UserDataCount, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v14 = (char *)this + 8;
    if ( *((_DWORD *)v14 + 6) )
      __fastfail(7u);
    v15 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_31;
    v16 = GetCurrentThreadId();
    v17 = v16 % 0xAuLL;
    for ( i = *(_QWORD *)(v15 + 8 * v17); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == v16 )
        goto LABEL_27;
    }
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v20;
    if ( v20 )
    {
      *(_QWORD *)v20 = 0LL;
      v20[2] = v16;
      *((_QWORD *)v20 + 2) = 0LL;
      _m_prefetchw((const void *)(v15 + 8 * v17));
      do
      {
        v21 = *(_QWORD *)(v15 + 8 * v17);
        *(_QWORD *)(i + 16) = v21;
      }
      while ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8 * v17), i, v21) );
    }
    else
    {
LABEL_31:
      i = 0LL;
    }
LABEL_27:
    *(_QWORD *)v14 = i;
    if ( i )
    {
      *((_QWORD *)v14 + 2) = *(_QWORD *)i;
      *(_QWORD *)i = v14;
      *((_DWORD *)v14 + 6) = GetCurrentThreadId();
    }
  }
}
