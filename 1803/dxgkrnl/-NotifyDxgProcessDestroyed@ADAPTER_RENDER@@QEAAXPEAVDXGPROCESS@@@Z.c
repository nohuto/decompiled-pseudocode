/*
 * XREFs of ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0173C44
 * Callers:
 *     ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B6620 (-DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0173CCC (-NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDxgProcessDestroyed(struct DXGADAPTER *const *this, struct DXGPROCESS *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rcx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v8[48]; // [rsp+48h] [rbp-30h] BYREF

  if ( (*((_BYTE *)a2 + 323) & 2) != 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v6, this[2], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v6) >= 0 )
    {
      v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 188);
      if ( v4 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v4, a2);
      v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 187);
      if ( v5 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v5, a2);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v8);
    COREACCESS::~COREACCESS((COREACCESS *)v7);
  }
}
