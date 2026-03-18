/*
 * XREFs of ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B4440
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800B49F0 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::OnChanged(__int64 a1)
{
  char v1; // di
  unsigned int v2; // ebx
  bool v3; // zf

  v1 = *(_BYTE *)(a1 + 360);
  v2 = 0;
  v3 = v1 == 0;
  if ( !v1 )
  {
    CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)(a1 - 16));
    v3 = 1;
  }
  LOBYTE(v2) = v3;
  return v2;
}
