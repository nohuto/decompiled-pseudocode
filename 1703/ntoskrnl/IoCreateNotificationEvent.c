/*
 * XREFs of IoCreateNotificationEvent @ 0x140585610
 * Callers:
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwCreateEvent @ 0x14017E840 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

PKEVENT __stdcall IoCreateNotificationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  NTSTATUS v3; // eax
  struct _KEVENT *v4; // rbx
  PKEVENT result; // rax
  OBJECT_ATTRIBUTES v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v6.RootDirectory = 0LL;
  v6.ObjectName = EventName;
  v6.Length = 48;
  v6.Attributes = 640;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&Handle, 0x1F0003u, &v6, NotificationEvent, 1u) < 0 )
    return 0LL;
  v3 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v4 = (struct _KEVENT *)Object;
  if ( v3 < 0 )
    v4 = 0LL;
  else
    ObfDereferenceObject(Object);
  result = v4;
  *EventHandle = Handle;
  return result;
}
