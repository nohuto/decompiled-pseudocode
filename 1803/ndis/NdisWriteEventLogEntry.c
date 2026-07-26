/*
 * XREFs of NdisWriteEventLogEntry @ 0x1C005C5A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

NDIS_STATUS __stdcall NdisWriteEventLogEntry(
        PVOID LogHandle,
        NDIS_STATUS EventCode,
        ULONG UniqueEventValue,
        USHORT NumStrings,
        PVOID StringsList,
        ULONG DataSize,
        PVOID Data)
{
  NDIS_STATUS v7; // ebx
  int v9; // edi
  __int16 **v12; // r15
  _WORD **v13; // rdx
  __int64 v14; // r8
  _WORD *v15; // rax
  int v16; // ecx
  ULONG v17; // esi
  unsigned int v18; // eax
  UCHAR v19; // al
  _WORD *ErrorLogEntry; // rax
  _WORD *v21; // rdi
  unsigned __int16 v22; // ax
  _WORD *v23; // rcx
  __int64 v24; // r8
  __int16 *v25; // rdx
  __int16 v26; // ax

  v7 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qdD(0x2Eu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)LogHandle, EventCode, UniqueEventValue);
  v12 = (__int16 **)StringsList;
  if ( NumStrings )
  {
    v13 = (_WORD **)StringsList;
    v14 = NumStrings;
    do
    {
      v15 = *v13;
      v16 = 2;
      while ( *v15 )
      {
        ++v15;
        v16 += 2;
      }
      v9 += v16;
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  v17 = DataSize;
  if ( (DataSize & 3) != 0 )
    v17 = DataSize - (DataSize & 3) + 4;
  v18 = v17 + v9;
  if ( v17 + v9 <= 0xC4 )
  {
    if ( v18 <= 4 )
      v19 = v18 + 48;
    else
      v19 = v18 + 44;
    ErrorLogEntry = IoAllocateErrorLogEntry(LogHandle, v19);
    v21 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 4) = UniqueEventValue;
      *((_DWORD *)ErrorLogEntry + 3) = EventCode;
      v22 = v17 + 44;
      v21[2] = NumStrings;
      v21[3] = v17 + 44;
      v21[1] = v17;
      if ( DataSize )
      {
        memmove(v21 + 20, Data, DataSize);
        v22 = v21[3];
      }
      v23 = (_WORD *)((char *)v21 + v22);
      if ( NumStrings )
      {
        v24 = NumStrings;
        do
        {
          v25 = *v12;
          do
          {
            v26 = *v25++;
            *v23++ = v26;
          }
          while ( v26 );
          ++v12;
          --v24;
        }
        while ( v24 );
      }
      IoWriteErrorLogEntry(v21);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073676266;
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x2Fu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids);
  return v7;
}
