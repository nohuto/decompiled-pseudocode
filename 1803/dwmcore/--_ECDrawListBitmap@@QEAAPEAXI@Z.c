/*
 * XREFs of ??_ECDrawListBitmap@@QEAAPEAXI@Z @ 0x1800772E4
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180071BF0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18013E3C0 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180076FC8 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall CDrawListBitmap::`vector deleting destructor'(CDrawListBitmap *this)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  CDrawListBitmap *v3; // rsi

  v1 = (__int64 *)((char *)this - 8);
  v2 = *((_QWORD *)this - 1);
  v3 = (CDrawListBitmap *)((char *)this + 24 * v2);
  if ( v2 )
  {
    do
    {
      v3 = (CDrawListBitmap *)((char *)v3 - 24);
      CDrawListBitmap::~CDrawListBitmap(v3);
      --v2;
    }
    while ( v2 );
    v2 = *v1;
  }
  operator delete(v1, 24 * v2 + 8);
  return v1;
}
