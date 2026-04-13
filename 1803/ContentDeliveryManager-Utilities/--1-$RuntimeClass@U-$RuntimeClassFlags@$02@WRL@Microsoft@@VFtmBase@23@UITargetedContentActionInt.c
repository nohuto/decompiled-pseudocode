/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800555FC
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$5 @ 0x1800C4614 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800C4614.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v2));
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
