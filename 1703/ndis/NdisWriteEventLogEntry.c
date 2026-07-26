/*
 * XREFs of NdisWriteEventLogEntry @ 0x1C005C210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
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
  PVOID v12; // r10
  __int16 **v13; // r15
  _WORD **v14; // rdx
  __int64 v15; // r8
  _WORD *v16; // rax
  int v17; // ecx
  ULONG v18; // esi
  unsigned int v19; // eax
  UCHAR v20; // al
  unsigned __int16 *ErrorLogEntry; // rax
  unsigned __int16 *v22; // rdi
  _WORD *v23; // rcx
  __int64 v24; // r8
  __int16 *v25; // rdx
  __int16 v26; // ax

  v7 = 0;
  v9 = 0;
  v12 = LogHandle;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    WPP_SF_qdD(0x2Eu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)LogHandle, EventCode, UniqueEventValue);
    v12 = LogHandle;
  }
  v13 = (__int16 **)StringsList;
  if ( NumStrings )
  {
    v14 = (_WORD **)StringsList;
    v15 = NumStrings;
    do
    {
      v16 = *v14;
      v17 = 2;
      while ( *v16 )
      {
        ++v16;
        v17 += 2;
      }
      v9 += v17;
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  v18 = DataSize;
  if ( (DataSize & 3) != 0 )
    v18 = DataSize - (DataSize & 3) + 4;
  v19 = v18 + v9;
  if ( v18 + v9 <= 0xC4 )
  {
    if ( v19 <= 4 )
      v20 = v19 + 48;
    else
      v20 = v19 + 44;
    ErrorLogEntry = (unsigned __int16 *)IoAllocateErrorLogEntry(v12, v20);
    v22 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 4) = UniqueEventValue;
      *((_DWORD *)ErrorLogEntry + 3) = EventCode;
      ErrorLogEntry[2] = NumStrings;
      ErrorLogEntry[1] = v18;
      ErrorLogEntry[3] = v18 + 44;
      if ( DataSize )
        memmove(ErrorLogEntry + 20, Data, DataSize);
      v23 = (unsigned __int16 *)((char *)v22 + v22[3]);
      if ( NumStrings )
      {
        v24 = NumStrings;
        do
        {
          v25 = *v13;
          do
          {
            v26 = *v25++;
            *v23++ = v26;
          }
          while ( v26 );
          ++v13;
          --v24;
        }
        while ( v24 );
      }
      IoWriteErrorLogEntry(v22);
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
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_(0x2Fu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids);
  return v7;
}
