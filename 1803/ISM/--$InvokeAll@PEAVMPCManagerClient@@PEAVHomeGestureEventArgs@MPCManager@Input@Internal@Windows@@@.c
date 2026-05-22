/*
 * XREFs of ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1800271A4
 * Callers:
 *     ?OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II@Z @ 0x18002A660 (-OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III@Z @ 0x18002A710 (-OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ptr64___ @ 0x180027550 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Wind.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  __int128 v9; // [rsp+20h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  *(_QWORD *)&v9 = &v11;
  v4 = (RTL_SRWLOCK *)(a1 + 8);
  v5 = 0;
  *((_QWORD *)&v9 + 1) = &v12;
  v6 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  if ( *(_QWORD *)a1 )
  {
    v6 = *(volatile signed __int32 **)a1;
    do
      v7 = *((_DWORD *)v6 + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v6 + 3, v7 + 1, v7) );
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    v10 = v9;
    v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ptr64___(
           &v10,
           v6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return v5;
}
