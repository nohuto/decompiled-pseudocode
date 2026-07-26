/*
 * XREFs of NdisQueryNetBufferPhysicalCount @ 0x1C0027DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisQueryNetBufferPhysicalCount(PNET_BUFFER NetBuffer)
{
  unsigned int DataLength; // r10d
  ULONG v2; // r11d
  _MDL *MdlChain; // r8
  unsigned int i; // r9d
  ULONG ByteCount; // eax
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx

  DataLength = NetBuffer->DataLength;
  v2 = 0;
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
  while ( MdlChain && DataLength )
  {
    v7 = MdlChain->ByteCount;
    v8 = v7;
    if ( i )
    {
      if ( v7 > i + DataLength )
        v8 = i + DataLength;
      DataLength += i - v8;
      i = 0;
    }
    else
    {
      if ( v7 > DataLength )
        v8 = DataLength;
      DataLength -= v8;
    }
    if ( v7 )
      v6 = (((LODWORD(MdlChain->StartVa) + MdlChain->ByteOffset) & 0xFFF) + (unsigned __int64)v8 + 4095) >> 12;
    else
      LODWORD(v6) = 1;
    MdlChain = MdlChain->Next;
    v2 += v6;
  }
  return v2;
}
