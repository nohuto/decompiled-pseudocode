/*
 * XREFs of RtlpCopyLegacyContext @ 0x1400DAC50
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400DAB88 (RtlpCopyExtendedContext.c)
 *     KeCopyContextFromUmsContext @ 0x1406D997C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1406D9D9C (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1406DA014 (KeUpdatePrimaryThreadContext.c)
 *     RtlCopyContext @ 0x140727268 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x1400DAC80 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x1400DD774 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x140256F70 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1402570D0 (RtlpCopyLegacyContextArm64.c)
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
