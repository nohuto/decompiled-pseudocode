/*
 * XREFs of NdisRetreatNetBufferDataStart @ 0x1C0005FE0
 * Callers:
 *     NdisRetreatNetBufferListDataStart @ 0x1C0005E30 (NdisRetreatNetBufferListDataStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler)
{
  unsigned int DataOffset; // ecx
  unsigned int v7; // ecx
  _MDL *MdlChain; // rax
  ULONG ByteCount; // edx
  _MDL *v11; // rax
  _MDL *v12; // rcx
  ULONG v13; // eax
  unsigned int v14; // eax
  ULONG v15; // [rsp+38h] [rbp+10h] BYREF

  DataOffset = NetBuffer->DataOffset;
  if ( DataOffset >= DataOffsetDelta )
  {
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = DataOffset - DataOffsetDelta;
    MdlChain = NetBuffer->MdlChain;
    for ( NetBuffer->DataOffset = v7; MdlChain; v7 -= ByteCount )
    {
      ByteCount = MdlChain->ByteCount;
      if ( v7 < ByteCount )
        break;
      MdlChain = MdlChain->Next;
    }
    NetBuffer->Link.Region = (unsigned __int64)MdlChain;
    NetBuffer->CurrentMdlOffset = v7;
    return 0;
  }
  v15 = DataBackFill + DataOffsetDelta - DataOffset;
  if ( !AllocateMdlHandler )
    AllocateMdlHandler = ndisAllocateMdl;
  v11 = (_MDL *)((__int64 (__fastcall *)(ULONG *))AllocateMdlHandler)(&v15);
  v12 = v11;
  if ( v11 )
  {
    v11->Next = NetBuffer->MdlChain;
    v13 = v15 - DataOffsetDelta;
    NetBuffer->MdlChain = v12;
    NetBuffer->DataOffset += v13;
    v14 = NetBuffer->DataOffset;
    NetBuffer->DataLength += DataOffsetDelta;
    NetBuffer->CurrentMdlOffset = v14;
    NetBuffer->Link.Region = (unsigned __int64)v12;
    return 0;
  }
  return -1073741670;
}
