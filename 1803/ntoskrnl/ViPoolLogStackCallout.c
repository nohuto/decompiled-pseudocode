/*
 * XREFs of ViPoolLogStackCallout @ 0x140812740
 * Callers:
 *     IovpLogStackTrace @ 0x140812778 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x140824B48 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
