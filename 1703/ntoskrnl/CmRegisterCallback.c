/*
 * XREFs of CmRegisterCallback @ 0x1405D2260
 * Callers:
 *     <none>
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1405D2288 (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&CmLegacyAltitude,
           1,
           0,
           (__int64)Cookie);
}
