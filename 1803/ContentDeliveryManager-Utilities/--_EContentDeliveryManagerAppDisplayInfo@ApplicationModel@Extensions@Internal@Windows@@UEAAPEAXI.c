/*
 * XREFs of ??_EContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800958F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

HSTRING *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vector deleting destructor'(
        HSTRING *this,
        char a2)
{
  HSTRING v4; // rcx
  __int64 v5; // rcx
  HSTRING v6; // rcx

  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  v4 = this[9];
  if ( v4 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (__int64)this[8];
  if ( v5 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v5));
  v6 = this[6];
  if ( v6 )
  {
    this[6] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
