/*
 * XREFs of ??_GDXG_GUEST_COMPOSITIONOBJECTCHANNEL@@IEAAPEAXI@Z @ 0x1C01E5AF4
 * Callers:
 *     ?Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ @ 0x1C01E6760 (-Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DXG_GUEST_COMPOSITIONOBJECTCHANNEL *__fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`scalar deleting destructor'(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  operator delete(this);
  return this;
}
