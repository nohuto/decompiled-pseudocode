/*
 * XREFs of ??1CConnection@@EEAA@XZ @ 0x180138810
 * Callers:
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x1801388A0 (--_GCConnection@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180138A50 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x180138B2C (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CConnection::~CConnection(CConnection *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &CConnection::`vftable';
  CConnection::Disconnect(this);
  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    SetEvent(v2);
    v3 = (void *)*((_QWORD *)this + 19);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  v4 = (void *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  ReleaseInterface<IBitmapLock>((__int64 *)this + 20);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  CChannelTable::~CChannelTable((CConnection *)((char *)this + 16));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
