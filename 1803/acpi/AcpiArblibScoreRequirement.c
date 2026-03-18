/*
 * XREFs of AcpiArblibScoreRequirement @ 0x1C0075430
 * Callers:
 *     <none>
 * Callees:
 *     _ACPIInternalError @ 0x1C0017A64 (_ACPIInternalError.c)
 *     AcpiArblibUnpackRequirement @ 0x1C00754C0 (AcpiArblibUnpackRequirement.c)
 */

signed __int64 __fastcall AcpiArblibScoreRequirement(struct _IO_RESOURCE_DESCRIPTOR *a1)
{
  unsigned __int64 v1; // r8
  signed __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-18h]
  unsigned __int64 v4; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( (int)AcpiArblibUnpackRequirement(a1, &v5, &v6, &v4) < 0 )
    ACPIInternalError(0x50115uLL);
  v1 = v4;
  if ( !v4 )
    v1 = 1LL;
  result = (v6 - (~(v1 - 1) & (v1 + v5 - 1)) - v3 + 1) / v1;
  if ( result < 0 )
    return 0xFFFFFFFFLL;
  if ( result > 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
