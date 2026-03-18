/*
 * XREFs of ?DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ @ 0x1C01E6804
 * Callers:
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVAILGUESTOBJECT::DestroyVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
