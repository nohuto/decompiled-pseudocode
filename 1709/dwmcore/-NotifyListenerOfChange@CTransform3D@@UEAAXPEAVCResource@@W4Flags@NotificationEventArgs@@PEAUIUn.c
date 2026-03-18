/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180096750
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall CTransform3D::NotifyListenerOfChange(__int64 a1, __int64 a2)
{
  double (__fastcall *v2)(__int64, __int64, __int64); // rax
  double result; // xmm0_8

  v2 = *(double (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
  if ( v2 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, 2LL, a1);
  v2(a2, 2LL, a1);
  return result;
}
