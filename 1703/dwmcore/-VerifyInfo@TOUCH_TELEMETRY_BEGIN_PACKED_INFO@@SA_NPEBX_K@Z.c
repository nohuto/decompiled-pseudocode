/*
 * XREFs of ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180002938
 * Callers:
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180004974 (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 * Callees:
 *     <none>
 */

bool __fastcall TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int16 v3; // dx
  bool result; // al

  result = 0;
  if ( a2 >= 0x20 )
  {
    v2 = (unsigned __int16)a1[4];
    if ( v2 <= a2 && (_WORD *)((char *)a1 + a2) >= a1 )
    {
      v3 = a1[12];
      if ( !v3
        || (v3 & 1) == 0
        && v3 + 2 * ((unsigned __int64)(unsigned __int16)a1[13] + 1) <= v2
        && !*(_WORD *)((char *)&a1[(unsigned __int16)a1[13]] + v3) )
      {
        return 1;
      }
    }
  }
  return result;
}
