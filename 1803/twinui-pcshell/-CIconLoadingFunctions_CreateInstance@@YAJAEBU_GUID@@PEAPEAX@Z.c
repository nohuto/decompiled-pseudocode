/*
 * XREFs of ?CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18026DFD4
 * Callers:
 *     ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18026EA40 (-LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNot.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CIconLoadingFunctions@@QEAA@XZ @ 0x18026DB7C (--0CIconLoadingFunctions@@QEAA@XZ.c)
 */

__int64 __fastcall CIconLoadingFunctions_CreateInstance(const struct _GUID *a1, void **a2)
{
  CIconLoadingFunctions *v3; // rax
  CIconLoadingFunctions *v4; // rax
  CIconLoadingFunctions *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CIconLoadingFunctions *v12; // [rsp+30h] [rbp+8h] BYREF
  CIconLoadingFunctions *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v12 = 0LL;
  v3 = (CIconLoadingFunctions *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    v7 = -2147024882;
    v9 = 56LL;
    v8 = 2147942414LL;
    goto LABEL_7;
  }
  v4 = CIconLoadingFunctions::CIconLoadingFunctions(v3);
  v13 = v4;
  v5 = v4;
  if ( v4 )
    (*(void (__fastcall **)(CIconLoadingFunctions *))(*(_QWORD *)v4 + 8LL))(v4);
  v12 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = (**(__int64 (__fastcall ***)(CIconLoadingFunctions *, GUID *, void **))v12)(
         v12,
         &GUID_4e5c2650_fef0_4f4e_ac85_827929037acf,
         a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 57LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v7;
}
