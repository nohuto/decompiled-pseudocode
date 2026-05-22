/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_ @ 0x180061360
 * Callers:
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180060AD0 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180026CBC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v3; // r15
  int MatchingRestrictedErrorInfo; // edi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // r14
  struct IUnknown **i; // rsi
  _OWORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  _OWORD v14[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+48h]

  v3 = (RTL_SRWLOCK *)a3;
  MatchingRestrictedErrorInfo = 0;
  v6 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    a3 = 0x7FFFFFFFLL;
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v6 = a2;
    v16 = a2;
  }
  v8 = *(_QWORD *)(v6 + 32);
  for ( i = *(struct IUnknown ***)(v6 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v10 = *(_OWORD **)a1;
    v14[0] = *(_OWORD *)*(_QWORD *)a1;
    v14[1] = v10[1];
    v14[2] = v10[2];
    v14[3] = v10[3];
    LOBYTE(a3) = **(_BYTE **)(a1 + 8);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, _OWORD *, __int64, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
            *i,
            v14,
            a3,
            **(_QWORD **)(a1 + 16));
    MatchingRestrictedErrorInfo = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError(v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        v3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v15 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        v12 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v6 = v16;
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
