/*
 * XREFs of EditionInputExtensibilityCallout @ 0x1C011C660
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientCallDevCallbackCapture @ 0x1C011C694 (xxxClientCallDevCallbackCapture.c)
 *     xxxClientCallDevCallbackSimple @ 0x1C01419A8 (xxxClientCallDevCallbackSimple.c)
 */

__int64 __fastcall EditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 4);
  if ( !(_DWORD)result )
    return xxxClientCallDevCallbackSimple();
  if ( (_DWORD)result == 1 )
    return xxxClientCallDevCallbackCapture();
  if ( (int)result > 1 )
  {
    if ( (int)result <= 5 )
      return xxxClientCallDevCallbackSimple();
    if ( (_DWORD)result == 6 )
      return xxxClientCallDevCallbackCapture();
  }
  return result;
}
