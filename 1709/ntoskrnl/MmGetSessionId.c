/*
 * XREFs of MmGetSessionId @ 0x1400A5510
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14048C3A8 (PspInitializeProcessSecurity.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1404D25D0 (PsGetThreadSessionId.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     ExCallSessionCallBack @ 0x1404F0184 (ExCallSessionCallBack.c)
 *     PspBindProcessSessionToJob @ 0x14050CA64 (PspBindProcessSessionToJob.c)
 *     MmGetSessionMappedViewInformation @ 0x1406DF0E8 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x140709D18 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
