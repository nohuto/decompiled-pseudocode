/*
 * XREFs of RtlpCopyLegacyContext @ 0x1800725D0
 * Callers:
 *     RtlCopyContext @ 0x180072210 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800F1F58 (RtlpCopyExtendedContext.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x1801087E0 (RtlpLoadUmsDebugRegisterState.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x180108840 (RtlpSaveUmsDebugRegisterState.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x1800725EC (RtlpCopyLegacyContextX86.c)
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
