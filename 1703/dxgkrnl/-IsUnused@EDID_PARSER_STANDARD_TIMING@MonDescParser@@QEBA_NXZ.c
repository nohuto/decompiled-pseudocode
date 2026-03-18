/*
 * XREFs of ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C000F218
 * Callers:
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C000EA74 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C000EC80 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(__int16 **this)
{
  __int16 v1; // cx
  __int64 result; // rax

  v1 = **this;
  if ( v1 == 257 )
    return 1LL;
  result = 0LL;
  if ( !v1 )
    return 1LL;
  return result;
}
