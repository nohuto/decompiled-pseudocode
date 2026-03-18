/*
 * XREFs of ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01873E8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C017EC48 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainClientAllocations(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGALLOCATION *v5; // rdx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 20, a3, a4);
  while ( this[6] )
  {
    v5 = this[6];
    this[6] = (struct _KTHREAD *)*((_QWORD *)v5 + 8);
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    DXGDEVICE::DestroyClientAllocations((PERESOURCE *)this, v5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
