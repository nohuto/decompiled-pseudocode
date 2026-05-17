/*
 * XREFs of sub_1800043F8 @ 0x1800043F8
 * Callers:
 *     RtlSetExtendedFeaturesMask @ 0x1800043B0 (RtlSetExtendedFeaturesMask.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800043E0 (RtlGetExtendedFeaturesMask.c)
 *     RtlLocateExtendedFeature2 @ 0x1800F15D0 (RtlLocateExtendedFeature2.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800043F8(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || a1[1] + *a1 < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
