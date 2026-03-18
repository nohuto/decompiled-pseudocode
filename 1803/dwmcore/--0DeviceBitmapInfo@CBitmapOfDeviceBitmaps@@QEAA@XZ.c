/*
 * XREFs of ??0DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAA@XZ @ 0x1800CD900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CBitmapOfDeviceBitmaps::DeviceBitmapInfo *__fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DeviceBitmapInfo(
        CBitmapOfDeviceBitmaps::DeviceBitmapInfo *this)
{
  *((_DWORD *)this + 1) = 0;
  return this;
}
