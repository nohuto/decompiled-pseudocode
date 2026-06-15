/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800D43C4
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180045840 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_ @ 0x1800D4194 (Microsoft--WRL--Details--MakeAndInitialize__WaitForCompletion_Windows--Foundation--_ea_1800D4194.c)
 *     Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease @ 0x1800D6804 (Microsoft--WRL--ComPtr__WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_W.c)
 */

__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection *>>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned int v4; // edi
  char v5; // di
  void *v6; // rcx
  HRESULT v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  HANDLE pHandles[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 dwindex; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  dwindex = a3;
  v13 = a2;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v15 = 0LL;
  Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease(&v15);
  v13 = Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_(&v15);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v15);
    v4 = v13;
    if ( v13 >= 0 )
    {
      v5 = 0;
      v6 = *(void **)(v15 + 48);
      pHandles[1] = 0LL;
      pHandles[0] = v6;
      v7 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
      v13 = v7;
      if ( v7 >= 0 && (_DWORD)dwindex )
      {
        v7 = -2147023673;
        v5 = 1;
        v13 = -2147023673;
      }
      v8 = 0LL;
      v12 = 0LL;
      if ( v5 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
        v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
               a1,
               &GUID_00000036_0000_0000_c000_000000000046,
               &v12);
        v8 = v12;
        if ( v9 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
          v8 = v12;
        }
        v7 = v13;
      }
      if ( v7 < 0 || *(_DWORD *)(v15 + 40) == 1 )
        goto LABEL_18;
      if ( !v8 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
               a1,
               &GUID_00000036_0000_0000_c000_000000000046,
               &v12) < 0 )
        {
LABEL_18:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
          v4 = v13;
          goto LABEL_19;
        }
        v8 = v12;
      }
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 64LL))(v8, &v13);
      goto LABEL_18;
    }
  }
LABEL_19:
  Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Devices::Enumeration::DeviceInformationCollection_____ptr64____::_2_::FTMEventDelegate_::InternalRelease(&v15);
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
