/*
 * XREFs of RtlWnfDllUnloadCallback @ 0x180088B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlWnfDllUnloadCallback(__int64 a1)
{
  return LdrUnloadDll(a1);
}
