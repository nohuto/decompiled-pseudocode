/*
 * XREFs of ?FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18000ADC0
 * Callers:
 *     ?FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18000ADB0 (-FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18000F028 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumeratio.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::FindAllAsyncPackageFamilyName(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // eax
  _QWORD *v8; // rsi
  signed __int32 v9; // eax
  signed int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  signed __int32 v15; // eax
  int v16; // edi
  signed __int32 v17; // eax
  int v18; // edi
  int v20[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF
  const wchar_t *v24; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1 - 32;
  if ( a1 != 32 )
  {
    v6 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 44));
    if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v6 == 2 )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    v7 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 44));
    if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v7 == 2 )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  }
  v20[2] = 0;
  v20[0] = 3;
  v20[1] = 128;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = &off_18002D7A0;
    v8[1] = v3;
    v8[2] = v3;
    if ( v3 )
    {
      v9 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 44));
      if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v9 == 2 )
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    }
    v8[3] = a2;
  }
  else
  {
    v8 = 0LL;
  }
  v22 = 0;
  *a3 = 0LL;
  v24 = L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEn"
         "umeration.GameListEntry>>";
  v10 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, int *, const wchar_t **, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v23,
      v20,
      &v24,
      &v22);
    v12 = v23;
    v10 = v23 == 0 ? 0x8007000E : 0;
    if ( v23 )
    {
      v13 = v23 + 8;
      *(_QWORD *)(v23 + 216) = v8;
      v8 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 8) + 104LL))(v13, v11);
      if ( v10 < 0 )
      {
LABEL_21:
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 16LL))(v12 + 8);
        goto LABEL_23;
      }
      v14 = v12;
      v12 = 0LL;
      v23 = 0LL;
      *a3 = (v14 + 136) & -(__int64)(v14 != 0);
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    goto LABEL_21;
  }
LABEL_23:
  if ( !v3 )
    goto LABEL_31;
  v15 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
  if ( v15 )
  {
    if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v15 == 1 )
      goto LABEL_30;
  }
  else
  {
    v16 = *(_DWORD *)(v3 + 64) >> 2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( (v16 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_30:
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
  }
LABEL_31:
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v10);
  if ( v3 )
  {
    v17 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
    if ( v17 )
    {
      if ( (*(_BYTE *)(v3 + 64) & 4) == 0 && v17 == 1 )
        goto LABEL_40;
    }
    else
    {
      v18 = *(_DWORD *)(v3 + 64) >> 2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
      if ( (v18 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_40:
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v10;
}
