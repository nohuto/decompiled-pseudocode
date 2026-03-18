/*
 * XREFs of DebugPrint @ 0x1401B2B60
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     <none>
 */

__int64 DebugPrint()
{
  __int64 result; // rax

  result = 1LL;
  __asm { int     2Dh; Windows NT - eax = 1: debug print }
  __debugbreak();
  return result;
}
