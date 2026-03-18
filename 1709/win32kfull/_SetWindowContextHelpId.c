/*
 * XREFs of _SetWindowContextHelpId @ 0x1C01408C0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall SetWindowContextHelpId(__int64 a1, int a2)
{
  unsigned int v3; // r11d

  if ( a2 )
    return InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1360LL), a2, 5);
  InternalRemoveProp(a1, *(unsigned __int16 *)(gpsi + 1360LL), 1LL);
  return v3;
}
