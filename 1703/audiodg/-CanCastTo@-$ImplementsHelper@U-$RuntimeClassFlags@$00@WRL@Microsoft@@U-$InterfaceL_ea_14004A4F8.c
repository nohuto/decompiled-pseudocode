/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004A4F8
 * Callers:
 *     ??$As@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x140047F4C (--$As@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation_ea_140047F4C.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@U?$InterfaceList@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004D8F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperation@PEAVModuleCommandResult@Devic.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140033484 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004A5C4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  unsigned int result; // eax
  BOOL IsEqualGUID; // edx
  void **v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // r10

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    return 0;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(v2, &GUID_00000036_0000_0000_c000_000000000046);
    if ( IsEqualGUID )
      *v7 = (void *)v8;
    result = !IsEqualGUID ? 0x80004002 : 0;
    if ( !IsEqualGUID )
      return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 64), v9, v7);
  }
  return result;
}
