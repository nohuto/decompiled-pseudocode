/*
 * XREFs of ?GetAttributes@CBaseStreamGroupProxy@@UEAAPEBVCStreamGroupAttributes@@XZ @ 0x18000A920
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

const struct CStreamGroupAttributes *__fastcall CBaseStreamGroupProxy::GetAttributes(CBaseStreamGroupProxy *this)
{
  return (const struct CStreamGroupAttributes *)*((_QWORD *)this + 7);
}
