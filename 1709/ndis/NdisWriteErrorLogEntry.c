/*
 * XREFs of NdisWriteErrorLogEntry @ 0x1C0023DE0
 * Callers:
 *     ndisMIndicatePDConfigChange @ 0x1C0077C5C (ndisMIndicatePDConfigChange.c)
 *     ndisQueryPowerCapabilities @ 0x1C00ACBC0 (ndisQueryPowerCapabilities.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00C33C0 (ndisMInitializeScatterGatherDma.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C010C5E0 (NdisMAllocateMapRegisters.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C005CC30 (McTemplateK0jqxzqqQR5.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  __int64 v5; // rax
  size_t v6; // rbp
  const void *v7; // r15
  size_t v8; // r14
  __int64 v9; // rax
  char *ErrorLogEntry; // rax
  void *v11; // rbx
  ULONG v12; // edx
  ULONG *v13; // r8
  __int64 v14; // rcx
  ULONG v15; // [rsp+A0h] [rbp+18h] BYREF

  v15 = NumberOfErrorValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qD(10LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, NdisAdapterHandle, ErrorCode);
    NumberOfErrorValues = v15;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 485);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = v6;
    v9 = v6 + 48 + 4LL * NumberOfErrorValues;
    if ( v9 <= 0xFFFFFFFFLL )
    {
      if ( (unsigned int)v9 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1917),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 480),
            v8 = v6,
            v9 = v6 + 48 + 4LL * NumberOfErrorValues,
            v9 <= 0xFFFFFFFFLL)
        && (unsigned int)v9 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 481), v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = ErrorCode;
          *(_WORD *)ErrorLogEntry = 0;
          v12 = 0;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          *((_WORD *)ErrorLogEntry + 1) = 4 * v15;
          if ( v15 )
          {
            v13 = &v15;
            do
            {
              v14 = v12;
              v13 += 2;
              ++v12;
              *(_DWORD *)&ErrorLogEntry[4 * v14 + 40] = *v13;
            }
            while ( v12 < v15 );
          }
          if ( (_DWORD)v6 )
          {
            *((_WORD *)ErrorLogEntry + 2) = 1;
            *((_WORD *)ErrorLogEntry + 3) = 4 * (v15 + 12);
            memmove(&ErrorLogEntry[4 * v15 + 48], v7, v8);
          }
          else
          {
            *((_WORD *)ErrorLogEntry + 2) = 0;
          }
          if ( (dword_1C0099FC4 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5(
              *((_QWORD *)NdisAdapterHandle + 485),
              v12,
              (_DWORD)NdisAdapterHandle + 4032,
              (_DWORD)NdisAdapterHandle + 4032,
              *((_DWORD *)NdisAdapterHandle + 1020),
              *((_QWORD *)NdisAdapterHandle + 506),
              *(_QWORD *)(*((_QWORD *)NdisAdapterHandle + 485) + 8LL),
              ErrorCode,
              v15,
              (__int64)v11 + 40);
          IoWriteErrorLogEntry(v11);
        }
      }
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(11LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, NdisAdapterHandle, ErrorCode);
}
