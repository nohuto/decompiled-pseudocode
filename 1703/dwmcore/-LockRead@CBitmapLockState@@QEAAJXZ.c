/*
 * XREFs of ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800C5C30
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800568D8 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801A990C (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLockState::LockRead(CBitmapLockState *this)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax

  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD *)this & 0x7FFFFFFF;
    if ( v2 + 1 < 0 )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + 1, v2) )
      return v1;
  }
  v1 = -2003292403;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292403, 0x3Bu);
  return v1;
}
