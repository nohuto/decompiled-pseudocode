/*
 * XREFs of NdisMRegisterScatterGatherDma @ 0x1C00C32D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00C33C0 (ndisMInitializeScatterGatherDma.c)
 */

NDIS_STATUS __stdcall NdisMRegisterScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_SG_DMA_DESCRIPTION DmaDescription,
        PNDIS_HANDLE NdisMiniportDmaHandle)
{
  unsigned __int8 v6; // al
  int v7; // edi
  __int64 v8; // r8

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x10u, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, MiniportAdapterHandle, DmaDescription);
  *NdisMiniportDmaHandle = 0LL;
  v6 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v6 < 6u )
  {
    v7 = -1073741637;
  }
  else if ( DmaDescription->Header.Revision )
  {
    if ( (v6 > 6u || *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u) && (DmaDescription->Flags & 0xFFFFFFFC) != 0 )
    {
      v7 = -1073741811;
    }
    else
    {
      v7 = ndisMInitializeScatterGatherDma(MiniportAdapterHandle);
      if ( !v7 )
      {
        *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x40u;
        v8 = *((_QWORD *)MiniportAdapterHandle + 63);
        *(_QWORD *)(v8 + 32) = DmaDescription->ProcessSGListHandler;
        *(_QWORD *)(v8 + 40) = DmaDescription->SharedMemAllocateCompleteHandler;
        *(_DWORD *)(v8 + 48) = DmaDescription->Flags;
        *NdisMiniportDmaHandle = (PVOID)v8;
        DmaDescription->ScatterGatherListSize = *(_DWORD *)(v8 + 56);
        *((_DWORD *)MiniportAdapterHandle + 30) |= 0x200u;
      }
    }
  }
  else
  {
    v7 = -1073676284;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (__int64)MiniportAdapterHandle, v7);
  return v7;
}
