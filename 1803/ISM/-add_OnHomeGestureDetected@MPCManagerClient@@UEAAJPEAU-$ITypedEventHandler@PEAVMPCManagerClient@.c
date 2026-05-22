/*
 * XREFs of ?add_OnHomeGestureDetected@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180026BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::add_OnHomeGestureDetected(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 )
    return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1 + 1040,
             a2,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
  else
    return 2147942487LL;
}
