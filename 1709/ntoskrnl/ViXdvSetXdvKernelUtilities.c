/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x140276C18
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1407A926C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(void (__fastcall *a1)(__int64 (__fastcall **)(PCONTEXT ContextRecord)))
{
  char result; // al

  result = (char)a1;
  if ( a1 )
  {
    a1(&KernelUtils);
    return 1;
  }
  return result;
}
