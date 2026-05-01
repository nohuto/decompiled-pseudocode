/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___ @ 0x18000B2A8
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002100 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000A338 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18000B768 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000C4B8 (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  int MatchingRestrictedErrorInfo; // edi
  __int64 v5; // rbx
  __int64 v6; // r14
  _QWORD *i; // rsi
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a3;
  MatchingRestrictedErrorInfo = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v12);
  v5 = v12;
  v6 = *(_QWORD *)(v12 + 32);
  for ( i = *(_QWORD **)(v12 + 16); i != *(_QWORD **)(v5 + 24); ++i )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    MatchingRestrictedErrorInfo = v8;
    if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -1996357631 || v8 == -2147418105 || v8 == -2147418094 )
    {
      RoTransformError(v8, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        v9,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v11 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v11);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v11);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v11);
        v5 = v12;
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    v6 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return (unsigned int)MatchingRestrictedErrorInfo;
}
