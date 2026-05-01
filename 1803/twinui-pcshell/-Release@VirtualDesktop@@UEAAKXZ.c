/*
 * XREFs of ?Release@VirtualDesktop@@UEAAKXZ @ 0x18008AA30
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800ADA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@M.c)
 *     ?Release@VirtualDesktop@@WBA@EAAKXZ @ 0x1800ADA90 (-Release@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WCA@EAAKXZ @ 0x1800ADAA0 (-Release@VirtualDesktop@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBI@EAAKXZ @ 0x1800ADAB0 (-Release@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1802625F0 (-InternalRelease@-$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktop::Release(VirtualDesktop *this)
{
  signed __int64 v1; // rax
  VirtualDesktop *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 9);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(VirtualDesktop *, __int64))(*(_QWORD *)v2 + 96LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
