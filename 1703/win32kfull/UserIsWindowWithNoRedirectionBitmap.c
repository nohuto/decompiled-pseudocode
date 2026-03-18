/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C009CF8C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     GreGetDxSharedSurface @ 0x1C009CA40 (GreGetDxSharedSurface.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  v2 = HMValidateHandleNoSecure(a1, 1);
  if ( v2 )
    return (*(_BYTE *)(v2 + 66) & 0x20) != 0;
  return v1;
}
