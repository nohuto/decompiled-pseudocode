/*
 * XREFs of NtDeletePrivateNamespace @ 0x14048BC24
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140540474 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x14057A7C8 (ObpRemoveNamespaceFromTable.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  NTSTATUS result; // eax
  PVOID v2; // rbx
  NTSTATUS v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             NamespaceHandle,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             &v5);
  if ( result >= 0 )
  {
    v2 = Object;
    if ( *((_QWORD *)Object + 40) )
    {
      v3 = ObpVerifyCreatorAccessCheck((char *)Object + 392);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2);
    }
    else
    {
      v3 = -1073741816;
    }
    ObfDereferenceObject(v2);
    return v3;
  }
  return result;
}
