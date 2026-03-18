/*
 * XREFs of ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D140
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0179140 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::AddVirtualGpu(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v4; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 8, 0);
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v6);
    v7 = 2;
  }
  ++*((_DWORD *)this + 1);
  if ( !a2->Flink )
  {
    v4 = (struct _LIST_ENTRY *)this[6];
    if ( (struct _KTHREAD **)v4->Flink != this + 5 )
      __fastfail(3u);
    a2->Flink = (struct _LIST_ENTRY *)(this + 5);
    a2->Blink = v4;
    v4->Flink = a2;
    this[6] = (struct _KTHREAD *)a2;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
