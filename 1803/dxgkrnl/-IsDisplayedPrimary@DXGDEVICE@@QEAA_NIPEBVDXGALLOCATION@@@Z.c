/*
 * XREFs of ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C002C154
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0155CC8 (-IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayedPrimary(struct _KTHREAD **this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  const struct DXGALLOCATION *v6; // rbx
  bool result; // al
  struct _KTHREAD *v8; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, this + 29);
  v6 = this[v3 + 107];
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  result = 1;
  if ( v6 != a3 )
  {
    v8 = this[211];
    if ( v8 != *((struct _KTHREAD **)this[2] + 2)
      || !ADAPTER_DISPLAY::IsAllocationDisplayed(*((ADAPTER_DISPLAY **)v8 + 307), a3) )
    {
      return 0;
    }
  }
  return result;
}
