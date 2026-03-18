/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x14072F580
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall SepRmSetSharedUserSessionWrkr(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 44);
  result = PsGetCurrentServerSiloGlobals();
  *(_DWORD *)(result[138] + 24LL) = v2;
  *(_DWORD *)(a2 + 40) = 0;
  return result;
}
