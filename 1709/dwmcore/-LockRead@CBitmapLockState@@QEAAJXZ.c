/*
 * XREFs of ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800BDE48
 * Callers:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18008CC68 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801C4AAC (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F0D, 0x3Bu);
  return v1;
}
