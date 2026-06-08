/*
 * XREFs of RegisterKernelCpc @ 0x1C0031230
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}
