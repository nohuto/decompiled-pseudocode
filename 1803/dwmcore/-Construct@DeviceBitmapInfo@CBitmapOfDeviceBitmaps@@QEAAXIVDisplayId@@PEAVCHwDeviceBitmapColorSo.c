/*
 * XREFs of ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CDA54
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Construct(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  v4 = *(_QWORD *)(a4 + 168);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 240);
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 88) = 0;
  return (**(__int64 (__fastcall ***)(__int64))a4)(a4);
}
