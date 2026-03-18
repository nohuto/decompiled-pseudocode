/*
 * XREFs of GreMarkUndeletableBrush @ 0x1C009BBC0
 * Callers:
 *     <none>
 * Callees:
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(struct HOBJ__ *a1)
{
  __int64 result; // rax

  if ( a1 )
    return HmgMarkUndeletable(a1, 16);
  return result;
}
