/*
 * XREFs of ??_EIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C0210
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *__fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vector deleting destructor'(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx
  char v5; // si
  char *v6; // rcx
  __int64 v7; // rcx

  v2 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 18);
  v5 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    *((_QWORD *)v2 + 13) = 0LL;
  }
  v6 = (char *)*((_QWORD *)v2 + 13);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2);
    *((_QWORD *)v2 + 13) = 0LL;
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v7));
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
