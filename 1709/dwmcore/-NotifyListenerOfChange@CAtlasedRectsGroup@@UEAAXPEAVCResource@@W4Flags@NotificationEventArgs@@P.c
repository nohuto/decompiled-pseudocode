/*
 * XREFs of ?NotifyListenerOfChange@CAtlasedRectsGroup@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001E4F0
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void (__fastcall *v5)(__int64, _QWORD, __int64); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax

  v5 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL);
  if ( (char *)v5 == (char *)CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(a2, a3, a4);
  else
    v5(a2, a3, a4);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL);
  if ( (char *)v6 == (char *)CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, 5LL, 0LL);
  else
    return v6(a2, 5LL);
}
