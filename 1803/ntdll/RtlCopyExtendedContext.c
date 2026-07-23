/*
 * XREFs of RtlCopyExtendedContext @ 0x1800EE230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EE3A4 @ 0x1800EE3A4 (sub_1800EE3A4.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return sub_1800EE3A4((_DWORD)Destination, (_DWORD)Destination, (_DWORD)Source, ContextFlags, (__int64)Source);
}
