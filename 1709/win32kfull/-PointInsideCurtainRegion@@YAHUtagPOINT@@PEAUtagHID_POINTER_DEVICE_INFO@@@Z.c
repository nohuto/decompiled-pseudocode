/*
 * XREFs of ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AEEBC
 * Callers:
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AF59C (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PointInsideCurtainRegion(struct tagPOINT a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  return (*((_DWORD *)a2 + 69) & 2) != 0
      && (a1.y < *((_DWORD *)a2 + 59) || a1.x < *((_DWORD *)a2 + 60) || a1.x > *((_DWORD *)a2 + 61));
}
