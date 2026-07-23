/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800F69A0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180090EF0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800015FC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x180001690 (RtlGuardIsExportSuppressedAddress.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlFailFast2 @ 0x1800A4E90 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800F6978 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F6A00 (RtlpUnsuppressForwardReferencingCallTarget.c)
 */

NTSTATUS __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  NTSTATUS result; // eax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
  if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
