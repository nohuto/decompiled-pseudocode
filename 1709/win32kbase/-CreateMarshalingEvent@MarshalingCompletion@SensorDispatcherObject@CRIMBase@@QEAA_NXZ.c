/*
 * XREFs of ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C0089148
 * Callers:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C001AC64 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent(
        CRIMBase::SensorDispatcherObject::MarshalingCompletion *this)
{
  HANDLE v2; // rcx
  struct _OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v4.RootDirectory = 0LL;
  v4.ObjectName = 0LL;
  v4.Length = 48;
  v4.Attributes = 512;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&Handle, 0x1F0003u, &v4, SynchronizationEvent, 0) >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v2 = Handle;
    *(_QWORD *)this = Object;
    ZwClose(v2);
  }
  return *(_QWORD *)this != 0LL;
}
