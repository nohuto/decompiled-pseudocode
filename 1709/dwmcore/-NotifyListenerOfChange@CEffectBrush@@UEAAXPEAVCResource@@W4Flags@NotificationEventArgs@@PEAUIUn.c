/*
 * XREFs of ?NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180082C70
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEffectBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3)
{
  double (__fastcall *v6)(__int64, _QWORD, __int64); // rax
  __int64 v7; // rcx

  if ( a3 == 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 72LL) + 48LL);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) > 1 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 5LL);
    }
  }
  v6 = *(double (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL);
  if ( v6 == CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(a2, a3, a1);
  else
    v6(a2, a3, a1);
}
