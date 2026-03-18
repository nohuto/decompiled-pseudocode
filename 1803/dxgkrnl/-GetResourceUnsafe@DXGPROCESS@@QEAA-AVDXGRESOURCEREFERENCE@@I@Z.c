/*
 * XREFs of ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A630
 * Callers:
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0183FD8 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 * Callees:
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceUnsafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // ecx
  struct DXGRESOURCE *v7; // rdx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 248)
    && (v5 = *(_QWORD *)(a1 + 232),
        v6 = *(_DWORD *)(v5 + 16 * v4 + 8),
        ((a3 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60))
    && (v6 & 0x2000) == 0
    && (v6 & 0x1F) == 4 )
  {
    v7 = *(struct DXGRESOURCE **)(v5 + 16LL * (unsigned int)v4);
  }
  else
  {
    v7 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v7);
  return a2;
}
