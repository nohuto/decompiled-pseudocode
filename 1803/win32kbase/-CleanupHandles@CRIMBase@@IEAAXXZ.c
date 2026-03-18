/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C0121C4C
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C012DCD0 (CleanupSensorExplicitly.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0121FD0 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 */

void __fastcall CRIMBase::CleanupHandles(CRIMBase *this)
{
  CRIMBase::SensorDispatcherObject *v1; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  char *v4; // rcx
  void *v5; // rcx
  CRIMBase *v6; // rcx

  v1 = (CRIMBase *)((char *)this + 144);
  v3 = (CRIMBase *)((char *)this + 1040);
  while ( v1 != v3 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v1);
    v1 = (CRIMBase::SensorDispatcherObject *)((char *)v1 + 64);
  }
  v4 = (char *)*((_QWORD *)this + 1);
  if ( v4 != (char *)-1LL )
  {
    RIMUnregisterForInput(v4);
    ObCloseHandle(*((HANDLE *)this + 1), 1);
    *((_QWORD *)this + 1) = -1LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = (CRIMBase *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    if ( v6 != (CRIMBase *)((char *)this + 72) )
    {
      Win32FreePool((__int64)v6);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
