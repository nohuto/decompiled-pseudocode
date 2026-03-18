/*
 * XREFs of PspReadIFEOMitigationAuditOptions @ 0x1404EFE64
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspReadOptionsMapFromIFEO @ 0x1404EFED4 (PspReadOptionsMapFromIFEO.c)
 *     PspValidateMitigationAuditOptions @ 0x140574090 (PspValidateMitigationAuditOptions.c)
 */

__int64 __fastcall PspReadIFEOMitigationAuditOptions(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm6
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF

  result = PspReadOptionsMapFromIFEO(a1, L"MitigationAuditOptions", &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    result = PspValidateMitigationAuditOptions(&v5);
    if ( (int)result >= 0 )
      *a2 = v4;
  }
  return result;
}
