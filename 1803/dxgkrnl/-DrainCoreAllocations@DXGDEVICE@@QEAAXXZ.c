/*
 * XREFs of ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C018A468
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C016A8D8 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // r9
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 20);
  v3 = (__int64)this[6];
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 56);
      v5 = *(_QWORD *)(v3 + 64);
      *(_QWORD *)(v3 + 56) = 0LL;
      *(_QWORD *)(v3 + 64) = 0LL;
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, 0LL, v3, v2);
      *(_QWORD *)(v3 + 56) = v4;
      *(_QWORD *)(v3 + 64) = v5;
      v3 = v5;
    }
    while ( v5 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
