/*
 * XREFs of ?NotifyListenerOfChange@CComponentTransform2D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AC4F0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3)
{
  return CResource::NotifyOnChanged(a2, a3, a1);
}
