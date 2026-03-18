/*
 * XREFs of ?HasContent@CSpriteVisual@@UEAA_NXZ @ 0x18008C6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 30) || *((_QWORD *)this + 62) )
    return 1LL;
  return result;
}
