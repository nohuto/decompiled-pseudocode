/*
 * XREFs of NdisAdvanceNetBufferDataStart @ 0x1C0006F80
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C0010990 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAdvanceNetBufferListDataStart @ 0x1C004CEC0 (NdisAdvanceNetBufferListDataStart.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C004DA60 (NdisRetreatNetBufferListDataStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisAdvanceNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  struct _NET_BUFFER *MdlChain; // r9
  unsigned int CurrentMdlOffset; // eax
  _MDL *CurrentMdl; // rcx
  unsigned int i; // eax
  ULONG ByteCount; // edx
  _MDL *v11; // rax
  unsigned int DataOffset; // edx

  NetBuffer->DataOffset += DataOffsetDelta;
  NetBuffer->DataLength -= DataOffsetDelta;
  MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
  if ( !FreeMdlHandler )
    FreeMdlHandler = ndisFreeMdl;
  if ( FreeMdl )
  {
    CurrentMdl = NetBuffer->MdlChain;
    if ( MdlChain )
    {
      v11 = (_MDL *)MdlChain;
      do
      {
        DataOffset = NetBuffer->DataOffset;
        CurrentMdl = v11;
        if ( MdlChain->DataOffset > DataOffset )
          break;
        if ( MdlChain == &NetBuffer[1] )
          break;
        NetBuffer->MdlChain = (_MDL *)MdlChain->Link.Alignment;
        NetBuffer->DataOffset = DataOffset - MdlChain->DataOffset;
        ((void (__fastcall *)(struct _NET_BUFFER *))FreeMdlHandler)(MdlChain);
        MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
        v11 = (_MDL *)MdlChain;
        CurrentMdl = (_MDL *)MdlChain;
      }
      while ( MdlChain );
    }
    i = NetBuffer->DataOffset;
  }
  else
  {
    CurrentMdlOffset = NetBuffer->CurrentMdlOffset;
    CurrentMdl = NetBuffer->CurrentMdl;
    for ( i = DataOffsetDelta + CurrentMdlOffset; CurrentMdl; i -= ByteCount )
    {
      ByteCount = CurrentMdl->ByteCount;
      if ( ByteCount > i )
        break;
      CurrentMdl = CurrentMdl->Next;
    }
  }
  NetBuffer->Link.Region = (unsigned __int64)CurrentMdl;
  NetBuffer->CurrentMdlOffset = i;
}
