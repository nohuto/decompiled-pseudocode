/*
 * XREFs of RtlpCreateExecutionRequiredRequest @ 0x18010281C
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     NtPowerInformation @ 0x1800A0C90 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpCreateExecutionRequiredRequest(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  __int64 ProcessInformation[7]; // [rsp+78h] [rbp+17h] BYREF
  char v7; // [rsp+B0h] [rbp+4Fh]
  HANDLE Handle; // [rsp+D8h] [rbp+77h]

  ProcessInformation[0] = 64LL;
  result = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v4 = NtPowerInformation();
      if ( v4 >= 0 )
      {
        v4 = NtPowerInformation();
        if ( v4 >= 0 )
          *a2 = Handle;
        else
          NtClose(Handle);
      }
      return v4;
    }
    else
    {
      *a2 = 0LL;
      return 0;
    }
  }
  return result;
}
