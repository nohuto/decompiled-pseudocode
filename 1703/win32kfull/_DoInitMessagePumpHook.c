/*
 * XREFs of _DoInitMessagePumpHook @ 0x1C0116000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DoInitMessagePumpHook()
{
  __int64 result; // rax

  result = 1LL;
  ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 16LL);
  return result;
}
