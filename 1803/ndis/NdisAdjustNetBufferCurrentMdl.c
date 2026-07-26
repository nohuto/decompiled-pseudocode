/*
 * XREFs of NdisAdjustNetBufferCurrentMdl @ 0x1C0006FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAdjustNetBufferCurrentMdl(PNET_BUFFER NetBuffer)
{
  _MDL *MdlChain; // rdx
  unsigned int i; // r8d
  ULONG ByteCount; // eax

  MdlChain = NetBuffer->MdlChain;
  for ( i = NetBuffer->DataOffset; MdlChain; i -= ByteCount )
  {
    ByteCount = MdlChain->ByteCount;
    if ( i < ByteCount )
      break;
    MdlChain = MdlChain->Next;
  }
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = i;
}
