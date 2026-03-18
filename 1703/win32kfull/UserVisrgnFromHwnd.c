/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C01C2388
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _VisrgnFromWindow @ 0x1C01C23C8 (_VisrgnFromWindow.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a2, 1);
  if ( result )
    return VisrgnFromWindow(result, a3, a1);
  return result;
}
