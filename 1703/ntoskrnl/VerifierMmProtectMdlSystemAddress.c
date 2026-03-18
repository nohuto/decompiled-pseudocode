/*
 * XREFs of VerifierMmProtectMdlSystemAddress @ 0x140782640
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x14076673C (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmProtectMdlSystemAddress(__int64 a1, unsigned int a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPageProtection(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmProtectMdlSystemAddress)(a1, a2);
}
