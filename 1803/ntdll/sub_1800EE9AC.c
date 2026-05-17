/*
 * XREFs of sub_1800EE9AC @ 0x1800EE9AC
 * Callers:
 *     RtlGetExtendedFeaturesMask @ 0x1800EE250 (RtlGetExtendedFeaturesMask.c)
 *     RtlLocateExtendedFeature2 @ 0x1800EE290 (RtlLocateExtendedFeature2.c)
 *     RtlSetExtendedFeaturesMask @ 0x1800EE380 (RtlSetExtendedFeaturesMask.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800EE9AC(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || a1[1] + *a1 < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
