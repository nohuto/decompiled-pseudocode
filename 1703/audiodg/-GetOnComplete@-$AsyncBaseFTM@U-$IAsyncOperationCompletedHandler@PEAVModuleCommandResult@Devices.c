/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@3@@Z @ 0x14004BE60
 * Callers:
 *     ?get_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004F500 (-get_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAU-$IAsyncOperationCom.c)
 * Callees:
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x14004A7C4 (-CheckValidStateForDelegateCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommand.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004A93C (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devi.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  *a2 = 0LL;
  result = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(a1);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
      return Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::CopyLocal(
               (__int64 *)(a1 + 88),
               v5,
               a2);
  }
  return result;
}
