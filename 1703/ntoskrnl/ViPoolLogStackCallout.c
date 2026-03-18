/*
 * XREFs of ViPoolLogStackCallout @ 0x140775AB0
 * Callers:
 *     IovpLogStackTrace @ 0x140763A4C (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
