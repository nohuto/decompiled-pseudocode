/*
 * XREFs of ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180027690
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004064 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180026860 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800285B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_1800285B4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<ContentManagement::TargetedContent::SubscriptionStaticsImpl>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  char *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  bool v12; // zf
  signed __int32 v13; // edx
  int v14; // edx
  int CanCastTo; // esi
  signed __int32 v16; // eax

  v4 = 0LL;
  v9 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( !v9 )
  {
    CanCastTo = -2147024882;
LABEL_20:
    v10 = 0LL;
    goto LABEL_21;
  }
  v11 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *(_QWORD *)(v10 + 80) = 0LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v11 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>>'};
  *(_QWORD *)(v10 + 40) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>>'};
  *(_DWORD *)(v10 + 68) = 1;
  *(_DWORD *)(v10 + 88) = 4;
  if ( !v12 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v10 = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable';
  *v11 = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>>'};
  *(_QWORD *)(v10 + 40) = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>>'};
  v13 = *(_DWORD *)(v10 + 68);
  if ( v13 == 0x7FFFFFFF )
    goto LABEL_9;
  do
  {
    if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 68), v13 + 1, v13) )
      break;
    v13 = *(_DWORD *)(v10 + 68);
  }
  while ( v13 != 0x7FFFFFFF );
  if ( v13 == 0x7FFFFFFF )
LABEL_9:
    v14 = 0x7FFFFFFF;
  else
    v14 = v13 + 1;
  if ( (*(_BYTE *)(v10 + 88) & 4) == 0 && v14 == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  v4 = v10;
  Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v10,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*a1 & 4) == 0 )
    {
      do
        v16 = *(_DWORD *)(v10 + 68);
      while ( v16 != 0x7FFFFFFF
           && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 68), v16 + 1, v16) );
    }
    v4 = 0LL;
    *(_DWORD *)(v10 + 88) = *(_DWORD *)a1;
    CanCastTo = 0;
    *(_QWORD *)(v10 + 80) = a2;
    goto LABEL_20;
  }
LABEL_21:
  if ( v10 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  return (unsigned int)CanCastTo;
}
