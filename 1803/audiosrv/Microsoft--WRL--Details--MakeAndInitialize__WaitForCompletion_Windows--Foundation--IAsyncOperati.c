/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate_ @ 0x18010E848
 * Callers:
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18010E9A8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Device.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate::FTMEventDelegate @ 0x18010F2F4 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Devices--Enumer.c)
 *     Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease @ 0x18011100C (Microsoft--WRL--ComPtr__WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate_(
        _QWORD *a1)
{
  LPVOID v2; // rax
  signed int v3; // ebx
  _QWORD *v4; // rdi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v8 = WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformation_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformation_____ptr64____::_2_::FTMEventDelegate::FTMEventDelegate(v2);
    v4 = (_QWORD *)v8;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    v4[7] = Event;
    if ( Event )
    {
      v3 = 0;
    }
    else
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v3 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
      v3 = 0;
      *a1 = v4;
    }
    Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
