/*
 * XREFs of ??0?$DynArrayIA@UDeviceBitmapInfo@CBitmapOfDeviceBitmaps@@$01$00@@QEAA@XZ @ 0x1800B26D4
 * Callers:
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x1800B2100 (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800B3368 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>::DynArrayIA<CBitmapOfDeviceBitmaps::DeviceBitmapInfo,2,1>(
        __int64 a1)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, a1 + 32, 2LL);
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(a1 + 32),
    0x60uLL,
    2uLL,
    (void *(*)(void *))CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DeviceBitmapInfo);
  return a1;
}
