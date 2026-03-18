/*
 * XREFs of ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0187488
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  struct COREDEVICEACCESS *v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, this + 20, a3, a4);
  v6 = (__int64)this[6];
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 56);
      v8 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = 0LL;
      *(_QWORD *)(v6 + 64) = 0LL;
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, 0LL, v6, v5);
      *(_QWORD *)(v6 + 56) = v7;
      *(_QWORD *)(v6 + 64) = v8;
      v6 = v8;
    }
    while ( v8 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
