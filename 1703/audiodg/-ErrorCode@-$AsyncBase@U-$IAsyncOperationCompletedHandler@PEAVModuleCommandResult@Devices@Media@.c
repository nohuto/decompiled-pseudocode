/*
 * XREFs of ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x14004AA50
 * Callers:
 *     ?GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@234@@Z @ 0x14004BEA0 (-GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@23.c)
 *     ?get_ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAJ@Z @ 0x14004F570 (-get_ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Me.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
        __int64 a1,
        volatile signed __int32 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 40);
  v6 = -2;
  result = (unsigned int)_InterlockedCompareExchange(&v6, v2, -2);
  if ( v6 == 3 )
  {
    result = (unsigned int)_InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 44), *a2);
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
      return SetRestrictedErrorInfo(v5, a2, v2, a1);
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
