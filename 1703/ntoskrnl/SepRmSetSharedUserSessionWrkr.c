/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x1406F7980
 * Callers:
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall SepRmSetSharedUserSessionWrkr(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 44);
  result = PsGetCurrentServerSiloGlobals();
  *(_DWORD *)(result[134] + 24LL) = v2;
  *(_DWORD *)(a2 + 40) = 0;
  return result;
}
