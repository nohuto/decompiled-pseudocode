/*
 * XREFs of RtlExtendCorrelationVector @ 0x1800F16E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F1A7C @ 0x1800F1A7C (sub_1800F1A7C.c)
 *     sub_1800F1A98 @ 0x1800F1A98 (sub_1800F1A98.c)
 */

__int64 RtlExtendCorrelationVector()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r10d
  __int64 v7; // r11

  v0 = sub_1800F1A98();
  if ( v0 < 0 )
    return (unsigned int)-2147483643;
  v3 = sub_1800F1A7C(v2, v1, v0);
  if ( (int)v5 >= v3 - 3 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    *(_BYTE *)(v5 + v4 + 1) = 46;
    *(_BYTE *)((int)v5 + 1 + v7 + 1) = 48;
    *(_BYTE *)((int)v5 + 2 + v7 + 1) = v6;
  }
  return v6;
}
