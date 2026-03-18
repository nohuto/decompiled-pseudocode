/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x1404ED594
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     EtwpBuildProcessEvent @ 0x1404ED1D0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407111B0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     PsGetProcessSectionBaseAddress @ 0x140085300 (PsGetProcessSectionBaseAddress.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 */

__int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (__int64)RtlImageNtHeader((PVOID)result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
