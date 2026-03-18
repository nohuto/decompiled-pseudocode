/*
 * XREFs of _DoInitMessagePumpHook @ 0x1C0124A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DoInitMessagePumpHook()
{
  __int64 result; // rax

  result = 1LL;
  ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL);
  return result;
}
