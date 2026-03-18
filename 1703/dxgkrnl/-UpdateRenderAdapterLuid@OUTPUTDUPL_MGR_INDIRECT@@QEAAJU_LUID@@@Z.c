/*
 * XREFs of ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C01AF3A0
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0170E50 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00DDEC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01AE804 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(
        OUTPUTDUPL_MGR_INDIRECT *this,
        struct _LUID a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, *((struct _KTHREAD ***)this + 6), a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v11);
  *((_DWORD *)this + 18) = 0;
  v12 = 2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  OUTPUTDUPL_MGR::ProcessAdapterReset((OUTPUTDUPL_CONTEXT **)this + 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((OUTPUTDUPL_MGR_INDIRECT *)((char *)this + 24), 0LL, 1LL, v6);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, *((struct _KTHREAD ***)this + 6), v7, v8);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v12 = 2;
  *((struct _LUID *)this + 14) = a2;
  *((_DWORD *)this + 18) = 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return 0LL;
}
