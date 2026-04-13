/*
 * XREFs of _lambda_b5a99c3c5b42a235eb360c5531067d61_::operator() @ 0x18000D93C
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18000D6A0 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180016C04 (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001CF28 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_b5a99c3c5b42a235eb360c5531067d61_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  char v13; // [rsp+30h] [rbp-51h]
  char v14; // [rsp+38h] [rbp-49h]
  char v15; // [rsp+40h] [rbp-41h]
  char v16; // [rsp+48h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-9h] BYREF
  __int64 v18; // [rsp+80h] [rbp-1h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp+7h] BYREF
  _QWORD v20[2]; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+B8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v20[1] = -2LL;
  v19 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
         0x47u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
         string,
         &v19);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v18 = 0LL;
    v5 = (**v19)(v19, &GUID_b527c122_ff18_462f_9ce6_1b3c6ad37793, &v18);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v17 = 0LL;
      v16 = 0;
      v15 = **(_BYTE **)(a1 + 40);
      v14 = **(_BYTE **)(a1 + 32);
      v13 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL))(
             v18,
             **(_QWORD **)a1,
             **(_QWORD **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24),
             v13,
             v14,
             v15,
             v16,
             **(_QWORD **)(a1 + 48),
             0LL,
             &v17);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v20[0] = 0LL;
        v7 = v17;
        v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(v17);
        if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, v20), v4 < 0) )
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x15A,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v4);
        else
          v4 = 0;
        v8 = v20[0];
        if ( v20[0] )
        {
          v20[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x15A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v6);
      }
      v9 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x15A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
  }
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  return (unsigned int)v4;
}
