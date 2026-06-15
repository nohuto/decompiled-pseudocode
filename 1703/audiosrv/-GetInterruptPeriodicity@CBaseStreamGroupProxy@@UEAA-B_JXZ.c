/*
 * XREFs of ?GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA?B_JXZ @ 0x18000A9A0
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetInterruptPeriodicity(CBaseStreamGroupProxy *this)
{
  return *((_QWORD *)this + 1);
}
