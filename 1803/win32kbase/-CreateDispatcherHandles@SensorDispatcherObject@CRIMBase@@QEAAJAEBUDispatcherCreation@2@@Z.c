/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C0122110
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C005F844 (ProtectHandle.c)
 *     ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C0122504 (-CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  __int64 v4; // rcx
  HANDLE *v5; // rsi
  NTSTATUS Event; // eax
  NTSTATUS v7; // ebx
  POBJECT_TYPE *v8; // rcx
  struct _OBJECT_TYPE *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((unsigned int *)a2 + 1);
  *((_DWORD *)this + 5) = v4;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( (_DWORD)v4 == 1 )
  {
    v5 = (HANDLE *)((char *)this + 24);
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
    v5 = (HANDLE *)((char *)this + 24);
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  v7 = Event;
  if ( Event >= 0 )
  {
    v8 = (POBJECT_TYPE *)ExTimerObjectType;
    if ( *((_DWORD *)this + 5) == 1 )
      v8 = ExEventObjectType;
    v9 = *v8;
    v7 = ObReferenceObjectByHandle(*v5, 0x1F0003u, *v8, 1, &Object, 0LL);
    *((_QWORD *)this + 6) = Object;
    if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
    {
      if ( *((_DWORD *)this + 5) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
      ProtectHandle(*v5, v10, v9, 1);
      *((_BYTE *)this + 32) = 1;
    }
    if ( v7 >= 0 )
    {
      v7 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v9, 0, (PHANDLE)this + 5);
      if ( v7 >= 0 && (*((_DWORD *)a2 + 2) & 1) != 0 )
        return !CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent((CRIMBase::SensorDispatcherObject *)((char *)this + 56))
             ? 0xC0000001
             : 0;
    }
  }
  return (unsigned int)v7;
}
