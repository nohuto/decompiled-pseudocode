/*
 * XREFs of ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C0006120
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 InitializeRemoteSessionOcclusionEvent(void)
{
  NTSTATUS v0; // ebx
  struct _OBJECT_ATTRIBUTES v2; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  memset(&v2.RootDirectory, 0, 20);
  v2.Length = 48;
  *(_OWORD *)&v2.SecurityDescriptor = 0LL;
  v0 = ZwCreateEvent(&Handle, 0x1F0003u, &v2, SynchronizationEvent, 1u);
  if ( v0 >= 0 )
  {
    v0 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    gpRemoteSessionOcclusionEvent = Object;
    ObCloseHandle(Handle, 1);
  }
  return (unsigned int)v0;
}
