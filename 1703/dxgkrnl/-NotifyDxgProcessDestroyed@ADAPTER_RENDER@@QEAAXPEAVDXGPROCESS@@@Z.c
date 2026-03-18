/*
 * XREFs of ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C002A73C
 * Callers:
 *     ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A1870 (-DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C002A06C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDxgProcessDestroyed(struct DXGADAPTER **this, struct DXGPROCESS *a2)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v5[48]; // [rsp+48h] [rbp-30h] BYREF

  if ( a2 == this[144] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v3, this[2], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v3) >= 0 )
      ADAPTER_RENDER::DestroyVirtualGpuState((ADAPTER_RENDER *)this);
    this[144] = 0LL;
    COREACCESS::~COREACCESS((COREACCESS *)v5);
    COREACCESS::~COREACCESS((COREACCESS *)v4);
  }
}
