/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJW4DispatcherHandleType@2@W4DispatcherHandleName@2@@Z @ 0x1C00520C4
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C004FFAC (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C0054640 (CreateKernelEvent.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3)
{
  HANDLE *v3; // rsi
  void **v5; // rcx
  NTSTATUS Event; // eax
  NTSTATUS v7; // ecx
  POBJECT_TYPE *v8; // rcx
  struct _OBJECT_TYPE *v9; // rbp
  NTSTATUS v10; // eax
  PVOID v11; // r10
  __int64 KernelEvent; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  *a1 = a3;
  v3 = (HANDLE *)(a1 + 2);
  a1[1] = a2;
  v5 = (void **)(a1 + 2);
  if ( a2 == 1 )
    Event = ZwCreateEvent(v5, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  else
    Event = ZwCreateTimer(v5, 0x1F0003u, 0LL, SynchronizationTimer);
  v7 = Event;
  if ( Event >= 0 )
  {
    v8 = (POBJECT_TYPE *)ExTimerObjectType;
    if ( a1[1] == 1 )
      v8 = ExEventObjectType;
    v9 = *v8;
    v10 = ObReferenceObjectByHandle(*v3, 0x1F0003u, *v8, 1, &Object, 0LL);
    v11 = Object;
    v7 = v10;
    *((_QWORD *)a1 + 3) = Object;
    if ( v10 >= 0 )
    {
      v7 = ObOpenObjectByPointer(v11, 0x200u, 0LL, 0x1F0003u, v9, 0, (PHANDLE)a1 + 2);
      if ( v7 >= 0 )
      {
        if ( CRIMBase::SensorDispatcherObject::hasMarshalingCompleteEvent[*a1] )
        {
          KernelEvent = CreateKernelEvent(SynchronizationEvent);
          *((_QWORD *)a1 + 4) = KernelEvent;
          return KernelEvent == 0 ? 0xC0000001 : 0;
        }
      }
    }
  }
  return (unsigned int)v7;
}
