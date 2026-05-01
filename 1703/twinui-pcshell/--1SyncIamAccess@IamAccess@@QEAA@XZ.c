/*
 * XREFs of ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800CF190
 * Callers:
 *     _PrivilegedHotkeyOperations::RequestPrivilegedHotkeys_::_1_::dtor$3 @ 0x18019D292 (_PrivilegedHotkeyOperations--RequestPrivilegedHotkeys_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 */

void __fastcall IamAccess::SyncIamAccess::~SyncIamAccess(RTL_SRWLOCK **this)
{
  volatile signed __int32 *v2; // rcx

  EnableIAMAccess((*this)[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(*this + 5);
  v2 = (volatile signed __int32 *)*this;
  if ( *this )
  {
    *this = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
}
