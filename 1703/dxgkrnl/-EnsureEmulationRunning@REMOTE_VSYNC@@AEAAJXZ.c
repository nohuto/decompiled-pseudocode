/*
 * XREFs of ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103AC0
 * Callers:
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0103B5C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01A3B24 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103A18 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::EnsureEmulationRunning(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // zf
  int started; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  _BYTE v13[8]; // [rsp+38h] [rbp-20h] BYREF
  DXGPUSHLOCK *v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 4, a3, a4);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 4, v5, v6);
  DXGPUSHLOCK::AcquireShared(v11);
  v7 = *this == 0LL;
  v12 = 1;
  if ( !v7
    || (DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10),
        DXGPUSHLOCK::AcquireExclusive(v14),
        v7 = *this == 0LL,
        v15 = 2,
        !v7)
    || (started = REMOTE_VSYNC::StartEmulation((REMOTE_VSYNC *)this), started >= 0) )
  {
    started = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return (unsigned int)started;
}
