/*
 * XREFs of ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18026BA00
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802683BC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVie.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180080664 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x18026B758 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 */

__int64 __fastcall MultitaskingViewVisibilityService_CreateInstance(const struct _GUID *a1, void **a2)
{
  MultitaskingViewVisibilityService *v3; // rax
  int v4; // ebx
  MultitaskingViewVisibilityService *v5; // rdi
  volatile int *v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v12 = 0LL;
  v3 = (MultitaskingViewVisibilityService *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    v4 = -2147024882;
LABEL_6:
    v7 = (unsigned int)v4;
    v8 = 98LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewvisibilityservice.cpp",
      (const char *)v7);
    goto LABEL_10;
  }
  v5 = MultitaskingViewVisibilityService::MultitaskingViewVisibilityService(v3);
  v4 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>>(
         (__int64)v5,
         &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
         &v12);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::Release(
      (__int64)v5,
      v6);
  if ( v4 < 0 )
    goto LABEL_6;
  v9 = (**v12)(v12, &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307, a2);
  v4 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 99LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v4;
}
