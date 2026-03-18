/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180025D30
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rax
  __int64 v9; // r8
  void (__fastcall *v11)(__int64, _QWORD, __int64); // rax

  if ( a3 == 6 || a4 && a4 == *(_QWORD *)(a1 + 112) )
  {
    v11 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL);
    if ( (char *)v11 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(a2, 0LL, a4);
    else
      v11(a2, 0LL, a4);
    *(_QWORD *)(a1 + 72) = 0LL;
    v9 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
    v7 = 5LL;
  }
  else
  {
    v7 = 1LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
    if ( a3 == 1 )
    {
      v9 = a1;
    }
    else
    {
      v9 = a4;
      v7 = a3;
    }
  }
  if ( v8 == CResource::NotifyOnChanged )
    return CResource::NotifyOnChanged(a2, v7, v9);
  else
    return v8(a2, v7, v9);
}
