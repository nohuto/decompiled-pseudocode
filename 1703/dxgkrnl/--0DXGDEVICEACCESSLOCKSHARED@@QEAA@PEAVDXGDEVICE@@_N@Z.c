/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0014F08
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 * Callees:
 *     <none>
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  DXGDEVICEACCESSLOCKSHARED *result; // rax

  *(_QWORD *)this = a2;
  result = this;
  *((_BYTE *)this + 8) = 0;
  return result;
}
