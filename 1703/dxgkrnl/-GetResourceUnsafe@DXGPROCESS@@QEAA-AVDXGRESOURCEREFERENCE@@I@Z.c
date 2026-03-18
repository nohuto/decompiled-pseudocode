/*
 * XREFs of ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00138F0
 * Callers:
 *     ?VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0030FD0 (-VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_.c)
 *     DxgkShareObjects @ 0x1C009D2D0 (DxgkShareObjects.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 * Callees:
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceUnsafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r10
  int v6; // ecx
  struct DXGRESOURCE *v7; // rdx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( v4 < *(_DWORD *)(a1 + 208)
    && (v5 = *(_QWORD *)(a1 + 192),
        v6 = *(_DWORD *)(v5 + 16LL * v4 + 8),
        ((a3 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0xF) == 4 )
  {
    v7 = *(struct DXGRESOURCE **)(v5 + 16LL * v4);
  }
  else
  {
    v7 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v7);
  return a2;
}
