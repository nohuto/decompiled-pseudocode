/*
 * XREFs of ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704
 * Callers:
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1800363D0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004EF60 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180051350 (-VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18005B330 (-v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18005B600 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800FAB54 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall WindowReadyState::WaitFlags::Set(int *a1, __int64 *a2, int a3)
{
  int v3; // edi
  ULONG result; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  REGHANDLE v9; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  __int64 *v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+8Ch] [rbp+13h]
  int *v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]
  int *v26; // [rsp+A0h] [rbp+27h]
  int v27; // [rsp+A8h] [rbp+2Fh]
  int v28; // [rsp+ACh] [rbp+33h]

  v3 = *a1;
  Context = 0LL;
  *a1 = a3 | v3;
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
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a2;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v14 = v8;
    v20 = &v14;
    v23 = &v11;
    v12 = *a1;
    v26 = &v12;
    v21 = 8;
    v11 = v3;
    v24 = 4;
    v27 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180397989 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v9 = *(_QWORD *)(v7 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_180397994;
    UserData.Reserved = 2;
    v18 = 66;
    v19 = 1;
    return EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
