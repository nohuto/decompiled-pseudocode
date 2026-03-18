/*
 * XREFs of ZwSetInformationDebugObject @ 0x140180A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationDebugObject(
        HANDLE DebugObject,
        DEBUGOBJECTINFOCLASS InformationClass,
        PVOID Information,
        ULONG InformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObject, *(_QWORD *)&InformationClass, Information);
}
