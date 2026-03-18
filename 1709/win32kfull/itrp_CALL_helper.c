/*
 * XREFs of itrp_CALL_helper @ 0x1C02CA4C0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C02C9348 (InvokeInterpreter.c)
 */

void __fastcall itrp_CALL_helper(__int64 a1)
{
  InvokeInterpreter(dword_1C0327CC8, *(_QWORD *)a1, *(_QWORD *)a1 + *(unsigned __int16 *)(a1 + 8));
}
