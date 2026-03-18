/*
 * XREFs of sub_14048A6A4 @ 0x14048A6A4
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140489EA8 (WbAddWarbirdEncryptionSegment.c)
 *     sub_14048A4C0 @ 0x14048A4C0 (sub_14048A4C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14048A6A4(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
