/*
 * XREFs of ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x1801C5360
 * Callers:
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801C4FF4 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x1801C53EC (-WriteUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

void __fastcall CBitmapLockUnaligned::UnlockUnaligned(CBitmapLockUnaligned *this)
{
  const unsigned __int8 *v1; // rdi
  unsigned __int8 *v3; // rsi
  unsigned int i; // ebp

  v1 = (const unsigned __int8 *)*((_QWORD *)this + 14);
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 128) & 2) != 0 )
    {
      v3 = (unsigned __int8 *)*((_QWORD *)this + 18);
      for ( i = 0; i < *((_DWORD *)this + 23); v1 += *((unsigned int *)this + 24) )
      {
        WriteUnalignedScanline(v3, v1, *((_DWORD *)this + 40), *((_DWORD *)this + 41));
        ++i;
        v3 += *((unsigned int *)this + 38);
      }
    }
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 14));
  *((_QWORD *)this + 14) = 0LL;
}
