/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18007AC60
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18007AC98 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _lambda_5f99a1c03ccf24f71b9832bdc2798968_::operator() @ 0x18022AADC (_lambda_5f99a1c03ccf24f71b9832bdc2798968_--operator().c)
 * Callees:
 *     _lambda_a2d23d8c5d19d0314ff899b025f002ba_::operator() @ 0x18007DD20 (_lambda_a2d23d8c5d19d0314ff899b025f002ba_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[1] = this;
  v3[0] = &v5;
  v4 = 0;
  v3[2] = &v4;
  lambda_a2d23d8c5d19d0314ff899b025f002ba_::operator()(v3);
  return v4;
}
