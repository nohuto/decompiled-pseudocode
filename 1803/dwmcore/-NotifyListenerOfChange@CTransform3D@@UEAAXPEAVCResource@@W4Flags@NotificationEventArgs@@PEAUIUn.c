/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029910
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransform3D::NotifyListenerOfChange(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
  if ( v2 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, 2LL, a1);
  if ( v2 == CRenderData::NotifyOnChanged )
    return CRenderData::NotifyOnChanged(a2, 2LL, a1);
  return v2(a2, 2LL, a1);
}
