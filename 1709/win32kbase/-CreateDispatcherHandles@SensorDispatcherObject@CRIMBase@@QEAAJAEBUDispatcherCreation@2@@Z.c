/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C001AC64
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C001A984 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 *     ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C0089148 (-CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  int v2; // r8d
  HANDLE *v3; // rsi
  void **v6; // rcx
  NTSTATUS Event; // eax
  NTSTATUS v8; // ebx
  POBJECT_TYPE *v9; // rcx
  struct _OBJECT_TYPE *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r9
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 1);
  v3 = (HANDLE *)((char *)this + 24);
  *((_DWORD *)this + 5) = v2;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  v6 = (void **)((char *)this + 24);
  if ( v2 == 1 )
    Event = ZwCreateEvent(v6, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  else
    Event = ZwCreateTimer(v6, 0x1F0003u, 0LL, SynchronizationTimer);
  v8 = Event;
  if ( Event >= 0 )
  {
    v9 = (POBJECT_TYPE *)ExTimerObjectType;
    if ( *((_DWORD *)this + 5) == 1 )
      v9 = ExEventObjectType;
    v10 = *v9;
    v8 = ObReferenceObjectByHandle(*v3, 0x1F0003u, *v9, 1, &Object, 0LL);
    *((_QWORD *)this + 6) = Object;
    if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
    {
      LOBYTE(v12) = 1;
      ProtectHandle(*v3, v11, v10, v12);
      *((_BYTE *)this + 32) = 1;
    }
    if ( v8 >= 0 )
    {
      v8 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v10, 0, (PHANDLE)this + 5);
      if ( v8 >= 0 && (*((_DWORD *)a2 + 2) & 1) != 0 )
        return !CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent((CRIMBase::SensorDispatcherObject *)((char *)this + 56))
             ? 0xC0000001
             : 0;
    }
  }
  return (unsigned int)v8;
}
