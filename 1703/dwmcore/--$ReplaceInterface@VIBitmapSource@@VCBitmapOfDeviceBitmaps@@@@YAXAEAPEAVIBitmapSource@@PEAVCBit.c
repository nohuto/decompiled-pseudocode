/*
 * XREFs of ??$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18016383C
 * Callers:
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18012D59C (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<IBitmapSource,CBitmapOfDeviceBitmaps>(
        unsigned __int64 *a1,
        CBitmapOfDeviceBitmaps *a2)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  result = -(__int64)a2;
  *a1 = ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL);
  if ( a2 )
    return CBitmapOfDeviceBitmaps::AddRef(a2);
  return result;
}
