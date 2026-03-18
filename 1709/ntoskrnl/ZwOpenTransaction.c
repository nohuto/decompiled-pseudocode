/*
 * XREFs of ZwOpenTransaction @ 0x14017FDA0
 * Callers:
 *     CmpRmUnDoPhase @ 0x140696A54 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
