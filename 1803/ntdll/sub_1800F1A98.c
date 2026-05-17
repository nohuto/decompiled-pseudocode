/*
 * XREFs of sub_1800F1A98 @ 0x1800F1A98
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F16E0 (RtlExtendCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F18D0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     sub_1800F1A7C @ 0x1800F1A7C (sub_1800F1A7C.c)
 */

__int64 __fastcall sub_1800F1A98(_BYTE *a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int v3; // r8d
  int v4; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  v1 = sub_1800F1A7C(a1);
  v4 = v1;
  if ( v1 > 0 )
  {
    for ( i = 0LL; i < v1; ++i )
    {
      if ( !*(_BYTE *)(v2 + i + 1) )
        break;
      ++v3;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v4 > v3 )
    return (unsigned int)v3;
  return result;
}
