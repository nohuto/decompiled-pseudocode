/*
 * XREFs of ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1801E62C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1801E3D90 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801E6260 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Deskt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::RequestCloseAsync(__int64 a1, AppRequestOperation **a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  AppRequestOperation *v10; // rcx
  AppRequestOperation *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  AppRequestOperation *v14; // rcx
  AppRequestOperation *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  AppRequestOperation *v18; // [rsp+60h] [rbp+18h] BYREF
  AppRequestOperation *v19; // [rsp+68h] [rbp+20h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsageToService(
    a1,
    (__int64)a2,
    a3);
  v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
  AcquireSRWLockExclusive(v5);
  v18 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(&v18);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 1543LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
    v10 = v18;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    v14 = v18;
    _InterlockedExchange((volatile __int32 *)v18 + 42, 1);
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 2) + 128LL))((__int64)v14 + 16, v7);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 520LL) + 120LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL),
           *(unsigned int *)(a1 + 140));
    v8 = v6;
    if ( v6 < 0 )
    {
      v9 = 1549LL;
      goto LABEL_6;
    }
    v11 = v18;
    if ( *(AppRequestOperation **)(a1 + 464) != v18 )
    {
      v19 = v18;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v19);
      v13 = *(_QWORD *)(a1 + 464);
      *(_QWORD *)(a1 + 464) = v11;
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v12);
    }
  }
  v15 = v18;
  v10 = 0LL;
  v18 = 0LL;
  *a2 = v15;
  v8 = 0;
LABEL_12:
  if ( v10 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v8;
}
