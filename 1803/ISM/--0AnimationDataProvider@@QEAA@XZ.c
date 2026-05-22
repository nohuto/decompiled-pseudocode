/*
 * XREFs of ??0AnimationDataProvider@@QEAA@XZ @ 0x18008EE44
 * Callers:
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x180063A88 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Get@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEBAPEBXXZ @ 0x180016A60 (-_Get@-$_Func_impl_no_alloc@V-$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU.c)
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18001A690 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
AnimationDataProvider *__fastcall AnimationDataProvider::AnimationDataProvider(AnimationDataProvider *this)
{
  int v2; // eax
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD); // rax
  __int64 v5; // rbx
  char *v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  void (__fastcall ***v10)(_QWORD); // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  char *v16; // [rsp+90h] [rbp+40h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v15 = 0LL;
  v2 = CoreUICreate(&v15);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  DWORD2(v13) = 1;
  *(_QWORD *)&v13 = 0LL;
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    (**v4)(v4);
  }
  v5 = v15;
  v16 = 0LL;
  *(_QWORD *)this = 0LL;
  v6 = (char *)operator new(0xA0uLL);
  v16 = v6;
  memset_0(v6, 0, 0xA0uLL);
  *(_QWORD *)v6 = &dataproviderBamoConnection::`vftable';
  *((_DWORD *)v6 + 4) = 1;
  *((_QWORD *)v6 + 1) = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  *((_QWORD *)v6 + 3) = v6;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_DWORD *)v6 + 10) = 0;
  *((_QWORD *)v6 + 6) = 0LL;
  *((_QWORD *)v6 + 7) = 0LL;
  *((_QWORD *)v6 + 8) = 0LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *((_QWORD *)v6 + 10) = 0LL;
  *((_QWORD *)v6 + 11) = 0LL;
  v6[96] = 0;
  *((_QWORD *)v6 + 18) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 104));
  *((_QWORD *)v6 + 1) = &BamoImpl::dataproviderBamoConnectionImpl::`vftable';
  *(_QWORD *)v6 = &AnimationDataProviderConnection::`vftable';
  v16 = v6;
  v7 = std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::_Get((__int64)v6);
  v8 = Microsoft::BamoImpl::BamoConnectionImpl::Join(v7, v5, 0LL, &v13, L"System\\CompositionEngineDataProvider", 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)this = v6;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x620,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v8);
    v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 40LL))(v6);
    (**v10)(v10);
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18008F039LL);
  }
  *(_QWORD *)(*(_QWORD *)this + 152LL) = this;
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return this;
}
