/*
 * XREFs of _SetTouchWindowFlags @ 0x1C0120770
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C01206E0 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  unsigned int v3; // r11d

  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5);
  InternalRemoveProp(a1, (unsigned __int16)gatomTouchFlags, 1LL);
  return v3;
}
