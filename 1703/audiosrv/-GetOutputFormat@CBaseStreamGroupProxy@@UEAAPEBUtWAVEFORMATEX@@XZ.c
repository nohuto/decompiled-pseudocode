/*
 * XREFs of ?GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x18000A990
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 * Callees:
 *     <none>
 */

const struct tWAVEFORMATEX *__fastcall CBaseStreamGroupProxy::GetOutputFormat(CBaseStreamGroupProxy *this)
{
  return (const struct tWAVEFORMATEX *)*((_QWORD *)this + 4);
}
