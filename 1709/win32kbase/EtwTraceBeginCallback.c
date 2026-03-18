/*
 * XREFs of EtwTraceBeginCallback @ 0x1C00453D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall EtwTraceBeginCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  ++*(_BYTE *)(result + 1196);
  return result;
}
