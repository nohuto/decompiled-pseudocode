/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002CB3C
 * Callers:
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00984A8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     GreMakeBitmapNonStock @ 0x1C0078230 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int16 v3; // ax
  __int64 v4; // rcx

  HmgDecrementShareReferenceCount(this);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      v3 = *((_WORD *)this + 51);
      if ( (v3 & 0x400) != 0 )
      {
        v4 = *(_QWORD *)this;
        *((_WORD *)this + 51) = v3 & 0xFBFF;
        GreMakeBitmapNonStock(v4);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
