/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BCE4C
 * Callers:
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x18000427C (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@3@AEAV?$DynArray@M$0A@@@M@Z @ 0x180005704 (-ComputeTexPositionsWorker@CoordMap@@KAXV-$span@$$CBM$0-0@gsl@@V-$span@$$CBURampPair@CoordMap@@$.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800B1C50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801A5CF0 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801A5E20 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x18020F8E0 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall DynArray<float,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + a3 < v3 ? 0x80070216 : 0;
  if ( v3 + a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 4u, a3, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 4LL * v3), a2, 4LL * a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return v6;
}
