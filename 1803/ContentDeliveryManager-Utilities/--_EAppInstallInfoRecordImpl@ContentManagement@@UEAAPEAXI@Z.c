/*
 * XREFs of ??_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z @ 0x180007560
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

HSTRING *__fastcall ContentManagement::AppInstallInfoRecordImpl::`vector deleting destructor'(HSTRING *this, char a2)
{
  __int64 v4; // rcx
  HSTRING v5; // rcx

  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  WindowsDeleteString(this[11]);
  this[11] = 0LL;
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  v4 = (__int64)this[8];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(2 * v4);
  v5 = this[4];
  if ( v5 )
  {
    this[4] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
