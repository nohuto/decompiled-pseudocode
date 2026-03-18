/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C001A8F0
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C009B620 (CleanupSensorExplicitly.c)
 * Callees:
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C001AB98 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CRIMBase::CleanupHandles(CRIMBase *this, __int64 a2, __int64 a3)
{
  CRIMBase::SensorDispatcherObject *v3; // rdi
  CRIMBase::SensorDispatcherObject *v5; // rsi
  __int64 v6; // rcx
  void *v7; // rcx
  CRIMBase *v8; // rcx

  v3 = (CRIMBase *)((char *)this + 144);
  v5 = (CRIMBase *)((char *)this + 912);
  while ( v3 != v5 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v3);
    v3 = (CRIMBase::SensorDispatcherObject *)((char *)v3 + 64);
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 != -1 )
  {
    RIMUnregisterForInput(v6);
    ObCloseHandle(*((HANDLE *)this + 1), 1);
    *((_QWORD *)this + 1) = -1LL;
  }
  v7 = (void *)*((_QWORD *)this + 2);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CRIMBase *)*((_QWORD *)this + 8);
  if ( v8 )
  {
    if ( v8 != (CRIMBase *)((char *)this + 72) )
    {
      Win32FreePool(v8, a2, a3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
