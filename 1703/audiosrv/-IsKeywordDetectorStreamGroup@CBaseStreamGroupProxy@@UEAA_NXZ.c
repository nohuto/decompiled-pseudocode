/*
 * XREFs of ?IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000A940
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup(CBaseStreamGroupProxy *this)
{
  return *((_BYTE *)this + 48);
}
