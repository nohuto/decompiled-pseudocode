/*
 * XREFs of ??_GTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x180028B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

HSTRING *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  __int64 v4; // rcx
  HSTRING v5; // rcx

  WindowsDeleteString(this[8]);
  this[8] = 0LL;
  v4 = (__int64)this[7];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v4));
  v5 = this[5];
  if ( v5 )
  {
    this[5] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
