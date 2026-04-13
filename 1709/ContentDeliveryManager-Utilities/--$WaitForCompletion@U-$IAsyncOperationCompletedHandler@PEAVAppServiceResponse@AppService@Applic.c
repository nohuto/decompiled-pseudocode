/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180039070
 * Callers:
 *     ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x18002B2FC (-SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@Ap.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x1800068C8 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001AE18 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(
        __int64 (__fastcall ***a1)(__int64, GUID *, __int64 *),
        int a2,
        void **a3)
{
  _DWORD *v4; // rbx
  signed int v5; // edi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v8; // rax
  DWORD v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall **v12)(__int64, GUID *, __int64 *); // rbx
  __int64 *v13; // rax
  int v14; // eax
  void **v15; // rcx
  APTTYPE v17; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v18; // [rsp+28h] [rbp-30h]
  void *v19[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v20; // [rsp+80h] [rbp+28h] BYREF
  int v21; // [rsp+88h] [rbp+30h] BYREF
  void **v22; // [rsp+90h] [rbp+38h]
  __int64 (__fastcall ***v23)(__int64, GUID *, __int64 *); // [rsp+98h] [rbp+40h]

  v22 = a3;
  v21 = a2;
  v23 = a1;
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[1])(a1);
  v22 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 2));
    v4[13] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>'};
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = off_1800C4CB0;
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    v4[14] = 0;
    *((_QWORD *)v4 + 8) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v4 + 8) = Event;
    if ( Event )
    {
      v5 = 0;
    }
    else
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = LastError;
    }
    v8 = *(_QWORD *)v4;
    if ( v5 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v8 + 8))(v4);
      v22 = (void **)v4;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v8 + 16))(v4);
    }
    v21 = v5;
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), void **))(*a1)[6])(a1, v22);
      v21 = v5;
      if ( v5 >= 0 )
      {
        v19[0] = v22[8];
        v19[1] = 0LL;
        v10 = SHProcessMessagesUntilEventsEx((HWND)v19[0], v19, 1u, v9, v17, v18);
        v5 = v21;
        if ( v10 == -1 )
          v5 = -2147467259;
        v21 = v5;
        v11 = 0LL;
        v20 = 0LL;
        if ( v5 >= 0 && *((_DWORD *)v22 + 14) != 1 )
        {
          v12 = *a1;
          v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v20);
          v14 = (*v12)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v13);
          v11 = v20;
          if ( v14 >= 0 )
          {
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 64LL))(v20, &v21);
            v11 = v20;
          }
          v5 = v21;
        }
        if ( v11 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v5 = v21;
        }
      }
    }
  }
  else
  {
    v5 = -2147024882;
    v21 = -2147024882;
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*((void (__fastcall **)(void **))*v15 + 2))(v15);
  }
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[2])(a1);
  return (unsigned int)v5;
}
