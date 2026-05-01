/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180010C94
 * Callers:
 *     _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x180010E50 (_anonymous_namespace_--StreamReference--OpenReadAsync.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h]
  _DWORD *v16; // [rsp+58h] [rbp+20h]

  if ( !*a2 )
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return v3;
  }
  v5 = 0LL;
  if ( &v14 != a2 )
  {
    v5 = *a2;
    *a2 = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 88);
  v6 = v14;
  *(_QWORD *)(a1 + 88) = v5;
  if ( v6 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 80);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a1 + 88))(
         *(_QWORD *)(a1 + 88),
         &GUID_00000036_0000_0000_c000_000000000046,
         a1 + 80);
  v3 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v8);
    return v3;
  }
  v9 = 0LL;
  v15 = 0LL;
  v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    *(_QWORD *)v10 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::FileProperties::StorageItemThumbnail *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_QWORD *)v10 + 2) = a1;
    *(_QWORD *)v10 = off_180046538;
    v9 = v10;
  }
  v16 = v9;
  if ( v9 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), v9);
    v11 = v12;
    if ( v12 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA4,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v12);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  return v11;
}
