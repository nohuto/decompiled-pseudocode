/*
 * XREFs of ?InsertDxgDevice@DXGK_VIRTUAL_GPU@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0034BA0
 * Callers:
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C00C8640 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXG.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU::InsertDxgDevice(DXGK_VIRTUAL_GPU *this, struct _LIST_ENTRY *a2)
{
  char *v2; // rsi
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Blink; // rax

  v2 = (char *)this + 48;
  DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU *)((char *)this + 48));
  v5 = (struct _LIST_ENTRY *)((char *)this + 144);
  Blink = v5->Blink;
  if ( Blink->Flink != v5 )
    __fastfail(3u);
  a2->Flink = v5;
  a2->Blink = Blink;
  Blink->Flink = a2;
  v5->Blink = a2;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
