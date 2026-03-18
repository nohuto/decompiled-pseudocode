/*
 * XREFs of ApiSetIsPointerInputTypeRedirected @ 0x1C013C698
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1C0107450 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsPointerInputTypeRedirected(unsigned int a1)
{
  if ( (int)IsIsPointerInputTypeRedirectedSupported() < 0 )
    return 0LL;
  else
    return IsPointerInputTypeRedirected(a1);
}
