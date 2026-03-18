/*
 * XREFs of ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180037CD0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyOnChangeCompleted(CCompositionSurfaceBitmap *this)
{
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
}
