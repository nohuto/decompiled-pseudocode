/*
 * XREFs of ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180022740
 * Callers:
 *     ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WDA@EAAKXZ @ 0x180025710 (-AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WDA@EAAK.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800257D0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 19);
  if ( (*((_BYTE *)this + 96) & 4) == 0 && (_DWORD)result == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return result;
}
