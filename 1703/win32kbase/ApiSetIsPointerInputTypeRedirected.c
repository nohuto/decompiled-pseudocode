/*
 * XREFs of ApiSetIsPointerInputTypeRedirected @ 0x1C013D1C8
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1C0106768 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01112F4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
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
