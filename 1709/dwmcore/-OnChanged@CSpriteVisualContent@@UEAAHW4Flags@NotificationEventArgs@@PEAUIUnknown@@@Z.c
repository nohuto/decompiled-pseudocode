/*
 * XREFs of ?OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisualContent::OnChanged(__int64 a1, int a2)
{
  if ( a2 == 5 )
    *(_QWORD *)(a1 + 72) = 0LL;
  return 1LL;
}
