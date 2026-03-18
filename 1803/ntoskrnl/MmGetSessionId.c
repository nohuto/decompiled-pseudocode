/*
 * XREFs of MmGetSessionId @ 0x14003F520
 * Callers:
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1404B7B50 (PsGetThreadSessionId.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x14051D0D8 (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     PspBindProcessSessionToJob @ 0x140531448 (PspBindProcessSessionToJob.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x140749FEC (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x14076D90C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1407BABAC (ExGetSessionBigPoolInformation.c)
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
