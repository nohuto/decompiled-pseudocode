/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x14048C128
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspReadOptionsMapFromIFEO @ 0x14048C20C (PspReadOptionsMapFromIFEO.c)
 *     PspValidateMitigationOptions @ 0x1405805E8 (PspValidateMitigationOptions.c)
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
