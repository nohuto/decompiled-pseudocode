/*
 * XREFs of ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAKXZ @ 0x14004E390
 * Callers:
 *     ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@W7EAAKXZ @ 0x14001FCF0 (-Release@SendCommandAsyncOperation@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001FD00 (-Release@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAKXZ.c)
 *     ?Release@SendCommandAsyncOperation@Devices@Media@Windows@@WFA@EAAKXZ @ 0x14001FD10 (-Release@SendCommandAsyncOperation@Devices@Media@Windows@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
