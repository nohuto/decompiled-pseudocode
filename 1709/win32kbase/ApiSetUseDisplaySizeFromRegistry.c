/*
 * XREFs of ApiSetUseDisplaySizeFromRegistry @ 0x1C013D460
 * Callers:
 *     RIMQuirkApplyTransforms @ 0x1C0115AB4 (RIMQuirkApplyTransforms.c)
 *     RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0115BF4 (RIMQuirkSetPointerDeviceOutputConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetUseDisplaySizeFromRegistry(__int64 a1)
{
  if ( (int)IsUseDisplaySizeFromRegistrySupported() < 0 )
    return 0LL;
  else
    return UseDisplaySizeFromRegistry(a1);
}
