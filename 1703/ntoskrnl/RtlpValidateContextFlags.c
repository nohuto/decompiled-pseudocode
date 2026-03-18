/*
 * XREFs of RtlpValidateContextFlags @ 0x1400FCB40
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140008B98 (RtlpCopyExtendedContext.c)
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     RtlpWriteExtendedContext @ 0x140425A98 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140426438 (RtlpSanitizeContextFlags.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140426498 (RtlpWow64SanitizeContextFlags.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406EED8C (RtlCopyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r9d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (((a1 & 0x7FFFFF0) - 0x200000) & 0xFFDFFFFF) != 0 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
