/*
 * XREFs of NtMakeTemporaryObject @ 0x14046F18C
 * Callers:
 *     IopReassignSystemRoot @ 0x1408540D4 (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14072CC00 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtMakeTemporaryObject(HANDLE Handle)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(Handle, 0x10000u, 0LL, KeGetCurrentThread()->PreviousMode, &Object, &v5);
  v3 = result;
  if ( result >= 0 )
  {
    ObMakeTemporaryObject(Object);
    if ( (v5.HandleAttributes & 4) != 0 )
      SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
    ObfDereferenceObject(Object);
    return v3;
  }
  return result;
}
