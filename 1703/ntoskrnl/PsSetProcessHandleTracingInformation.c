/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x1406DFE10
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x14077BE9C (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExDisableHandleTracing @ 0x14025A2AC (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x1407170BC (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = ExEnableHandleTracing(v4, *(unsigned int *)(a2 + 4));
    else
      ExDisableHandleTracing(v4);
    ExReleaseRundownProtection(a1 + 95);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
