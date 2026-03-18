/*
 * XREFs of ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180047990
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyOnChangeCompleted(CCompositionSurfaceBitmap *this)
{
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
}
