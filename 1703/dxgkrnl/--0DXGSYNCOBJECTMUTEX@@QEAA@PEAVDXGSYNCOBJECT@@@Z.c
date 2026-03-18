/*
 * XREFs of ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C00136AC
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGSYNCOBJECTMUTEX *__fastcall DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
        DXGSYNCOBJECTMUTEX *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGSYNCOBJECT *)((char *)a2 + 32), a3, a4);
  return this;
}
