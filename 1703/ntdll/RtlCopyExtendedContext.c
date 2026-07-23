/*
 * XREFs of RtlCopyExtendedContext @ 0x1800F1590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F16A8 @ 0x1800F16A8 (sub_1800F16A8.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return sub_1800F16A8((_DWORD)Destination, (_DWORD)Destination, (_DWORD)Source, ContextFlags, (__int64)Source);
}
