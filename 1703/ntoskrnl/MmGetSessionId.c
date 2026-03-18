/*
 * XREFs of MmGetSessionId @ 0x14008BB90
 * Callers:
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PsGetThreadSessionId @ 0x1404F9C70 (PsGetThreadSessionId.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PspBindProcessSessionToJob @ 0x14054C2D8 (PspBindProcessSessionToJob.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x1406D45C8 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || a1 == PsInitialSystemProcess )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
