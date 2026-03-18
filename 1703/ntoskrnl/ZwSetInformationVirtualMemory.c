/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x140181160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
