/*
 * XREFs of IntToULongLong @ 0x1C01F89A4
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C01FFD10 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall IntToULongLong(INT iOperand, ULONGLONG *pullResult)
{
  HRESULT v2; // r8d

  v2 = 0;
  if ( iOperand < 0 )
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  else
  {
    *pullResult = iOperand;
  }
  return v2;
}
