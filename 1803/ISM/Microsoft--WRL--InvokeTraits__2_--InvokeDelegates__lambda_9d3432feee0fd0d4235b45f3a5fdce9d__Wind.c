/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ptr64___ @ 0x180027550
 * Callers:
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1800271A4 (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180026CBC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  int MatchingRestrictedErrorInfo; // edi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // r14
  struct IUnknown **i; // rsi
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h]

  MatchingRestrictedErrorInfo = 0;
  v6 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v6 = a2;
    v14 = a2;
  }
  v8 = *(_QWORD *)(v6 + 32);
  for ( i = *(struct IUnknown ***)(v6 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
            *i,
            (**a1 + 24LL) & -(__int64)(**a1 != 0LL),
            *a1[1]);
    MatchingRestrictedErrorInfo = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v13 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v13);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v13);
        v11 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v6 = v14;
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    v8 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return (unsigned int)MatchingRestrictedErrorInfo;
}
