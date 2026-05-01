/*
 * XREFs of Windows::Internal::MakeAsyncAction_Windows::Internal::ComTaskPoolHandler__lambda_1854fdeaa8c10903b3acdb056db6e24a___ @ 0x180015878
 * Callers:
 *     ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800148F0 (-SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCa.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18001B2E8 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Windows::Internal::ComTaskPoolHandler__lambda_1854fdeaa8c10903b3acdb056db6e24a___(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  signed __int64 v16; // [rsp+20h] [rbp-38h]
  _QWORD v17[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v17[1] = -2LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &off_18002F218;
    v7[1] = *(_QWORD *)a4;
    v9 = *(_QWORD *)(a4 + 8);
    v7[2] = v9;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 96);
      v16 = v10;
      while ( v10 >= 0 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 96), v10 + 1, v10);
        if ( v11 == v10 )
          goto LABEL_7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
    }
LABEL_7:
    *((_DWORD *)v8 + 6) = *(_DWORD *)(a4 + 16);
  }
  else
  {
    v8 = 0LL;
  }
  v19 = 0;
  v17[0] = L"Windows.Foundation.IAsyncAction";
  *a2 = 0LL;
  v12 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *, signed __int64))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v18,
      a1,
      v17,
      &v19,
      v16);
    v13 = v18;
    v12 = v18 == 0 ? 0x8007000E : 0;
    if ( v18 )
    {
      *(_QWORD *)(v18 + 216) = v8;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 104LL))(v13 + 8);
      v8 = 0LL;
      if ( (v12 & 0x80000000) != 0 )
      {
LABEL_15:
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 16LL))(v13 + 8);
        return v12;
      }
      v14 = v13;
      v13 = 0LL;
      v18 = 0LL;
      *a2 = (v14 + 136) & -(__int64)(v14 != 0);
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    goto LABEL_15;
  }
  return v12;
}
