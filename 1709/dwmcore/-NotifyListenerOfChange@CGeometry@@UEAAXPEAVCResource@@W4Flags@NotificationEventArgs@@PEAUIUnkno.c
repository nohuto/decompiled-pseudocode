/*
 * XREFs of ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180096BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall CGeometry::NotifyListenerOfChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  double (__fastcall *v4)(__int64, __int64, __int64); // rax
  double result; // xmm0_8

  v4 = *(double (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
  if ( v4 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, 4LL, a4);
  v4(a2, 4LL, a4);
  return result;
}
