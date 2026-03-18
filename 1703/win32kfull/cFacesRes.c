/*
 * XREFs of cFacesRes @ 0x1C0235A98
 * Callers:
 *     bBMFDIFIMETRICS @ 0x1C0233E2C (bBMFDIFIMETRICS.c)
 * Callees:
 *     fsSelectionFlags @ 0x1C02348A8 (fsSelectionFlags.c)
 */

__int64 __fastcall cFacesRes(_BYTE **a1)
{
  __int16 v1; // r10
  __int64 result; // rax

  v1 = fsSelectionFlags(*a1) & 0x21;
  if ( !v1 )
    return 4LL;
  if ( v1 == 32 || v1 == 1 )
    return 2LL;
  result = 4LL;
  if ( v1 == 33 )
    return 1LL;
  return result;
}
