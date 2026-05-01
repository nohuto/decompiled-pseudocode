/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x180272FB8
 * Callers:
 *     _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x180273164 (_lambda_637b889d7309fa55c34979987552fc96_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800FA334 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YA.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C8B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___ @ 0x180272DE8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rax
  char **CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53; // rax
  volatile int *v8; // rdx
  char *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  void *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v18; // [rsp+50h] [rbp+20h] BYREF
  void *v19; // [rsp+60h] [rbp+30h] BYREF
  char *v20; // [rsp+68h] [rbp+38h] BYREF

  v18 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v18);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(void **)a2;
    *(_QWORD *)a2 = 0LL;
    v15 = v5;
    v6 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v16 = v6;
    CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53___((char **)&v19, &v15);
    v9 = *CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53;
    *CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53_____lambda_6dcf47c7a64d744d561044cc52c68c53 = 0LL;
    v10 = (char *)v19;
    v20 = v9;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
        v10,
        v8);
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>(&v15);
    if ( v9 )
    {
      v13 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v18 + 24LL))(v18, v9);
      v4 = v13;
      if ( v13 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v20);
        goto LABEL_11;
      }
      v12 = (unsigned int)v13;
      v11 = 80LL;
    }
    else
    {
      v4 = -2147024882;
      v11 = 79LL;
      v12 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)v12);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v4;
}
