/*
 * XREFs of _lambda_156a2acd22091851321d998ccb9c82aa_::operator() @ 0x180013CF8
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_156a2acd22091851321d998ccb9c82aa____Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x180017490 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_156a2acd2209185.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004B50 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012870 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@W_ea_180012870.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CDF4 (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_156a2acd22091851321d998ccb9c82aa_::operator()(__int64 a1, __int64 a2)
{
  struct ITileInfo *v3; // rsi
  char *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  volatile signed __int64 *v13; // [rsp+60h] [rbp+30h]
  char *v14; // [rsp+70h] [rbp+40h]

  v3 = *(struct ITileInfo **)(*(_QWORD *)a1 + 192LL);
  v13 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v14 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x111,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v7 = v4 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 16));
  v5[6] = 1LL;
  *v5 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v8 = v5 + 1;
  v5[1] = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v5 = v14;
  }
  *v5 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable';
  *v8 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v6 = Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize(
         (Windows::Gaming::Preview::GamesEnumeration::LaunchOperation *)&Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::`vftable'{for `IWeakReferenceSource'},
         v3);
  if ( v6 >= 0 )
  {
    if ( v5 )
    {
      v9 = v5[6];
      while ( v9 >= 0 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(v5 + 6, v9 + 1, v9);
        if ( v10 == v9 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
    }
LABEL_13:
    v13 = v5;
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v5);
    v6 = 0;
  }
  else if ( v5 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v5);
  }
  if ( v6 < 0 )
    goto LABEL_17;
  *(_BYTE *)(a2 + 16) = 1;
  v6 = 0;
LABEL_19:
  if ( v13 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v13);
  return (unsigned int)v6;
}
