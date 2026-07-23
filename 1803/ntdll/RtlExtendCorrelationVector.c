/*
 * XREFs of RtlExtendCorrelationVector @ 0x1800F16E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F1A7C @ 0x1800F1A7C (sub_1800F1A7C.c)
 *     sub_1800F1A98 @ 0x1800F1A98 (sub_1800F1A98.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  DWORD v7; // r10d
  __int64 v8; // r11

  v1 = sub_1800F1A98();
  if ( v1 < 0 )
    return -2147483643;
  v4 = sub_1800F1A7C(v3, v2, v1);
  if ( (int)v6 >= v4 - 3 )
    return -2147483643;
  *(_BYTE *)(v6 + v5 + 1) = 46;
  *(_BYTE *)((int)v6 + 1 + v8 + 1) = 48;
  *(_BYTE *)((int)v6 + 2 + v8 + 1) = v7;
  return v7;
}
