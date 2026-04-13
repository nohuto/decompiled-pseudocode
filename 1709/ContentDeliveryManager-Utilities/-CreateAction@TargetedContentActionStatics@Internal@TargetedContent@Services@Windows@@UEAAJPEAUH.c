/*
 * XREFs of ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x18004E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012B30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800166CC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DB1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800434F0 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@GU-_ea_1800434F0.c)
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18004E93C (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800511B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800511B0.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        void **a4)
{
  const WCHAR *StringRawBuffer; // rdi
  wchar_t **i; // rbx
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int Interface; // edi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  volatile signed __int64 *v15; // rcx
  unsigned int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-88h]
  _QWORD *v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+58h] [rbp-60h] BYREF
  void *v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+70h] [rbp-48h]
  unsigned __int64 v23; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a4 = 0LL;
  v20 = 0LL;
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  for ( i = &off_18015C410; ; i += 2 )
  {
    if ( i == &off_18015C510 )
    {
      v17 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\actionfactory.h",
        (const char *)v17);
      return v18;
    }
    if ( CompareStringOrdinal(*i, -1, StringRawBuffer, -1, 1) == 2 )
      break;
  }
  v8 = *((_DWORD *)i + 2);
  *a4 = 0LL;
  v9 = operator new(0x70uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v10 = v9;
  v19 = v9;
  if ( v9 )
  {
    v12 = v9 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 1));
    v10[9] = 1LL;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IInspectable'};
    *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
    v13 = v10 + 6;
    v10[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `IWeakReferenceSource'};
    v14 = v10 + 7;
    v10[7] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v10 = v19;
    }
    *v10 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IInspectable'};
    *v12 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
    *v13 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `IWeakReferenceSource'};
    *v14 = &Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>'};
    v10[10] = 0LL;
    v10[11] = 0LL;
    v10[12] = 0LL;
    v10[13] = 0LL;
    v10[12] = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
    Interface = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize(
                  v10,
                  v8,
                  &v20,
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
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
      (const char *)(unsigned int)Interface);
  if ( v23 >= 8 )
    operator delete(v21);
  return 0LL;
}
