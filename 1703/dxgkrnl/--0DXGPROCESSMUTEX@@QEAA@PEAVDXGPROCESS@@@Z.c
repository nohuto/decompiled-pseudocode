/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0013664
 * Callers:
 *     DxgkGetPresentHistory @ 0x1C0092280 (DxgkGetPresentHistory.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(
        DXGPROCESSMUTEX *this,
        struct DXGFASTMUTEX *const *a2,
        __int64 a3,
        __int64 a4)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, a2[10], a3, a4);
  return this;
}
