/*
 * XREFs of _lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator() @ 0x1800149DC
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_1854fdeaa8c10903b3acdb056db6e24a____Windows::Internal::CNoResult_::Run @ 0x180017460 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_1854fdeaa8c1090.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004B50 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012870 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180012870.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator()(unsigned int *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r12
  char *v5; // rax
  char *v6; // rbx
  int v7; // edi
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  char *v14; // [rsp+80h] [rbp+40h]
  volatile signed __int64 *v15; // [rsp+88h] [rbp+48h]

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 192LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 176LL);
  v15 = 0LL;
  v5 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v14 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_18;
  }
  v8 = v5 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
  *((_QWORD *)v6 + 6) = 1LL;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v9 = v6 + 8;
  *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v8 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v6 = v14;
  }
  *(_QWORD *)v6 = &Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::`vftable';
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'};
  *v8 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v7 = Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize(
         &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'},
         *(unsigned int *)(v2 + 104),
         a1[4],
         v4,
         v3);
  if ( v7 >= 0 )
  {
    if ( v6 )
    {
      v10 = *((_QWORD *)v6 + 6);
      while ( v10 >= 0 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 6, v10 + 1, v10);
        if ( v11 == v10 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
    }
LABEL_13:
    v15 = (volatile signed __int64 *)v6;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v6);
    v7 = 0;
  }
  else if ( v6 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v6);
  }
  if ( v7 < 0 )
    goto LABEL_17;
LABEL_18:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v15);
  return (unsigned int)v7;
}
