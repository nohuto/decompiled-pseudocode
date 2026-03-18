/*
 * XREFs of KiEnclsDebugRead @ 0x140182080
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x1406D8058 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
