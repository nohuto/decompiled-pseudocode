/*
 * XREFs of ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C001AB98
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C001A8F0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(CRIMBase::SensorDispatcherObject *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct _KEVENT *v6; // rcx

  RIMLockExclusive((__int64)this);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      ProtectHandle(v3, v2, ExEventObjectType, 0LL);
      *((_BYTE *)this + 32) = 0;
    }
    ObCloseHandle(*((HANDLE *)this + 3), 1);
    *((_QWORD *)this + 3) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    ZwClose(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  v6 = (struct _KEVENT *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    KeSetEvent(v6, 1, 0);
    ObfDereferenceObject(*((PVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 12;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
