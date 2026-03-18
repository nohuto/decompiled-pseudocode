/*
 * XREFs of sub_14044A98C @ 0x14044A98C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     sub_14044A7A8 @ 0x14044A7A8 (sub_14044A7A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14044A98C(volatile signed __int64 *a1)
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
