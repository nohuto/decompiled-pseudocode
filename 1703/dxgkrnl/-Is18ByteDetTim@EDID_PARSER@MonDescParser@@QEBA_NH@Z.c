/*
 * XREFs of ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0004718
 * Callers:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C00047C4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C000EC80 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::Is18ByteDetTim(MonDescParser::EDID_PARSER *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)this;
  v3 = 9 * (a2 + 3LL);
  result = 0LL;
  if ( *(_WORD *)(*(_QWORD *)this + 2 * v3)
    || *(_BYTE *)(v2 + 2 * v3 + 2)
    || *(_BYTE *)(v2 + 2 * v3 + 4) && *(_BYTE *)(v2 + 2 * v3 + 3) != 0xFD )
  {
    return 1LL;
  }
  return result;
}
