/*
 * XREFs of ??_GDXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAPEAXI@Z @ 0x1C01E5BA4
 * Callers:
 *     ?Delete@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ @ 0x1C01E67A0 (-Delete@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DXG_HOST_COMPOSITIONOBJECTCHANNEL *__fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::`scalar deleting destructor'(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  operator delete(this);
  return this;
}
