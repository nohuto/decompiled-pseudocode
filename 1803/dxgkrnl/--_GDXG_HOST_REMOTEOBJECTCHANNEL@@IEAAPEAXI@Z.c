/*
 * XREFs of ??_GDXG_HOST_REMOTEOBJECTCHANNEL@@IEAAPEAXI@Z @ 0x1C01E5C04
 * Callers:
 *     ?Delete@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x1C01E67C0 (-Delete@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DXG_HOST_REMOTEOBJECTCHANNEL *__fastcall DXG_HOST_REMOTEOBJECTCHANNEL::`scalar deleting destructor'(
        DXG_HOST_REMOTEOBJECTCHANNEL *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    operator delete[](v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    operator delete[](v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  operator delete(this);
  return this;
}
