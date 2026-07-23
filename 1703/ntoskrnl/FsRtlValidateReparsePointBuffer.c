/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x140081700
 * Callers:
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // ecx
  int ReparseDataLength; // r10d
  USHORT v6; // r8
  USHORT v7; // ax
  unsigned int v8; // eax
  bool v9; // zf
  USHORT SubstituteNameOffset; // bx
  USHORT SubstituteNameLength; // r9
  USHORT PrintNameOffset; // di
  USHORT PrintNameLength; // dx
  unsigned int v14; // ecx
  unsigned int v15; // eax

  if ( BufferLength < 8 || BufferLength > 0x4000 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseBuffer->ReparseTag & 0xFFF0000) == 0
    && (unsigned int)ReparseTag > 2
    && (ReparseTag & 0x30000000) != 0x30000000
    && ReparseTag != -1610612711 )
  {
    ReparseDataLength = ReparseBuffer->ReparseDataLength;
    if ( ReparseDataLength + 8 == BufferLength )
    {
      if ( ReparseTag >= 0 )
        return -1073741192;
    }
    else if ( ReparseDataLength + 24 != BufferLength )
    {
      return -1073741192;
    }
    if ( ReparseBuffer->ReparseDataLength + 24 == BufferLength
      && (ReparseTag >= 0
       && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
       && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
       && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
       && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
       || ReparseTag == -1610612733
       || ReparseTag == -1610612724) )
    {
      return -1073741192;
    }
    if ( ReparseTag != -1610612733 )
    {
      if ( ReparseTag == -1610612724 )
      {
        if ( (unsigned __int16)ReparseDataLength < 0xCu )
          return -1073741192;
        SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
        SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
        if ( (unsigned __int16)(SubstituteNameOffset + SubstituteNameLength) < SubstituteNameOffset )
          return -1073741675;
        PrintNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset;
        PrintNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
        if ( (unsigned __int16)(PrintNameOffset + PrintNameLength) < PrintNameOffset
          || (unsigned int)(unsigned __int16)(PrintNameOffset + PrintNameLength) + 20 < 0x14 )
        {
          return -1073741675;
        }
        v14 = (unsigned __int16)(SubstituteNameOffset + SubstituteNameLength) + 20;
        if ( v14 >= 0x14 )
        {
          v15 = (unsigned __int16)ReparseDataLength + 8;
          if ( v15 < v14
            || v15 < (unsigned int)(unsigned __int16)(PrintNameOffset + PrintNameLength) + 20
            || !SubstituteNameLength
            || !PrintNameLength
            || (SubstituteNameLength & 1) != 0
            || (PrintNameLength & 1) != 0
            || (SubstituteNameOffset & 1) != 0 )
          {
            return -1073741192;
          }
          v9 = (PrintNameOffset & 1) == 0;
          goto LABEL_35;
        }
      }
      return 0;
    }
    if ( (unsigned __int16)ReparseDataLength >= 8u )
    {
      v6 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
      v7 = v6 + ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
      if ( v7 >= v6 )
      {
        v8 = v7 + 12;
        if ( v8 >= 0xC && (unsigned __int16)(v6 + 2) >= v6 )
        {
          if ( ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset
            || ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset != v6 + 2 )
          {
            return -1073741192;
          }
          v9 = (unsigned __int16)ReparseDataLength == v8;
LABEL_35:
          if ( !v9 )
            return -1073741192;
          return 0;
        }
      }
      return -1073741675;
    }
    return -1073741192;
  }
  return -1073741194;
}
