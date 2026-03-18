/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BF7F8
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x180057DF4 (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x180129D00 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$ArrayRef@M@@V?$ArrayRef@URampPair@CoordMap@@@@AEAV?$DynArray@M$0A@@@M@Z @ 0x18015F76C (-ComputeTexPositionsWorker@CoordMap@@KAXV-$ArrayRef@M@@V-$ArrayRef@URampPair@CoordMap@@@@AEAV-$D.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016F480 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1801B2C60 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 *     ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x1801B2E0C (-SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall DynArray<float,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + a3;
  if ( (unsigned int)v3 + a3 < (unsigned int)v3 )
    v6 = v10;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 4u, a3, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 4 * v3), a2, 4LL * a3);
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
