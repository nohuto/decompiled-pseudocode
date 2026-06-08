/*
 * XREFs of RegisterKernelPerfStates @ 0x1C00277D0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C0026F88 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}
