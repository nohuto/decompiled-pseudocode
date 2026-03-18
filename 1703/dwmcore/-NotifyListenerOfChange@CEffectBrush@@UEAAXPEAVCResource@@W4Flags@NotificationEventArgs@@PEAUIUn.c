/*
 * XREFs of ?NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180010DC0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rcx

  if ( a3 == 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 72LL) + 48LL);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) > 1 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      CResource::NotifyOnChanged(a2, 5LL, 0LL);
    }
  }
  return CResource::NotifyOnChanged(a2, a3, a1);
}
