/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x180001690
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180001594 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F69A0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800016B8 (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)RtlpGetTargetRvaFlag(a1) && (v2 & 3) == 2;
}
