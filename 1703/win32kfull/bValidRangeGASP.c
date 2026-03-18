/*
 * XREFs of bValidRangeGASP @ 0x1C0228620
 * Callers:
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C0231A8C (vSetClearTypeState__FONTCONTEXT.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C0231C30 (vSetGrayState__FONTCONTEXT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bValidRangeGASP(__int64 a1, unsigned int a2, unsigned __int16 *a3)
{
  unsigned __int16 v4; // ax

  if ( a2 < 4 )
    return 0LL;
  v4 = __ROR2__(*(_WORD *)(a1 + 2), 8);
  *a3 = v4;
  return 4 * (unsigned __int64)v4 + 4 <= a2;
}
