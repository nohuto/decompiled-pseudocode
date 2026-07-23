/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x1400B8AB0
 * Callers:
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 * Callees:
 *     RtlUShortAdd @ 0x1400B8CC0 (RtlUShortAdd.c)
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  ULONG ReparseTag; // ecx
  int ReparseDataLength; // r11d
  unsigned int v6; // esi
  int v7; // r10d
  unsigned int v8; // eax
  NTSTATUS result; // eax
  USHORT SubstituteNameLength; // bx
  __int64 v11; // r9
  int v12; // r10d
  int v13; // r11d
  bool v14; // zf
  USHORT SubstituteNameOffset; // di
  __int64 v16; // r9
  USHORT v17; // bx
  char v18; // r9
  __int16 v19; // r11
  unsigned int v20; // r10d
  USHORT pusResult; // [rsp+40h] [rbp+8h] BYREF
  USHORT v22; // [rsp+50h] [rbp+18h] BYREF

  if ( BufferLength < 8 || BufferLength > 0x4000 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseBuffer->ReparseTag & 0xFFF0000) != 0
    || ReparseTag <= 2
    || (ReparseTag & 0x30000000) == 0x30000000
    || ReparseTag == -1610612711 )
  {
    return -1073741194;
  }
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  v6 = ReparseDataLength + 8;
  v7 = ReparseDataLength + 24;
  if ( ReparseDataLength + 8 != BufferLength && v7 != BufferLength )
    return -1073741192;
  v8 = ReparseTag & 0x80000000;
  if ( v6 == BufferLength && !v8 )
    return -1073741192;
  if ( v7 == BufferLength
    && (!v8
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
  if ( ReparseTag == -1610612733 )
  {
    if ( (unsigned __int16)ReparseDataLength < 8u )
      return -1073741192;
    SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
    result = RtlUShortAdd(SubstituteNameLength, ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength, &pusResult);
    if ( !result )
    {
      result = RtlUShortAdd(SubstituteNameLength, 2u, &pusResult);
      if ( !result )
      {
        if ( *(_WORD *)(v11 + 8) || *(_WORD *)(v11 + 12) != pusResult )
          return -1073741192;
        v14 = v13 == v12;
LABEL_21:
        if ( v14 )
          return 0;
        return -1073741192;
      }
    }
  }
  else
  {
    if ( ReparseTag != -1610612724 )
      return 0;
    if ( (unsigned __int16)ReparseDataLength < 0xCu )
      return -1073741192;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    result = RtlUShortAdd(SubstituteNameOffset, ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength, &v22);
    if ( !result )
    {
      v17 = *(_WORD *)(v16 + 14);
      result = RtlUShortAdd(*(_WORD *)(v16 + 12), v17, &pusResult);
      if ( !result )
      {
        v20 = v22 + 20;
        if ( v20 < 0x14 )
          return 0;
        if ( v6 < v20
          || v6 < (unsigned int)pusResult + 20
          || !v19
          || !v17
          || (v19 & 1) != 0
          || (v17 & 1) != 0
          || (SubstituteNameOffset & 1) != 0 )
        {
          return -1073741192;
        }
        v14 = (v18 & 1) == 0;
        goto LABEL_21;
      }
    }
  }
  return result;
}
