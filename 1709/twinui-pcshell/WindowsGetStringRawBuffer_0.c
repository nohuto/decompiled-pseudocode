/*
 * XREFs of WindowsGetStringRawBuffer_0 @ 0x1801E2FBC
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x180147510 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PCWSTR __stdcall WindowsGetStringRawBuffer_0(HSTRING string, UINT32 *length)
{
  return WindowsGetStringRawBuffer(string, length);
}
