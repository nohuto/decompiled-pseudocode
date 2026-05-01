/*
 * XREFs of _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x1800110B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FCB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012320 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::StreamReference::OpenReadAsync(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  int v5; // eax
  int Interface; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  char *v9; // rdi
  bool v10; // zf
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v25; // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  v2 = *(unsigned int *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 64);
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, 5LL, v2, &v24);
  Interface = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 182LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v7);
    goto LABEL_30;
  }
  *a2 = 0LL;
  v9 = (char *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    Interface = -2147024882;
LABEL_27:
    v7 = (unsigned int)Interface;
    v8 = 184LL;
    goto LABEL_28;
  }
  *(_QWORD *)v9 = &Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 24));
  v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>'};
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncInfo'};
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v9 + 8) = 1LL;
  if ( !v10 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v9 = off_180047908;
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = off_1800478B0;
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v11 = (__int64 *)(v9 + 72);
  *((_QWORD *)v9 + 9) = 0LL;
  *((_QWORD *)v9 + 10) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(v9 + 88), 2);
  *((_QWORD *)v9 + 21) = 0LL;
  v12 = v24;
  if ( !v24 )
  {
    Interface = -2147467261;
    v13 = 137LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_26;
  }
  v24 = 0LL;
  v25 = (__int64 *)*((_QWORD *)v9 + 10);
  v14 = v25;
  *((_QWORD *)v9 + 10) = v12;
  if ( v14 )
  {
    v15 = *v14;
    v25 = 0LL;
    (*(void (__fastcall **)(__int64 *))(v15 + 16))(v14);
  }
  v16 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64))v9 + 10))(
          *((_QWORD *)v9 + 10),
          &GUID_00000036_0000_0000_c000_000000000046,
          (__int64)(v9 + 72));
  Interface = v17;
  if ( v17 >= 0 )
  {
    v26 = 0LL;
    v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( !v18 )
    {
      Interface = -2147024882;
      v13 = 161LL;
      goto LABEL_25;
    }
    v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v18 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    *(_QWORD *)v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::FileProperties::StorageItemThumbnail *>>::`vftable';
    v18[3] = 1;
    if ( !v10 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_QWORD *)v18 + 2) = v9;
    *(_QWORD *)v18 = off_180047510;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v9 + 10) + 48LL))(*((_QWORD *)v9 + 10), v18);
    Interface = v20;
    if ( v20 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 16LL))(v19);
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v20);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v17);
  }
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v9,
                  &GUID_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6,
                  a2);
LABEL_26:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v9);
  if ( Interface < 0 )
    goto LABEL_27;
  Interface = 0;
LABEL_30:
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)Interface;
}
