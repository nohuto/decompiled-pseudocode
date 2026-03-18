/*
 * XREFs of ??$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBitmapOfDeviceBitmaps@@@Z @ 0x180164838
 * Callers:
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x180164B00 (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<IBitmapSource,CBitmapOfDeviceBitmaps>(unsigned __int64 *a1, CMILCOMBase *a2)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  result = -(__int64)a2;
  *a1 = ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL);
  if ( a2 )
    return CMILCOMBase::InternalAddRef(a2);
  return result;
}
