/*
 * XREFs of ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1C019FC28
 * Callers:
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C01A1D94 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(
        DXGGLOBAL *this,
        __int64 *a2,
        unsigned int a3,
        char a4)
{
  char *v4; // rdi
  __int64 v9; // r8
  __int64 **i; // rbx
  __int64 *v11; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl

  v4 = (char *)this + 1280;
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1280));
  for ( i = (__int64 **)*((_QWORD *)this + 163); i != (__int64 **)((char *)this + 1304) && i; i = (__int64 **)*i )
  {
    if ( i[4] == a2 )
    {
      v11 = i[5];
      if ( v11 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v9) = a4;
        ((void (__fastcall *)(__int64 *, _QWORD, __int64, __int64 *))v11)(a2, a3, v9, i[3]);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
          v14[3] = 275LL;
          v14[4] = 16LL;
          v14[5] = this;
          v14[6] = CurrentIrql;
          v15 = KeGetCurrentIrql();
          v14[7] = v15;
          WdLogEvent5_WdCriticalError(v14);
        }
      }
    }
  }
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
