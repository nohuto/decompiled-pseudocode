/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800B2C9C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x18009FF4C (-GetAllPositions@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@AEAV-$DynArray@M$0A@@@.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$span@$$CBM@gsl@@V?$span@$$CBURampPair@CoordMap@@@3@AEAV?$DynArray@M$0A@@@M@Z @ 0x1801557F0 (-ComputeTexPositionsWorker@CoordMap@@KAXV-$span@$$CBM@gsl@@V-$span@$$CBURampPair@CoordMap@@@3@AE.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801765D0 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801766E0 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1801CF04C (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 *     ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x1801CF1F4 (-SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall DynArray<float,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  unsigned int v6; // eax
  DWORD v7; // ebx
  signed int v9; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v3 = v10;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + a3;
  if ( (unsigned int)v5 + a3 >= (unsigned int)v5 )
    v3 = v5 + a3;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 4u, a3, a2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 4 * v5), a2, 4LL * a3);
    *(_DWORD *)(a1 + 24) = v3;
  }
  return v7;
}
