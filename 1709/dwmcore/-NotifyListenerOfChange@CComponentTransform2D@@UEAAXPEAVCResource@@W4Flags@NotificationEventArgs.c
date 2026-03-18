/*
 * XREFs of ?NotifyListenerOfChange@CComponentTransform2D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180095630
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall CComponentTransform2D::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3)
{
  double (__fastcall *v3)(__int64, _QWORD, __int64); // rax
  double result; // xmm0_8

  v3 = *(double (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL);
  if ( v3 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, a3, a1);
  v3(a2, a3, a1);
  return result;
}
