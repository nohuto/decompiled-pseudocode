/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x1C004DA60
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C004D0B0 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisRetreatNetBufferDataStart @ 0x1C0006C60 (NdisRetreatNetBufferDataStart.c)
 *     NdisAdvanceNetBufferDataStart @ 0x1C0006F80 (NdisAdvanceNetBufferDataStart.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  int v5; // esi
  struct _NET_BUFFER *FirstNetBuffer; // rbx
  PMDL (__stdcall *v10)(PULONG); // r15
  void (__stdcall *v11)(PMDL); // rbp
  struct _NET_BUFFER *i; // rdi

  v5 = 0;
  if ( (FreeMdlHandler == 0LL) == (AllocateMdlHandler == 0LL) )
  {
    FirstNetBuffer = NetBufferList->FirstNetBuffer;
    v10 = (PMDL (__stdcall *)(PULONG))ndisAllocateMdl;
    v11 = (void (__stdcall *)(PMDL))ndisFreeMdl;
    if ( AllocateMdlHandler )
    {
      v10 = AllocateMdlHandler;
      v11 = FreeMdlHandler;
    }
    while ( FirstNetBuffer )
    {
      v5 = NdisRetreatNetBufferDataStart(FirstNetBuffer, DataOffsetDelta, DataBackFill, v10);
      if ( v5 < 0 )
      {
        for ( i = NetBufferList->FirstNetBuffer; i != FirstNetBuffer; i = (struct _NET_BUFFER *)i->Link.Alignment )
          NdisAdvanceNetBufferDataStart(i, DataOffsetDelta, 1u, v11);
        return v5;
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C009961C >= 4u )
      WPP_SF_(0x16u, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids);
    return -1073741811;
  }
  return v5;
}
