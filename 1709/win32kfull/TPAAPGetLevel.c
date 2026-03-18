/*
 * XREFs of TPAAPGetLevel @ 0x1C01B43A8
 * Callers:
 *     ?PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AEEF4 (-PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     TPAAPShouldAllowMoveNow @ 0x1C01B4420 (TPAAPShouldAllowMoveNow.c)
 *     TPAAPShouldAllowNow @ 0x1C01B4574 (TPAAPShouldAllowNow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TPAAPGetLevel(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 1920) & 0x20000000) != 0 )
    return 0LL;
  else
    return (unsigned int)gTouchPadParameters[2];
}
