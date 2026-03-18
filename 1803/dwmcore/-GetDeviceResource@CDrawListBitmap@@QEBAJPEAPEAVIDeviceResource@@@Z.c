/*
 * XREFs of ?GetDeviceResource@CDrawListBitmap@@QEBAJPEAPEAVIDeviceResource@@@Z @ 0x1800062B4
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListBitmap::GetDeviceResource(CDrawListBitmap *this, struct IDeviceResource **a2)
{
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDeviceResource **))this + 1))(
           *((_QWORD *)this + 1),
           &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
           a2);
}
