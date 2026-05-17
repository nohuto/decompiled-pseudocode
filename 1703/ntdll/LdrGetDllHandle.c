/*
 * XREFs of LdrGetDllHandle @ 0x18003BD20
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 */

__int64 __fastcall LdrGetDllHandle(int a1, int a2, int a3, __int64 a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
