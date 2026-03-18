/*
 * XREFs of ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180047740
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180047FFC (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 304) )
  {
    CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)(a1 - 16));
    return 1LL;
  }
  return result;
}
