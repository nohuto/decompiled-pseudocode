/*
 * XREFs of ??0?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@QEAA@XZ @ 0x18010EF08
 * Callers:
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate::FTMEventDelegate @ 0x18010F2F4 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Devices--Enumer.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate::FTMEventDelegate @ 0x18010F374 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--De_ea_18010F374.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x1800C7E24 (--0IUnknown@@QEAA@XZ.c)
 */

IUnknown *__fastcall Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>(
        IUnknown *a1)
{
  IUnknown::IUnknown(a1);
  a1->lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>::`vftable';
  return a1;
}
