/*
 * XREFs of ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029930
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::NotifyListenerOfChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return CResource::NotifyOnChanged(a2, 4LL, a4);
}
