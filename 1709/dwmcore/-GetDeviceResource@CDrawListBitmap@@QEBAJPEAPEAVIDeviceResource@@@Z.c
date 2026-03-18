/*
 * XREFs of ?GetDeviceResource@CDrawListBitmap@@QEBAJPEAPEAVIDeviceResource@@@Z @ 0x18011C650
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetDeviceResource(CDrawListBitmap *this, struct IDeviceResource **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct IDeviceResource **); // rcx
  unsigned int v3; // ebx
  signed int v4; // eax

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDeviceResource **))*((_QWORD *)this + 1);
  if ( v2 )
  {
    v4 = (**v2)(v2, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x8Eu);
  }
  else
  {
    v3 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980085, 0x8Bu);
  }
  return v3;
}
