/*
 * XREFs of ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x1800226E0
 * Callers:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAKXZ @ 0x180025700 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManag.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800257C0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this)
{
  unsigned __int32 v1; // edi
  int v2; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 19);
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 96) & 4) == 0 && v1 == 1 )
      goto LABEL_7;
  }
  else
  {
    v2 = *((_DWORD *)this + 24) >> 2;
    (*(void (__fastcall **)(ContentManagement::ContentDeliveryManagerConfigurationStatics *, __int64))(*(_QWORD *)this + 56LL))(
      this,
      1LL);
    if ( (v2 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_7:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v1;
}
