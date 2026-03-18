/*
 * XREFs of RtlpCopyLegacyContext @ 0x140131FA8
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140131EE0 (RtlpCopyExtendedContext.c)
 *     KeCopyContextFromUmsContext @ 0x140743A40 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x140743E60 (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1407440E0 (KeUpdatePrimaryThreadContext.c)
 *     RtlCopyContext @ 0x14078AE74 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x1400C4280 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x140131FD8 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x14028F2AC (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14028F40C (RtlpCopyLegacyContextArm64.c)
 */

void __fastcall RtlpCopyLegacyContext(char a1, __int64 a2, int a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64();
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm();
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64();
  }
}
