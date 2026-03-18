/*
 * XREFs of NtUnloadKey @ 0x1405E9FA4
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return CmUnloadKey((__int64)KeyObjectAttributes, 0, 0, 0LL);
}
