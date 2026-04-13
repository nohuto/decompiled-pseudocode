/*
 * XREFs of ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x180052530
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004064 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800147C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180018CBC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x18004707C (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@GU-_ea_18004707C.c)
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x1800527BC (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054F90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180054F90.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        void **a4)
{
  const WCHAR *StringRawBuffer; // rdi
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  const char *v9; // r9
  _QWORD *v10; // rbx
  int Interface; // edi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  volatile signed __int64 *v15; // rcx
  wchar_t **i; // rbx
  unsigned int v18; // eax
  _QWORD *v19; // [rsp+30h] [rbp-88h]
  unsigned int v20; // [rsp+30h] [rbp-88h]
  __int64 v21; // [rsp+58h] [rbp-60h] BYREF
  void *v22; // [rsp+60h] [rbp-58h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a4 = 0LL;
  v21 = 0LL;
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22) = 0;
  try
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    for ( i = &off_18017A580; ; i += 2 )
    {
      if ( i == &off_18017A690 )
        goto LABEL_21;
      if ( CompareStringOrdinal(*i, -1, StringRawBuffer, -1, 1) == 2 )
        break;
    }
    v7 = *((_DWORD *)i + 2);
    *a4 = 0LL;
    v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v8;
    v19 = v8;
    if ( v8 )
    {
      v12 = v8 + 1;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 1));
      v10[8] = 1LL;
      *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IInspectable'};
      *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      v13 = v10 + 5;
      v10[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IWeakReferenceSource'};
      v14 = v10 + 6;
      v10[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v10 = v19;
      }
      *v10 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IInspectable'};
      *v12 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      *v13 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IWeakReferenceSource'};
      *v14 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
      v10[9] = 0LL;
      v10[10] = 0LL;
      v10[11] = 0LL;
      v10[12] = 0LL;
      v10[11] = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
      Interface = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize(
                    v10,
                    v7,
                    &v21,
                    a3);
      v15 = v10;
      if ( Interface >= 0 )
      {
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::QueryInterface(
                      (Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)v10,
                      &GUID_e762b6be_f3b7_4977_bc20_4388a551b5b4,
                      a4);
        v15 = v10;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v15);
    }
    else
    {
      Interface = -2147024882;
    }
    if ( Interface < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
        (const char *)(unsigned int)Interface);
LABEL_21:
      v18 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\actionfactory.h",
        (const char *)v18);
      JUMPOUT(0x180052785LL);
    }
  }
  catch ( ... )
  {
    v20 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x36,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v9);
    if ( v24 >= 8 )
      operator delete(v22);
    return v20;
  }
  if ( v24 >= 8 )
    operator delete(v22);
  return 0LL;
}
