/*
 * XREFs of ?NotifyListenerOfChange@CGradientBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180071940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::NotifyListenerOfChange(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx

  if ( a3 == 10 && a4 )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 64))(a2, 0LL, 0LL);
    *(_QWORD *)(a1 + 72) = 0LL;
    v7 = *a2;
    v8 = 0LL;
    v9 = 5LL;
  }
  else
  {
    v7 = *a2;
    v8 = a4;
    v9 = a3;
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v7 + 64))(a2, v9, v8);
}
