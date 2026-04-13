/*
 * XREFs of ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180006980
 * Callers:
 *     ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x180021050 (-FireCompletion@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@M.c)
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180021930 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x1800231F8 (-FireProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINil.c)
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x180066D70 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVTargetedCon.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180067150 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVTargeted.c)
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18007A260 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Detai.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18007A640 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U-$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
        __int64 a1,
        __int64 a2)
{
  int MatchingRestrictedErrorInfo; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

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
      v6 = 0LL;
      MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v6);
      if ( MatchingRestrictedErrorInfo >= 0 )
        MatchingRestrictedErrorInfo = RoReportFailedDelegate(a2, v6);
      v4 = v6;
      if ( v6 )
      {
        v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
  }
  else if ( MatchingRestrictedErrorInfo < 0 )
  {
    RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
    return 0;
  }
  return (unsigned int)MatchingRestrictedErrorInfo;
}
