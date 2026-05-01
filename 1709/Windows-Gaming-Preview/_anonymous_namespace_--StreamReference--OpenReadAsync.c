/*
 * XREFs of _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x180010E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180010C94 (_anonymous_namespace_--DummyAsyncOperation--RuntimeClassInitialize.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011F90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::StreamReference::OpenReadAsync(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  int v5; // eax
  int Interface; // edi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  char *v9; // rbx
  bool v10; // zf
  char *v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 72);
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, 5LL, v2, &v15);
  Interface = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 182LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v7);
    goto LABEL_13;
  }
  *a2 = 0LL;
  v9 = (char *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
    Interface = -2147024882;
LABEL_10:
    v7 = (unsigned int)Interface;
    v8 = 184LL;
    goto LABEL_11;
  }
  *(_QWORD *)v9 = &Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 24));
  v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>'};
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncInfo'};
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 9) = 1LL;
  if ( !v10 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v9 = off_180046930;
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = off_1800468B8;
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 10) = 0LL;
  *((_QWORD *)v9 + 11) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(v9 + 96), 2);
  *((_QWORD *)v9 + 22) = 0LL;
  Interface = anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize((__int64)v9, &v15);
  v11 = v9;
  if ( Interface >= 0 )
  {
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v9,
                  &GUID_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6,
                  a2);
    v11 = v9;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v11);
  if ( Interface < 0 )
    goto LABEL_10;
  Interface = 0;
LABEL_13:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)Interface;
}
