/*
 * XREFs of ??$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ @ 0x1800AA510
 * Callers:
 *     ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800A4DAC (-TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXP.c)
 * Callees:
 *     vswprintf_s @ 0x1800E1EA8 (vswprintf_s.c)
 */

int swprintf_s<128>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x80uLL, a2, va);
}
