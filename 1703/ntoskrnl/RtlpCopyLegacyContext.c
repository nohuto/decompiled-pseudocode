/*
 * XREFs of RtlpCopyLegacyContext @ 0x140008C60
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140008B98 (RtlpCopyExtendedContext.c)
 *     KeCopyContextFromUmsContext @ 0x1406AE52C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1406AE94C (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1406AEBC4 (KeUpdatePrimaryThreadContext.c)
 *     RtlCopyContext @ 0x1406EED8C (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x140008C90 (RtlpCopyLegacyContextAmd64.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86();
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64();
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm();
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64();
  return result;
}
