/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C00E7950
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     GreGetDxSharedSurface @ 0x1C00E7634 (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v5 )
    return (*(_BYTE *)(v5 + 66) & 0x20) != 0;
  return v4;
}
