/*
 * XREFs of sub_140549E38 @ 0x140549E38
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140440FC4 (WbAddWarbirdEncryptionSegment.c)
 *     sub_140549C58 @ 0x140549C58 (sub_140549C58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140549E38(volatile signed __int64 *a1)
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
