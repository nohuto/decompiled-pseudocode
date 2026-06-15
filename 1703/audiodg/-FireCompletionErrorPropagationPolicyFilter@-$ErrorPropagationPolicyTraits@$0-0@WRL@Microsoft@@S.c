/*
 * XREFs of ?FireCompletionErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x14004B11C
 * Callers:
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x14004AE70 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@M.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14004AF50 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireCompletionErrorPropagationPolicyFilter(
        __int64 a1,
        __int64 a2)
{
  int MatchingRestrictedErrorInfo; // ebx
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  MatchingRestrictedErrorInfo = a1;
  if ( (_DWORD)a1 == -2147417848
    || (_DWORD)a1 == -2147023174
    || (_DWORD)a1 == -1996357631
    || (_DWORD)a1 == -2147418105
    || (_DWORD)a1 == -2147418094 )
  {
    RoTransformError(a1, 0LL, 0LL);
    MatchingRestrictedErrorInfo = 0;
  }
  if ( (unsigned int)IsErrorPropagationEnabled() )
  {
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      v5 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
      MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v5);
      if ( MatchingRestrictedErrorInfo >= 0 )
        MatchingRestrictedErrorInfo = RoReportFailedDelegate(a2, v5);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    }
  }
  else if ( MatchingRestrictedErrorInfo < 0 )
  {
    RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
    return 0;
  }
  return (unsigned int)MatchingRestrictedErrorInfo;
}
