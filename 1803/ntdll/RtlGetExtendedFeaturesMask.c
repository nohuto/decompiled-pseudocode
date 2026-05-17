/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800EE250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EE9AC @ 0x1800EE9AC (sub_1800EE9AC.c)
 */

unsigned __int64 RtlGetExtendedFeaturesMask()
{
  return *(_QWORD *)sub_1800EE9AC() & 0xFFFFFFFFFFFFFFFCuLL;
}
