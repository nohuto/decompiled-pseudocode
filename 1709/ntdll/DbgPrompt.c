/*
 * XREFs of DbgPrompt @ 0x1800DFFE0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800EA280 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A3AD0 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
