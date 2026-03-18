/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x1404EFDF0
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspReadOptionsMapFromIFEO @ 0x1404EFED4 (PspReadOptionsMapFromIFEO.c)
 *     PspValidateMitigationOptions @ 0x140573C2C (PspValidateMitigationOptions.c)
 */

__int64 __fastcall PspReadIFEOMitigationOptions(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm6
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF

  result = PspReadOptionsMapFromIFEO(a1, L"MitigationOptions", &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    LOBYTE(v4) = 1;
    result = PspValidateMitigationOptions(&v6, v4);
    if ( (int)result >= 0 )
      *a2 = v5;
  }
  return result;
}
