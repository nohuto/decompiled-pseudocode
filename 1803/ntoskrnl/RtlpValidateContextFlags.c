/*
 * XREFs of RtlpValidateContextFlags @ 0x140131930
 * Callers:
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140131818 (RtlInitializeExtendedContext.c)
 *     RtlpCopyExtendedContext @ 0x140131EE0 (RtlpCopyExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x140563B0C (RtlpWriteExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140563F80 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpSanitizeContextFlags @ 0x1405B8358 (RtlpSanitizeContextFlags.c)
 *     RtlpReadExtendedContext @ 0x1405B8618 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x14078AE74 (RtlCopyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r8d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
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
