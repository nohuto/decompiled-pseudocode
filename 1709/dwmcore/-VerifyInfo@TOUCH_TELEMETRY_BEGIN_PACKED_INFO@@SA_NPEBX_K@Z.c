/*
 * XREFs of ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180129038
 * Callers:
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180128C40 (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 * Callees:
 *     <none>
 */

bool __fastcall TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(_WORD *a1, unsigned __int64 a2)
{
  bool result; // al
  unsigned __int64 v3; // r9
  unsigned __int16 v4; // dx

  result = 0;
  if ( a2 >= 0x20 )
  {
    v3 = (unsigned __int16)a1[4];
    if ( v3 <= a2 && (_WORD *)((char *)a1 + a2) >= a1 )
    {
      v4 = a1[12];
      if ( !v4
        || (v4 & 1) == 0
        && v4 + 2 * (unsigned __int64)((unsigned int)(unsigned __int16)a1[13] + 1) <= v3
        && !*(_WORD *)((char *)&a1[(unsigned __int16)a1[13]] + v4) )
      {
        return 1;
      }
    }
  }
  return result;
}
