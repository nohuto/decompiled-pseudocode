/*
 * XREFs of ?OnChanged@CAtlasedRectsGroup@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AEFB0
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?DeleteAllD2DCommandLists@CAtlasedRectsGroup@@IEAAXXZ @ 0x1800AEF38 (-DeleteAllD2DCommandLists@CAtlasedRectsGroup@@IEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::OnChanged(CAtlasedRectsGroup *a1)
{
  *((_BYTE *)a1 + 152) = 1;
  CAtlasedRectsGroup::DeleteAllD2DCommandLists(a1);
  return 1LL;
}
