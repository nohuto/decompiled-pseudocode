/*
 * XREFs of ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C01B7EE8
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMPOThunkToLegacyPresentThunk(
        struct _D3DKMT_PRESENT *a1,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a3)
{
  ULONG v4; // r10d
  int v5; // eax
  __int64 v6; // r9
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  void *pDriverPrivateData; // rax
  UINT v9; // ecx
  UINT v10; // ecx
  UINT v11; // ecx
  UINT v12; // ecx

  a1->hDevice = *a2->pContextList;
  v4 = a2->ContextCount - 1;
  a1->BroadcastContextCount = v4;
  v5 = 0;
  a1->hSource = *a3->pAllocationList;
  if ( v4 )
  {
    do
    {
      v6 = (unsigned int)(v5 + 1);
      a1->BroadcastContext[v5] = a2->pContextList[v6];
      if ( a3->AllocationCount > (unsigned int)v6 )
        a1->BroadcastSrcAllocation[v5] = a3->pAllocationList[v6];
      ++v5;
    }
    while ( (unsigned int)v6 < a1->BroadcastContextCount );
  }
  a1->VidPnSourceId = a2->VidPnSourceId;
  a1->SrcRect = a3->pPlaneAttributes->SrcRect;
  a1->SubRectCnt = a3->pPlaneAttributes->DirtyRectCount;
  a1->pSrcSubRects = a3->pPlaneAttributes->pDirtyRects;
  a1->PresentCount = a2->PresentCount;
  FlipInterval = a3->FlipInterval;
  a1->pPresentRegions = 0LL;
  a1->FlipInterval = FlipInterval;
  a1->Duration = a2->Duration;
  a1->PrivateDriverDataSize = a3->DriverPrivateDataSize;
  pDriverPrivateData = a3->pDriverPrivateData;
  a1->Flags.Value |= 4u;
  a1->pPrivateDriverData = pDriverPrivateData;
  v9 = a1->Flags.Value ^ (a1->Flags.Value ^ (a2->Flags.Value >> 1)) & 8;
  a1->Flags.Value = v9;
  LODWORD(pDriverPrivateData) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(2 * a2->Flags.Value)) & 0x10;
  a1->Flags.Value = (unsigned int)pDriverPrivateData;
  v10 = (unsigned int)pDriverPrivateData & 0xFFFFFFDF | a2->Flags.Value & 0x20 | 0x1000;
  a1->Flags.Value = v10;
  LODWORD(pDriverPrivateData) = v10 ^ (v10 ^ (a2->Flags.Value << 17)) & 0x20000;
  a1->Flags.Value = (unsigned int)pDriverPrivateData;
  v11 = (unsigned int)pDriverPrivateData ^ ((unsigned int)pDriverPrivateData ^ (a2->Flags.Value << 17)) & 0x40000;
  a1->Flags.Value = v11;
  LODWORD(pDriverPrivateData) = v11 ^ (v11 ^ (a2->Flags.Value << 17)) & 0x80000;
  a1->Flags.Value = (unsigned int)pDriverPrivateData;
  v12 = (unsigned int)pDriverPrivateData ^ ((unsigned int)pDriverPrivateData ^ (a2->Flags.Value << 21)) & 0x8000000;
  a1->Flags.Value = v12;
  a1->Flags.Value = v12 ^ (v12 ^ (a2->Flags.Value << 21)) & 0x20000000;
}
